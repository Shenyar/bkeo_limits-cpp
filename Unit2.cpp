//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h" 
#include "Unit4.h"
#include "Unit9.h"
#include "Unit10.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DataDriverEh"
#pragma link "DBGridEh"
#pragma link "DBGridEhGrouping"
#pragma link "GridsEh"
#pragma link "MemTableDataEh"
#pragma link "MemTableEh"
#pragma link "PrnDbgeh"
#pragma resource "*.dfm"
Tinstr *instr;
//-----------------------------------
bool HaveDigit(AnsiString test) {
    for(int i=1;i<test.Length();i++) {
        if((test[i]>='0') && (test[i]<='9')) return true;
    }
    return false;
}
//---------------------------------------------------------------------------
__fastcall Tinstr::Tinstr(TComponent* Owner)
    : TForm(Owner)
{
    this->Resizing(wsMaximized);
    CanBeforePost=1;
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::FormClose(TObject *Sender, TCloseAction &Action)
{
    this->Hide();
    menu->Show();
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::Button1Click(TObject *Sender)
{
//��������� ������
    if(!Edit1->Text.IsEmpty()) {
    DBGridEh1->FieldColumns["shifr"]->STFilter->ExpressionStr = "~"+Edit1->Text+"%";
    }
    if(!Edit2->Text.IsEmpty()) {
    DBGridEh1->FieldColumns["chex"]->STFilter->ExpressionStr = "=\'"+Edit2->Text+"\'";
    }
    DBGridEh1->ApplyFilter();
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::Button2Click(TObject *Sender)
{
//������ ������
    Edit1->Text = "";
    Edit2->Text = "";
    DBGridEh1->ClearFilter();
    DBGridEh1->ApplyFilter();
    DBGridEh1->DefaultApplySorting();
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::Edit1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
//��������� ������ �� ������ � �����1
    if(Key == 13) Button1Click(Sender);
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::FormResize(TObject *Sender)
{
//��������������� �����
  //if(user == 2) {
    /*if(DBGridEh1->Width > 1380) {
     double i = DBGridEh1->Width - 1380;
     DBGridEh1->Columns->Items[1]->Width = 100 + i/10;
     DBGridEh1->Columns->Items[3]->Width = 90 + i/10;
     DBGridEh1->Columns->Items[5]->Width = 100 + i/10;
     DBGridEh1->Columns->Items[6]->Width = 70 + i/10;
     DBGridEh1->Columns->Items[7]->Width = 90 + i/10;
     DBGridEh1->Columns->Items[8]->Width = 70 + i/10;
     DBGridEh1->Columns->Items[9]->Width = 70 + i/10;
     DBGridEh1->Columns->Items[10]->Width = 100 + i/10;
     DBGridEh1->Columns->Items[11]->Width = 80 + i/10;
     DBGridEh1->Columns->Items[14]->Width = 100 + i/10;
    }*/
  /*}
  if(user == 1) {
    if(DBGridEh1->Width > 1080) {
     int i = DBGridEh1->Width - 1080;
     DBGridEh1->Columns->Items[1]->Width = 100 + i/10;
     DBGridEh1->Columns->Items[3]->Width = 90 + i/10;
     DBGridEh1->Columns->Items[4]->Width = 30 + i/10;
     DBGridEh1->Columns->Items[5]->Width = 100 + i/10;
     DBGridEh1->Columns->Items[6]->Width = 70 + i/10;
     DBGridEh1->Columns->Items[7]->Width = 90 + i/10;
     DBGridEh1->Columns->Items[8]->Width = 70 + i/10;
     DBGridEh1->Columns->Items[9]->Width = 70 + i/10;
     DBGridEh1->Columns->Items[10]->Width = 100 + i/10;
     DBGridEh1->Columns->Items[11]->Width = 80 + i/10;
    }
  }  */
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::Edit3KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
//������ �� ����
    if(Key == 13) Button1->Click();
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::MemTableEh1BeforePost(TDataSet *DataSet)
{
    /*//���������� ������ ��� ����
    if(user != 1) return;*/
    if(MemTableEh1flag->AsString == "") MemTableEh1flag->AsInteger = 0;
    if((MemTableEh1vneseno->AsString == "") && (user == 2))//������ ��� ����
        MemTableEh1vneseno->Value = Date();
//���� ������ �������������, �� ������ ������ ����������� (��� ��� ����������� �������)
    int saveOld = 0;
    //�������� ��� ����
    if(( normDoOld != "" ) && ( normDoOld != MemTableEh1norm_do->AsString ))
        saveOld = 1;
    if(( normAftOld != "" ) && ( normAftOld != MemTableEh1norm_aft->AsString ))
        saveOld = 1;
    //�������� ��� ����
    if( (user == 1) && ( (MemTableEh1norm_do->AsString!="") || (MemTableEh1norm_aft->AsString!="") ))
        saveOld = 1;
    if(saveOld == 1)
    {
      if(CanBeforePost == 1)
      {

        CanBeforePost = 0;
        AnsiString temp[19];
        temp[0] = MemTableEh1shifr->AsString;
        temp[1] = MemTableEh1iname->AsString;
        temp[2] = MemTableEh1material->AsString;
        temp[3] = MemTableEh1chex->AsString;
        temp[4] = MemTableEh1dse->AsString;
        temp[5] = MemTableEh1pvd->AsString;
        temp[6] = MemTableEh1obrmat->AsString;
        temp[7] = MemTableEh1actdate->AsString;
        temp[8] = MemTableEh1vnedrdate->AsString;
        temp[9] = MemTableEh1vnedrshifr->AsString;
        temp[10] = MemTableEh1rezult->AsString;
        temp[11] = MemTableEh1norm_do->AsString;
        temp[12] = MemTableEh1norm_aft->AsString;
        temp[13] = MemTableEh1vneseno->AsString;
        temp[14] = MemTableEh1vnedr_dse->AsString;
        temp[15] = MemTableEh1dse_normdo->AsString;
        temp[16] = MemTableEh1dse_normaft->AsString; 
        temp[17] = MemTableEh1prim->AsString;
        temp[18] = MemTableEh1date_doc->AsString;
        //��������� ������ ������ � �����
        DataSet->Cancel();
        MemTableEh1->Edit();
        MemTableEh1flag->AsInteger = 4;
        MemTableEh1->Post();
        //������� ������ � ��������������
        MemTableEh1->Insert();
        MemTableEh1shifr->AsString = temp[0];
        MemTableEh1iname->AsString = temp[1];
        MemTableEh1material->AsString = temp[2];
        MemTableEh1chex->AsString = temp[3];
        MemTableEh1dse->AsString = temp[4];
        MemTableEh1pvd->AsString = temp[5];
        MemTableEh1obrmat->AsString = temp[6];
        MemTableEh1actdate->AsString = temp[7];
        MemTableEh1vnedrdate->AsString = temp[8];
        MemTableEh1vnedrshifr->AsString = temp[9];
        MemTableEh1rezult->AsString = temp[10];
        MemTableEh1norm_do->AsString = temp[11];
        MemTableEh1norm_aft->AsString = temp[12]; 
        MemTableEh1vnedr_dse->AsString = temp[14];
        MemTableEh1dse_normdo->AsString = temp[15];
        MemTableEh1dse_normaft->AsString = temp[16]; 
        MemTableEh1prim->AsString = temp[17];
        MemTableEh1date_doc->AsString = temp[18];
        if(user == 1) {
            MemTableEh1flag->AsInteger = 1; 
            MemTableEh1vneseno->AsString = temp[13];
        } else
        if(user == 2) {
            MemTableEh1flag->AsInteger = 2;
            MemTableEh1vneseno->AsDateTime = Date();
        }
        CanBeforePost=1;
      }
    }      
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::Button4Click(TObject *Sender)
{
/*//�������� ��������� ����������� �����
    if(Button4->Caption == "�������� ��������� �������") {
     AnsiString t = MemTableEh1shifr->AsString;
     MemTableEh1->Close();
     ADOQuery1->SQL->Clear();
     ADOQuery1->SQL->Add("select * from instrum where (flag=3);");
     MemTableEh1->Open();
     this->Button2Click(Sender);//������ �������
     Button4->Caption = "��������� � ������ ������";
    }
    else {
     MemTableEh1->Close();
     ADOQuery1->SQL->Clear();
     ADOQuery1->SQL->Add("select * from instrum where (flag<>3);");
     MemTableEh1->Open();
     MemTableEh1->Last();
     MemTableEh1->First();
     DBGridEh1->DefaultApplySorting();
     Button4->Caption = "�������� ��������� �������";
    }      */
    if(Button4->Caption == "�������� � ��������� ��������") {
        MemTableEh1->Close();
        ADOQuery1->SQL->Clear();
        ADOQuery1->SQL->Add("select * from instrum where (flag<>3);");
        MemTableEh1->Open();
        Button4->Caption = "������ �������� ������";
    }
    else {          
        MemTableEh1->Close();
        ADOQuery1->SQL->Clear();
        ADOQuery1->SQL->Add("select * from instrum where (flag<>3) and (flag<>4);");
        MemTableEh1->Open();
        Button4->Caption = "�������� � ��������� ��������";
    }
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::Button5Click(TObject *Sender)
{
//���� ��������� ������ ����-�������
    DBGridEh1->SetFocus();
    DBGridEh1->ReadOnly = false;
    MemTableEh1->Insert();
    MemTableEh1flag->AsInteger = 0;
    DBGridEh1->SelectedIndex = 1;
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::MemTableEh1AfterPost(TDataSet *DataSet)
{
//����� ����� ������ ������������� ����� ������ �� ������� ����-�������
    /*if(user == 1)
        if(DBGridEh1->ReadOnly == false)
            DBGridEh1->ReadOnly = true;   */
    /*if(user == 2)
        if(DBGridEh1->Columns->Items[12]->ReadOnly == false) {
            DBGridEh1->Columns->Items[12]->ReadOnly = true;
            DBGridEh1->Columns->Items[13]->ReadOnly = true;
        }   */
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::DBNavigator1Click(TObject *Sender,
      TNavigateBtn Button)
{
//�������� ������
    if(Button == nbRefresh) {
        MemTableEh1->Close();
        MemTableEh1->Open();
        MemTableEh1->Last();
        MemTableEh1->First();
        DBGridEh1->ApplyFilter();
        DBGridEh1->DefaultApplySorting();
    }
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::DBGridEh1KeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
/*//������� ������ �� �������
    if((Key==' ') && ((DBGridEh1->Col==14) ||
    (DBGridEh1->Col==15) || (DBGridEh1->Col==16))) {
        AnsiString t;
        t = DBGridEh1->InplaceEditor->Text;
        t += "\n";
        DBGridEh1->InplaceEditor->Text = t;
        DBGridEh1->InplaceEditor->SelStart = t.Length();
    }   */
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::MemTableEh1CalcFields(TDataSet *DataSet)
{
//������ �����
    MemTableEh1no->Value = DataSet->RecNo;
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::DBGridEh1GetCellParams(TObject *Sender,
      TColumnEh *Column, TFont *AFont, TColor &Background,
      TGridDrawState State)
{
    int DataCol = Column->Index;
//������� ���������� ����� ����������
    if((MemTableEh1flag->AsInteger == 2) && (user == 2)) {
        Background = 0x00AAFFAA;
        return;
    }
//������ ���������� ����� ����
    if((MemTableEh1flag->AsInteger == 1) && (user == 2)) {
        Background = 0x00BBFFFF;
        return;
    }
//����� ���������� ����� (������)
    if((MemTableEh1flag->AsInteger == 4)) {
        Background = cl3DLight;
        return;
    }
//������������ �� ����������
    /*if(( (!MemTableEh1vnedrshifr->AsString.IsEmpty()) && (!HaveDigit(MemTableEh1vnedrshifr->AsString)) ) ||
        ((!MemTableEh1vnedrdate->AsString.IsEmpty()) && (!HaveDigit(MemTableEh1vnedrdate->AsString)) )) {
        Background = clSilver;
    } */
//��������� ������ ������� 4,5 � 10
    if((DataCol == 4) || (DataCol == 5) || (DataCol == 10)) {
        Background = 0x0077EEEE;
    }
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::DBGridEh1ColExit(TObject *Sender)
{
//���������� ������ ������ ��� ���������� ���
    if((DBGridEh1->EditorMode) && (DBGridEh1->Col==16)) {
        MemTableEh1->Post();
    }
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::DBGridEh1MouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
//�������� �������������� ������ ��� ����� �� ������ ������ ����� ���������
//��� ���� � ��������� ������ �����
    //if(user != 2) return;
    if(DBGridEh1->EditorMode == true)
    //if((DBGridEh1->Row == r) && (DBGridEh1->Col == c))
        if((DBGridEh1->SelectedIndex == 15) || (DBGridEh1->SelectedIndex == 16)
            || (DBGridEh1->SelectedIndex == 17)) {
          DBGridEh1->EditorMode = true;
          MemTableEh1->Edit();
        }
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::MemTableEh1AfterEdit(TDataSet *DataSet)
{
//������������� �������� ������ ������
    if(MemTableEh1flag->Value == 4) {
        DataSet->Cancel();
        ShowMessage("P������������ �������� ������ ������!");
    }
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::Button3Click(TObject *Sender)
{
//������
    if(PrintDialog1->Execute()) {
        Printer()->Orientation = poLandscape;
        this->PrintDBGridEh1->Print();
    }
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::DBGridEh1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
//���� ������ ��� ���������� � ��� ������������� ���
    if((Key == VK_RETURN) && (Shift.Contains(ssCtrl)))
        if(DBGridEh1->SelectedIndex == 15)
            DBGridEh1->InplaceEditor->Height += 13;
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::DBGridEh1DrawColumnCell(TObject *Sender,
      const TRect &Rect, int DataCol, TColumnEh *Column,
      TGridDrawState State)
{
//������ ������� "���� �������" - ����� ����� ������� �����
    if(DataCol == 14) {
        int color = DBGridEh1->Canvas->Pen->Color;
        DBGridEh1->Canvas->Pen->Color = clBlack;
        //DBGridEh1->Canvas->Pen->Width = 2;
        DBGridEh1->Canvas->MoveTo(Rect.Right,Rect.Top);
        DBGridEh1->Canvas->LineTo(Rect.Right,Rect.Bottom);
        DBGridEh1->Canvas->Pen->Color = color;
    }
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::Button6Click(TObject *Sender)
{
//���� ����������� ����� ������ ������ �� ������
    DBGridEh1->SetFocus();
    if(user == 2) {
        DBGridEh1->SelectedIndex = 12;
        /*DBGridEh1->Columns->Items[12]->ReadOnly = false;
        DBGridEh1->Columns->Items[13]->ReadOnly = false; */
    }
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::FormCreate(TObject *Sender)
{
//������������������ ����� ���� ������� ������ DPI ��������
    if(Screen->PixelsPerInch != 96) {
        int D = Screen->PixelsPerInch;
        double M = 96.0/double(D);
        this->DBGridEh1->ScaleBy(96,D);
        this->DBGridEh1->Top *= M;
        this->DBGridEh1->Left *= M;
        this->DBNavigator1->ScaleBy(96,D);
        this->DBNavigator1->Top *= M;   
        this->DBNavigator1->Left *= M;
        this->Button1->ScaleBy(96,D);
        this->Button1->Top *= M;      
        this->Button1->Left *= M;
        this->Button2->ScaleBy(96,D);
        this->Button2->Top *= M;
        this->Button2->Left *= M;
        this->Button3->ScaleBy(96,D);
        this->Button3->Top *= M;       
        this->Button3->Left *= M;
        this->Button4->ScaleBy(96,D);
        this->Button4->Top *= M;       
        this->Button4->Left *= M;
        this->Button5->ScaleBy(96,D);
        this->Button5->Top *= M;       
        this->Button5->Left *= M;
        this->Button6->ScaleBy(96,D);
        this->Button6->Top *= M;      
        this->Button6->Left *= M;
        this->Edit1->ScaleBy(96,D);
        this->Edit1->Top *= M;       
        this->Edit1->Left *= M;
        this->Edit2->ScaleBy(96,D);
        this->Edit2->Top *= M;       
        this->Edit2->Left *= M;
        this->Label1->Top *= M;
        this->Label1->Left *= M;
        this->Label2->Top *= M;
        this->Label2->Left *= M;
        this->Label1->Top -= (Label1->Height - (Label1->Height*M));
        this->Label1->Left -= (Label1->Width - (Label1->Width*M));
        this->Label2->Top -= (Label2->Height - (Label2->Height*M));
        this->Label2->Left -= (Label2->Width - (Label2->Width*M));
    }
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::MemTableEh1BeforeEdit(TDataSet *DataSet)
{
    //save values
    normDoOld = MemTableEh1norm_do->AsString;
    normAftOld = MemTableEh1norm_aft->AsString;
}
//---------------------------------------------------------------------------
void __fastcall Tinstr::DBGridEh1DblClick(TObject *Sender)
{
//history of 'shifr' (how limits was changed)
    if(DBGridEh1->SelectedIndex == 18) {
        instr_history->MemTableEh1->Close();
        instr_history->ADOQuery1->SQL->Strings[1] = " AND (shifr = \'"+MemTableEh1shifr->AsString+"\')  AND (chex = \'"+MemTableEh1chex->AsString+"\') ";
        instr_history->MemTableEh1->Open();
        instr_history->ShowModal();
    }
//open list of 'DSE' where was used selected 'shifr'
    if(user == 2) {
    if((DBGridEh1->SelectedIndex >= 15) && (DBGridEh1->SelectedIndex <= 17)) {
        instrum_dse->Label1->Caption = "���� �����������: " + MemTableEh1shifr->AsString;
        instrum_dse->Label2->Caption = "���� �����. �����������: " + MemTableEh1vnedrshifr->AsString;
        instrum_dse->ADOQuery1->Close();
        instrum_dse->ADOQuery1->SQL->Strings[2] = MemTableEh1id->AsString;
        instrum_dse->ADOQuery1->Open();
        instrum_dse->ShowModal();
    }
    }
}
//---------------------------------------------------------------------------

