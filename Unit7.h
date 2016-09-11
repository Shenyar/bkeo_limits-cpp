//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
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
#include "PrnDbgeh.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include <Db.hpp>
#include <DBCtrls.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tkarty : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label3;
    TDBGridEh *DBGridEh1;
    TDBNavigator *DBNavigator1;
    TEdit *Edit3;
    TButton *Button1;
    TButton *Button2;
    TButton *Button3;
    TADOQuery *ADOQuery1;
    TDataSource *DataSource1;
    TDataSetDriverEh *DataSetDriverEh1;
    TMemTableEh *MemTableEh1;
    TPrintDBGridEh *PrintDBGridEh1;
    TPrintDialog *PrintDialog1;
    TAutoIncField *MemTableEh1id;
    TIntegerField *MemTableEh1num_kart;
    TWideStringField *MemTableEh1shifr;
    TWideStringField *MemTableEh1chex;
    TIntegerField *MemTableEh1kol_ri;
    TWideStringField *MemTableEh1mat_kd;
    TWideStringField *MemTableEh1mat_kart;
    TIntegerField *MemTableEh1kol_soglas;
    TDateTimeField *MemTableEh1data_ri;
    TWideStringField *MemTableEh1rezult;
    TIntegerField *MemTableEh1npp;
    TWideStringField *MemTableEh1family;
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall MemTableEh1CalcFields(TDataSet *DataSet);
    void __fastcall FormResize(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Edit3KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall DBNavigator1Click(TObject *Sender,
          TNavigateBtn Button);
    void __fastcall Button3Click(TObject *Sender);
    void __fastcall DBGridEh1DrawColumnCell(TObject *Sender,
          const TRect &Rect, int DataCol, TColumnEh *Column,
          TGridDrawState State);
    void __fastcall MemTableEh1BeforeInsert(TDataSet *DataSet);
    void __fastcall MemTableEh1AfterInsert(TDataSet *DataSet);
    void __fastcall DBGridEh1MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
    void __fastcall DBGridEh1MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall MemTableEh1BeforePost(TDataSet *DataSet);
private:	// User declarations
public:		// User declarations
    __fastcall Tkarty(TComponent* Owner);
    int temp_no;
    AnsiString mov;
    int mov_can;
};
//---------------------------------------------------------------------------
extern PACKAGE Tkarty *karty;
//---------------------------------------------------------------------------
#endif
