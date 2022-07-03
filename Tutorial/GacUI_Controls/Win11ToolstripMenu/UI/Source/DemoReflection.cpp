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
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
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
			IMPL_CPP_TYPE_INFO(demo::MainWindow)
			IMPL_CPP_TYPE_INFO(demo::MainWindowConstructor)
			IMPL_CPP_TYPE_INFO(demo::MenuToolBarControlTemplate)
			IMPL_CPP_TYPE_INFO(demo::MenuToolBarControlTemplateConstructor)

#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
#define _ ,
			BEGIN_CLASS_MEMBER(::demo::MainWindow)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiWindow)
				CLASS_MEMBER_BASE(::demo::MainWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::demo::MainWindow*(), NO_PARAMETER)
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
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(commandCopy)
				CLASS_MEMBER_FIELD(commandCut)
				CLASS_MEMBER_FIELD(commandDelete)
				CLASS_MEMBER_FIELD(commandExportHtml)
				CLASS_MEMBER_FIELD(commandExportPrivate)
				CLASS_MEMBER_FIELD(commandExportRtf)
				CLASS_MEMBER_FIELD(commandPaste)
				CLASS_MEMBER_FIELD(commandRedo)
				CLASS_MEMBER_FIELD(commandUndo)
				CLASS_MEMBER_FIELD(menuEdit)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::MainWindowConstructor)

			BEGIN_CLASS_MEMBER(::demo::MenuToolBarControlTemplate)
				CLASS_MEMBER_BASE(::vl::presentation::templates::GuiControlTemplate)
				CLASS_MEMBER_BASE(::demo::MenuToolBarControlTemplateConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::demo::MenuToolBarControlTemplate*(), NO_PARAMETER)
			END_CLASS_MEMBER(::demo::MenuToolBarControlTemplate)

			BEGIN_CLASS_MEMBER(::demo::MenuToolBarControlTemplateConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::MenuToolBarControlTemplateConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_demo_MenuToolBarControlTemplate_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
			END_CLASS_MEMBER(::demo::MenuToolBarControlTemplateConstructor)

#undef _
			class DemoTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::demo::MainWindow)
					ADD_TYPE_INFO(::demo::MainWindowConstructor)
					ADD_TYPE_INFO(::demo::MenuToolBarControlTemplate)
					ADD_TYPE_INFO(::demo::MenuToolBarControlTemplateConstructor)
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
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif
