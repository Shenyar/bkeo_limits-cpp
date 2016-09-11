// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EhLibMTE.pas' rev: 6.00

#ifndef EhLibMTEHPP
#define EhLibMTEHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Classes.hpp>	// Pascal unit
#include <ToolCtrlsEh.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DataDriverEh.hpp>	// Pascal unit
#include <MemTableDataEh.hpp>	// Pascal unit
#include <MemTableEh.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <DBGridEh.hpp>	// Pascal unit
#include <DbUtilsEh.hpp>	// Pascal unit
#include <EhLibVCL.hpp>	// Pascal unit
#include <Variants.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ehlibmte
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TMTEDatasetFeaturesEh;
class PASCALIMPLEMENTATION TMTEDatasetFeaturesEh : public Dbutilseh::TSQLDatasetFeaturesEh 
{
	typedef Dbutilseh::TSQLDatasetFeaturesEh inherited;
	
protected:
	Memtabledataeh::TMemRecViewEh* FBaseNode;
	
public:
	__fastcall virtual TMTEDatasetFeaturesEh(void);
	virtual bool __fastcall LocateText(Dbgrideh::TCustomDBGridEh* AGrid, const AnsiString FieldName, const AnsiString Text, Toolctrlseh::TLocateTextOptionsEh AOptions, Toolctrlseh::TLocateTextDirectionEh Direction, Toolctrlseh::TLocateTextMatchingEh Matching, Toolctrlseh::TLocateTextTreeFindRangeEh TreeFindRange);
	virtual void __fastcall ApplyFilter(System::TObject* Sender, Db::TDataSet* DataSet, bool IsReopen);
	virtual void __fastcall ApplySorting(System::TObject* Sender, Db::TDataSet* DataSet, bool IsReopen);
	virtual void __fastcall ExecuteFindDialog(System::TObject* Sender, AnsiString Text, AnsiString FieldName, bool Modal);
	virtual void __fastcall FillSTFilterListDataValues(Dbgrideh::TCustomDBGridEh* AGrid, Dbgrideh::TColumnEh* Column, Classes::TStrings* Items);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TMTEDatasetFeaturesEh(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool SortInView;
extern PACKAGE AnsiString __fastcall WrapFieldName(AnsiString FieldName);

}	/* namespace Ehlibmte */
using namespace Ehlibmte;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EhLibMTE
