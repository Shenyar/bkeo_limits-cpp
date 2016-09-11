//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DataDriverEh"
#pragma link "DBGridEh"
#pragma link "DBGridEhGrouping"
#pragma link "GridsEh"
#pragma link "MemTableDataEh"
#pragma link "MemTableEh"
#pragma resource "*.dfm"
Tinstr_history *instr_history;
//---------------------------------------------------------------------------
__fastcall Tinstr_history::Tinstr_history(TComponent* Owner)
    : TForm(Owner)
{
    this->Resizing(wsMaximized);
}
//---------------------------------------------------------------------------
void __fastcall Tinstr_history::MemTableEh1CalcFields(TDataSet *DataSet)
{
//������ �����
    MemTableEh1no->Value = DataSet->RecNo;    
}
//---------------------------------------------------------------------------
void __fastcall Tinstr_history::DBGridEh1GetCellParams(TObject *Sender,
      TColumnEh *Column, TFont *AFont, TColor &Background,
      TGridDrawState State)
{
    int DataCol = Column->Index;
//������� ���������� ����� ����������
    if((MemTableEh1flag->AsInteger == 2) && (instr->user == 2)) {
        Background = 0x00AAFFAA;
        return;
    }
//������ ���������� ����� ����
    if((MemTableEh1flag->AsInteger == 1) && (instr->user == 2)) {
        Background = 0x00BBFFFF;
        return;
    }
//����� ���������� ����� (������)
    if((MemTableEh1flag->AsInteger == 4)) {
        Background = cl3DLight;
        return;
    }
//��������� ������ ������� 4,5 � 10
    if((DataCol == 4) || (DataCol == 5) || (DataCol == 10)) {
        Background = 0x0077EEEE;
    }
}
//---------------------------------------------------------------------------
