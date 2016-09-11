//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
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
#pragma resource "*.dfm"
Tfason *fason;
//---------------------------------------------------------------------------
__fastcall Tfason::Tfason(TComponent* Owner)
    : TForm(Owner)
{
    this->Resizing(wsMaximized);
}
//---------------------------------------------------------------------------
void __fastcall Tfason::FormClose(TObject *Sender, TCloseAction &Action)
{
    this->Hide();
    menu->Show();
}
//---------------------------------------------------------------------------
void __fastcall Tfason::FormResize(TObject *Sender)
{
//��������������� �����
    int i = DBGrid1->Width - 890;
    DBGrid1->Columns->Items[2]->Width = 140 + i/10*2;
    DBGrid1->Columns->Items[3]->Width = 100 + i/10*1.5;
    DBGrid1->Columns->Items[4]->Width = 50 + i/10;
    DBGrid1->Columns->Items[5]->Width = 30 + i/10;
    DBGrid1->Columns->Items[6]->Width = 100 + i/10;
    DBGrid1->Columns->Items[7]->Width = 95 + i/10;
    DBGrid1->Columns->Items[8]->Width = 100 + i/10;
    DBGrid1->Columns->Items[9]->Width = 100;
    DBGrid1->Columns->Items[10]->Width = 65 + i/10*1.5;
}
//---------------------------------------------------------------------------
void __fastcall Tfason::Edit2KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if(Key == 13) Button1->Click();
}
//---------------------------------------------------------------------------
void __fastcall Tfason::Button1Click(TObject *Sender)
{
    //��������� ������
    MemTableEh1->Close();
    ADOQuery1->SQL->Strings[1] = "where shifr like \'"+Edit1->Text+"%\' and chex like \'"+Edit2->Text+"%\' ;";
    MemTableEh1->Open();
    MemTableEh1->Last();
    MemTableEh1->First();
    DBGrid1->DefaultApplySorting();
}
//---------------------------------------------------------------------------
void __fastcall Tfason::Edit1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if(Key == 13) Button1->Click();
}
//---------------------------------------------------------------------------
void __fastcall Tfason::DBNavigator1BeforeAction(TObject *Sender,
      TNavigateBtn Button)
{
//����� �������� ��������� �������� ������ ��� �������������� �����
    if(Button == nbInsert) {
        this->chex = MemTableEh1chex->AsString;
        this->shifr = MemTableEh1shifr->AsString;
        this->naim = MemTableEh1naim->AsString;
    }
}
//---------------------------------------------------------------------------
void __fastcall Tfason::DBNavigator1Click(TObject *Sender,
      TNavigateBtn Button)
{
    if(Button == nbRefresh){
        DBGrid1->DefaultApplySorting();
    }
    //�������������� ����������� ������
    if(Button == nbInsert) {
        //MemTableEh1->Edit();
        MemTableEh1chex->AsString = this->chex;
        MemTableEh1shifr->AsString = this->shifr;
        MemTableEh1naim->AsString = this->naim;
        DBGrid1->SelectedIndex = 4;
    }
}
//---------------------------------------------------------------------------
void __fastcall Tfason::Button3Click(TObject *Sender)
{
//������ �������
    if(PrintDialog1->Execute()) {
        DataSource1->DataSet->First();
        TRect rect;
        float dpix, dpiy;
        int strno=0,i=0;
        AnsiString toprn;
        //pixels per inch/2.54=sm
        dpix = GetDeviceCaps(Printer()->Handle,LOGPIXELSX) / 2.54;
        dpiy = GetDeviceCaps(Printer()->Handle,LOGPIXELSY) / 2.54;
        Printer()->Orientation = poLandscape;
        //������ ������
        Printer()->BeginDoc();
        Printer()->Canvas->Brush->Color = clWhite;
        Printer()->Canvas->Pen->Color = clBlack;
        Printer()->Canvas->Font->Name = "Courier new";
        Printer()->Canvas->Font->Size = 10;

nextpage:toprn = "�������� ��������������� ����������� � ������������ �� "+Date().DateString();
        if(i==36) Printer()->NewPage();
        //���������� �����
        Printer()->Canvas->TextOutA(7*dpix,0.6*dpiy,toprn);
        Printer()->Canvas->MoveTo(1*dpix,1*dpiy);
        Printer()->Canvas->LineTo(28.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(28.5*dpix,2.5*dpiy);
        Printer()->Canvas->LineTo(1*dpix,2.5*dpiy);
        Printer()->Canvas->LineTo(1*dpix,1*dpiy);

        Printer()->Canvas->MoveTo(2*dpix,1*dpiy);
        Printer()->Canvas->LineTo(2*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(3.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(3.5*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(8.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(8.5*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(12.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(12.5*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(13.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(13.5*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(14.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(14.5*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(16.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(16.5*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(18.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(18.5*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(20.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(20.5*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(23.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(23.5*dpix,2.5*dpiy);

        //��������� �����
        rect.left=1.05*dpix; rect.right=1.95*dpix; rect.top=1.05*dpiy; rect.bottom=2.45*dpiy;
        Printer()->Canvas->TextRect(rect,1.05*dpix,1.55*dpiy,"��/�");
        rect.left=2.05*dpix; rect.right=3.45*dpix;
        Printer()->Canvas->TextRect(rect,2.45*dpix,1.55*dpiy,"���");
        rect.left=3.55*dpix; rect.right=7.45*dpix;
        Printer()->Canvas->TextRect(rect,5.20*dpix,1.55*dpiy,"���� ��");
        rect.left=8.55*dpix; rect.right=12.45*dpix;
        Printer()->Canvas->TextRect(rect,9.25*dpix,1.55*dpiy,"������������");
        Printer()->Canvas->TextOutA(12.60*dpix,1.30*dpiy,"���.");
        Printer()->Canvas->TextOutA(12.65*dpix,1.80*dpiy," �");
        rect.left=13.55*dpix; rect.right=14.45*dpix;
        Printer()->Canvas->TextRect(rect,13.70*dpix,1.55*dpiy,"���");
        Printer()->Canvas->TextOutA(14.75*dpix,1.30*dpiy,"�������");
        Printer()->Canvas->TextOutA(14.65*dpix,1.80*dpiy,"�����-��");
        Printer()->Canvas->TextOutA(16.80*dpix,1.20*dpiy,"���-��");
        Printer()->Canvas->TextOutA(16.55*dpix,1.55*dpiy,"���������");
        Printer()->Canvas->TextOutA(16.60*dpix,1.95*dpiy,"/�������");
        Printer()->Canvas->TextOutA(18.70*dpix,1.05*dpiy,"�������");
        Printer()->Canvas->TextOutA(18.80*dpix,1.40*dpiy,"���-��");
        Printer()->Canvas->TextOutA(18.55*dpix,1.75*dpiy,"���������");
        Printer()->Canvas->TextOutA(18.60*dpix,2.05*dpiy,"/�������");
        Printer()->Canvas->TextOutA(21.50*dpix,1.30*dpiy,"����");
        Printer()->Canvas->TextOutA(21.10*dpix,1.80*dpiy,"��������");
        rect.left=23.55*dpix; rect.right=28.45*dpix;
        Printer()->Canvas->TextRect(rect,24.85*dpix,1.55*dpiy,"����������");

        //����� �����
        i=0; toprn="";
        while( !DataSource1->DataSet->Eof ) {
            //���������� ������
            Printer()->Canvas->MoveTo(1*dpix,(0.5*i+2.5)*dpiy);
            Printer()->Canvas->LineTo(28.5*dpix,(0.5*i+2.5)*dpiy);
            Printer()->Canvas->LineTo(28.5*dpix,(0.5*i+3.0)*dpiy);
            Printer()->Canvas->LineTo(1*dpix,(0.5*i+3.0)*dpiy);
            Printer()->Canvas->LineTo(1*dpix,(0.5*i+2.5)*dpiy);

            Printer()->Canvas->MoveTo(2*dpix,(0.5*i+2.5)*dpiy);
            Printer()->Canvas->LineTo(2*dpix,(0.5*i+3.0)*dpiy);
            Printer()->Canvas->MoveTo(3.5*dpix,(0.5*i+2.5)*dpiy);
            Printer()->Canvas->LineTo(3.5*dpix,(0.5*i+3.0)*dpiy);
            Printer()->Canvas->MoveTo(8.5*dpix,(0.5*i+2.5)*dpiy);
            Printer()->Canvas->LineTo(8.5*dpix,(0.5*i+3.0)*dpiy);
            Printer()->Canvas->MoveTo(12.5*dpix,(0.5*i+2.5)*dpiy);
            Printer()->Canvas->LineTo(12.5*dpix,(0.5*i+3.0)*dpiy);
            Printer()->Canvas->MoveTo(13.5*dpix,(0.5*i+2.5)*dpiy);
            Printer()->Canvas->LineTo(13.5*dpix,(0.5*i+3.0)*dpiy);
            Printer()->Canvas->MoveTo(14.5*dpix,(0.5*i+2.5)*dpiy);
            Printer()->Canvas->LineTo(14.5*dpix,(0.5*i+3.0)*dpiy);
            Printer()->Canvas->MoveTo(16.5*dpix,(0.5*i+2.5)*dpiy);
            Printer()->Canvas->LineTo(16.5*dpix,(0.5*i+3.0)*dpiy);
            Printer()->Canvas->MoveTo(18.5*dpix,(0.5*i+2.5)*dpiy);
            Printer()->Canvas->LineTo(18.5*dpix,(0.5*i+3.0)*dpiy);
            Printer()->Canvas->MoveTo(20.5*dpix,(0.5*i+2.5)*dpiy);
            Printer()->Canvas->LineTo(20.5*dpix,(0.5*i+3.0)*dpiy);
            Printer()->Canvas->MoveTo(23.5*dpix,(0.5*i+2.5)*dpiy);
            Printer()->Canvas->LineTo(23.5*dpix,(0.5*i+3.0)*dpiy);

            //��������� ������
            strno++;
            rect.left=1.05*dpix; rect.right=1.95*dpix; rect.top=(0.5*i+2.55)*dpiy; rect.bottom=(0.5*i+2.95)*dpiy;
            Printer()->Canvas->TextRect(rect,1.05*dpix,(0.5*i+2.55)*dpiy,AnsiString(strno));
            rect.left=2.05*dpix; rect.right=3.45*dpix;
            Printer()->Canvas->TextRect(rect,2.05*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("chex")->AsString);
            rect.left=3.55*dpix; rect.right=7.45*dpix;
            if(DataSource1->DataSet->FieldByName("shifr")->AsString != toprn)
                Printer()->Canvas->TextRect(rect,3.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("shifr")->AsString);
            rect.left=8.55*dpix; rect.right=12.45*dpix;
            if(DataSource1->DataSet->FieldByName("shifr")->AsString != toprn)
                Printer()->Canvas->TextRect(rect,8.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("naim")->AsString);
            rect.left=12.55*dpix; rect.right=13.45*dpix;
            Printer()->Canvas->TextRect(rect,12.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("nomer")->AsString);
            rect.left=13.55*dpix; rect.right=14.45*dpix;
            Printer()->Canvas->TextRect(rect,13.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("fpu")->AsString);
            rect.left=14.55*dpix; rect.right=16.45*dpix;
            Printer()->Canvas->TextRect(rect,14.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("ostatok")->AsString);
            rect.left=16.55*dpix; rect.right=18.45*dpix;
            Printer()->Canvas->TextRect(rect,16.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("peretoch")->AsString);
            rect.left=18.55*dpix; rect.right=20.45*dpix;
            Printer()->Canvas->TextRect(rect,18.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("srednee")->AsString);
            rect.left=20.55*dpix; rect.right=23.45*dpix;
            Printer()->Canvas->TextRect(rect,20.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("data")->AsString);
            rect.left=23.55*dpix; rect.right=28.45*dpix;
            Printer()->Canvas->TextRect(rect,23.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("prim")->AsString);
            toprn = DataSource1->DataSet->FieldByName("shifr")->AsString;

            DataSource1->DataSet->Next();
            i++;
            if(i==36) goto nextpage;
        }
        Printer()->EndDoc();
    }
}
//---------------------------------------------------------------------------
void __fastcall Tfason::Button2Click(TObject *Sender)
{
    //������ �������
    Edit1->Text = "";
    Edit2->Text = "";
    MemTableEh1->Close();
    ADOQuery1->SQL->Strings[1] = ";";
    MemTableEh1->Open();
    MemTableEh1->Last();
    MemTableEh1->First();
    DBGrid1->ClearFilter();
    DBGrid1->DefaultApplySorting();
}
//---------------------------------------------------------------------------
void __fastcall Tfason::MemTableEh1CalcFields(TDataSet *DataSet)
{
    //���������� ���������
    MemTableEh1num->Value = DataSet->RecNo;
}
//---------------------------------------------------------------------------
void __fastcall Tfason::MemTableEh1BeforeEdit(TDataSet *DataSet)
{
//�������� ������� ���������� � �������
    DBGrid1->Columns->Items[2]->HideDuplicates = false;
    DBGrid1->Columns->Items[3]->HideDuplicates = false;
    DBGrid1->EditorMode = true;
}
//---------------------------------------------------------------------------
void __fastcall Tfason::MemTableEh1BeforePost(TDataSet *DataSet)
{
//��������� ������� ���������� � �������
    DBGrid1->Columns->Items[2]->HideDuplicates = true;
    DBGrid1->Columns->Items[3]->HideDuplicates = true;
    DBGrid1->EditorMode = false;
}
//---------------------------------------------------------------------------
void __fastcall Tfason::MemTableEh1AfterInsert(TDataSet *DataSet)
{
//�������� ������� ���������� � �������
    DBGrid1->Columns->Items[2]->HideDuplicates = false;
    DBGrid1->Columns->Items[3]->HideDuplicates = false;
    DBGrid1->EditorMode = true;
}
//---------------------------------------------------------------------------
void __fastcall Tfason::DBGrid1CellMouseClick(TCustomGridEh *Grid,
      TGridCoord &Cell, TMouseButton Button, TShiftState Shift, int X,
      int Y)
{
//���� �� ���������� ������ �������� ��� ��� - �������� ������� ���������� � �������
    if((DBGrid1->Row == row) && (DBGrid1->Col == col )) {
        MemTableEh1->Edit();
    }
    row = DBGrid1->Row;
    col = DBGrid1->Col;
}
//---------------------------------------------------------------------------
void __fastcall Tfason::MemTableEh1AfterEdit(TDataSet *DataSet)
{
//��������� ���� ��������������
    MemTableEh1dzap->Value = Date();
}
//---------------------------------------------------------------------------

