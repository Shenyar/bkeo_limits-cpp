//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", auth);
USEFORM("Unit2.cpp", instr);
USEFORM("Unit3.cpp", rash);
USEFORM("Unit4.cpp", menu);
USEFORM("Unit5.cpp", fason);
USEFORM("Unit6.cpp", remont);
USEFORM("Unit7.cpp", karty);
USEFORM("Unit8.cpp", zamena);
USEFORM("Unit9.cpp", instr_history);
USEFORM("Unit10.cpp", instrum_dse);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
         Application->Initialize();
         Application->CreateForm(__classid(Tauth), &auth);
         Application->CreateForm(__classid(Tinstr), &instr);
         Application->CreateForm(__classid(Trash), &rash);
         Application->CreateForm(__classid(Tmenu), &menu);
         Application->CreateForm(__classid(Tfason), &fason);
         Application->CreateForm(__classid(Tremont), &remont);
         Application->CreateForm(__classid(Tkarty), &karty);
         Application->CreateForm(__classid(Tzamena), &zamena);
         Application->CreateForm(__classid(Tinstr_history), &instr_history);
         Application->CreateForm(__classid(Tinstrum_dse), &instrum_dse);
         Application->Run();
    }
    catch (Exception &exception)
    {
         Application->ShowException(&exception);
    }
    catch (...)
    {
         try
         {
             throw Exception("");
         }
         catch (Exception &exception)
         {
             Application->ShowException(&exception);
         }
    }
    return 0;
}
//---------------------------------------------------------------------------
