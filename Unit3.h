//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
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
#include <Dialogs.hpp>
#include "DBGridEh.hpp"
#include "DBGridEhGrouping.hpp"
#include "GridsEh.hpp"
#include "DataDriverEh.hpp"
#include "MemTableDataEh.hpp"
#include "MemTableEh.hpp" 
#include <Db.hpp>
#define TGridDrawState Gridseh::TGridDrawState 
#define TGridCoord Gridseh::TGridCoord
 /*
//для скролла колесом мыши таблицу
class THackDBGrid:public TDBGrid //Open protected properties
{__published:
__property OnMouseWheel;
};     */
//---------------------------------------------------------------------------
class Trash : public TForm
{
__published:	// IDE-managed Components
    TADOQuery *ADOQuery1;
    TDataSource *DataSource1;
    TDBNavigator *DBNavigator1;
    TAutoIncField *ADOQuery1id;
    TWideStringField *ADOQuery1shifr;
    TWideStringField *ADOQuery1kol;
    TWideStringField *ADOQuery1norm;
    TEdit *Edit1;
    TLabel *Label1;
    TButton *Button1;
    TButton *Button2;
    TDateTimeField *ADOQuery1docdate;
    TWideStringField *ADOQuery1ceh;
    TEdit *Edit2;
    TLabel *Label2;
    TADOQuery *ADOQuery2;
    TDataSource *DataSource2;
    TIntegerField *ADOQuery2Countid;
    TWideStringField *ADOQuery1ras_norm;
    TWideStringField *ADOQuery1tp;
    TWideStringField *ADOQuery1doc;
    TWideStringField *ADOQuery1dse;
    TPrintDialog *PrintDialog1;
    TButton *Button3;
    TCheckBox *CheckBox1;
    TLabel *Label3;
    TEdit *Edit3;
    TDBGridEh *DBGrid1;
    TMemTableEh *MemTableEh1;
    TDataSetDriverEh *DataSetDriverEh1;
    TAutoIncField *MemTableEh1id;
    TWideStringField *MemTableEh1shifr;
    TWideStringField *MemTableEh1kol;
    TWideStringField *MemTableEh1norm;
    TDateTimeField *MemTableEh1docdate;
    TWideStringField *MemTableEh1ceh;
    TWideStringField *MemTableEh1ras_norm;
    TWideStringField *MemTableEh1tp;
    TWideStringField *MemTableEh1doc;
    TWideStringField *MemTableEh1dse;
    TIntegerField *MemTableEh1number;
    TCheckBox *CheckBox2;
    TEdit *Edit4;
    TLabel *Label4;
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Edit1KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall FormResize(TObject *Sender);
    void __fastcall Button3Click(TObject *Sender);
    void __fastcall Edit3KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall DBNavigator1Click(TObject *Sender,
          TNavigateBtn Button);
    void __fastcall DBNavigator1BeforeAction(TObject *Sender,
          TNavigateBtn Button);
    void __fastcall DBGrid1KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall DBGrid1DrawColumnCell(TObject *Sender,
          const TRect &Rect, int DataCol, TColumnEh *Column,
          TGridDrawState State);
    void __fastcall MemTableEh1CalcFields(TDataSet *DataSet);
    void __fastcall MemTableEh1AfterInsert(TDataSet *DataSet);
    void __fastcall MemTableEh1BeforeEdit(TDataSet *DataSet);
    void __fastcall MemTableEh1BeforePost(TDataSet *DataSet);
    void __fastcall DBGrid1CellMouseClick(TCustomGridEh *Grid,
          TGridCoord &Cell, TMouseButton Button, TShiftState Shift, int X,
          int Y);
    void __fastcall CheckBox2Click(TObject *Sender);
    void __fastcall DBGrid1MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall DBGrid1MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
private:	// User declarations
public:		// User declarations
    __fastcall Trash(TComponent* Owner);
    int sort[2],can_drag;
    AnsiString chex,shifr,naim,odshifr,drag;
    int pos,repaint,row,col;
};
//---------------------------------------------------------------------------
extern PACKAGE Trash *rash;
//---------------------------------------------------------------------------
#endif
