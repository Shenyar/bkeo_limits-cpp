//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h" 
//#include "Unit2.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBGridEh"
#pragma link "DBGridEhGrouping"
#pragma link "GridsEh"
#pragma link "DataDriverEh"
#pragma link "MemTableDataEh"
#pragma link "MemTableEh"
#pragma resource "*.dfm"
Trash *rash;
//---------------------------------------------------------------------------
__fastcall Trash::Trash(TComponent* Owner)
    : TForm(Owner)
{
    sort[0]=0; sort[1]=0;
    this->Resizing(wsMaximized);
    odshifr = "";
    row=0;
    col=0;
}
//---------------------------------------------------------------------------
void __fastcall Trash::FormClose(TObject *Sender, TCloseAction &Action)
{
    this->Hide();
    menu->Show();
}
//---------------------------------------------------------------------------
void __fastcall Trash::Button1Click(TObject *Sender)
{
//применить фильтр
    MemTableEh1->Close();
    ADOQuery1->SQL->Strings[1] = "where shifr like \'"+Edit1->Text+"%\' and ceh like \'"+Edit3->Text+"%\' ";
    MemTableEh1->Open();
    DBGrid1->DefaultApplyFilter();
}
//---------------------------------------------------------------------------
void __fastcall Trash::Button2Click(TObject *Sender)
{
//убрать фильтр
    Edit1->Text = "";
    Edit3->Text = "";
    MemTableEh1->Close();
    ADOQuery1->SQL->Strings[1] = "where shifr like \'%\'";
    MemTableEh1->Open();
    DBGrid1->DefaultApplyFilter();
}
//---------------------------------------------------------------------------
void __fastcall Trash::Edit1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
//применить фильтр по ентеру в едите1
    if(Key == 13) Button1Click(Sender);
}
//---------------------------------------------------------------------------
void __fastcall Trash::FormResize(TObject *Sender)
{
//масштабирование формы
    int i = DBGrid1->Width - 737;
    DBGrid1->Columns->Items[2]->Width = 110 + i/10;
    DBGrid1->Columns->Items[1]->Width = 40;
    DBGrid1->Columns->Items[3]->Width = 75 + i/10;
    DBGrid1->Columns->Items[4]->Width = 70 + i/10*2.5;
    DBGrid1->Columns->Items[5]->Width = 125 + i/10;
    DBGrid1->Columns->Items[6]->Width = 75 + i/10*0.5;
    DBGrid1->Columns->Items[7]->Width = 45 + i/10*1.5;
    DBGrid1->Columns->Items[8]->Width = 90 + i/10;
    DBGrid1->Columns->Items[9]->Width = 45 + i/10*1.5;
}
//---------------------------------------------------------------------------
void __fastcall Trash::Button3Click(TObject *Sender)
{
//печать таблицы
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
        //начать печать
        Printer()->BeginDoc();
        Printer()->Canvas->Brush->Color = clWhite;
        Printer()->Canvas->Pen->Color = clBlack;
        Printer()->Canvas->Font->Name = "Courier new";
        Printer()->Canvas->Font->Size = 10;

nextpage:toprn = "Временные нормы расхода инструмента на "+Date().DateString();
        if(i==36) Printer()->NewPage();
        //нарисовать шапку
        Printer()->Canvas->TextOutA(10*dpix,0.6*dpiy,toprn);
        Printer()->Canvas->MoveTo(1*dpix,1*dpiy);
        Printer()->Canvas->LineTo(28.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(28.5*dpix,2.5*dpiy);
        Printer()->Canvas->LineTo(1*dpix,2.5*dpiy);
        Printer()->Canvas->LineTo(1*dpix,1*dpiy);

        Printer()->Canvas->MoveTo(2*dpix,1*dpiy);
        Printer()->Canvas->LineTo(2*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(3.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(3.5*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(7.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(7.5*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(10.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(10.5*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(15.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(15.5*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(18.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(18.5*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(21.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(21.5*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(23.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(23.5*dpix,2.5*dpiy);
        Printer()->Canvas->MoveTo(26.5*dpix,1*dpiy);
        Printer()->Canvas->LineTo(26.5*dpix,2.5*dpiy);

        //заполнить шапку
        rect.left=1.05*dpix; rect.right=1.95*dpix; rect.top=1.05*dpiy; rect.bottom=2.45*dpiy;
        Printer()->Canvas->TextRect(rect,1.05*dpix,1.55*dpiy,"№п/п");
        rect.left=2.05*dpix; rect.right=3.45*dpix;
        Printer()->Canvas->TextRect(rect,2.45*dpix,1.55*dpiy,"Цех");
        rect.left=3.55*dpix; rect.right=7.45*dpix;
        Printer()->Canvas->TextRect(rect,4.70*dpix,1.55*dpiy,"Шифр РИ");
        Printer()->Canvas->TextOutA(8.00*dpix,1.05*dpiy,"Регламент.");
        Printer()->Canvas->TextOutA(8.10*dpix,1.40*dpiy,"документ");
        Printer()->Canvas->TextOutA(8.20*dpix,1.75*dpiy,"/ дата");
        Printer()->Canvas->TextOutA(7.95*dpix,2.05*dpiy,"подписания");
        rect.left=10.55*dpix; rect.right=15.45*dpix;
        Printer()->Canvas->TextRect(rect,12.10*dpix,1.55*dpiy,"Шифр ДСЕ");
        Printer()->Canvas->TextOutA(16.55*dpix,1.15*dpiy,"Срок");
        Printer()->Canvas->TextOutA(16.15*dpix,1.55*dpiy,"действия");
        Printer()->Canvas->TextOutA(16.05*dpix,1.95*dpiy,"документа");
        Printer()->Canvas->TextOutA(19.40*dpix,1.15*dpiy,"Кол-во");
        Printer()->Canvas->TextOutA(19.40*dpix,1.55*dpiy,"ДСЕ по");
        Printer()->Canvas->TextOutA(19.08*dpix,1.95*dpiy,"документу");
        Printer()->Canvas->TextOutA(21.55*dpix,1.15*dpiy,"Расчетные");
        Printer()->Canvas->TextOutA(21.95*dpix,1.55*dpiy,"нормы");
        Printer()->Canvas->TextOutA(21.75*dpix,1.95*dpiy,"расхода");
        Printer()->Canvas->TextOutA(23.95*dpix,1.30*dpiy,"Твердый ТП");
        Printer()->Canvas->TextOutA(24.30*dpix,1.80*dpiy,"/ дата");
        Printer()->Canvas->TextOutA(26.90*dpix,1.30*dpiy,"Нормы");
        Printer()->Canvas->TextOutA(26.75*dpix,1.80*dpiy,"расхода");

        //вывод строк
        i=0; toprn="";
        while( !DataSource1->DataSet->Eof ) {
            if((CheckBox1->Checked) || ( (ADOQuery1docdate->Value > Date()) && (ADOQuery1tp->Value.IsEmpty()) ) ) {
             //нарисовать строку
             Printer()->Canvas->MoveTo(1*dpix,(0.5*i+2.5)*dpiy);
             Printer()->Canvas->LineTo(28.5*dpix,(0.5*i+2.5)*dpiy);
             Printer()->Canvas->LineTo(28.5*dpix,(0.5*i+3.0)*dpiy);
             Printer()->Canvas->LineTo(1*dpix,(0.5*i+3.0)*dpiy);
             Printer()->Canvas->LineTo(1*dpix,(0.5*i+2.5)*dpiy);

             Printer()->Canvas->MoveTo(2*dpix,(0.5*i+2.5)*dpiy);
             Printer()->Canvas->LineTo(2*dpix,(0.5*i+3.0)*dpiy);
             Printer()->Canvas->MoveTo(3.5*dpix,(0.5*i+2.5)*dpiy);
             Printer()->Canvas->LineTo(3.5*dpix,(0.5*i+3.0)*dpiy);
             Printer()->Canvas->MoveTo(7.5*dpix,(0.5*i+2.5)*dpiy);
             Printer()->Canvas->LineTo(7.5*dpix,(0.5*i+3.0)*dpiy);
             Printer()->Canvas->MoveTo(10.5*dpix,(0.5*i+2.5)*dpiy);
             Printer()->Canvas->LineTo(10.5*dpix,(0.5*i+3.0)*dpiy);
             Printer()->Canvas->MoveTo(15.5*dpix,(0.5*i+2.5)*dpiy);
             Printer()->Canvas->LineTo(15.5*dpix,(0.5*i+3.0)*dpiy);
             Printer()->Canvas->MoveTo(18.5*dpix,(0.5*i+2.5)*dpiy);
             Printer()->Canvas->LineTo(18.5*dpix,(0.5*i+3.0)*dpiy);
             Printer()->Canvas->MoveTo(21.5*dpix,(0.5*i+2.5)*dpiy);
             Printer()->Canvas->LineTo(21.5*dpix,(0.5*i+3.0)*dpiy);
             Printer()->Canvas->MoveTo(23.5*dpix,(0.5*i+2.5)*dpiy);
             Printer()->Canvas->LineTo(23.5*dpix,(0.5*i+3.0)*dpiy);
             Printer()->Canvas->MoveTo(26.5*dpix,(0.5*i+2.5)*dpiy);
             Printer()->Canvas->LineTo(26.5*dpix,(0.5*i+3.0)*dpiy);

             //заполнить строку
             strno++;
             rect.left=1.05*dpix; rect.right=1.95*dpix; rect.top=(0.5*i+2.55)*dpiy; rect.bottom=(0.5*i+2.95)*dpiy;
             Printer()->Canvas->TextRect(rect,1.05*dpix,(0.5*i+2.55)*dpiy,AnsiString(strno));
             rect.left=2.05*dpix; rect.right=3.45*dpix;
             Printer()->Canvas->TextRect(rect,2.05*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("ceh")->AsString);
             rect.left=3.55*dpix; rect.right=7.45*dpix;
             if(DataSource1->DataSet->FieldByName("shifr")->AsString != toprn)
                Printer()->Canvas->TextRect(rect,3.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("shifr")->AsString);
             rect.left=7.55*dpix; rect.right=10.45*dpix;
             if(DataSource1->DataSet->FieldByName("shifr")->AsString != toprn)
                Printer()->Canvas->TextRect(rect,7.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("doc")->AsString);
             rect.left=10.55*dpix; rect.right=15.45*dpix;
             Printer()->Canvas->TextRect(rect,10.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("dse")->AsString);
             rect.left=15.55*dpix; rect.right=18.45*dpix;
             Printer()->Canvas->TextRect(rect,15.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("docdate")->AsString);
             rect.left=18.55*dpix; rect.right=21.45*dpix;
             Printer()->Canvas->TextRect(rect,18.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("kol")->AsString);
             rect.left=21.55*dpix; rect.right=23.45*dpix;
             Printer()->Canvas->TextRect(rect,21.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("ras_norm")->AsString);
             rect.left=23.55*dpix; rect.right=26.45*dpix;
             Printer()->Canvas->TextRect(rect,23.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("tp")->AsString);
             rect.left=26.55*dpix; rect.right=28.45*dpix;
             Printer()->Canvas->TextRect(rect,26.55*dpix,(0.5*i+2.55)*dpiy,DataSource1->DataSet->FieldByName("norm")->AsString);
             toprn = DataSource1->DataSet->FieldByName("shifr")->AsString;

             DataSource1->DataSet->Next();
             i++;
             if(i==36) goto nextpage;
            }
            else {DataSource1->DataSet->Next();}
        }
        Printer()->EndDoc();
    }
}
//---------------------------------------------------------------------------
void __fastcall Trash::Edit3KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
//фильтр по цеху
    if(Key == 13) Button1->Click();
}
//---------------------------------------------------------------------------
void __fastcall Trash::DBNavigator1Click(TObject *Sender,
      TNavigateBtn Button)
{
    if(Button == nbRefresh){
        DBGrid1->DefaultApplySorting();
    }
}
//---------------------------------------------------------------------------
void __fastcall Trash::DBNavigator1BeforeAction(TObject *Sender,
      TNavigateBtn Button)
{
//перед вставкой сохранить значения строки и автозаполнить новую
    if(Button == nbInsert) {
        this->chex=""; this->shifr=""; this->naim="";
        if(!MemTableEh1ceh->Value.IsEmpty()) this->chex = MemTableEh1ceh->AsString;
        if(!MemTableEh1shifr->Value.IsEmpty()) this->shifr = MemTableEh1shifr->AsString;
        if(!MemTableEh1doc->Value.IsEmpty()) this->naim = MemTableEh1doc->AsString;
        DBGrid1->SelectedIndex = 9;
        pos = MemTableEh1->RecNo;
    }
}
//---------------------------------------------------------------------------
void __fastcall Trash::DBGrid1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    /*if((Shift.Contains(ssCtrl)) && (Key == 13)) {
        AnsiString t = DBGrid1->InplaceEditor->Text;
        t += " \n ";
        DBGrid1->InplaceEditor->SetTextBuf(t.c_str());
        DBGrid1->InplaceEditor->SelStart = DBGrid1->InplaceEditor->Text.Length();
        return;
    }    */
//переход по ентеру в таблице
    if(Key == 13) {
        keybd_event(VK_TAB,0,0,0);
        keybd_event(VK_TAB,0,KEYEVENTF_KEYUP,0);
    }
}
//---------------------------------------------------------------------------
void __fastcall Trash::DBGrid1DrawColumnCell(TObject *Sender,
      const TRect &Rect, int DataCol, TColumnEh *Column,
      TGridDrawState State)
{
//выделение серым колонок 5 и 7
    if((DataCol == 5) || (DataCol == 7)) {
        DBGrid1->Canvas->Brush->Color = cl3DLight;
        DBGrid1->Canvas->FillRect(Rect);
        DBGrid1->DefaultDrawColumnCell(Rect,DataCol,Column,State);
    }
//выделение серым документов с прошедшим сроком действия или наличием ТП
    if((( MemTableEh1docdate->Value <= Date() ) || ( !MemTableEh1tp->Value.IsEmpty() ))) {
        //если прошел срок более 1-го дня, закрасить цветом темнее
        if( ((double)Date() - (double)MemTableEh1docdate->Value) > 1.0 ) {
            DBGrid1->Canvas->Brush->Color = clGray;
        }
        //else DBGrid1->Canvas->Brush->Color = cl3DLight;
        //если уточнена - светлее
        if( !MemTableEh1norm->Value.IsEmpty() ) {
             DBGrid1->Canvas->Brush->Color = cl3DLight;
        }

        DBGrid1->Canvas->FillRect(Rect);
        DBGrid1->DefaultDrawColumnCell(Rect,DataCol,Column,State);
    }
}
//---------------------------------------------------------------------------
void __fastcall Trash::MemTableEh1CalcFields(TDataSet *DataSet)
{
    MemTableEh1number->Value = DataSet->RecNo;
}
//---------------------------------------------------------------------------
void __fastcall Trash::MemTableEh1AfterInsert(TDataSet *DataSet)
{
    //автозаполнение новой записи
    if(DBGrid1->SelectedIndex == 9) {
        DBGrid1->DataSource->DataSet->Edit();
        if(!chex.IsEmpty()) DBGrid1->DataSource->DataSet->FieldByName("ceh")->AsString = this->chex;
        if(!shifr.IsEmpty()) DBGrid1->DataSource->DataSet->FieldByName("shifr")->AsString = this->shifr;
        if(!naim.IsEmpty()) DBGrid1->DataSource->DataSet->FieldByName("doc")->AsString = this->naim;  //ShowMessage("!");
        DBGrid1->DataSource->DataSet->FieldByName("docdate")->Value = Date()+1;
        DBGrid1->SelectedIndex = 4;

        //отменить скрытие дубликатов в записях
        DBGrid1->Columns->Items[2]->HideDuplicates = false;
        DBGrid1->Columns->Items[3]->HideDuplicates = false;
        DBGrid1->EditorMode = true;
    }
}
//---------------------------------------------------------------------------
void __fastcall Trash::MemTableEh1BeforeEdit(TDataSet *DataSet)
{
//отменить скрытие дубликатов в записях
    DBGrid1->Columns->Items[2]->HideDuplicates = false;
    DBGrid1->Columns->Items[3]->HideDuplicates = false;
    DBGrid1->EditorMode = true;
}
//---------------------------------------------------------------------------
void __fastcall Trash::MemTableEh1BeforePost(TDataSet *DataSet)
{
//включить скрытие дубликатов в записях
    DBGrid1->Columns->Items[2]->HideDuplicates = true;
    DBGrid1->Columns->Items[3]->HideDuplicates = true;
    DBGrid1->EditorMode = false;
}
//---------------------------------------------------------------------------
void __fastcall Trash::DBGrid1CellMouseClick(TCustomGridEh *Grid,
      TGridCoord &Cell, TMouseButton Button, TShiftState Shift, int X,
      int Y)
{
//если по выделенной ячейке кликнули еще раз - отменить скрытие дубликатов в записях
    if((DBGrid1->Row == row) && (DBGrid1->Col == col )) {
        MemTableEh1->Edit();
    }
    row = DBGrid1->Row;
    col = DBGrid1->Col;
}
//---------------------------------------------------------------------------
void __fastcall Trash::CheckBox2Click(TObject *Sender)
{
    if(CheckBox2->Checked) {
        //применить фильтр
        MemTableEh1->Close();
        ADOQuery1->SQL->Strings[2] = " AND docdate < Date() ";
        MemTableEh1->Open();
        DBGrid1->DefaultApplyFilter();
    }
    else {
        //убрать фильтр
        MemTableEh1->Close();
        ADOQuery1->SQL->Strings[2] = " ";
        MemTableEh1->Open();
        DBGrid1->DefaultApplyFilter();
    }
}
//---------------------------------------------------------------------------
void __fastcall Trash::DBGrid1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
//скопировать значение выделенной ячейки при перетаскивании
    drag = DBGrid1->SelectedField->AsString;
    can_drag = DBGrid1->Row;
}
//---------------------------------------------------------------------------
void __fastcall Trash::DBGrid1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
//если перетащили курсор на другую строку - вставить скопированное значение
    if(DBGrid1->Row != can_drag) {
        DBGrid1->DataSource->DataSet->Edit();
        DBGrid1->SelectedField->AsString = drag;
    }
}
//---------------------------------------------------------------------------

