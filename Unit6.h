//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
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
#include <Db.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
#include "PrnDbgeh.hpp"
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class Tremont : public TForm
{
__published:	// IDE-managed Components
    TADOQuery *ADOQuery1;
    TDataSource *DataSource1;
    TDataSetDriverEh *DataSetDriverEh1;
    TMemTableEh *MemTableEh1;
    TDBGridEh *DBGridEh1;
    TAutoIncField *MemTableEh1id;
    TWideStringField *MemTableEh1chex;
    TWideStringField *MemTableEh1shifr_sto;
    TWideStringField *MemTableEh1shifr_ri;
    TWideStringField *MemTableEh1naim;
    TWideStringField *MemTableEh1kd_sto;
    TWideStringField *MemTableEh1kd_ri;
    TWideStringField *MemTableEh1vo_sto;
    TWideStringField *MemTableEh1vo_ri;
    TWideStringField *MemTableEh1normdo_sto;
    TWideStringField *MemTableEh1normdo_ri;
    TWideStringField *MemTableEh1normaft_sto;
    TWideStringField *MemTableEh1normaft_ri;
    TDateTimeField *MemTableEh1date_sto;
    TDateTimeField *MemTableEh1date_ri;
    TIntegerField *MemTableEh1number;
    TDBNavigator *DBNavigator1;
    TLabel *Label3;
    TEdit *Edit3;
    TButton *Button1;
    TButton *Button2;
    TPrintDBGridEh *PrintDBGridEh1;
    TButton *Button3;
    TPrintDialog *PrintDialog1;
    TWideStringField *MemTableEh1shifrrem_sto;
    TWideStringField *MemTableEh1shifrrem_ri;
    void __fastcall MemTableEh1CalcFields(TDataSet *DataSet);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall FormResize(TObject *Sender);
    void __fastcall DBGridEh1DrawColumnCell(TObject *Sender,
          const TRect &Rect, int DataCol, TColumnEh *Column,
          TGridDrawState State);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Edit3KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Button3Click(TObject *Sender);
    void __fastcall DBNavigator1Click(TObject *Sender,
          TNavigateBtn Button);
private:	// User declarations
public:		// User declarations
    __fastcall Tremont(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tremont *remont;
//---------------------------------------------------------------------------
#endif
