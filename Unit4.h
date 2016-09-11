//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tmenu : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TLabel *Label1;
    TPanel *Panel2;
    TLabel *Label5;
    TPanel *Panel3;
    TLabel *Label2;
    TPanel *Panel4;
    TLabel *Label3;
    TPanel *Panel5;
    TLabel *Label4;
    TPanel *Panel6;
    TLabel *Label6;
    void __fastcall Label1Click(TObject *Sender);
    void __fastcall Label5Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall Label2Click(TObject *Sender);
    void __fastcall Label3Click(TObject *Sender);
    void __fastcall Label4Click(TObject *Sender);
    void __fastcall Label6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall Tmenu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tmenu *menu;
//---------------------------------------------------------------------------
#endif
