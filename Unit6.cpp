//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit1.h"
#include "Unit4.h"
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
Tremont *remont;
//---------------------------------------------------------------------------
__fastcall Tremont::Tremont(TComponent* Owner)
    : TForm(Owner)
{
    this->Resizing(wsMaximized);
}
//---------------------------------------------------------------------------
void __fastcall Tremont::MemTableEh1CalcFields(TDataSet *DataSet)
{
//��������� ����� � ��������� �������
    MemTableEh1number->Value = MemTableEh1->RecNo;    
}
//---------------------------------------------------------------------------
void __fastcall Tremont::FormClose(TObject *Sender, TCloseAction &Action)
{
//����� � ����
    this->Hide();
    menu->Show();
}
//---------------------------------------------------------------------------
void __fastcall Tremont::FormResize(TObject *Sender)
{
//��������������� ������� ��� ��������� ������� �����
    int size = DBGridEh1->Width - 945;
    DBGridEh1->Columns->Items[2]->Width = 70 + size/10;
    DBGridEh1->Columns->Items[3]->Width = 70 + size/10;
    DBGridEh1->Columns->Items[4]->Width = 50 + size/10;
    DBGridEh1->Columns->Items[5]->Width = 35 + size/20;
    DBGridEh1->Columns->Items[6]->Width = 35 + size/20;
    DBGridEh1->Columns->Items[7]->Width = 70 + size/10;
    DBGridEh1->Columns->Items[8]->Width = 70 + size/10;
    DBGridEh1->Columns->Items[9]->Width = 35 + size/20;
    DBGridEh1->Columns->Items[10]->Width = 35 + size/20;
    DBGridEh1->Columns->Items[11]->Width = 55 + size/20;
    DBGridEh1->Columns->Items[12]->Width = 55 + size/20;
    DBGridEh1->Columns->Items[13]->Width = 55 + size/20;
    DBGridEh1->Columns->Items[14]->Width = 55 + size/20;
    DBGridEh1->Columns->Items[15]->Width = 65 + size/20;
    DBGridEh1->Columns->Items[16]->Width = 65 + size/20;
}
//---------------------------------------------------------------------------
void __fastcall Tremont::DBGridEh1DrawColumnCell(TObject *Sender,
      const TRect &Rect, int DataCol, TColumnEh *Column,
      TGridDrawState State)
{
//��������� ����� ������� 2/3/7/8/11/12
    if((DataCol == 11) || (DataCol == 12) || (DataCol == 2) || (DataCol == 3) || (DataCol == 7) || (DataCol == 8)) {
        DBGridEh1->Canvas->Brush->Color = cl3DLight;
        DBGridEh1->Canvas->FillRect(Rect);
        DBGridEh1->DefaultDrawColumnCell(Rect,DataCol,Column,State);
    }
}
//---------------------------------------------------------------------------
void __fastcall Tremont::Button1Click(TObject *Sender)
{
//������� ����� �� ����
    MemTableEh1->Close();
    ADOQuery1->SQL->Clear();
    ADOQuery1->SQL->Add("select * from remont");
    ADOQuery1->SQL->Add("where chex like \'"+Edit3->Text+"%\';");
    MemTableEh1->Open();
    DBGridEh1->DefaultApplySorting();
}
//---------------------------------------------------------------------------
void __fastcall Tremont::Edit3KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
//������ ����� �� ������
    if(Key == 13) this->Button1Click(Sender);
}
//---------------------------------------------------------------------------
void __fastcall Tremont::Button2Click(TObject *Sender)
{
//������ �������
    MemTableEh1->Close();
    ADOQuery1->SQL->Clear();
    ADOQuery1->SQL->Add("select * from remont;");
    MemTableEh1->Open();
    DBGridEh1->ClearFilter();
    DBGridEh1->ApplyFilter();
    DBGridEh1->DefaultApplySorting();
    Edit3->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall Tremont::Button3Click(TObject *Sender)
{
//������ �������
    if(PrintDialog1->Execute()) {
        Printer()->Orientation = poLandscape;
        this->PrintDBGridEh1->Print();
    }
}
//---------------------------------------------------------------------------
void __fastcall Tremont::DBNavigator1Click(TObject *Sender,
      TNavigateBtn Button)
{
    if(Button == nbRefresh) {this->Button2Click(Sender);}
}
//---------------------------------------------------------------------------

