﻿// CodeGear C++Builder
// Copyright (c) 1995, 2018 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FrameStand.pas' rev: 33.00 (Windows)

#ifndef FramestandHPP
#define FramestandHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Threading.hpp>
#include <System.Rtti.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <SubjectStand.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Framestand
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS FrameStandAttribute;
class DELPHICLASS FrameInfoAttribute;
template<typename T> class DELPHICLASS TFrameInfo__1;
class DELPHICLASS TFrameStand;
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TFrameClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION FrameStandAttribute : public Subjectstand::ContextAttribute
{
	typedef Subjectstand::ContextAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall FrameStandAttribute() : Subjectstand::ContextAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~FrameStandAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION FrameInfoAttribute : public Subjectstand::ContextAttribute
{
	typedef Subjectstand::ContextAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall FrameInfoAttribute() : Subjectstand::ContextAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~FrameInfoAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TFrameInfo__1 : public Subjectstand::TSubjectInfo
{
	typedef Subjectstand::TSubjectInfo inherited;
	
private:
	T FFrame;
	bool FFrameIsOwned;
	TFrameStand* __fastcall GetFrameStand();
	
protected:
	virtual Fmx::Types::TFmxObject* __fastcall GetSubject();
	virtual void __fastcall SetSubject(Fmx::Types::TFmxObject* const Value);
	virtual bool __fastcall GetSubjectIsOwned();
	virtual void __fastcall SetSubjectIsOwned(const bool Value);
	virtual void __fastcall InjectContextAttribute(Subjectstand::ContextAttribute* const AAttribute, System::Rtti::TRttiField* const AField, const System::TClass AFieldClassType);
	
public:
	__fastcall virtual TFrameInfo__1(TFrameStand* const AFrameStand, const T AFrame, Fmx::Types::TFmxObject* const AParent, const System::UnicodeString AStandStyleName);
	System::Threading::_di_ITask __fastcall Show _DEPRECATED_ATTRIBUTE0 (const System::DelphiInterface<System::Sysutils::TProc__1<TFrameInfo__1<T>*> > ABackgroundTask = (System::DelphiInterface<System::Sysutils::TProc__1<TFrameInfo__1<T>*> >)(0x0), const System::DelphiInterface<System::Sysutils::TProc__1<TFrameInfo__1<T>*> > AOnTaskComplete = (System::DelphiInterface<System::Sysutils::TProc__1<TFrameInfo__1<T>*> >)(0x0), const bool AOnTaskCompleteSynchronized = true)/* overload */;
	void __fastcall Show()/* overload */;
	__property bool FrameIsOwned = {read=FFrameIsOwned, write=FFrameIsOwned, nodefault};
	__property T Frame = {read=FFrame};
	__property TFrameStand* FrameStand = {read=GetFrameStand};
public:
	/* TSubjectInfo.Destroy */ inline __fastcall virtual ~TFrameInfo__1() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TOnGetFrameClassEvent)(TFrameStand* const ASender, Fmx::Types::TFmxObject* &AParent, System::UnicodeString &AStandStyleName, TFrameClass &AFrameClass);

class PASCALIMPLEMENTATION TFrameStand : public Subjectstand::TSubjectStand
{
	typedef Subjectstand::TSubjectStand inherited;
	
private:
	TOnGetFrameClassEvent FOnGetFrameClass;
	System::Generics::Collections::TList__1<Fmx::Forms::TFrame*>* FVisibleFrames;
	
protected:
	System::Generics::Collections::TObjectDictionary__2<Fmx::Forms::TFrame*,TFrameInfo__1<Fmx::Forms::TFrame*>*>* FFrameInfos;
	virtual int __fastcall GetCount();
	template<typename T> TFrameClass __fastcall GetFrameClass(Fmx::Types::TFmxObject* &AParent, System::UnicodeString &AStandStyleName);
	virtual void __fastcall DoAfterHide(Subjectstand::TSubjectStand* const ASender, Subjectstand::TSubjectInfo* const ASubjectInfo);
	virtual void __fastcall DoBeforeShow(Subjectstand::TSubjectStand* const ASender, Subjectstand::TSubjectInfo* const ASubjectInfo);
	virtual void __fastcall DoClose(Fmx::Types::TFmxObject* const ASubject);
	
public:
	__fastcall virtual TFrameStand(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFrameStand();
	Fmx::Forms::TFrame* __fastcall LastShownFrame();
	virtual void __fastcall Remove(Fmx::Types::TFmxObject* ASubject);
	virtual void __fastcall CloseAll(const System::DynamicArray<System::TClass> ARestrictTo)/* overload */;
	virtual void __fastcall CloseAllExcept(const System::DynamicArray<System::TClass> AExceptions)/* overload */;
	virtual void __fastcall HideAndCloseAll(const System::DynamicArray<System::TClass> ARestrictTo)/* overload */;
	virtual void __fastcall HideAndCloseAllExcept(const System::DynamicArray<System::TClass> AExceptions)/* overload */;
	TFrameInfo__1<Fmx::Forms::TFrame*>* __fastcall FrameInfo(Fmx::Forms::TFrame* const AFrame)/* overload */;
	TFrameInfo__1<Fmx::Forms::TFrame*>* __fastcall FrameInfo(const TFrameClass AFrameClass)/* overload */;
	template<typename T> TFrameInfo__1<T>* __fastcall FrameInfo()/* overload */;
	template<typename T> TFrameInfo__1<T>* __fastcall GetFrameInfo(const bool ANewIfNotFound = true, Fmx::Types::TFmxObject* const AParent = (Fmx::Types::TFmxObject*)(0x0), const System::UnicodeString AStandStyleName = System::UnicodeString());
	template<typename T> TFrameInfo__1<T>* __fastcall Use(const T AFrame, Fmx::Types::TFmxObject* const AParent = (Fmx::Types::TFmxObject*)(0x0), const System::UnicodeString AStandStyleName = System::UnicodeString());
	template<typename T> TFrameInfo__1<T>* __fastcall New(Fmx::Types::TFmxObject* const AParent = (Fmx::Types::TFmxObject*)(0x0), const System::UnicodeString AStandStyleName = System::UnicodeString());
	__property System::Generics::Collections::TObjectDictionary__2<Fmx::Forms::TFrame*,TFrameInfo__1<Fmx::Forms::TFrame*>*>* FrameInfos = {read=FFrameInfos};
	__property System::Generics::Collections::TList__1<Fmx::Forms::TFrame*>* VisibleFrames = {read=FVisibleFrames};
	
__published:
	__property TOnGetFrameClassEvent OnGetSubjectClass = {read=FOnGetFrameClass, write=FOnGetFrameClass};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  CloseAll(){ Subjectstand::TSubjectStand::CloseAll(); }
	inline void __fastcall  CloseAll(const System::TClass ARestrictTo){ Subjectstand::TSubjectStand::CloseAll(ARestrictTo); }
	inline void __fastcall  CloseAllExcept(const System::TClass AException){ Subjectstand::TSubjectStand::CloseAllExcept(AException); }
	inline void __fastcall  HideAndCloseAll(){ Subjectstand::TSubjectStand::HideAndCloseAll(); }
	inline void __fastcall  HideAndCloseAll(const System::TClass ARestrictTo){ Subjectstand::TSubjectStand::HideAndCloseAll(ARestrictTo); }
	inline void __fastcall  HideAndCloseAllExcept(const System::TClass AException){ Subjectstand::TSubjectStand::HideAndCloseAllExcept(AException); }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Framestand */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FRAMESTAND)
using namespace Framestand;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FramestandHPP
