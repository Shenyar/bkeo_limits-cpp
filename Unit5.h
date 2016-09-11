//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Dialogs.hpp>
#include "DataDriverEh.hpp"
#include "DBGridEh.hpp"
#include "DBGridEhGrouping.hpp"
#include "GridsEh.hpp"
#include "MemTableDataEh.hpp"
#include "MemTableEh.hpp"
#include <Db.hpp>
#define TGridCoord Gridseh::TGridCoord
/*//для скролла колесом мыши таблицу
class THackDBGrid:public TDBGrid //Open protected properties
{__published:
__property OnMouseWheel;
};   */
//---------------------------------------------------------------------------
class Tfason : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TDBNavigator *DBNavigator1;
    TEdit *Edit1;
    TButton *Button1;
    TButton *Button2;
    TADOQuery *ADOQuery1;
    TDataSource *DataSource1;
    TAutoIncField *ADOQuery1id;
    TWideStringField *ADOQuery1shifr;
    TWideStringField *ADOQuery1naim;
    TIntegerField *ADOQuery1nomer;
    TWideStringField *ADOQuery1fpu;
    TIntegerField *ADOQuery1ostatok;
    TDateTimeField *ADOQuery1data;
    TDateTimeField *ADOQuery1dzap;
    TWideStringField *ADOQuery1peretoch;
    TWideStringField *ADOQuery1srednee;
    TEdit *Edit2;
    TLabel *Label2;
    TWideStringField *ADOQuery1chex;
    TWideStringField *ADOQuery1prim;
    TButton *Button3;
    TPrintDialog *PrintDialog1;
    TMemTableEh *MemTableEh1;
    TDataSetDriverEh *DataSetDriverEh1;
    TDBGridEh *DBGrid1;
    TAutoIncField *MemTableEh1id;
    TWideStringField *MemTableEh1shifr;
    TWideStringField *MemTableEh1naim;
    TIntegerField *MemTableEh1nomer;
    TWideStringField *MemTableEh1fpu;
    TIntegerField *MemTableEh1ostatok;
    TDateTimeField *MemTableEh1data;
    TDateTimeField *MemTableEh1dzap;
    TWideStringField *MemTableEh1peretoch;
    TWideStringField *MemTableEh1srednee;
    TWideStringField *MemTableEh1chex;
    TWideStringField *MemTableEh1prim;
    TIntegerField *MemTableEh1num;
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall FormResize(TObject *Sender);
    void __fastcall Edit2KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Edit1KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall DBNavigator1BeforeAction(TObject *Sender,
          TNavigateBtn Button);
    void __fastcall DBNavigator1Click(TObject *Sender,
          TNavigateBtn Button);
    void __fastcall Button3Click(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall MemTableEh1CalcFields(TDataSet *DataSet);
    void __fastcall MemTableEh1BeforeEdit(TDataSet *DataSet);
    void __fastcall MemTableEh1BeforePost(TDataSet *DataSet);
    void __fastcall MemTableEh1AfterInsert(TDataSet *DataSet);
    void __fastcall DBGrid1CellMouseClick(TCustomGridEh *Grid,
          TGridCoord &Cell, TMouseButton Button, TShiftState Shift, int X,
          int Y);
    void __fastcall MemTableEh1AfterEdit(TDataSet *DataSet);
private:	// User declarations
public:		// User declarations
    __fastcall Tfason(TComponent* Owner);
    AnsiString chex,shifr,naim,odshifr;
    int pos,repaint,row,col;
};
//---------------------------------------------------------------------------
extern PACKAGE Tfason *fason;
//---------------------------------------------------------------------------
#endif
