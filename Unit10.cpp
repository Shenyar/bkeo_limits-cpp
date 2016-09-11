//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit10.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBGridEh"
#pragma link "DBGridEhGrouping"
#pragma link "GridsEh"
#pragma resource "*.dfm"
Tinstrum_dse *instrum_dse;
//---------------------------------------------------------------------------
__fastcall Tinstrum_dse::Tinstrum_dse(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tinstrum_dse::ADOQuery1AfterInsert(TDataSet *DataSet)
{
//link record with selected 'shifr'
    ADOQuery1instr_shifr_id->AsInteger = instr->MemTableEh1id->AsInteger;
}
//---------------------------------------------------------------------------
