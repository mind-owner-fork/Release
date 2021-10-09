﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES

#include "GacUI.h"

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

namespace vl_workflow_global
{
	struct __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
}

namespace demo
{
	class MainWindowConstructor;
	class MainWindow;

	class MainWindowConstructor : public ::vl::Object, public ::vl::reflection::Description<MainWindowConstructor>
	{
		friend struct ::vl_workflow_global::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindowConstructor>;
#endif
	protected:
		::demo::MainWindow* self;
		::vl::presentation::controls::GuiToolstripButton* menuItems;
		::vl::presentation::controls::GuiTextList* checkList;
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_0;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_1;
		::vl::presentation::controls::GuiToolstripMenuBar* __vwsn_precompile_2;
		::vl::presentation::controls::GuiToolstripMenu* __vwsn_precompile_3;
		::vl::presentation::controls::GuiToolstripButton* __vwsn_precompile_4;
		::vl::presentation::controls::GuiToolstripButton* __vwsn_precompile_5;
		::vl::presentation::controls::GuiToolstripButton* __vwsn_precompile_6;
		::vl::presentation::controls::GuiToolstripButton* __vwsn_precompile_7;
		::vl::presentation::controls::GuiToolstripButton* __vwsn_precompile_8;
		::vl::presentation::controls::GuiToolstripButton* __vwsn_precompile_9;
		::vl::presentation::controls::GuiToolstripButton* __vwsn_precompile_10;
		::vl::presentation::controls::GuiToolstripButton* __vwsn_precompile_11;
		::vl::presentation::controls::GuiToolstripButton* __vwsn_precompile_12;
		::vl::presentation::controls::GuiToolstripButton* __vwsn_precompile_13;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_14;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_15;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_16;
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_17;
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_18;
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_19;
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_20;
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_21;
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_22;
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_23;
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_24;
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_25;
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_26;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_27;
		void __vwsn_demo_MainWindow_Initialize(::demo::MainWindow* __vwsn_this_);
	public:
		MainWindowConstructor();
	};

	class MainWindow : public ::vl::presentation::controls::GuiWindow, public ::demo::MainWindowConstructor, public ::vl::reflection::Description<MainWindow>
	{
		friend class ::demo::MainWindowConstructor;
		friend struct ::vl_workflow_global::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindow>;
#endif
	public:
		MainWindow();
		~MainWindow();
	};

}
/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class Demo
	{
	public:

		static Demo& Instance();
	};

/***********************************************************************
Closures
***********************************************************************/

	struct __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_
	{
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiItemEventArgs* arguments) const;
	};
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
