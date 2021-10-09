﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "DemoReflection.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(demo::IStringResourceStrings)
			IMPL_CPP_TYPE_INFO(demo::MainWindow)
			IMPL_CPP_TYPE_INFO(demo::MainWindowConstructor)
			IMPL_CPP_TYPE_INFO(demo::StringResource)

#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
#define _ ,
			BEGIN_INTERFACE_MEMBER(::demo::IStringResourceStrings)
				CLASS_MEMBER_BASE(::vl::reflection::IDescriptable)
				CLASS_MEMBER_METHOD(Currency, { L"__vwsn_ls_0" })
				CLASS_MEMBER_METHOD(DateFormat, { L"__vwsn_ls_0" })
				CLASS_MEMBER_METHOD(Label, NO_PARAMETER)
				CLASS_MEMBER_METHOD(LongDate, { L"__vwsn_ls_0" })
				CLASS_MEMBER_METHOD(LongTime, { L"__vwsn_ls_0" })
				CLASS_MEMBER_METHOD(Number, { L"__vwsn_ls_0" })
				CLASS_MEMBER_METHOD(Sentence, { L"__vwsn_ls_0" })
				CLASS_MEMBER_METHOD(ShortDate, { L"__vwsn_ls_0" })
				CLASS_MEMBER_METHOD(ShortTime, { L"__vwsn_ls_0" })
				CLASS_MEMBER_METHOD(TimeFormat, { L"__vwsn_ls_0" })
				CLASS_MEMBER_METHOD(Title, NO_PARAMETER)
				CLASS_MEMBER_METHOD(YearMonthDate, { L"__vwsn_ls_0" })
			END_INTERFACE_MEMBER(::demo::IStringResourceStrings)

			BEGIN_CLASS_MEMBER(::demo::MainWindow)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiWindow)
				CLASS_MEMBER_BASE(::demo::MainWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::demo::MainWindow*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetLocaleIndex, { L"locale" })
				CLASS_MEMBER_METHOD(GetStrings, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetStrings, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(StringsChanged)
				CLASS_MEMBER_FIELD(__vwsn_prop_Strings)
				CLASS_MEMBER_PROPERTY_EVENT(Strings, GetStrings, SetStrings, StringsChanged)
				CLASS_MEMBER_FIELD(currency)
				CLASS_MEMBER_FIELD(dateTime)
				CLASS_MEMBER_FIELD(number)
			END_CLASS_MEMBER(::demo::MainWindow)

			BEGIN_CLASS_MEMBER(::demo::MainWindowConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::MainWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_demo_MainWindow_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_18)
				CLASS_MEMBER_FIELD(__vwsn_precompile_19)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_20)
				CLASS_MEMBER_FIELD(__vwsn_precompile_21)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(comboLocales)
				CLASS_MEMBER_FIELD(listLocales)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::MainWindowConstructor)

			BEGIN_CLASS_MEMBER(::demo::StringResource)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::StringResource>(), NO_PARAMETER)
				CLASS_MEMBER_STATIC_METHOD(__vwsn_ls_First, { L"__vwsn_ls_formats" })
				CLASS_MEMBER_STATIC_METHOD(Get, { L"__vwsn_ls_locale" })
			END_CLASS_MEMBER(::demo::StringResource)

#undef _
			class DemoTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::demo::IStringResourceStrings)
					ADD_TYPE_INFO(::demo::MainWindow)
					ADD_TYPE_INFO(::demo::MainWindowConstructor)
					ADD_TYPE_INFO(::demo::StringResource)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif
#endif

			bool LoadDemoTypes()
			{
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<DemoTypeLoader>());
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
