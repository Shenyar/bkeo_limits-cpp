//---------------------------------------------------------------------------

#ifndef Unit10H
#define Unit10H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "DBGridEh.hpp"
#include "DBGridEhGrouping.hpp"
#include "GridsEh.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tinstrum_dse : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TLabel *Label2;
    TDataSource *DataSource1;
    TADOQuery *ADOQuery1;
    TAutoIncField *ADOQuery1id;
    TIntegerField *ADOQuery1instr_shifr_id;
    TWideStringField *ADOQuery1vnedr_dse;
    TWideStringField *ADOQuery1dse_normdo;
    TWideStringField *ADOQuery1dse_normaft;
    TWideStringField *ADOQuery1prim;
    TDBGridEh *DBGridEh1;
    TDBNavigator *DBNavigator1;
    void __fastcall ADOQuery1AfterInsert(TDataSet *DataSet);
private:	// User declarations
public:		// User declarations
    __fastcall Tinstrum_dse(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tinstrum_dse *instrum_dse;
//---------------------------------------------------------------------------
#endif
