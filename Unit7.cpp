//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
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
Tkarty *karty;
//---------------------------------------------------------------------------
__fastcall Tkarty::Tkarty(TComponent* Owner)
    : TForm(Owner)
{
    this->Resizing(wsMaximized);
}
//---------------------------------------------------------------------------
void __fastcall Tkarty::FormClose(TObject *Sender, TCloseAction &Action)
{
    this->Hide();
    menu->Show();    
}
//---------------------------------------------------------------------------
void __fastcall Tkarty::MemTableEh1CalcFields(TDataSet *DataSet)
{
//нумераци€ строк в отдельном столбце
    MemTableEh1npp->Value = MemTableEh1->RecNo;
}
//---------------------------------------------------------------------------
void __fastcall Tkarty::FormResize(TObject *Sender)
{
//изменение колонок в таблице при масштабировании
    float size = DBGridEh1->Width - 945;            
    DBGridEh1->Columns->Items[1]->Width = 55 + size/10;
    DBGridEh1->Columns->Items[2]->Width = 100 + size/10;
    DBGridEh1->Columns->Items[3]->Width = 75 + size/10;
    DBGridEh1->Columns->Items[4]->Width = 60 + size/10;
    DBGridEh1->Columns->Items[5]->Width = 100 + size/10;
    DBGridEh1->Columns->Items[6]->Width = 100 + size/10;
    DBGridEh1->Columns->Items[7]->Width = 85 + size/10;  
    DBGridEh1->Columns->Items[8]->Width = 65 + size/10;
    DBGridEh1->Columns->Items[9]->Width = 100 + size/10;
    DBGridEh1->Columns->Items[10]->Width = 125 + size/10;
}
//---------------------------------------------------------------------------
void __fastcall Tkarty::Button1Click(TObject *Sender)
{
//выбрать шифры
    DBGridEh1->FieldColumns["shifr"]->STFilter->ExpressionStr = "~"+Edit3->Text+"%";
    DBGridEh1->ApplyFilter();
}
//---------------------------------------------------------------------------
void __fastcall Tkarty::Button2Click(TObject *Sender)
{
//убрать фильтры
    DBGridEh1->ClearFilter();
    MemTableEh1->Close();
    MemTableEh1->Open();
    /*MemTableEh1->Last();
    MemTableEh1->First();
    DBGridEh1->ApplyFilter();
    DBGridEh1->DefaultApplySorting();*/
    Edit3->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall Tkarty::Edit3KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
//применить фильтр шифров по ентеру
    if(Key == 13) {this->Button1Click(Sender);}    
}
//---------------------------------------------------------------------------
void __fastcall Tkarty::DBNavigator1Click(TObject *Sender,
      TNavigateBtn Button)
{
//обновить Ѕƒ убрав фильтры
    if(Button == nbRefresh) {this->Button2Click(Sender);}
}
//---------------------------------------------------------------------------
void __fastcall Tkarty::Button3Click(TObject *Sender)
{
//печать таблицы
    if(PrintDialog1->Execute()) {
        Printer()->Orientation = poLandscape;
        this->PrintDBGridEh1->Print();
    }
}
//---------------------------------------------------------------------------
void __fastcall Tkarty::DBGridEh1DrawColumnCell(TObject *Sender,
      const TRect &Rect, int DataCol, TColumnEh *Column,
      TGridDrawState State)
{
//закрасить строки, где заполнена €чейка "результат"
    if(MemTableEh1rezult->AsString != "") {
        DBGridEh1->Canvas->Brush->Color = cl3DLight;
        DBGridEh1->Canvas->FillRect(Rect);
        DBGridEh1->DefaultDrawColumnCell(Rect,DataCol,Column,State);
    }
}
//---------------------------------------------------------------------------
void __fastcall Tkarty::MemTableEh1BeforeInsert(TDataSet *DataSet)
{
//сохранить номер карты
    temp_no = MemTableEh1num_kart->Value;
}
//---------------------------------------------------------------------------
void __fastcall Tkarty::MemTableEh1AfterInsert(TDataSet *DataSet)
{
//вставить в новую строку номер карты
    MemTableEh1num_kart->Value = temp_no;
    DBGridEh1->SelectedIndex = 2;
    DBGridEh1->Columns->Items[1]->HideDuplicates = false;
}
//---------------------------------------------------------------------------
void __fastcall Tkarty::DBGridEh1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
//скопировать значение выделенной €чейки при перетаскивании
    mov = DBGridEh1->SelectedField->AsString;
    mov_can = DBGridEh1->Row;
}
//---------------------------------------------------------------------------
void __fastcall Tkarty::DBGridEh1MouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
//если перетащили курсор на другую строку - вставить скопированное значение
    if(DBGridEh1->Row != mov_can) {
        DBGridEh1->DataSource->DataSet->Edit();
        DBGridEh1->SelectedField->AsString = mov;
    }
}
//---------------------------------------------------------------------------
void __fastcall Tkarty::MemTableEh1BeforePost(TDataSet *DataSet)
{
    //вернуть после редактировани€
    DBGridEh1->Columns->Items[1]->HideDuplicates = true;
}
//---------------------------------------------------------------------------

