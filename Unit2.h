//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
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
#include <DB.hpp>
#include "PrnDbgeh.hpp"
#define TGridDrawState Gridseh::TGridDrawState 
#define TGridCoord Gridseh::TGridCoord
//для скролла колесом мыши таблицу
class THackDBGrid:public TDBGrid //Open protected properties
{__published:
__property OnMouseWheel;
};
//---------------------------------------------------------------------------
class Tinstr : public TForm
{
__published:	// IDE-managed Components
    TADOQuery *ADOQuery1;
    TDataSource *DataSource1;
    TDBNavigator *DBNavigator1;
    TEdit *Edit1;
    TLabel *Label1;
    TButton *Button1;
    TButton *Button2;
    TButton *Button3;
    TMemTableEh *MemTableEh1;
    TDataSetDriverEh *DataSetDriverEh1;
    TDBGridEh *DBGridEh1;
    TLabel *Label2;
    TEdit *Edit2;
    TButton *Button4;
    TButton *Button5;
    TButton *Button6;
    TPrintDBGridEh *PrintDBGridEh1;
    TPrintDialog *PrintDialog1;
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
    TDateTimeField *MemTableEh1vneseno;
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Edit1KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall FormResize(TObject *Sender);
    void __fastcall Edit3KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall MemTableEh1BeforePost(TDataSet *DataSet);
    void __fastcall Button4Click(TObject *Sender);
    void __fastcall Button5Click(TObject *Sender);
    void __fastcall MemTableEh1AfterPost(TDataSet *DataSet);
    void __fastcall DBNavigator1Click(TObject *Sender,
          TNavigateBtn Button);
    void __fastcall DBGridEh1KeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall MemTableEh1CalcFields(TDataSet *DataSet);
    void __fastcall DBGridEh1GetCellParams(TObject *Sender,
          TColumnEh *Column, TFont *AFont, TColor &Background,
          TGridDrawState State);
    void __fastcall DBGridEh1ColExit(TObject *Sender);
    void __fastcall DBGridEh1MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall MemTableEh1AfterEdit(TDataSet *DataSet);
    void __fastcall Button3Click(TObject *Sender);
    void __fastcall DBGridEh1KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall DBGridEh1DrawColumnCell(TObject *Sender,
          const TRect &Rect, int DataCol, TColumnEh *Column,
          TGridDrawState State);
    void __fastcall Button6Click(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall MemTableEh1BeforeEdit(TDataSet *DataSet);
    void __fastcall DBGridEh1DblClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall Tinstr(TComponent* Owner);
    int user,CanBeforePost;
    AnsiString normDoOld,normAftOld;
};
//---------------------------------------------------------------------------
extern PACKAGE Tinstr *instr;
//---------------------------------------------------------------------------
#endif
