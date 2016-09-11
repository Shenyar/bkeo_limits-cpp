//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
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
//---------------------------------------------------------------------------
class Tzamena : public TForm
{
__published:	// IDE-managed Components
    TMemTableEh *MemTableEh1;
    TDataSetDriverEh *DataSetDriverEh1;
    TDataSource *DataSource1;
    TADOQuery *ADOQuery1;
    TAutoIncField *ADOQuery1id;
    TWideStringField *ADOQuery1shifr;
    TWideStringField *ADOQuery1obrmat;
    TWideStringField *ADOQuery1mat_ch;
    TWideStringField *ADOQuery1mat_zam;
    TWideStringField *ADOQuery1group;
    TLabel *Label3;
    TEdit *Edit3;
    TButton *Button1;
    TButton *Button2;
    TDBNavigator *DBNavigator1;
    TAutoIncField *MemTableEh1id;
    TWideStringField *MemTableEh1shifr;
    TWideStringField *MemTableEh1obrmat;
    TWideStringField *MemTableEh1mat_ch;
    TWideStringField *MemTableEh1mat_zam;
    TWideStringField *MemTableEh1group;
    TIntegerField *MemTableEh1no;
    TDBGridEh *DBGridEh1;
    TWideStringField *ADOQuery1prim;
    TWideStringField *MemTableEh1prim;
    TIntegerField *ADOQuery1chex;
    TIntegerField *MemTableEh1chex;
    TButton *Button3;
    TPrintDBGridEh *PrintDBGridEh1;
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormResize(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Edit3KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall MemTableEh1CalcFields(TDataSet *DataSet);
    void __fastcall DBGridEh1MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
    void __fastcall DBGridEh1MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall Tzamena(TComponent* Owner);
    AnsiString mov;
    int mov_can;
};
//---------------------------------------------------------------------------
extern PACKAGE Tzamena *zamena;
//---------------------------------------------------------------------------
#endif
