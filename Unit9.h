//---------------------------------------------------------------------------

#ifndef Unit9H
#define Unit9H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "DataDriverEh.hpp"
#include "DBGridEh.hpp"
#include "DBGridEhGrouping.hpp"
#include "GridsEh.hpp"
#include "MemTableDataEh.hpp"
#include "MemTableEh.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include <Db.hpp>
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tinstr_history : public TForm
{
__published:	// IDE-managed Components
    TDBNavigator *DBNavigator1;
    TDBGridEh *DBGridEh1;
    TADOQuery *ADOQuery1;
    TAutoIncField *ADOQuery1id;
    TWideStringField *ADOQuery1shifr;
    TWideStringField *ADOQuery1iname;
    TWideStringField *ADOQuery1material;
    TWideStringField *ADOQuery1chex;
    TWideStringField *ADOQuery1dse;
    TWideStringField *ADOQuery1pvd;
    TWideStringField *ADOQuery1obrmat;
    TWideStringField *ADOQuery1actdate;
    TWideStringField *ADOQuery1vnedrdate;
    TWideStringField *ADOQuery1vnedrshifr;
    TWideStringField *ADOQuery1rezult;
    TWideStringField *ADOQuery1norm_do;
    TWideStringField *ADOQuery1norm_aft;
    TWideStringField *ADOQuery1vnedr_dse;
    TWideStringField *ADOQuery1dse_normdo;
    TWideStringField *ADOQuery1dse_normaft;
    TWideStringField *ADOQuery1prim;
    TWordField *ADOQuery1flag;
    TWideStringField *ADOQuery1date_doc;
    TDateTimeField *ADOQuery1vneseno;
    TDataSource *DataSource1;
    TMemTableEh *MemTableEh1;
    TAutoIncField *MemTableEh1id;
    TWideStringField *MemTableEh1shifr;
    TWideStringField *MemTableEh1iname;
    TWideStringField *MemTableEh1material;
    TWideStringField *MemTableEh1chex;
    TWideStringField *MemTableEh1dse;
    TWideStringField *MemTableEh1pvd;
    TWideStringField *MemTableEh1obrmat;
    TWideStringField *MemTableEh1actdate;
    TWideStringField *MemTableEh1vnedrdate;
    TWideStringField *MemTableEh1vnedrshifr;
    TWideStringField *MemTableEh1rezult;
    TWideStringField *MemTableEh1norm_do;
    TWideStringField *MemTableEh1norm_aft;
    TWideStringField *MemTableEh1prim;
    TWordField *MemTableEh1flag;
    TWideStringField *MemTableEh1vnedr_dse;
    TWideStringField *MemTableEh1dse_normdo;
    TWideStringField *MemTableEh1dse_normaft;
    TWideStringField *MemTableEh1date_doc;
    TIntegerField *MemTableEh1no;
    TDateTimeField *MemTableEh1vneseno;
    TDataSetDriverEh *DataSetDriverEh1;
    void __fastcall MemTableEh1CalcFields(TDataSet *DataSet);
    void __fastcall DBGridEh1GetCellParams(TObject *Sender,
          TColumnEh *Column, TFont *AFont, TColor &Background,
          TGridDrawState State);
private:	// User declarations
public:		// User declarations
    __fastcall Tinstr_history(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tinstr_history *instr_history;
//---------------------------------------------------------------------------
#endif
