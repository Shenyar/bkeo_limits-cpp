//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tmenu *menu;
//---------------------------------------------------------------------------
__fastcall Tmenu::Tmenu(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tmenu::Label1Click(TObject *Sender)
{
//открыть "внедрение в производство структурированных инструментов"
    remont->MemTableEh1->Open();
    remont->DBNavigator1->BtnClick(nbLast);
    remont->DBNavigator1->BtnClick(nbFirst);
    remont->DBGridEh1->DefaultApplySorting();
    this->Hide();
    remont->Show();  
}
//--------------------------------------------------------------------------- 
void __fastcall Tmenu::Label5Click(TObject *Sender)
{
//вычисление кол-ва шифров с истекшим сроком
    rash->MemTableEh1->Open();
    rash->DBNavigator1->BtnClick(nbLast);
    rash->DBNavigator1->BtnClick(nbFirst);
    rash->ADOQuery2->Close();
    rash->ADOQuery2->SQL->Strings[2] = "WHERE (((limits.docdate)<=Date()));";
    rash->ADOQuery2->Open();
    rash->Edit2->Text = AnsiString(rash->ADOQuery2Countid->Value);
    rash->ADOQuery2->Close();
    rash->ADOQuery2->SQL->Strings[2] = "WHERE (((limits.docdate)<=Date()) AND (limits.norm <> \"\"));";
    rash->ADOQuery2->Open();
    rash->Edit4->Text = AnsiString(rash->ADOQuery2Countid->Value);
    rash->DBGrid1->DefaultApplySorting();
//открыть "расчет временных норм расхода"
    this->Hide();
    rash->Show();
}
//---------------------------------------------------------------------------
void __fastcall Tmenu::FormClose(TObject *Sender, TCloseAction &Action)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall Tmenu::Label2Click(TObject *Sender)
{
//открыть "Движение сложнофасонного инструмента в производстве "
    fason->MemTableEh1->Open();
    fason->MemTableEh1->Last();
    fason->MemTableEh1->First();
    fason->DBGrid1->DefaultApplySorting();
    this->Hide();
    fason->Show();
}
//---------------------------------------------------------------------------
void __fastcall Tmenu::Label3Click(TObject *Sender)
{
//открыть "Карты замещения"
    karty->MemTableEh1->Open();
    karty->MemTableEh1->Last();
    karty->MemTableEh1->First();
    //karty->DBGridEh1->DefaultApplySorting();
    this->Hide();
    karty->Show();
}
//---------------------------------------------------------------------------
void __fastcall Tmenu::Label4Click(TObject *Sender)
{
//открыть "Сводный перечень"
    instr->ADOQuery1->SQL->Clear();
    //даты изменения лимитов для БВПИ
    if( instr->user == 1 ) {
        instr->DBGridEh1->Columns->Items[18]->Visible = true;
    }
    instr->ADOQuery1->SQL->Add("select * from instrum where (flag<>3) and (flag<>4);");
    /*instr->DBGridEh1->Columns->Items[14]->Visible = false;
    instr->DBGridEh1->Columns->Items[15]->Visible = false;
    instr->DBGridEh1->Columns->Items[16]->Visible = false;
    instr->DBGridEh1->Columns->Items[17]->Visible = false; */
    instr->MemTableEh1->Open();
    instr->DBGridEh1->DefaultApplySorting();
    this->Hide();
    instr->Show();
}
//---------------------------------------------------------------------------
void __fastcall Tmenu::Label6Click(TObject *Sender)
{
//открыть "Замену материала"
    zamena->MemTableEh1->Open();
    zamena->MemTableEh1->Last();
    zamena->MemTableEh1->First();
    this->Hide();
    zamena->Show();
}
//---------------------------------------------------------------------------

