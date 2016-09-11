//---------------------------------------------------------------------------

#include <vcl.h>
#include <inifiles.hpp>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tauth *auth;
//---------------------------------------------------------------------------
__fastcall Tauth::Tauth(TComponent* Owner)
    : TForm(Owner)
{
        AnsiString op,conn,user;
        try {   TIniFile *ini;
                ini = new TIniFile( ChangeFileExt( Application->ExeName, ".INI" ) );
                op = ini->ReadString("path","mdb","");
                if((op=="") || (!FileExists(op))) throw op;
                user = ini->ReadString("path","user","");
        } catch(...) {if(op.IsEmpty()) ShowMessage("Неизвестно расположение БД(mdb)\n(нет ini-файла) или неверно его содержание");
                        else ShowMessage("Нет файла "+op);
                        Application->Terminate();}
        conn = "Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source=";
        conn += op;
        conn += ";Mode=Share Deny None;Jet OLEDB:System database="";Jet OLEDB:Registry Path=\"\"";
        conn += ";Jet OLEDB:Database Password=\"archmage2501\";Jet OLEDB:Engine Type=5;Jet OLEDB:Database ";
        conn += "Locking Mode=1;Jet OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Global Bulk ";
        conn += "Transactions=1;Jet OLEDB:New Database Password=\"archmage2501\";Jet OLEDB:Create System Database=False";
        conn += ";Jet OLEDB:Encrypt Database=False;Jet OLEDB:Don't Copy Locale on Compact=False;Jet OLEDB:";
        conn += "Compact Without Replica Repair=False;Jet OLEDB:SFP=False;";
        this->ADOConnection1->Connected=false;
        this->ADOConnection1->ConnectionString = conn;
        this->ADOConnection1->Connected=true;
        this->ADOQuery1->Open();
        if( !user.IsEmpty() ) Edit1->Text = user;
}
//---------------------------------------------------------------------------
void __fastcall Tauth::Edit1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if(Key == 13) Edit2->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall Tauth::Edit2KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if(Key == 13) Button1Click(Sender);
}
//---------------------------------------------------------------------------
void __fastcall Tauth::Button1Click(TObject *Sender)
{
    //пересохранить в файл логин последней авторизации
        try{
                TIniFile *ini;
                ini = new TIniFile( ChangeFileExt( Application->ExeName, ".INI" ) );
                ini->WriteString("path","user",Edit1->Text);
        } catch(...) {ShowMessage("Ошибка при сохранении файла пути!");}

//авторизация и распределение прав
        int i=0;
        ADOQuery1->Open();
        DataSource1->DataSet->First();
        //поиск юзера в БД
        while(!DataSource1->DataSet->Eof) {
                if(DataSource1->DataSet->FieldByName("login")->AsString == Edit1->Text)
                        if(DataSource1->DataSet->FieldByName("pass")->AsString == Edit2->Text) {
                                i = 1;
                                break;
                        }
                DataSource1->DataSet->Next();
        }
        //если юзер ненайден то выход
        if(i==0) {
                ShowMessage("Такая комбинация Логина и Пароля не существует!");
                Edit2->Text = "";
                return;
        } else {this->Caption="Идет авторизация..."; this->Enabled=false;}

        //определить права
        AnsiString rights = DataSource1->DataSet->FieldByName("rights")->AsString;
//права на "результаты испытаний упрочненного ин-та" instr
        if(rights[1] == '0') menu->Label1->Enabled = false;  
        if(rights[1] == '1') {
            instr->DBGridEh1->ReadOnly = true;
            instr->DBNavigator1->Enabled = false;
            instr->Button4->Enabled = false;  
            instr->Button5->Enabled = false;
            instr->Button6->Enabled = false;
        }
        if(rights[1] == '2') {
            instr->DBGridEh1->Columns->Items[12]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[13]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[14]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[15]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[16]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[17]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[18]->ReadOnly = true;
            instr->user = 1;//БВПИ
            //instr->Button4->Visible = false;
            //instr->DBGridEh1->ReadOnly = true;
        }
        if(rights[1] == '3') {
            instr->DBGridEh1->Columns->Items[1]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[2]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[3]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[4]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[5]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[6]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[7]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[8]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[9]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[10]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[11]->ReadOnly = true;
            instr->user = 2;//БКЭО (Технадзор)
            /*instr->DBGridEh1->Columns->Items[12]->ReadOnly = true;
            instr->DBGridEh1->Columns->Items[13]->ReadOnly = true; */
            instr->Button5->Visible = false;
            //instr->Button6->Visible = false;
        }
//права на "нормы расхода" rash
        if(rights[2] == '0') menu->Label5->Enabled = false;
        if(rights[2] == '1') {
            rash->DBGrid1->Columns->Items[1]->ReadOnly = true;
            rash->DBGrid1->Columns->Items[2]->ReadOnly = true;
            rash->DBGrid1->Columns->Items[3]->ReadOnly = true;
            rash->DBGrid1->Columns->Items[4]->ReadOnly = true;
            rash->DBGrid1->Columns->Items[5]->ReadOnly = true;
            rash->DBGrid1->Columns->Items[6]->ReadOnly = true;
            rash->DBGrid1->Columns->Items[7]->ReadOnly = true; 
            rash->DBGrid1->Columns->Items[8]->ReadOnly = true; 
            rash->DBGrid1->Columns->Items[9]->ReadOnly = true;
            rash->DBNavigator1->Enabled = false;
        }
        if(rights[2] == '2') {
            rash->DBGrid1->Columns->Items[7]->ReadOnly = true;
            rash->DBGrid1->Columns->Items[8]->ReadOnly = true;
            rash->DBGrid1->Columns->Items[9]->ReadOnly = true;
        }
        if(rights[2] == '3') {
            rash->DBGrid1->Columns->Items[1]->ReadOnly = true;
            rash->DBGrid1->Columns->Items[2]->ReadOnly = true;
            rash->DBGrid1->Columns->Items[3]->ReadOnly = true;
            rash->DBGrid1->Columns->Items[4]->ReadOnly = true;
            rash->DBGrid1->Columns->Items[5]->ReadOnly = true; 
            rash->DBGrid1->Columns->Items[6]->ReadOnly = true;
            TButtonSet rhs1;
            rhs1 << nbFirst << nbPrior << nbNext << nbLast << nbInsert << nbPost << nbCancel << nbRefresh;
            rash->DBNavigator1->VisibleButtons = rhs1;
        }
//права на "движение сложнофасонного" fason
        if(rights[3] == '0') menu->Label2->Enabled = false;
        if(rights[3] == '1') {
            fason->DBGrid1->ReadOnly = true;
            fason->DBNavigator1->Enabled = false;
        }
//права на "Восстановление" remont
        if(rights[4] == '0') menu->Label1->Enabled = false;
        if(rights[4] == '1') {
            remont->DBGridEh1->ReadOnly = true;
            remont->DBNavigator1->Enabled = false;
        }
//права на "Карты замены" karty
        if(rights[5] == '0') menu->Label3->Enabled = false;
        if(rights[5] == '1') {
            karty->DBGridEh1->ReadOnly = true;
            karty->DBNavigator1->Enabled = false;
        }

        this->Enabled=true;
        this->Caption="Авторизация";
        //отобразить кнопки и скрыть авторизацию
        this->Hide();
        menu->Show();
}
//---------------------------------------------------------------------------


