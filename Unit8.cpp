//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
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
Tzamena *zamena;
//---------------------------------------------------------------------------
__fastcall Tzamena::Tzamena(TComponent* Owner)
    : TForm(Owner)
{
    this->Resizing(wsMaximized);
}
//---------------------------------------------------------------------------
void __fastcall Tzamena::FormClose(TObject *Sender, TCloseAction &Action)
{
    this->Hide();
    menu->Show();    
}
//---------------------------------------------------------------------------
void __fastcall Tzamena::FormShow(TObject *Sender)
{
    //DBGridEh1->DataGrouping->Active = true;
}
//---------------------------------------------------------------------------
void __fastcall Tzamena::FormResize(TObject *Sender)
{
//изменение колонок в таблице при масштабировании
    float size = DBGridEh1->Width - 735;
    DBGridEh1->Columns->Items[1]->Width = 100 + size/5;
    DBGridEh1->Columns->Items[2]->Width = 80 + size/10;
    DBGridEh1->Columns->Items[3]->Width = 120 + size/5;
    DBGridEh1->Columns->Items[4]->Width = 120 + size/5;
    DBGridEh1->Columns->Items[5]->Width = 120 + size/5;
    DBGridEh1->Columns->Items[6]->Width = 140 + size/10;
}
//---------------------------------------------------------------------------
void __fastcall Tzamena::Button1Click(TObject *Sender)
{
//выбрать шифры
    DBGridEh1->FieldColumns["shifr"]->STFilter->ExpressionStr = "~"+Edit3->Text+"%";
    DBGridEh1->ApplyFilter();
}
//---------------------------------------------------------------------------
void __fastcall Tzamena::Button2Click(TObject *Sender)
{
//убрать фильтры
    MemTableEh1->Close();
    MemTableEh1->Open();
    MemTableEh1->Last();
    MemTableEh1->First();
    DBGridEh1->ClearFilter();
    DBGridEh1->ApplyFilter();
    //DBGridEh1->DefaultApplySorting();
    Edit3->Text = "";    
}
//---------------------------------------------------------------------------
void __fastcall Tzamena::Edit3KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
//применить фильтр шифров по ентеру
    if(Key == 13) {this->Button1Click(Sender);}
}
//---------------------------------------------------------------------------
void __fastcall Tzamena::MemTableEh1CalcFields(TDataSet *DataSet)
{
//номера строк
    MemTableEh1no->Value = DataSet->RecNo;
}
//---------------------------------------------------------------------------
void __fastcall Tzamena::DBGridEh1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
//скопировать значение выделенной €чейки при перетаскивании
    mov = DBGridEh1->SelectedField->AsString;
    mov_can = DBGridEh1->Row;
}
//---------------------------------------------------------------------------
void __fastcall Tzamena::DBGridEh1MouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
//если перетащили курсор на другую строку - вставить скопированное значение
    if(DBGridEh1->Row != mov_can) {
        DBGridEh1->DataSource->DataSet->Edit();
        DBGridEh1->SelectedField->AsString = mov;
    }
}
//---------------------------------------------------------------------------
void __fastcall Tzamena::Button3Click(TObject *Sender)
{
    this->PrintDBGridEh1->Preview();
}
//---------------------------------------------------------------------------

