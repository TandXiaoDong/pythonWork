// NOTE: The following line conatains a tag indicating a bugfix. Do not remove it!
// BugFix {C4246A91-D7E5-11d3-8355-00105ABE320B}
// NOTE: The following line conatains a tag indicating a bugfix. Do not remove it!
// BugFix {C4246A91-D7E5-11d3-8355-00105ABE320C}
// Machine generated IDispatch wrapper class(es) created with ClassWizard

#include "stdafx.h"
#include "incacom.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif



#define GETIDOFNAME( name )	CString Member( #name ); \
	OLECHAR FAR* szMember = (OLECHAR *) Member.AllocSysString(); \
	DISPID	dispid; \
	m_lpDispatch->GetIDsOfNames( IID_NULL , &szMember , 1 , LOCALE_SYSTEM_DEFAULT , &dispid ); \
	::SysFreeString( szMember );


/////////////////////////////////////////////////////////////////////////////
// DataBaseItem_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// DataBaseItem_Dispatch operations

LPDISPATCH DataBaseItem_Dispatch::Copy(LPCTSTR name)
{GETIDOFNAME(Copy) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH DataBaseItem_Dispatch::CopyToFolder(LPCTSTR name, LPDISPATCH dispatch_folder)
{GETIDOFNAME(CopyToFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_folder);
	return result;
}

BOOL DataBaseItem_Dispatch::ExportToFile(LPCTSTR fileName, BOOL multipleFiles, BOOL reference)
{GETIDOFNAME(ExportToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, multipleFiles, reference);
	return result;
}

BOOL DataBaseItem_Dispatch::GetAccessRightApplication()
{GETIDOFNAME(GetAccessRightApplication) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::GetAccessRightCodeGeneration()
{GETIDOFNAME(GetAccessRightCodeGeneration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::GetAccessRightExecute()
{GETIDOFNAME(GetAccessRightExecute) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::GetAccessRightRead()
{GETIDOFNAME(GetAccessRightRead) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::GetAccessRightWrite()
{GETIDOFNAME(GetAccessRightWrite) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT DataBaseItem_Dispatch::GetAllReferecedDataBaseItems()
{GETIDOFNAME(GetAllReferecedDataBaseItems) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString DataBaseItem_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::GetDisallowImport()
{GETIDOFNAME(GetDisallowImport) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString DataBaseItem_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString DataBaseItem_Dispatch::GetNameWithPath()
{GETIDOFNAME(GetNameWithPath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString DataBaseItem_Dispatch::GetOID()
{GETIDOFNAME(GetOID) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataBaseItem_Dispatch::GetParentFolder()
{GETIDOFNAME(GetParentFolder) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString DataBaseItem_Dispatch::GetType()
{GETIDOFNAME(GetType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsAsap2CanDB()
{GETIDOFNAME(IsAsap2CanDB) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsAsap2Catalog()
{GETIDOFNAME(IsAsap2Catalog) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsAsap2Item()
{GETIDOFNAME(IsAsap2Item) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsAsap2Project()
{GETIDOFNAME(IsAsap2Project) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsAsap2ProjectFolder()
{GETIDOFNAME(IsAsap2ProjectFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsAscetContainer()
{GETIDOFNAME(IsAscetContainer) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsAscetFolder()
{GETIDOFNAME(IsAscetFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsAscetNetwork()
{GETIDOFNAME(IsAscetNetwork) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsAscetProject()
{GETIDOFNAME(IsAscetProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsAscetProtocol()
{GETIDOFNAME(IsAscetProtocol) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsClass()
{GETIDOFNAME(IsClass) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsCodeComponent()
{GETIDOFNAME(IsCodeComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsComponent()
{GETIDOFNAME(IsComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsConditionalTable()
{GETIDOFNAME(IsConditionalTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsCTBlock()
{GETIDOFNAME(IsCTBlock) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsCTComponent()
{GETIDOFNAME(IsCTComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsDataSet()
{GETIDOFNAME(IsDataSet) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsDiscreteComponent()
{GETIDOFNAME(IsDiscreteComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsEnumeration()
{GETIDOFNAME(IsEnumeration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsExperimentEnvironment()
{GETIDOFNAME(IsExperimentEnvironment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsODXProject()
{GETIDOFNAME(IsODXProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsFolder()
{GETIDOFNAME(IsFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsFunctionalComponent()
{GETIDOFNAME(IsFunctionalComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsHardwareConfiguration()
{GETIDOFNAME(IsHardwareConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsIcon()
{GETIDOFNAME(IsIcon) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsIncaFolder()
{GETIDOFNAME(IsIncaFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsModule()
{GETIDOFNAME(IsModule) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsProject()
{GETIDOFNAME(IsProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsSignal()
{GETIDOFNAME(IsSignal) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsStateMachine()
{GETIDOFNAME(IsStateMachine) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::Move(LPDISPATCH dispatch_folder)
{GETIDOFNAME(Move) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_folder);
	return result;
}

BOOL DataBaseItem_Dispatch::SetAccessRightApplication(BOOL aBool)
{GETIDOFNAME(SetAccessRightApplication) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL DataBaseItem_Dispatch::SetAccessRightCodeGeneration(BOOL aBool)
{GETIDOFNAME(SetAccessRightCodeGeneration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL DataBaseItem_Dispatch::SetAccessRightExecute(BOOL aBool)
{GETIDOFNAME(SetAccessRightExecute) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL DataBaseItem_Dispatch::SetAccessRightRead(BOOL aBool)
{GETIDOFNAME(SetAccessRightRead) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL DataBaseItem_Dispatch::SetAccessRightWrite(BOOL aBool)
{GETIDOFNAME(SetAccessRightWrite) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL DataBaseItem_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

BOOL DataBaseItem_Dispatch::SetDisallowImport(BOOL aBool)
{GETIDOFNAME(SetDisallowImport) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL DataBaseItem_Dispatch::SetName(LPCTSTR aName)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH DataBaseItem_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DataBaseItem_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString DataBaseItem_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBaseItem_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long DataBaseItem_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Component_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Component_Dispatch operations

BOOL Component_Dispatch::AddTextSegment(LPCTSTR textSegment, const VARIANT& views)
{GETIDOFNAME(AddTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		textSegment, &views);
	return result;
}

BOOL Component_Dispatch::AssignViewToTextSegment(LPCTSTR View, LPCTSTR textSegment)
{GETIDOFNAME(AssignViewToTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		View, textSegment);
	return result;
}

BOOL Component_Dispatch::DeAssignViewFromTextSegment(LPCTSTR View, LPCTSTR textSegment)
{GETIDOFNAME(DeAssignViewFromTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		View, textSegment);
	return result;
}

LPDISPATCH Component_Dispatch::Edit()
{GETIDOFNAME(Edit) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Component_Dispatch::EditInFront()
{GETIDOFNAME(EditInFront) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Component_Dispatch::GetConfiguration()
{GETIDOFNAME(GetConfiguration) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Component_Dispatch::GetDate()
{GETIDOFNAME(GetDate) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Component_Dispatch::GetNoteForTextSegment(LPCTSTR textSegment)
{GETIDOFNAME(GetNoteForTextSegment) 
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		textSegment);
	return result;
}

VARIANT Component_Dispatch::GetTextSegments()
{GETIDOFNAME(GetTextSegments) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString Component_Dispatch::GetVersion()
{GETIDOFNAME(GetVersion) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT Component_Dispatch::GetViewsForTextSegment(LPCTSTR textSegment)
{GETIDOFNAME(GetViewsForTextSegment) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		textSegment);
	return result;
}

BOOL Component_Dispatch::IsComponent()
{GETIDOFNAME(IsComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsEdition()
{GETIDOFNAME(IsEdition) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsVersion()
{GETIDOFNAME(IsVersion) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::RemoveTextSegment(LPCTSTR textSegment)
{GETIDOFNAME(RemoveTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		textSegment);
	return result;
}

BOOL Component_Dispatch::ResetVersion()
{GETIDOFNAME(ResetVersion) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::SetConfiguration(LPCTSTR configuration)
{GETIDOFNAME(SetConfiguration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		configuration);
	return result;
}

BOOL Component_Dispatch::SetEdition()
{GETIDOFNAME(SetEdition) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::SetNoteForTextSegment(LPCTSTR noteText, LPCTSTR textSegment)
{GETIDOFNAME(SetNoteForTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		noteText, textSegment);
	return result;
}

BOOL Component_Dispatch::SetVersion(LPCTSTR version)
{GETIDOFNAME(SetVersion) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		version);
	return result;
}

LPDISPATCH Component_Dispatch::Copy(LPCTSTR name)
{GETIDOFNAME(Copy) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH Component_Dispatch::CopyToFolder(LPCTSTR name, LPDISPATCH dispatch_folder)
{GETIDOFNAME(CopyToFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_folder);
	return result;
}

BOOL Component_Dispatch::ExportToFile(LPCTSTR fileName, BOOL multipleFiles, BOOL reference)
{GETIDOFNAME(ExportToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, multipleFiles, reference);
	return result;
}

BOOL Component_Dispatch::GetAccessRightApplication()
{GETIDOFNAME(GetAccessRightApplication) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::GetAccessRightCodeGeneration()
{GETIDOFNAME(GetAccessRightCodeGeneration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::GetAccessRightExecute()
{GETIDOFNAME(GetAccessRightExecute) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::GetAccessRightRead()
{GETIDOFNAME(GetAccessRightRead) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::GetAccessRightWrite()
{GETIDOFNAME(GetAccessRightWrite) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT Component_Dispatch::GetAllReferecedDataBaseItems()
{GETIDOFNAME(GetAllReferecedDataBaseItems) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString Component_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::GetDisallowImport()
{GETIDOFNAME(GetDisallowImport) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString Component_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Component_Dispatch::GetNameWithPath()
{GETIDOFNAME(GetNameWithPath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Component_Dispatch::GetOID()
{GETIDOFNAME(GetOID) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH Component_Dispatch::GetParentFolder()
{GETIDOFNAME(GetParentFolder) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Component_Dispatch::GetType()
{GETIDOFNAME(GetType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsAsap2CanDB()
{GETIDOFNAME(IsAsap2CanDB) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsAsap2Catalog()
{GETIDOFNAME(IsAsap2Catalog) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsAsap2Item()
{GETIDOFNAME(IsAsap2Item) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsAsap2Project()
{GETIDOFNAME(IsAsap2Project) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsAsap2ProjectFolder()
{GETIDOFNAME(IsAsap2ProjectFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsAscetContainer()
{GETIDOFNAME(IsAscetContainer) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsAscetFolder()
{GETIDOFNAME(IsAscetFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsAscetNetwork()
{GETIDOFNAME(IsAscetNetwork) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsAscetProject()
{GETIDOFNAME(IsAscetProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsAscetProtocol()
{GETIDOFNAME(IsAscetProtocol) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsClass()
{GETIDOFNAME(IsClass) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsCodeComponent()
{GETIDOFNAME(IsCodeComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsConditionalTable()
{GETIDOFNAME(IsConditionalTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsCTBlock()
{GETIDOFNAME(IsCTBlock) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsCTComponent()
{GETIDOFNAME(IsCTComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsDataSet()
{GETIDOFNAME(IsDataSet) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsDiscreteComponent()
{GETIDOFNAME(IsDiscreteComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsEnumeration()
{GETIDOFNAME(IsEnumeration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsExperimentEnvironment()
{GETIDOFNAME(IsExperimentEnvironment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsODXProject()
{GETIDOFNAME(IsODXProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsFolder()
{GETIDOFNAME(IsFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsFunctionalComponent()
{GETIDOFNAME(IsFunctionalComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsHardwareConfiguration()
{GETIDOFNAME(IsHardwareConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsIcon()
{GETIDOFNAME(IsIcon) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsIncaFolder()
{GETIDOFNAME(IsIncaFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsModule()
{GETIDOFNAME(IsModule) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsProject()
{GETIDOFNAME(IsProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsSignal()
{GETIDOFNAME(IsSignal) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsStateMachine()
{GETIDOFNAME(IsStateMachine) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::Move(LPDISPATCH dispatch_folder)
{GETIDOFNAME(Move) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_folder);
	return result;
}

BOOL Component_Dispatch::SetAccessRightApplication(BOOL aBool)
{GETIDOFNAME(SetAccessRightApplication) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Component_Dispatch::SetAccessRightCodeGeneration(BOOL aBool)
{GETIDOFNAME(SetAccessRightCodeGeneration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Component_Dispatch::SetAccessRightExecute(BOOL aBool)
{GETIDOFNAME(SetAccessRightExecute) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Component_Dispatch::SetAccessRightRead(BOOL aBool)
{GETIDOFNAME(SetAccessRightRead) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Component_Dispatch::SetAccessRightWrite(BOOL aBool)
{GETIDOFNAME(SetAccessRightWrite) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Component_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

BOOL Component_Dispatch::SetDisallowImport(BOOL aBool)
{GETIDOFNAME(SetDisallowImport) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Component_Dispatch::SetName(LPCTSTR aName)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH Component_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Component_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Component_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Component_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Component_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// HardwareConfiguration_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// HardwareConfiguration_Dispatch operations

LPDISPATCH HardwareConfiguration_Dispatch::AddDevice(LPDISPATCH dispatch_dev)
{GETIDOFNAME(AddDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		dispatch_dev);
	return result;
}

LPDISPATCH HardwareConfiguration_Dispatch::AddDeviceToSystem(LPDISPATCH dispatch_dev, LPDISPATCH dispatch_sys)
{GETIDOFNAME(AddDeviceToSystem) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		dispatch_dev, dispatch_sys);
	return result;
}

LPDISPATCH HardwareConfiguration_Dispatch::AddSubDevice(LPDISPATCH dispatch_dev)
{GETIDOFNAME(AddSubDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		dispatch_dev);
	return result;
}

LPDISPATCH HardwareConfiguration_Dispatch::AddSubDeviceToDevice(LPDISPATCH dispatch_devDes, LPDISPATCH dispatch_dev)
{GETIDOFNAME(AddSubDeviceToDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		dispatch_devDes, dispatch_dev);
	return result;
}

LPDISPATCH HardwareConfiguration_Dispatch::AddSubDeviceToSystem(LPDISPATCH dispatch_dev, LPDISPATCH dispatch_sys)
{GETIDOFNAME(AddSubDeviceToSystem) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		dispatch_dev, dispatch_sys);
	return result;
}

VARIANT HardwareConfiguration_Dispatch::GetAllSystems()
{GETIDOFNAME(GetAllSystems) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH HardwareConfiguration_Dispatch::GetAssignedExperimentEnvironment()
{GETIDOFNAME(GetAssignedExperimentEnvironment) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HardwareConfiguration_Dispatch::GetSystem(LPCTSTR aName)
{GETIDOFNAME(GetSystem) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		aName);
	return result;
}

BOOL HardwareConfiguration_Dispatch::HasAssignedExperimentEnvironment()
{GETIDOFNAME(HasAssignedExperimentEnvironment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::InitializeHardware()
{GETIDOFNAME(InitializeHardware) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsHardwareConfiguration()
{GETIDOFNAME(IsHardwareConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::RemoveDevice(LPDISPATCH dispatch_dev)
{GETIDOFNAME(RemoveDevice) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_dev);
	return result;
}

BOOL HardwareConfiguration_Dispatch::RemoveSubDevice(LPDISPATCH dispatch_dev)
{GETIDOFNAME(RemoveSubDevice) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_dev);
	return result;
}

BOOL HardwareConfiguration_Dispatch::RemoveSystem(LPDISPATCH dispatch_sys)
{GETIDOFNAME(RemoveSystem) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_sys);
	return result;
}

BOOL HardwareConfiguration_Dispatch::SetExperimentEnvironment(LPDISPATCH dispatch_ee)
{GETIDOFNAME(SetExperimentEnvironment) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_ee);
	return result;
}

BOOL HardwareConfiguration_Dispatch::AddTextSegment(LPCTSTR textSegment, const VARIANT& views)
{GETIDOFNAME(AddTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		textSegment, &views);
	return result;
}

BOOL HardwareConfiguration_Dispatch::AssignViewToTextSegment(LPCTSTR View, LPCTSTR textSegment)
{GETIDOFNAME(AssignViewToTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		View, textSegment);
	return result;
}

BOOL HardwareConfiguration_Dispatch::DeAssignViewFromTextSegment(LPCTSTR View, LPCTSTR textSegment)
{GETIDOFNAME(DeAssignViewFromTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		View, textSegment);
	return result;
}

LPDISPATCH HardwareConfiguration_Dispatch::Edit()
{GETIDOFNAME(Edit) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HardwareConfiguration_Dispatch::EditInFront()
{GETIDOFNAME(EditInFront) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString HardwareConfiguration_Dispatch::GetConfiguration()
{GETIDOFNAME(GetConfiguration) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString HardwareConfiguration_Dispatch::GetDate()
{GETIDOFNAME(GetDate) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString HardwareConfiguration_Dispatch::GetNoteForTextSegment(LPCTSTR textSegment)
{GETIDOFNAME(GetNoteForTextSegment) 
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		textSegment);
	return result;
}

VARIANT HardwareConfiguration_Dispatch::GetTextSegments()
{GETIDOFNAME(GetTextSegments) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString HardwareConfiguration_Dispatch::GetVersion()
{GETIDOFNAME(GetVersion) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT HardwareConfiguration_Dispatch::GetViewsForTextSegment(LPCTSTR textSegment)
{GETIDOFNAME(GetViewsForTextSegment) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		textSegment);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsComponent()
{GETIDOFNAME(IsComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsEdition()
{GETIDOFNAME(IsEdition) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsVersion()
{GETIDOFNAME(IsVersion) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::RemoveTextSegment(LPCTSTR textSegment)
{GETIDOFNAME(RemoveTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		textSegment);
	return result;
}

BOOL HardwareConfiguration_Dispatch::ResetVersion()
{GETIDOFNAME(ResetVersion) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::SetConfiguration(LPCTSTR configuration)
{GETIDOFNAME(SetConfiguration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		configuration);
	return result;
}

BOOL HardwareConfiguration_Dispatch::SetEdition()
{GETIDOFNAME(SetEdition) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::SetNoteForTextSegment(LPCTSTR noteText, LPCTSTR textSegment)
{GETIDOFNAME(SetNoteForTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		noteText, textSegment);
	return result;
}

BOOL HardwareConfiguration_Dispatch::SetVersion(LPCTSTR version)
{GETIDOFNAME(SetVersion) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		version);
	return result;
}

LPDISPATCH HardwareConfiguration_Dispatch::Copy(LPCTSTR name)
{GETIDOFNAME(Copy) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH HardwareConfiguration_Dispatch::CopyToFolder(LPCTSTR name, LPDISPATCH dispatch_folder)
{GETIDOFNAME(CopyToFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_folder);
	return result;
}

BOOL HardwareConfiguration_Dispatch::ExportToFile(LPCTSTR fileName, BOOL multipleFiles, BOOL reference)
{GETIDOFNAME(ExportToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, multipleFiles, reference);
	return result;
}

BOOL HardwareConfiguration_Dispatch::GetAccessRightApplication()
{GETIDOFNAME(GetAccessRightApplication) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::GetAccessRightCodeGeneration()
{GETIDOFNAME(GetAccessRightCodeGeneration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::GetAccessRightExecute()
{GETIDOFNAME(GetAccessRightExecute) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::GetAccessRightRead()
{GETIDOFNAME(GetAccessRightRead) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::GetAccessRightWrite()
{GETIDOFNAME(GetAccessRightWrite) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT HardwareConfiguration_Dispatch::GetAllReferecedDataBaseItems()
{GETIDOFNAME(GetAllReferecedDataBaseItems) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString HardwareConfiguration_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::GetDisallowImport()
{GETIDOFNAME(GetDisallowImport) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString HardwareConfiguration_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString HardwareConfiguration_Dispatch::GetNameWithPath()
{GETIDOFNAME(GetNameWithPath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString HardwareConfiguration_Dispatch::GetOID()
{GETIDOFNAME(GetOID) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH HardwareConfiguration_Dispatch::GetParentFolder()
{GETIDOFNAME(GetParentFolder) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString HardwareConfiguration_Dispatch::GetType()
{GETIDOFNAME(GetType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsAsap2CanDB()
{GETIDOFNAME(IsAsap2CanDB) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsAsap2Catalog()
{GETIDOFNAME(IsAsap2Catalog) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsAsap2Item()
{GETIDOFNAME(IsAsap2Item) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsAsap2Project()
{GETIDOFNAME(IsAsap2Project) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsAsap2ProjectFolder()
{GETIDOFNAME(IsAsap2ProjectFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsAscetContainer()
{GETIDOFNAME(IsAscetContainer) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsAscetFolder()
{GETIDOFNAME(IsAscetFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsAscetNetwork()
{GETIDOFNAME(IsAscetNetwork) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsAscetProject()
{GETIDOFNAME(IsAscetProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsAscetProtocol()
{GETIDOFNAME(IsAscetProtocol) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsClass()
{GETIDOFNAME(IsClass) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsCodeComponent()
{GETIDOFNAME(IsCodeComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsConditionalTable()
{GETIDOFNAME(IsConditionalTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsCTBlock()
{GETIDOFNAME(IsCTBlock) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsCTComponent()
{GETIDOFNAME(IsCTComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsDataSet()
{GETIDOFNAME(IsDataSet) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsDiscreteComponent()
{GETIDOFNAME(IsDiscreteComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsEnumeration()
{GETIDOFNAME(IsEnumeration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsExperimentEnvironment()
{GETIDOFNAME(IsExperimentEnvironment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsODXProject()
{GETIDOFNAME(IsODXProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsFolder()
{GETIDOFNAME(IsFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsFunctionalComponent()
{GETIDOFNAME(IsFunctionalComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsIcon()
{GETIDOFNAME(IsIcon) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsIncaFolder()
{GETIDOFNAME(IsIncaFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsModule()
{GETIDOFNAME(IsModule) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsProject()
{GETIDOFNAME(IsProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsSignal()
{GETIDOFNAME(IsSignal) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsStateMachine()
{GETIDOFNAME(IsStateMachine) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::Move(LPDISPATCH dispatch_folder)
{GETIDOFNAME(Move) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_folder);
	return result;
}

BOOL HardwareConfiguration_Dispatch::SetAccessRightApplication(BOOL aBool)
{GETIDOFNAME(SetAccessRightApplication) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL HardwareConfiguration_Dispatch::SetAccessRightCodeGeneration(BOOL aBool)
{GETIDOFNAME(SetAccessRightCodeGeneration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL HardwareConfiguration_Dispatch::SetAccessRightExecute(BOOL aBool)
{GETIDOFNAME(SetAccessRightExecute) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL HardwareConfiguration_Dispatch::SetAccessRightRead(BOOL aBool)
{GETIDOFNAME(SetAccessRightRead) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL HardwareConfiguration_Dispatch::SetAccessRightWrite(BOOL aBool)
{GETIDOFNAME(SetAccessRightWrite) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL HardwareConfiguration_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

BOOL HardwareConfiguration_Dispatch::SetDisallowImport(BOOL aBool)
{GETIDOFNAME(SetDisallowImport) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL HardwareConfiguration_Dispatch::SetName(LPCTSTR aName)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH HardwareConfiguration_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long HardwareConfiguration_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString HardwareConfiguration_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HardwareConfiguration_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long HardwareConfiguration_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CarbResponse_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CarbResponse_Dispatch operations

VARIANT CarbResponse_Dispatch::EcuIds()
{GETIDOFNAME(EcuIds) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH CarbResponse_Dispatch::GetResponseForEcuId(long ecuId)
{GETIDOFNAME(GetResponseForEcuId) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		ecuId);
	return result;
}

BOOL CarbResponse_Dispatch::IsError()
{GETIDOFNAME(IsError) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CarbResponse_Dispatch::NumberOfResponses()
{GETIDOFNAME(NumberOfResponses) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Asap2Element_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Asap2Element_Dispatch operations

CString Asap2Element_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2Element_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Element_Dispatch::Remove()
{GETIDOFNAME(Remove) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Element_Dispatch::Rename(LPCTSTR name)
{GETIDOFNAME(Rename) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL Asap2Element_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

long Asap2Element_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2Element_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Element_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Element_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Element_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Element_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Element_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Element_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Element_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Element_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Asap2Element_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Asap2Grouping_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Asap2Grouping_Dispatch operations

VARIANT Asap2Grouping_Dispatch::GetAllCharacteristics()
{GETIDOFNAME(GetAllCharacteristics) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Grouping_Dispatch::GetAllDefinedCharacteristics()
{GETIDOFNAME(GetAllDefinedCharacteristics) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Grouping_Dispatch::GetAllLabels()
{GETIDOFNAME(GetAllLabels) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Grouping_Dispatch::GetAllMeasurements()
{GETIDOFNAME(GetAllMeasurements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Grouping_Dispatch::GetAllReferencedCharacteristics()
{GETIDOFNAME(GetAllReferencedCharacteristics) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL Asap2Grouping_Dispatch::IsRoot()
{GETIDOFNAME(IsRoot) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString Asap2Grouping_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2Grouping_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Grouping_Dispatch::Remove()
{GETIDOFNAME(Remove) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Grouping_Dispatch::Rename(LPCTSTR name)
{GETIDOFNAME(Rename) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL Asap2Grouping_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

long Asap2Grouping_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2Grouping_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Grouping_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Grouping_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Grouping_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Grouping_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Grouping_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Grouping_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Grouping_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Grouping_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Asap2Grouping_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Asap2Function_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Asap2Function_Dispatch operations

VARIANT Asap2Function_Dispatch::GetAllInputMeasurements()
{GETIDOFNAME(GetAllInputMeasurements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Function_Dispatch::GetAllLocalMeasurements()
{GETIDOFNAME(GetAllLocalMeasurements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Function_Dispatch::GetAllOutputMeasurements()
{GETIDOFNAME(GetAllOutputMeasurements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Function_Dispatch::GetAllSubFunctions()
{GETIDOFNAME(GetAllSubFunctions) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString Asap2Function_Dispatch::GetFunctionVersion()
{GETIDOFNAME(GetFunctionVersion) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Function_Dispatch::GetAllCharacteristics()
{GETIDOFNAME(GetAllCharacteristics) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Function_Dispatch::GetAllDefinedCharacteristics()
{GETIDOFNAME(GetAllDefinedCharacteristics) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Function_Dispatch::GetAllLabels()
{GETIDOFNAME(GetAllLabels) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Function_Dispatch::GetAllMeasurements()
{GETIDOFNAME(GetAllMeasurements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Function_Dispatch::GetAllReferencedCharacteristics()
{GETIDOFNAME(GetAllReferencedCharacteristics) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL Asap2Function_Dispatch::IsRoot()
{GETIDOFNAME(IsRoot) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString Asap2Function_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2Function_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Function_Dispatch::Remove()
{GETIDOFNAME(Remove) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Function_Dispatch::Rename(LPCTSTR name)
{GETIDOFNAME(Rename) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL Asap2Function_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

long Asap2Function_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2Function_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Function_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Function_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Function_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Function_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Function_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Function_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Function_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Function_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Asap2Function_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// DataBase_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// DataBase_Dispatch operations

LPDISPATCH DataBase_Dispatch::AddFolder(LPCTSTR folderName)
{GETIDOFNAME(AddFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		folderName);
	return result;
}

VARIANT DataBase_Dispatch::BrowseItem(LPCTSTR itemName)
{GETIDOFNAME(BrowseItem) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		itemName);
	return result;
}

VARIANT DataBase_Dispatch::BrowseItemInFolder(LPCTSTR itemName, LPCTSTR folderName)
{GETIDOFNAME(BrowseItemInFolder) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		itemName, folderName);
	return result;
}

BOOL DataBase_Dispatch::Close()
{GETIDOFNAME(Close) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataBase_Dispatch::DisableAutoCommit()
{GETIDOFNAME(DisableAutoCommit) 
	InvokeHelper( dispid , DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void DataBase_Dispatch::EnableAutoCommit()
{GETIDOFNAME(EnableAutoCommit) 
	InvokeHelper( dispid , DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL DataBase_Dispatch::ExportToFile(const VARIANT& items, LPCTSTR aFilePath, BOOL multipleFiles, BOOL withReferences)
{GETIDOFNAME(ExportToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&items, aFilePath, multipleFiles, withReferences);
	return result;
}

VARIANT DataBase_Dispatch::GetAllFolders()
{GETIDOFNAME(GetAllFolders) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataBase_Dispatch::GetFolder(LPCTSTR folderName)
{GETIDOFNAME(GetFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		folderName);
	return result;
}

LPDISPATCH DataBase_Dispatch::GetItem(LPCTSTR itemName)
{GETIDOFNAME(GetItem) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		itemName);
	return result;
}

LPDISPATCH DataBase_Dispatch::GetItemForOID(LPCTSTR oid)
{GETIDOFNAME(GetItemForOID) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		oid);
	return result;
}

LPDISPATCH DataBase_Dispatch::GetItemInFolder(LPCTSTR itemName, LPCTSTR folderName)
{GETIDOFNAME(GetItemInFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		itemName, folderName);
	return result;
}

CString DataBase_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long DataBase_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString DataBase_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL DataBase_Dispatch::ImportFromFile(LPCTSTR aFileName, BOOL overwriteFlag, BOOL discardImplFlag)
{GETIDOFNAME(ImportFromFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aFileName, overwriteFlag, discardImplFlag);
	return result;
}

VARIANT DataBase_Dispatch::ImportItemsFromFile(LPCTSTR aFileName, BOOL overwriteFlag, BOOL discardImplFlag)
{GETIDOFNAME(ImportItemsFromFile) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		aFileName, overwriteFlag, discardImplFlag);
	return result;
}

BOOL DataBase_Dispatch::IsAscetDataBase()
{GETIDOFNAME(IsAscetDataBase) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBase_Dispatch::IsDataBase()
{GETIDOFNAME(IsDataBase) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBase_Dispatch::IsIncaDataBase()
{GETIDOFNAME(IsIncaDataBase) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBase_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBase_Dispatch::Remove(LPDISPATCH dispatch_aFolderItem, BOOL recursive)
{GETIDOFNAME(Remove) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_aFolderItem, recursive);
	return result;
}

BOOL DataBase_Dispatch::Save()
{GETIDOFNAME(Save) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataBase_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long DataBase_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ExperimentDataItem_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// ExperimentDataItem_Dispatch operations

BOOL ExperimentDataItem_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString ExperimentDataItem_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long ExperimentDataItem_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString ExperimentDataItem_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDataItem_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long ExperimentDataItem_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationDataItem_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationDataItem_Dispatch operations

long CalibrationDataItem_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationDataItem_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationDataItem_Dispatch::GetCalibrationHardBoundMax()
{GETIDOFNAME(GetCalibrationHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDataItem_Dispatch::GetCalibrationHardBoundMin()
{GETIDOFNAME(GetCalibrationHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDataItem_Dispatch::GetCalibrationImplHardBoundMax()
{GETIDOFNAME(GetCalibrationImplHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDataItem_Dispatch::GetCalibrationImplHardBoundMin()
{GETIDOFNAME(GetCalibrationImplHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDataItem_Dispatch::GetCalibrationImplMinIncrement()
{GETIDOFNAME(GetCalibrationImplMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDataItem_Dispatch::GetCalibrationImplWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDataItem_Dispatch::GetCalibrationImplWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDataItem_Dispatch::GetCalibrationMinIncrement()
{GETIDOFNAME(GetCalibrationMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDataItem_Dispatch::GetCalibrationWeakBoundMax()
{GETIDOFNAME(GetCalibrationWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDataItem_Dispatch::GetCalibrationWeakBoundMin()
{GETIDOFNAME(GetCalibrationWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::SetWeakBoundtoHardBound()
{GETIDOFNAME(SetWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationDataItem_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationDataItem_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationDataItem_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDataItem_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationDataItem_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationReadOnlyArray_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationReadOnlyArray_Dispatch operations

VARIANT CalibrationReadOnlyArray_Dispatch::GetBooleanImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetBooleanImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationReadOnlyArray_Dispatch::GetBooleanPhysValue()
{GETIDOFNAME(GetBooleanPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationReadOnlyArray_Dispatch::GetDoubleImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetDoubleImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationReadOnlyArray_Dispatch::GetDoublePhysValue()
{GETIDOFNAME(GetDoublePhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationReadOnlyArray_Dispatch::GetDoublePhysValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetDoublePhysValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationReadOnlyArray_Dispatch::GetFloatImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetFloatImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationReadOnlyArray_Dispatch::GetFloatPhysValue()
{GETIDOFNAME(GetFloatPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationReadOnlyArray_Dispatch::GetFloatPhysValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetFloatPhysValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

CString CalibrationReadOnlyArray_Dispatch::GetImplType()
{GETIDOFNAME(GetImplType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationReadOnlyArray_Dispatch::GetImplValue()
{GETIDOFNAME(GetImplValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationReadOnlyArray_Dispatch::GetIntegerImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetIntegerImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationReadOnlyArray_Dispatch::GetIntegerPhysValue()
{GETIDOFNAME(GetIntegerPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationReadOnlyArray_Dispatch::GetLongImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetLongImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationReadOnlyArray_Dispatch::GetLongPhysValue()
{GETIDOFNAME(GetLongPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long CalibrationReadOnlyArray_Dispatch::GetMaxSize()
{GETIDOFNAME(GetMaxSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationReadOnlyArray_Dispatch::GetPhysType()
{GETIDOFNAME(GetPhysType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationReadOnlyArray_Dispatch::GetSize()
{GETIDOFNAME(GetSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsWriteProtected()
{GETIDOFNAME(IsWriteProtected) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CalibrationReadOnlyArray_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationReadOnlyArray_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyArray_Dispatch::GetCalibrationHardBoundMax()
{GETIDOFNAME(GetCalibrationHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyArray_Dispatch::GetCalibrationHardBoundMin()
{GETIDOFNAME(GetCalibrationHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyArray_Dispatch::GetCalibrationImplHardBoundMax()
{GETIDOFNAME(GetCalibrationImplHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyArray_Dispatch::GetCalibrationImplHardBoundMin()
{GETIDOFNAME(GetCalibrationImplHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyArray_Dispatch::GetCalibrationImplMinIncrement()
{GETIDOFNAME(GetCalibrationImplMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyArray_Dispatch::GetCalibrationImplWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyArray_Dispatch::GetCalibrationImplWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyArray_Dispatch::GetCalibrationMinIncrement()
{GETIDOFNAME(GetCalibrationMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyArray_Dispatch::GetCalibrationWeakBoundMax()
{GETIDOFNAME(GetCalibrationWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyArray_Dispatch::GetCalibrationWeakBoundMin()
{GETIDOFNAME(GetCalibrationWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::SetWeakBoundtoHardBound()
{GETIDOFNAME(SetWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationReadOnlyArray_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationReadOnlyArray_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationReadOnlyArray_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyArray_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationReadOnlyArray_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationArrayData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationArrayData_Dispatch operations

BOOL CalibrationArrayData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::SetBooleanImplValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetBooleanImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationArrayData_Dispatch::SetBooleanPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetBooleanPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationArrayData_Dispatch::SetDoubleImplValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetDoubleImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationArrayData_Dispatch::SetDoublePhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetDoublePhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationArrayData_Dispatch::SetDoublePhysValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetDoublePhysValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationArrayData_Dispatch::SetFloatImplValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetFloatImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationArrayData_Dispatch::SetFloatPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetFloatPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationArrayData_Dispatch::SetFloatPhysValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetFloatPhysValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationArrayData_Dispatch::SetImplValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetImplValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationArrayData_Dispatch::SetIntegerImplValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetIntegerImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationArrayData_Dispatch::SetIntegerPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetIntegerPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationArrayData_Dispatch::SetLongImplValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetLongImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationArrayData_Dispatch::SetLongPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetLongPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationArrayData_Dispatch::SetSize(long size)
{GETIDOFNAME(SetSize) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		size);
	return result;
}

VARIANT CalibrationArrayData_Dispatch::GetBooleanImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetBooleanImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationArrayData_Dispatch::GetBooleanPhysValue()
{GETIDOFNAME(GetBooleanPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationArrayData_Dispatch::GetDoubleImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetDoubleImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationArrayData_Dispatch::GetDoublePhysValue()
{GETIDOFNAME(GetDoublePhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationArrayData_Dispatch::GetDoublePhysValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetDoublePhysValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationArrayData_Dispatch::GetFloatImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetFloatImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationArrayData_Dispatch::GetFloatPhysValue()
{GETIDOFNAME(GetFloatPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationArrayData_Dispatch::GetFloatPhysValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetFloatPhysValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

CString CalibrationArrayData_Dispatch::GetImplType()
{GETIDOFNAME(GetImplType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationArrayData_Dispatch::GetImplValue()
{GETIDOFNAME(GetImplValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationArrayData_Dispatch::GetIntegerImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetIntegerImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationArrayData_Dispatch::GetIntegerPhysValue()
{GETIDOFNAME(GetIntegerPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationArrayData_Dispatch::GetLongImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetLongImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationArrayData_Dispatch::GetLongPhysValue()
{GETIDOFNAME(GetLongPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long CalibrationArrayData_Dispatch::GetMaxSize()
{GETIDOFNAME(GetMaxSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationArrayData_Dispatch::GetPhysType()
{GETIDOFNAME(GetPhysType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationArrayData_Dispatch::GetSize()
{GETIDOFNAME(GetSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsWriteProtected()
{GETIDOFNAME(IsWriteProtected) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CalibrationArrayData_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationArrayData_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationArrayData_Dispatch::GetCalibrationHardBoundMax()
{GETIDOFNAME(GetCalibrationHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationArrayData_Dispatch::GetCalibrationHardBoundMin()
{GETIDOFNAME(GetCalibrationHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationArrayData_Dispatch::GetCalibrationImplHardBoundMax()
{GETIDOFNAME(GetCalibrationImplHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationArrayData_Dispatch::GetCalibrationImplHardBoundMin()
{GETIDOFNAME(GetCalibrationImplHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationArrayData_Dispatch::GetCalibrationImplMinIncrement()
{GETIDOFNAME(GetCalibrationImplMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationArrayData_Dispatch::GetCalibrationImplWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationArrayData_Dispatch::GetCalibrationImplWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationArrayData_Dispatch::GetCalibrationMinIncrement()
{GETIDOFNAME(GetCalibrationMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationArrayData_Dispatch::GetCalibrationWeakBoundMax()
{GETIDOFNAME(GetCalibrationWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationArrayData_Dispatch::GetCalibrationWeakBoundMin()
{GETIDOFNAME(GetCalibrationWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::SetWeakBoundtoHardBound()
{GETIDOFNAME(SetWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationArrayData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationArrayData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationArrayData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationArrayData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationArrayData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// DriveRecorderAction_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// DriveRecorderAction_Dispatch operations

CString DriveRecorderAction_Dispatch::GetLabel()
{GETIDOFNAME(GetLabel) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString DriveRecorderAction_Dispatch::GetDescriptionText()
{GETIDOFNAME(GetDescriptionText) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString DriveRecorderAction_Dispatch::GetCategoryLabel()
{GETIDOFNAME(GetCategoryLabel) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL DriveRecorderAction_Dispatch::GetDefaultValueIsResultLoggingEnabled()
{GETIDOFNAME(GetDefaultValueIsResultLoggingEnabled) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DriveRecorderAction_Dispatch::BeginFireNonBlockingAction(BOOL IsResultLoggingEnabled, LPCTSTR AbsoluteLogFilePathFileNamePrefix)
{GETIDOFNAME(BeginFireNonBlockingAction) 
	static BYTE parms[] =
		VTS_BOOL VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 IsResultLoggingEnabled, AbsoluteLogFilePathFileNamePrefix);
}


/////////////////////////////////////////////////////////////////////////////
// EtasCDMToolbox_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// EtasCDMToolbox_Dispatch operations

BOOL EtasCDMToolbox_Dispatch::ActivateDestination(LPCTSTR aCompleteDatasetPath, BOOL aFlag)
{GETIDOFNAME(ActivateDestination) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aCompleteDatasetPath, aFlag);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::AddAllLabelsToList()
{GETIDOFNAME(AddAllLabelsToList) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::AddDestinationDataSet(LPCTSTR aCompleteDatasetPath)
{GETIDOFNAME(AddDestinationDataSet) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aCompleteDatasetPath);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::AddDestinationFile(LPCTSTR aFileName)
{GETIDOFNAME(AddDestinationFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aFileName);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::AddLabelsFromFileToList(LPCTSTR aFileName)
{GETIDOFNAME(AddLabelsFromFileToList) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aFileName);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::AddLabelsToList(const VARIANT& aLabelNameList)
{GETIDOFNAME(AddLabelsToList) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&aLabelNameList);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::AddLabelsToListUsingMask(LPCTSTR aMask)
{GETIDOFNAME(AddLabelsToListUsingMask) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aMask);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::Compare()
{GETIDOFNAME(Compare) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::Copy()
{GETIDOFNAME(Copy) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::ExchangeSourceWithDestination(LPCTSTR aCompleteDatasetPath)
{GETIDOFNAME(ExchangeSourceWithDestination) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aCompleteDatasetPath);
	return result;
}

CString EtasCDMToolbox_Dispatch::GetDifferenceFileName()
{GETIDOFNAME(GetDifferenceFileName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString EtasCDMToolbox_Dispatch::GetErrorFileName()
{GETIDOFNAME(GetErrorFileName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString EtasCDMToolbox_Dispatch::GetMissingLabelFileName()
{GETIDOFNAME(GetMissingLabelFileName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString EtasCDMToolbox_Dispatch::GetNewLabelFileName()
{GETIDOFNAME(GetNewLabelFileName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long EtasCDMToolbox_Dispatch::GetNumberOfDiffLabels()
{GETIDOFNAME(GetNumberOfDiffLabels) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long EtasCDMToolbox_Dispatch::GetNumberOfErrors()
{GETIDOFNAME(GetNumberOfErrors) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long EtasCDMToolbox_Dispatch::GetNumberOfMissingLabels()
{GETIDOFNAME(GetNumberOfMissingLabels) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long EtasCDMToolbox_Dispatch::GetNumberOfNewLabels()
{GETIDOFNAME(GetNumberOfNewLabels) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long EtasCDMToolbox_Dispatch::GetNumberOfWarnings()
{GETIDOFNAME(GetNumberOfWarnings) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString EtasCDMToolbox_Dispatch::GetOutputFileName()
{GETIDOFNAME(GetOutputFileName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString EtasCDMToolbox_Dispatch::GetWarningFileName()
{GETIDOFNAME(GetWarningFileName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::List()
{GETIDOFNAME(List) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::ListInDCMFormatToFile(LPCTSTR aFileName)
{GETIDOFNAME(ListInDCMFormatToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aFileName);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::LoadCDMConfigurationFromFile(LPCTSTR aFileName)
{GETIDOFNAME(LoadCDMConfigurationFromFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aFileName);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::LoadLabelListFromFile(LPCTSTR aFileName)
{GETIDOFNAME(LoadLabelListFromFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aFileName);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::ReadLabelListFromFile(LPCTSTR aFileName)
{GETIDOFNAME(ReadLabelListFromFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aFileName);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::RemoveAllDestinations()
{GETIDOFNAME(RemoveAllDestinations) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::RemoveAllLabelsFromList()
{GETIDOFNAME(RemoveAllLabelsFromList) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::RemoveLabelsFromList(const VARIANT& aLabelNameList)
{GETIDOFNAME(RemoveLabelsFromList) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&aLabelNameList);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::RemoveLabelsFromListUsingMask(LPCTSTR aMask)
{GETIDOFNAME(RemoveLabelsFromListUsingMask) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aMask);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::RemoveSource()
{GETIDOFNAME(RemoveSource) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::SaveCDMConfigurationToFile(LPCTSTR aFileName)
{GETIDOFNAME(SaveCDMConfigurationToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aFileName);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::SaveLabelListToFile(LPCTSTR aFileName)
{GETIDOFNAME(SaveLabelListToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aFileName);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::SetDestinationDataSet(LPCTSTR aCompleteDatasetPath)
{GETIDOFNAME(SetDestinationDataSet) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aCompleteDatasetPath);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::SetOutputFormat(LPCTSTR anOutputFormat)
{GETIDOFNAME(SetOutputFormat) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		anOutputFormat);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::SetResultFilePath(LPCTSTR aPath)
{GETIDOFNAME(SetResultFilePath) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aPath);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::SetResultFilePrefix(LPCTSTR aPath)
{GETIDOFNAME(SetResultFilePrefix) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aPath);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::SetSourceDataSet(LPCTSTR aCompleteDatasetPath)
{GETIDOFNAME(SetSourceDataSet) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aCompleteDatasetPath);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::SetSourceFile(LPCTSTR aFileName)
{GETIDOFNAME(SetSourceFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aFileName);
	return result;
}

long EtasCDMToolbox_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString EtasCDMToolbox_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL EtasCDMToolbox_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long EtasCDMToolbox_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Asap2CompuMethod_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Asap2CompuMethod_Dispatch operations

CString Asap2CompuMethod_Dispatch::GetConversionType()
{GETIDOFNAME(GetConversionType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2CompuMethod_Dispatch::GetType()
{GETIDOFNAME(GetType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2CompuMethod_Dispatch::GetUnit()
{GETIDOFNAME(GetUnit) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2CompuMethod_Dispatch::SetUnit(LPCTSTR unit)
{GETIDOFNAME(SetUnit) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		unit);
	return result;
}

CString Asap2CompuMethod_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2CompuMethod_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2CompuMethod_Dispatch::Remove()
{GETIDOFNAME(Remove) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2CompuMethod_Dispatch::Rename(LPCTSTR name)
{GETIDOFNAME(Rename) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL Asap2CompuMethod_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

long Asap2CompuMethod_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2CompuMethod_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2CompuMethod_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2CompuMethod_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2CompuMethod_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2CompuMethod_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2CompuMethod_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2CompuMethod_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2CompuMethod_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2CompuMethod_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Asap2CompuMethod_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Asap2TableCompuMethod_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Asap2TableCompuMethod_Dispatch operations

VARIANT Asap2TableCompuMethod_Dispatch::GetHexTab()
{GETIDOFNAME(GetHexTab) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2TableCompuMethod_Dispatch::GetPhysTab()
{GETIDOFNAME(GetPhysTab) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2TableCompuMethod_Dispatch::GetVerbalTab()
{GETIDOFNAME(GetVerbalTab) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::IsInterpolatedTable()
{GETIDOFNAME(IsInterpolatedTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::IsNotInterpolatedTable()
{GETIDOFNAME(IsNotInterpolatedTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::IsVerbalTable()
{GETIDOFNAME(IsVerbalTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::SetHexTabAndPhysTab(const VARIANT& hexTab, const VARIANT& physTab)
{GETIDOFNAME(SetHexTabAndPhysTab) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&hexTab, &physTab);
	return result;
}

CString Asap2TableCompuMethod_Dispatch::GetConversionType()
{GETIDOFNAME(GetConversionType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2TableCompuMethod_Dispatch::GetType()
{GETIDOFNAME(GetType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2TableCompuMethod_Dispatch::GetUnit()
{GETIDOFNAME(GetUnit) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::SetUnit(LPCTSTR unit)
{GETIDOFNAME(SetUnit) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		unit);
	return result;
}

CString Asap2TableCompuMethod_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2TableCompuMethod_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::Remove()
{GETIDOFNAME(Remove) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::Rename(LPCTSTR name)
{GETIDOFNAME(Rename) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

long Asap2TableCompuMethod_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2TableCompuMethod_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2TableCompuMethod_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Asap2TableCompuMethod_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Asap2Label_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Asap2Label_Dispatch operations

long Asap2Label_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2Label_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2Label_Dispatch::GetCompuMethod()
{GETIDOFNAME(GetCompuMethod) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2Label_Dispatch::GetDataItem()
{GETIDOFNAME(GetDataItem) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Asap2Label_Dispatch::GetDataType()
{GETIDOFNAME(GetDataType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double Asap2Label_Dispatch::GetLowerBound()
{GETIDOFNAME(GetLowerBound) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double Asap2Label_Dispatch::GetUpperBound()
{GETIDOFNAME(GetUpperBound) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::IsAxisPoints()
{GETIDOFNAME(IsAxisPoints) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::IsCharacteristic()
{GETIDOFNAME(IsCharacteristic) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::IsMeasurement()
{GETIDOFNAME(IsMeasurement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::SetCompuMethod(LPDISPATCH dispatch_compuMethod)
{GETIDOFNAME(SetCompuMethod) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_compuMethod);
	return result;
}

CString Asap2Label_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2Label_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::Remove()
{GETIDOFNAME(Remove) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::Rename(LPCTSTR name)
{GETIDOFNAME(Rename) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL Asap2Label_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

long Asap2Label_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2Label_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Label_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Asap2Label_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Asap2Characteristic_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Asap2Characteristic_Dispatch operations

VARIANT Asap2Characteristic_Dispatch::GetAxisDescriptions()
{GETIDOFNAME(GetAxisDescriptions) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::IsCharacteristic()
{GETIDOFNAME(IsCharacteristic) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::IsCurve()
{GETIDOFNAME(IsCurve) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::IsMap()
{GETIDOFNAME(IsMap) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Asap2Characteristic_Dispatch::GetXSize()
{GETIDOFNAME(GetXSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Asap2Characteristic_Dispatch::GetYSize()
{GETIDOFNAME(GetYSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Asap2Characteristic_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2Characteristic_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2Characteristic_Dispatch::GetCompuMethod()
{GETIDOFNAME(GetCompuMethod) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2Characteristic_Dispatch::GetDataItem()
{GETIDOFNAME(GetDataItem) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Asap2Characteristic_Dispatch::GetDataType()
{GETIDOFNAME(GetDataType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double Asap2Characteristic_Dispatch::GetLowerBound()
{GETIDOFNAME(GetLowerBound) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double Asap2Characteristic_Dispatch::GetUpperBound()
{GETIDOFNAME(GetUpperBound) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::IsAxisPoints()
{GETIDOFNAME(IsAxisPoints) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::IsMeasurement()
{GETIDOFNAME(IsMeasurement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::SetCompuMethod(LPDISPATCH dispatch_compuMethod)
{GETIDOFNAME(SetCompuMethod) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_compuMethod);
	return result;
}

CString Asap2Characteristic_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2Characteristic_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::Remove()
{GETIDOFNAME(Remove) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::Rename(LPCTSTR name)
{GETIDOFNAME(Rename) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL Asap2Characteristic_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

long Asap2Characteristic_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2Characteristic_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Characteristic_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Asap2Characteristic_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// EtasLicenseFeature_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// EtasLicenseFeature_Dispatch operations

BOOL EtasLicenseFeature_Dispatch::CheckIn()
{GETIDOFNAME(CheckIn) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL EtasLicenseFeature_Dispatch::CheckOut()
{GETIDOFNAME(CheckOut) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL EtasLicenseFeature_Dispatch::IsCheckOut()
{GETIDOFNAME(IsCheckOut) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL EtasLicenseFeature_Dispatch::IsSystemDefined()
{GETIDOFNAME(IsSystemDefined) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long EtasLicenseFeature_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString EtasLicenseFeature_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL EtasLicenseFeature_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL EtasLicenseFeature_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long EtasLicenseFeature_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationOneDTableData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationOneDTableData_Dispatch operations

LPDISPATCH CalibrationOneDTableData_Dispatch::GetDistribution()
{GETIDOFNAME(GetDistribution) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationOneDTableData_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::SetDistribution(LPDISPATCH dispatch_dis)
{GETIDOFNAME(SetDistribution) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_dis);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::SetValue(LPDISPATCH dispatch_array)
{GETIDOFNAME(SetValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_array);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationImplXAxisMinIncrement()
{GETIDOFNAME(GetCalibrationImplXAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationImplXAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplXAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationImplXAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplXAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationXAxisMinIncrement()
{GETIDOFNAME(GetCalibrationXAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString CalibrationOneDTableData_Dispatch::GetCalibrationXAxisSourceLabel()
{GETIDOFNAME(GetCalibrationXAxisSourceLabel) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationXAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationXAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationXAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationXAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::SetXAxisWeakBoundtoHardBound()
{GETIDOFNAME(SetXAxisWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CalibrationOneDTableData_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationOneDTableData_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationHardBoundMax()
{GETIDOFNAME(GetCalibrationHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationHardBoundMin()
{GETIDOFNAME(GetCalibrationHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationImplHardBoundMax()
{GETIDOFNAME(GetCalibrationImplHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationImplHardBoundMin()
{GETIDOFNAME(GetCalibrationImplHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationImplMinIncrement()
{GETIDOFNAME(GetCalibrationImplMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationImplWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationImplWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationMinIncrement()
{GETIDOFNAME(GetCalibrationMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationWeakBoundMax()
{GETIDOFNAME(GetCalibrationWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationOneDTableData_Dispatch::GetCalibrationWeakBoundMin()
{GETIDOFNAME(GetCalibrationWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::SetWeakBoundtoHardBound()
{GETIDOFNAME(SetWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationOneDTableData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationOneDTableData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationOneDTableData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationOneDTableData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationOneDTableData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationRescaleOneDTableData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationRescaleOneDTableData_Dispatch operations

LPDISPATCH CalibrationRescaleOneDTableData_Dispatch::GetCalculatedDistribution()
{GETIDOFNAME(GetCalculatedDistribution) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationRescaleOneDTableData_Dispatch::GetDistribution()
{GETIDOFNAME(GetDistribution) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::SetDistribution(LPDISPATCH dispatch_dis)
{GETIDOFNAME(SetDistribution) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_dis);
	return result;
}

LPDISPATCH CalibrationRescaleOneDTableData_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::SetValue(LPDISPATCH dispatch_array)
{GETIDOFNAME(SetValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_array);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationImplXAxisMinIncrement()
{GETIDOFNAME(GetCalibrationImplXAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationImplXAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplXAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationImplXAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplXAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationXAxisMinIncrement()
{GETIDOFNAME(GetCalibrationXAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString CalibrationRescaleOneDTableData_Dispatch::GetCalibrationXAxisSourceLabel()
{GETIDOFNAME(GetCalibrationXAxisSourceLabel) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationXAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationXAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationXAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationXAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::SetXAxisWeakBoundtoHardBound()
{GETIDOFNAME(SetXAxisWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CalibrationRescaleOneDTableData_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationRescaleOneDTableData_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationHardBoundMax()
{GETIDOFNAME(GetCalibrationHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationHardBoundMin()
{GETIDOFNAME(GetCalibrationHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationImplHardBoundMax()
{GETIDOFNAME(GetCalibrationImplHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationImplHardBoundMin()
{GETIDOFNAME(GetCalibrationImplHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationImplMinIncrement()
{GETIDOFNAME(GetCalibrationImplMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationImplWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationImplWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationMinIncrement()
{GETIDOFNAME(GetCalibrationMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationWeakBoundMax()
{GETIDOFNAME(GetCalibrationWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleOneDTableData_Dispatch::GetCalibrationWeakBoundMin()
{GETIDOFNAME(GetCalibrationWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::SetWeakBoundtoHardBound()
{GETIDOFNAME(SetWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationRescaleOneDTableData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationRescaleOneDTableData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationRescaleOneDTableData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleOneDTableData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationRescaleOneDTableData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ExperimentElement_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// ExperimentElement_Dispatch operations

LPDISPATCH ExperimentElement_Dispatch::GetAsap2Label()
{GETIDOFNAME(GetAsap2Label) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ExperimentElement_Dispatch::GetDevice()
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString ExperimentElement_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH ExperimentElement_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::IsCalibrationElement()
{GETIDOFNAME(IsCalibrationElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::IsMeasureElement()
{GETIDOFNAME(IsMeasureElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::OpenView()
{GETIDOFNAME(OpenView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ExperimentElement_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString ExperimentElement_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentElement_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long ExperimentElement_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// MeasureElement_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// MeasureElement_Dispatch operations

LPDISPATCH MeasureElement_Dispatch::GetValueForAcquisitionRate(LPCTSTR rate)
{GETIDOFNAME(GetValueForAcquisitionRate) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		rate);
	return result;
}

BOOL MeasureElement_Dispatch::IsMeasureElement()
{GETIDOFNAME(IsMeasureElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::OpenViewWithMaxLabels(long amount)
{GETIDOFNAME(OpenViewWithMaxLabels) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		amount);
	return result;
}

LPDISPATCH MeasureElement_Dispatch::GetAsap2Label()
{GETIDOFNAME(GetAsap2Label) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH MeasureElement_Dispatch::GetDevice()
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString MeasureElement_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH MeasureElement_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::IsCalibrationElement()
{GETIDOFNAME(IsCalibrationElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::OpenView()
{GETIDOFNAME(OpenView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long MeasureElement_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString MeasureElement_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureElement_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long MeasureElement_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// MatrixMeasureElement_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// MatrixMeasureElement_Dispatch operations

BOOL MatrixMeasureElement_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH MatrixMeasureElement_Dispatch::GetValueForAcquisitionRate(LPCTSTR rate)
{GETIDOFNAME(GetValueForAcquisitionRate) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		rate);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::IsMeasureElement()
{GETIDOFNAME(IsMeasureElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::OpenViewWithMaxLabels(long amount)
{GETIDOFNAME(OpenViewWithMaxLabels) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		amount);
	return result;
}

LPDISPATCH MatrixMeasureElement_Dispatch::GetAsap2Label()
{GETIDOFNAME(GetAsap2Label) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH MatrixMeasureElement_Dispatch::GetDevice()
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString MatrixMeasureElement_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH MatrixMeasureElement_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::IsCalibrationElement()
{GETIDOFNAME(IsCalibrationElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::OpenView()
{GETIDOFNAME(OpenView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long MatrixMeasureElement_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString MatrixMeasureElement_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixMeasureElement_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long MatrixMeasureElement_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// EtasLicenseManager_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// EtasLicenseManager_Dispatch operations

LPDISPATCH EtasLicenseManager_Dispatch::CreateUserDefinedFeature(LPCTSTR name, LPCTSTR featureName, long majorVersion, long minorVersion)
{GETIDOFNAME(CreateUserDefinedFeature) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, featureName, majorVersion, minorVersion);
	return result;
}

VARIANT EtasLicenseManager_Dispatch::GetAllAvailableFeatures()
{GETIDOFNAME(GetAllAvailableFeatures) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH EtasLicenseManager_Dispatch::GetFeatureNamed(LPCTSTR name)
{GETIDOFNAME(GetFeatureNamed) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

BOOL EtasLicenseManager_Dispatch::Heartbeat()
{GETIDOFNAME(Heartbeat) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL EtasLicenseManager_Dispatch::IsActive()
{GETIDOFNAME(IsActive) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL EtasLicenseManager_Dispatch::WriteToLogFile(LPCTSTR text)
{GETIDOFNAME(WriteToLogFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		text);
	return result;
}

long EtasLicenseManager_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString EtasLicenseManager_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL EtasLicenseManager_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL EtasLicenseManager_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long EtasLicenseManager_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationTwoDTableData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationTwoDTableData_Dispatch operations

LPDISPATCH CalibrationTwoDTableData_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationTwoDTableData_Dispatch::GetXDistribution()
{GETIDOFNAME(GetXDistribution) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationTwoDTableData_Dispatch::GetYDistribution()
{GETIDOFNAME(GetYDistribution) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::SetValue(LPDISPATCH dispatch_matrix)
{GETIDOFNAME(SetValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_matrix);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::SetXDistribution(LPDISPATCH dispatch_dis)
{GETIDOFNAME(SetXDistribution) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_dis);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::SetYDistribution(LPDISPATCH dispatch_dis)
{GETIDOFNAME(SetYDistribution) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_dis);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationImplYAxisMinIncrement()
{GETIDOFNAME(GetCalibrationImplYAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationImplYAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplYAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationImplYAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplYAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationYAxisMinIncrement()
{GETIDOFNAME(GetCalibrationYAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString CalibrationTwoDTableData_Dispatch::GetCalibrationYAxisSourceLabel()
{GETIDOFNAME(GetCalibrationYAxisSourceLabel) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationYAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationYAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationYAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationYAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::SetYAxisWeakBoundtoHardBound()
{GETIDOFNAME(SetYAxisWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationImplXAxisMinIncrement()
{GETIDOFNAME(GetCalibrationImplXAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationImplXAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplXAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationImplXAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplXAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationXAxisMinIncrement()
{GETIDOFNAME(GetCalibrationXAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString CalibrationTwoDTableData_Dispatch::GetCalibrationXAxisSourceLabel()
{GETIDOFNAME(GetCalibrationXAxisSourceLabel) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationXAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationXAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationXAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationXAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::SetXAxisWeakBoundtoHardBound()
{GETIDOFNAME(SetXAxisWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CalibrationTwoDTableData_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationTwoDTableData_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationHardBoundMax()
{GETIDOFNAME(GetCalibrationHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationHardBoundMin()
{GETIDOFNAME(GetCalibrationHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationImplHardBoundMax()
{GETIDOFNAME(GetCalibrationImplHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationImplHardBoundMin()
{GETIDOFNAME(GetCalibrationImplHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationImplMinIncrement()
{GETIDOFNAME(GetCalibrationImplMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationImplWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationImplWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationMinIncrement()
{GETIDOFNAME(GetCalibrationMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationWeakBoundMax()
{GETIDOFNAME(GetCalibrationWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationTwoDTableData_Dispatch::GetCalibrationWeakBoundMin()
{GETIDOFNAME(GetCalibrationWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::SetWeakBoundtoHardBound()
{GETIDOFNAME(SetWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationTwoDTableData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationTwoDTableData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationTwoDTableData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationTwoDTableData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationTwoDTableData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationRescaleTwoDTableData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationRescaleTwoDTableData_Dispatch operations

LPDISPATCH CalibrationRescaleTwoDTableData_Dispatch::GetCalculatedXDistribution()
{GETIDOFNAME(GetCalculatedXDistribution) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationRescaleTwoDTableData_Dispatch::GetCalculatedYDistribution()
{GETIDOFNAME(GetCalculatedYDistribution) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationRescaleTwoDTableData_Dispatch::GetXDistribution()
{GETIDOFNAME(GetXDistribution) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationRescaleTwoDTableData_Dispatch::GetYDistribution()
{GETIDOFNAME(GetYDistribution) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::SetXDistribution(LPDISPATCH dispatch_dis)
{GETIDOFNAME(SetXDistribution) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_dis);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::SetYDistribution(LPDISPATCH dispatch_dis)
{GETIDOFNAME(SetYDistribution) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_dis);
	return result;
}

LPDISPATCH CalibrationRescaleTwoDTableData_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::SetValue(LPDISPATCH dispatch_matrix)
{GETIDOFNAME(SetValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_matrix);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationImplYAxisMinIncrement()
{GETIDOFNAME(GetCalibrationImplYAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationImplYAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplYAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationImplYAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplYAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationYAxisMinIncrement()
{GETIDOFNAME(GetCalibrationYAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationYAxisSourceLabel()
{GETIDOFNAME(GetCalibrationYAxisSourceLabel) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationYAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationYAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationYAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationYAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::SetYAxisWeakBoundtoHardBound()
{GETIDOFNAME(SetYAxisWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationImplXAxisMinIncrement()
{GETIDOFNAME(GetCalibrationImplXAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationImplXAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplXAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationImplXAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplXAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationXAxisMinIncrement()
{GETIDOFNAME(GetCalibrationXAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationXAxisSourceLabel()
{GETIDOFNAME(GetCalibrationXAxisSourceLabel) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationXAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationXAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationXAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationXAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::SetXAxisWeakBoundtoHardBound()
{GETIDOFNAME(SetXAxisWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CalibrationRescaleTwoDTableData_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationRescaleTwoDTableData_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationHardBoundMax()
{GETIDOFNAME(GetCalibrationHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationHardBoundMin()
{GETIDOFNAME(GetCalibrationHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationImplHardBoundMax()
{GETIDOFNAME(GetCalibrationImplHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationImplHardBoundMin()
{GETIDOFNAME(GetCalibrationImplHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationImplMinIncrement()
{GETIDOFNAME(GetCalibrationImplMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationImplWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationImplWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationMinIncrement()
{GETIDOFNAME(GetCalibrationMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationWeakBoundMax()
{GETIDOFNAME(GetCalibrationWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleTwoDTableData_Dispatch::GetCalibrationWeakBoundMin()
{GETIDOFNAME(GetCalibrationWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::SetWeakBoundtoHardBound()
{GETIDOFNAME(SetWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationRescaleTwoDTableData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationRescaleTwoDTableData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationRescaleTwoDTableData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleTwoDTableData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationRescaleTwoDTableData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationDistributionData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationDistributionData_Dispatch operations

BOOL CalibrationDistributionData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::SetBooleanImplValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetBooleanImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::SetBooleanPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetBooleanPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::SetDoubleImplValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetDoubleImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::SetDoublePhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetDoublePhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::SetDoublePhysValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetDoublePhysValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::SetFloatImplValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetFloatImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::SetFloatPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetFloatPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::SetFloatPhysValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetFloatPhysValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::SetImplValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetImplValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::SetIntegerImplValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetIntegerImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::SetIntegerPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetIntegerPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::SetLongImplValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetLongImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::SetLongPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetLongPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::SetSize(long size)
{GETIDOFNAME(SetSize) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		size);
	return result;
}

VARIANT CalibrationDistributionData_Dispatch::GetBooleanImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetBooleanImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationDistributionData_Dispatch::GetBooleanPhysValue()
{GETIDOFNAME(GetBooleanPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationDistributionData_Dispatch::GetDoubleImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetDoubleImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationDistributionData_Dispatch::GetDoublePhysValue()
{GETIDOFNAME(GetDoublePhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationDistributionData_Dispatch::GetDoublePhysValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetDoublePhysValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationDistributionData_Dispatch::GetFloatImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetFloatImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationDistributionData_Dispatch::GetFloatPhysValue()
{GETIDOFNAME(GetFloatPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationDistributionData_Dispatch::GetFloatPhysValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetFloatPhysValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

CString CalibrationDistributionData_Dispatch::GetImplType()
{GETIDOFNAME(GetImplType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationDistributionData_Dispatch::GetImplValue()
{GETIDOFNAME(GetImplValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationDistributionData_Dispatch::GetIntegerImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetIntegerImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationDistributionData_Dispatch::GetIntegerPhysValue()
{GETIDOFNAME(GetIntegerPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationDistributionData_Dispatch::GetLongImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetLongImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationDistributionData_Dispatch::GetLongPhysValue()
{GETIDOFNAME(GetLongPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long CalibrationDistributionData_Dispatch::GetMaxSize()
{GETIDOFNAME(GetMaxSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationDistributionData_Dispatch::GetPhysType()
{GETIDOFNAME(GetPhysType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationDistributionData_Dispatch::GetSize()
{GETIDOFNAME(GetSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsWriteProtected()
{GETIDOFNAME(IsWriteProtected) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CalibrationDistributionData_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationDistributionData_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationDistributionData_Dispatch::GetCalibrationHardBoundMax()
{GETIDOFNAME(GetCalibrationHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDistributionData_Dispatch::GetCalibrationHardBoundMin()
{GETIDOFNAME(GetCalibrationHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDistributionData_Dispatch::GetCalibrationImplHardBoundMax()
{GETIDOFNAME(GetCalibrationImplHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDistributionData_Dispatch::GetCalibrationImplHardBoundMin()
{GETIDOFNAME(GetCalibrationImplHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDistributionData_Dispatch::GetCalibrationImplMinIncrement()
{GETIDOFNAME(GetCalibrationImplMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDistributionData_Dispatch::GetCalibrationImplWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDistributionData_Dispatch::GetCalibrationImplWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDistributionData_Dispatch::GetCalibrationMinIncrement()
{GETIDOFNAME(GetCalibrationMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDistributionData_Dispatch::GetCalibrationWeakBoundMax()
{GETIDOFNAME(GetCalibrationWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationDistributionData_Dispatch::GetCalibrationWeakBoundMin()
{GETIDOFNAME(GetCalibrationWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::SetWeakBoundtoHardBound()
{GETIDOFNAME(SetWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationDistributionData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationDistributionData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationDistributionData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationDistributionData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationDistributionData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationRescaleDistributionData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationRescaleDistributionData_Dispatch operations

VARIANT CalibrationRescaleDistributionData_Dispatch::GetDoublePhysScales()
{GETIDOFNAME(GetDoublePhysScales) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetFloatPhysScales()
{GETIDOFNAME(GetFloatPhysScales) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetIntegerPhysScales()
{GETIDOFNAME(GetIntegerPhysScales) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetLongPhysScales()
{GETIDOFNAME(GetLongPhysScales) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetDoublePhysScales(const VARIANT& value_Renamed)
{GETIDOFNAME(SetDoublePhysScales) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetFloatPhysScales(const VARIANT& value_Renamed)
{GETIDOFNAME(SetFloatPhysScales) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetIntegerPhysScales(const VARIANT& value_Renamed)
{GETIDOFNAME(SetIntegerPhysScales) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetLongPhysScales(const VARIANT& value_Renamed)
{GETIDOFNAME(SetLongPhysScales) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetBooleanImplValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetBooleanImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetBooleanPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetBooleanPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetDoubleImplValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetDoubleImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetDoublePhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetDoublePhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetDoublePhysValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetDoublePhysValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetFloatImplValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetFloatImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetFloatPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetFloatPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetFloatPhysValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetFloatPhysValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetImplValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetImplValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetIntegerImplValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetIntegerImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetIntegerPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetIntegerPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetLongImplValuesRange(const VARIANT& value_Renamed, long startIndex, long endIndex)
{GETIDOFNAME(SetLongImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startIndex, endIndex);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetLongPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetLongPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetSize(long size)
{GETIDOFNAME(SetSize) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		size);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetBooleanImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetBooleanImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetBooleanPhysValue()
{GETIDOFNAME(GetBooleanPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetDoubleImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetDoubleImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetDoublePhysValue()
{GETIDOFNAME(GetDoublePhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetDoublePhysValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetDoublePhysValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetFloatImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetFloatImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetFloatPhysValue()
{GETIDOFNAME(GetFloatPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetFloatPhysValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetFloatPhysValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

CString CalibrationRescaleDistributionData_Dispatch::GetImplType()
{GETIDOFNAME(GetImplType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetImplValue()
{GETIDOFNAME(GetImplValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetIntegerImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetIntegerImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetIntegerPhysValue()
{GETIDOFNAME(GetIntegerPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetLongImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetLongImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationRescaleDistributionData_Dispatch::GetLongPhysValue()
{GETIDOFNAME(GetLongPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long CalibrationRescaleDistributionData_Dispatch::GetMaxSize()
{GETIDOFNAME(GetMaxSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationRescaleDistributionData_Dispatch::GetPhysType()
{GETIDOFNAME(GetPhysType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationRescaleDistributionData_Dispatch::GetSize()
{GETIDOFNAME(GetSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsWriteProtected()
{GETIDOFNAME(IsWriteProtected) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CalibrationRescaleDistributionData_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationRescaleDistributionData_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleDistributionData_Dispatch::GetCalibrationHardBoundMax()
{GETIDOFNAME(GetCalibrationHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleDistributionData_Dispatch::GetCalibrationHardBoundMin()
{GETIDOFNAME(GetCalibrationHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleDistributionData_Dispatch::GetCalibrationImplHardBoundMax()
{GETIDOFNAME(GetCalibrationImplHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleDistributionData_Dispatch::GetCalibrationImplHardBoundMin()
{GETIDOFNAME(GetCalibrationImplHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleDistributionData_Dispatch::GetCalibrationImplMinIncrement()
{GETIDOFNAME(GetCalibrationImplMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleDistributionData_Dispatch::GetCalibrationImplWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleDistributionData_Dispatch::GetCalibrationImplWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleDistributionData_Dispatch::GetCalibrationMinIncrement()
{GETIDOFNAME(GetCalibrationMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleDistributionData_Dispatch::GetCalibrationWeakBoundMax()
{GETIDOFNAME(GetCalibrationWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationRescaleDistributionData_Dispatch::GetCalibrationWeakBoundMin()
{GETIDOFNAME(GetCalibrationWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::SetWeakBoundtoHardBound()
{GETIDOFNAME(SetWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationRescaleDistributionData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationRescaleDistributionData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationRescaleDistributionData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationRescaleDistributionData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationRescaleDistributionData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// View_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// View_Dispatch operations

BOOL View_Dispatch::BringToFront()
{GETIDOFNAME(BringToFront) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL View_Dispatch::Close()
{GETIDOFNAME(Close) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL View_Dispatch::IsExperimentView()
{GETIDOFNAME(IsExperimentView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL View_Dispatch::IsView()
{GETIDOFNAME(IsView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL View_Dispatch::IsDialog()
{GETIDOFNAME(IsDialog) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL View_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long View_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString View_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL View_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL View_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL View_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL View_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL View_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL View_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL View_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long View_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationElement_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationElement_Dispatch operations

BOOL CalibrationElement_Dispatch::IsCalibrationElement()
{GETIDOFNAME(IsCalibrationElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationElement_Dispatch::GetAsap2Label()
{GETIDOFNAME(GetAsap2Label) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationElement_Dispatch::GetDevice()
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString CalibrationElement_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationElement_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::IsMeasureElement()
{GETIDOFNAME(IsMeasureElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::OpenView()
{GETIDOFNAME(OpenView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CalibrationElement_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationElement_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationElement_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationElement_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ScalarCalibrationElement_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// ScalarCalibrationElement_Dispatch operations

BOOL ScalarCalibrationElement_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::IsCalibrationElement()
{GETIDOFNAME(IsCalibrationElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ScalarCalibrationElement_Dispatch::GetAsap2Label()
{GETIDOFNAME(GetAsap2Label) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ScalarCalibrationElement_Dispatch::GetDevice()
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString ScalarCalibrationElement_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH ScalarCalibrationElement_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::IsMeasureElement()
{GETIDOFNAME(IsMeasureElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::OpenView()
{GETIDOFNAME(OpenView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ScalarCalibrationElement_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString ScalarCalibrationElement_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarCalibrationElement_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long ScalarCalibrationElement_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationCurveAxisOneDTableData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationCurveAxisOneDTableData_Dispatch operations

LPDISPATCH CalibrationCurveAxisOneDTableData_Dispatch::GetCalculatedDistribution()
{GETIDOFNAME(GetCalculatedDistribution) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationCurveAxisOneDTableData_Dispatch::GetCurveAxis()
{GETIDOFNAME(GetCurveAxis) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationCurveAxisOneDTableData_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::SetValue(LPDISPATCH dispatch_array)
{GETIDOFNAME(SetValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_array);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationImplXAxisMinIncrement()
{GETIDOFNAME(GetCalibrationImplXAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationImplXAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplXAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationImplXAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplXAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationXAxisMinIncrement()
{GETIDOFNAME(GetCalibrationXAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationXAxisSourceLabel()
{GETIDOFNAME(GetCalibrationXAxisSourceLabel) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationXAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationXAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationXAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationXAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::SetXAxisWeakBoundtoHardBound()
{GETIDOFNAME(SetXAxisWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CalibrationCurveAxisOneDTableData_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationCurveAxisOneDTableData_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationHardBoundMax()
{GETIDOFNAME(GetCalibrationHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationHardBoundMin()
{GETIDOFNAME(GetCalibrationHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationImplHardBoundMax()
{GETIDOFNAME(GetCalibrationImplHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationImplHardBoundMin()
{GETIDOFNAME(GetCalibrationImplHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationImplMinIncrement()
{GETIDOFNAME(GetCalibrationImplMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationImplWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationImplWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationMinIncrement()
{GETIDOFNAME(GetCalibrationMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationWeakBoundMax()
{GETIDOFNAME(GetCalibrationWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisOneDTableData_Dispatch::GetCalibrationWeakBoundMin()
{GETIDOFNAME(GetCalibrationWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::SetWeakBoundtoHardBound()
{GETIDOFNAME(SetWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationCurveAxisOneDTableData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationCurveAxisOneDTableData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationCurveAxisOneDTableData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisOneDTableData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationCurveAxisOneDTableData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ArrayMeasureElement_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// ArrayMeasureElement_Dispatch operations

BOOL ArrayMeasureElement_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ArrayMeasureElement_Dispatch::GetValueForAcquisitionRate(LPCTSTR rate)
{GETIDOFNAME(GetValueForAcquisitionRate) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		rate);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::IsMeasureElement()
{GETIDOFNAME(IsMeasureElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::OpenViewWithMaxLabels(long amount)
{GETIDOFNAME(OpenViewWithMaxLabels) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		amount);
	return result;
}

LPDISPATCH ArrayMeasureElement_Dispatch::GetAsap2Label()
{GETIDOFNAME(GetAsap2Label) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ArrayMeasureElement_Dispatch::GetDevice()
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString ArrayMeasureElement_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH ArrayMeasureElement_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::IsCalibrationElement()
{GETIDOFNAME(IsCalibrationElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::OpenView()
{GETIDOFNAME(OpenView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ArrayMeasureElement_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString ArrayMeasureElement_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayMeasureElement_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long ArrayMeasureElement_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ArrayCalibrationElement_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// ArrayCalibrationElement_Dispatch operations

BOOL ArrayCalibrationElement_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::IsCalibrationElement()
{GETIDOFNAME(IsCalibrationElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ArrayCalibrationElement_Dispatch::GetAsap2Label()
{GETIDOFNAME(GetAsap2Label) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ArrayCalibrationElement_Dispatch::GetDevice()
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString ArrayCalibrationElement_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH ArrayCalibrationElement_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::IsMeasureElement()
{GETIDOFNAME(IsMeasureElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::OpenView()
{GETIDOFNAME(OpenView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ArrayCalibrationElement_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString ArrayCalibrationElement_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ArrayCalibrationElement_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long ArrayCalibrationElement_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Experiment_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Experiment_Dispatch operations

CString Experiment_Dispatch::GetEtas_binary()
{GETIDOFNAME(GetEtas_binary) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Experiment_Dispatch::GetDiadem_atf()
{GETIDOFNAME(GetDiadem_atf) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Experiment_Dispatch::GetEtas_ascii()
{GETIDOFNAME(GetEtas_ascii) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Experiment_Dispatch::GetEtas_groupascii()
{GETIDOFNAME(GetEtas_groupascii) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Experiment_Dispatch::GetMatlab_mfile()
{GETIDOFNAME(GetMatlab_mfile) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Experiment_Dispatch::GetFamos_record()
{GETIDOFNAME(GetFamos_record) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Experiment_Dispatch::GetEtas_mdf()
{GETIDOFNAME(GetEtas_mdf) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Experiment_Dispatch::GetEtas_mdf4()
{GETIDOFNAME(GetEtas_mdf4) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT Experiment_Dispatch::BrowseCalibrationElement(LPCTSTR name)
{GETIDOFNAME(BrowseCalibrationElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT Experiment_Dispatch::BrowseCalibrationElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseCalibrationElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

VARIANT Experiment_Dispatch::BrowseCaseInsensitiveCalibrationElement(LPCTSTR name)
{GETIDOFNAME(BrowseCaseInsensitiveCalibrationElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT Experiment_Dispatch::BrowseCaseInsensitiveCalibrationElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseCaseInsensitiveCalibrationElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

VARIANT Experiment_Dispatch::BrowseCaseInsensitiveExperimentElement(LPCTSTR name)
{GETIDOFNAME(BrowseCaseInsensitiveExperimentElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT Experiment_Dispatch::BrowseCaseInsensitiveExperimentElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseCaseInsensitiveExperimentElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

VARIANT Experiment_Dispatch::BrowseCaseInsensitiveMeasureElement(LPCTSTR name)
{GETIDOFNAME(BrowseCaseInsensitiveMeasureElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT Experiment_Dispatch::BrowseCaseInsensitiveMeasureElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseCaseInsensitiveMeasureElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

VARIANT Experiment_Dispatch::BrowseExperimentElement(LPCTSTR name)
{GETIDOFNAME(BrowseExperimentElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT Experiment_Dispatch::BrowseExperimentElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseExperimentElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

VARIANT Experiment_Dispatch::BrowseMeasureElement(LPCTSTR name)
{GETIDOFNAME(BrowseMeasureElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT Experiment_Dispatch::BrowseMeasureElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseMeasureElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

long Experiment_Dispatch::CheckTypeForElementNameInDevice(LPCTSTR aLabelName, LPDISPATCH dispatch_aDevice)
{GETIDOFNAME(CheckTypeForElementNameInDevice) 
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		aLabelName, dispatch_aDevice);
	return result;
}

VARIANT Experiment_Dispatch::GetAllCalibrationElements()
{GETIDOFNAME(GetAllCalibrationElements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Experiment_Dispatch::GetAllCalibrationElementsInDevice(LPDISPATCH dispatch_device)
{GETIDOFNAME(GetAllCalibrationElementsInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		dispatch_device);
	return result;
}

VARIANT Experiment_Dispatch::GetAllDevices()
{GETIDOFNAME(GetAllDevices) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Experiment_Dispatch::GetAllExperimentElements()
{GETIDOFNAME(GetAllExperimentElements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Experiment_Dispatch::GetAllExperimentElementsInDevice(LPDISPATCH dispatch_device)
{GETIDOFNAME(GetAllExperimentElementsInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		dispatch_device);
	return result;
}

VARIANT Experiment_Dispatch::GetAllMeasureElements()
{GETIDOFNAME(GetAllMeasureElements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Experiment_Dispatch::GetAllMeasureElementsInDevice(LPDISPATCH dispatch_device)
{GETIDOFNAME(GetAllMeasureElementsInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		dispatch_device);
	return result;
}

LPDISPATCH Experiment_Dispatch::GetCalibrationElement(LPCTSTR name)
{GETIDOFNAME(GetCalibrationElement) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH Experiment_Dispatch::GetCalibrationElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(GetCalibrationElementInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

LPDISPATCH Experiment_Dispatch::GetCalibrationValue(LPCTSTR name)
{GETIDOFNAME(GetCalibrationValue) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH Experiment_Dispatch::GetCalibrationValueInDevice(LPCTSTR name, LPDISPATCH dispatch_dev)
{GETIDOFNAME(GetCalibrationValueInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_dev);
	return result;
}

CString Experiment_Dispatch::GetDefaultRasterForMeasureElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(GetDefaultRasterForMeasureElementInDevice) 
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

LPDISPATCH Experiment_Dispatch::GetDevice(LPCTSTR name)
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH Experiment_Dispatch::GetExperimentElement(LPCTSTR name)
{GETIDOFNAME(GetExperimentElement) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH Experiment_Dispatch::GetExperimentElementForCaseInsensitiveLabel(LPCTSTR name)
{GETIDOFNAME(GetExperimentElementForCaseInsensitiveLabel) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH Experiment_Dispatch::GetExperimentElementForCaseInsensitiveLabelInDevice(LPCTSTR name, LPDISPATCH dispatch_dev)
{GETIDOFNAME(GetExperimentElementForCaseInsensitiveLabelInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_dev);
	return result;
}

LPDISPATCH Experiment_Dispatch::GetExperimentElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(GetExperimentElementInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

LPDISPATCH Experiment_Dispatch::GetMeasureElement(LPCTSTR name)
{GETIDOFNAME(GetMeasureElement) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH Experiment_Dispatch::GetMeasureElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(GetMeasureElementInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

LPDISPATCH Experiment_Dispatch::GetMeasureValue(LPCTSTR name)
{GETIDOFNAME(GetMeasureValue) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH Experiment_Dispatch::GetMeasureValueInDevice(LPCTSTR name, LPDISPATCH dispatch_dev)
{GETIDOFNAME(GetMeasureValueInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_dev);
	return result;
}

LPDISPATCH Experiment_Dispatch::GetMeasureValueWithAcquisitionRate(LPCTSTR name, LPCTSTR acquisitionRate)
{GETIDOFNAME(GetMeasureValueWithAcquisitionRate) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, acquisitionRate);
	return result;
}

VARIANT Experiment_Dispatch::GetMeasurementsWithRCI2(const VARIANT& devNames, const VARIANT& rasterNames, const VARIANT& messNames)
{GETIDOFNAME(GetMeasurementsWithRCI2) 
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&devNames, &rasterNames, &messNames);
	return result;
}

LPDISPATCH Experiment_Dispatch::GetMeasureValueWithAcquisitionRateInDevice(LPCTSTR name, LPCTSTR acquisitionRate, LPDISPATCH dispatch_dev)
{GETIDOFNAME(GetMeasureValueWithAcquisitionRateInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, acquisitionRate, dispatch_dev);
	return result;
}

BOOL Experiment_Dispatch::GetRecordingState()
{GETIDOFNAME(GetRecordingState) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Experiment_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Experiment_Dispatch::IsIncaOnlineExperiment()
{GETIDOFNAME(IsIncaOnlineExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Experiment_Dispatch::IsOnlineExperiment()
{GETIDOFNAME(IsOnlineExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Experiment_Dispatch::PauseRecording()
{GETIDOFNAME(PauseRecording) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Experiment_Dispatch::StartRecording()
{GETIDOFNAME(StartRecording) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Experiment_Dispatch::StopAndDiscardRecording()
{GETIDOFNAME(StopAndDiscardRecording) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Experiment_Dispatch::StopRecording(LPCTSTR fileName, LPCTSTR fileFormat)
{GETIDOFNAME(StopRecording) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, fileFormat);
	return result;
}

BOOL Experiment_Dispatch::ConvertMdfFile(LPCTSTR fileName, LPCTSTR fileFormat)
{GETIDOFNAME(ConvertMdfFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, fileFormat);
	return result;
}

VARIANT Experiment_Dispatch::GetHWDevicesFlat(LPDISPATCH dispatch_aHWConfig)
{GETIDOFNAME(GetHWDevicesFlat) 
	VARIANT result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		dispatch_aHWConfig);
	return result;
}

VARIANT Experiment_Dispatch::GetDependentCommonAxisConsumers(LPCTSTR elementName)
{GETIDOFNAME(GetDependentCommonAxisConsumers) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		elementName);
	return result;
}

long Experiment_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Experiment_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Experiment_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Experiment_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Experiment_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Experiment_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Experiment_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Experiment_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Experiment_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Experiment_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// OnlineExperiment_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// OnlineExperiment_Dispatch operations

CString OnlineExperiment_Dispatch::GetEtas_binary()
{GETIDOFNAME(GetEtas_binary) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString OnlineExperiment_Dispatch::GetDiadem_atf()
{GETIDOFNAME(GetDiadem_atf) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString OnlineExperiment_Dispatch::GetEtas_ascii()
{GETIDOFNAME(GetEtas_ascii) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString OnlineExperiment_Dispatch::GetEtas_groupascii()
{GETIDOFNAME(GetEtas_groupascii) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString OnlineExperiment_Dispatch::GetMatlab_mfile()
{GETIDOFNAME(GetMatlab_mfile) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString OnlineExperiment_Dispatch::GetFamos_record()
{GETIDOFNAME(GetFamos_record) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString OnlineExperiment_Dispatch::GetEtas_mdf()
{GETIDOFNAME(GetEtas_mdf) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString OnlineExperiment_Dispatch::GetEtas_mdf4()
{GETIDOFNAME(GetEtas_mdf4) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT OnlineExperiment_Dispatch::GetAllExperimentSolverBlockLabels()
{GETIDOFNAME(GetAllExperimentSolverBlockLabels) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT OnlineExperiment_Dispatch::GetAllSolverIntegratorLabels()
{GETIDOFNAME(GetAllSolverIntegratorLabels) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString OnlineExperiment_Dispatch::GetIntegratorNameForSolver(LPCTSTR aLabel)
{GETIDOFNAME(GetIntegratorNameForSolver) 
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		aLabel);
	return result;
}

double OnlineExperiment_Dispatch::GetIntegratorParameterForSolver(LPCTSTR parameterLabel, LPCTSTR aLabel)
{GETIDOFNAME(GetIntegratorParameterForSolver) 
	double result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		parameterLabel, aLabel);
	return result;
}

VARIANT OnlineExperiment_Dispatch::GetIntegratorParameterLabels()
{GETIDOFNAME(GetIntegratorParameterLabels) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::IsExperimentLocked()
{GETIDOFNAME(IsExperimentLocked) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::IsMeasurementRunning()
{GETIDOFNAME(IsMeasurementRunning) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::IsOnlineExperiment()
{GETIDOFNAME(IsOnlineExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::LockExperiment()
{GETIDOFNAME(LockExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::SetIntegratorAdamsMoulton2ForSolver(LPCTSTR aLabel, double dt, double h)
{GETIDOFNAME(SetIntegratorAdamsMoulton2ForSolver) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aLabel, dt, h);
	return result;
}

BOOL OnlineExperiment_Dispatch::SetIntegratorEulerForSolver(LPCTSTR aLabel, double dt, double h)
{GETIDOFNAME(SetIntegratorEulerForSolver) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aLabel, dt, h);
	return result;
}

BOOL OnlineExperiment_Dispatch::SetIntegratorHeunForSolver(LPCTSTR aLabel, double dt, double h)
{GETIDOFNAME(SetIntegratorHeunForSolver) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aLabel, dt, h);
	return result;
}

BOOL OnlineExperiment_Dispatch::SetIntegratorMulstep2ForSolver(LPCTSTR aLabel, double dt, double h)
{GETIDOFNAME(SetIntegratorMulstep2ForSolver) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aLabel, dt, h);
	return result;
}

BOOL OnlineExperiment_Dispatch::SetIntegratorParameterForSolver(LPCTSTR parameterLabel, LPCTSTR aLabel, double value_Renamed)
{GETIDOFNAME(SetIntegratorParameterForSolver) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		parameterLabel, aLabel, value_Renamed);
	return result;
}

BOOL OnlineExperiment_Dispatch::SetIntegratorRungeKutta4ForSolver(LPCTSTR aLabel, double dt, double h)
{GETIDOFNAME(SetIntegratorRungeKutta4ForSolver) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aLabel, dt, h);
	return result;
}

BOOL OnlineExperiment_Dispatch::StartMeasurement()
{GETIDOFNAME(StartMeasurement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::StopMeasurement()
{GETIDOFNAME(StopMeasurement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::StopMeasurementAndSaveToFile(LPCTSTR fileName, LPCTSTR fileFormat)
{GETIDOFNAME(StopMeasurementAndSaveToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, fileFormat);
	return result;
}

BOOL OnlineExperiment_Dispatch::UnlockExperiment()
{GETIDOFNAME(UnlockExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT OnlineExperiment_Dispatch::BrowseCalibrationElement(LPCTSTR name)
{GETIDOFNAME(BrowseCalibrationElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT OnlineExperiment_Dispatch::BrowseCalibrationElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseCalibrationElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

VARIANT OnlineExperiment_Dispatch::BrowseCaseInsensitiveCalibrationElement(LPCTSTR name)
{GETIDOFNAME(BrowseCaseInsensitiveCalibrationElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT OnlineExperiment_Dispatch::BrowseCaseInsensitiveCalibrationElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseCaseInsensitiveCalibrationElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

VARIANT OnlineExperiment_Dispatch::BrowseCaseInsensitiveExperimentElement(LPCTSTR name)
{GETIDOFNAME(BrowseCaseInsensitiveExperimentElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT OnlineExperiment_Dispatch::BrowseCaseInsensitiveExperimentElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseCaseInsensitiveExperimentElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

VARIANT OnlineExperiment_Dispatch::BrowseCaseInsensitiveMeasureElement(LPCTSTR name)
{GETIDOFNAME(BrowseCaseInsensitiveMeasureElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT OnlineExperiment_Dispatch::BrowseCaseInsensitiveMeasureElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseCaseInsensitiveMeasureElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

VARIANT OnlineExperiment_Dispatch::BrowseExperimentElement(LPCTSTR name)
{GETIDOFNAME(BrowseExperimentElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT OnlineExperiment_Dispatch::BrowseExperimentElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseExperimentElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

VARIANT OnlineExperiment_Dispatch::BrowseMeasureElement(LPCTSTR name)
{GETIDOFNAME(BrowseMeasureElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT OnlineExperiment_Dispatch::BrowseMeasureElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseMeasureElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

long OnlineExperiment_Dispatch::CheckTypeForElementNameInDevice(LPCTSTR aLabelName, LPDISPATCH dispatch_aDevice)
{GETIDOFNAME(CheckTypeForElementNameInDevice) 
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		aLabelName, dispatch_aDevice);
	return result;
}

VARIANT OnlineExperiment_Dispatch::GetAllCalibrationElements()
{GETIDOFNAME(GetAllCalibrationElements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT OnlineExperiment_Dispatch::GetAllCalibrationElementsInDevice(LPDISPATCH dispatch_device)
{GETIDOFNAME(GetAllCalibrationElementsInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		dispatch_device);
	return result;
}

VARIANT OnlineExperiment_Dispatch::GetAllDevices()
{GETIDOFNAME(GetAllDevices) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT OnlineExperiment_Dispatch::GetAllExperimentElements()
{GETIDOFNAME(GetAllExperimentElements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT OnlineExperiment_Dispatch::GetAllExperimentElementsInDevice(LPDISPATCH dispatch_device)
{GETIDOFNAME(GetAllExperimentElementsInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		dispatch_device);
	return result;
}

VARIANT OnlineExperiment_Dispatch::GetAllMeasureElements()
{GETIDOFNAME(GetAllMeasureElements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT OnlineExperiment_Dispatch::GetAllMeasureElementsInDevice(LPDISPATCH dispatch_device)
{GETIDOFNAME(GetAllMeasureElementsInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		dispatch_device);
	return result;
}

LPDISPATCH OnlineExperiment_Dispatch::GetCalibrationElement(LPCTSTR name)
{GETIDOFNAME(GetCalibrationElement) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH OnlineExperiment_Dispatch::GetCalibrationElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(GetCalibrationElementInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

LPDISPATCH OnlineExperiment_Dispatch::GetCalibrationValue(LPCTSTR name)
{GETIDOFNAME(GetCalibrationValue) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH OnlineExperiment_Dispatch::GetCalibrationValueInDevice(LPCTSTR name, LPDISPATCH dispatch_dev)
{GETIDOFNAME(GetCalibrationValueInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_dev);
	return result;
}

CString OnlineExperiment_Dispatch::GetDefaultRasterForMeasureElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(GetDefaultRasterForMeasureElementInDevice) 
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

LPDISPATCH OnlineExperiment_Dispatch::GetDevice(LPCTSTR name)
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH OnlineExperiment_Dispatch::GetExperimentElement(LPCTSTR name)
{GETIDOFNAME(GetExperimentElement) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH OnlineExperiment_Dispatch::GetExperimentElementForCaseInsensitiveLabel(LPCTSTR name)
{GETIDOFNAME(GetExperimentElementForCaseInsensitiveLabel) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH OnlineExperiment_Dispatch::GetExperimentElementForCaseInsensitiveLabelInDevice(LPCTSTR name, LPDISPATCH dispatch_dev)
{GETIDOFNAME(GetExperimentElementForCaseInsensitiveLabelInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_dev);
	return result;
}

LPDISPATCH OnlineExperiment_Dispatch::GetExperimentElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(GetExperimentElementInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

LPDISPATCH OnlineExperiment_Dispatch::GetMeasureElement(LPCTSTR name)
{GETIDOFNAME(GetMeasureElement) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH OnlineExperiment_Dispatch::GetMeasureElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(GetMeasureElementInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

LPDISPATCH OnlineExperiment_Dispatch::GetMeasureValue(LPCTSTR name)
{GETIDOFNAME(GetMeasureValue) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH OnlineExperiment_Dispatch::GetMeasureValueInDevice(LPCTSTR name, LPDISPATCH dispatch_dev)
{GETIDOFNAME(GetMeasureValueInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_dev);
	return result;
}

LPDISPATCH OnlineExperiment_Dispatch::GetMeasureValueWithAcquisitionRate(LPCTSTR name, LPCTSTR acquisitionRate)
{GETIDOFNAME(GetMeasureValueWithAcquisitionRate) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, acquisitionRate);
	return result;
}

VARIANT OnlineExperiment_Dispatch::GetMeasurementsWithRCI2(const VARIANT& devNames, const VARIANT& rasterNames, const VARIANT& messNames)
{GETIDOFNAME(GetMeasurementsWithRCI2) 
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&devNames, &rasterNames, &messNames);
	return result;
}

LPDISPATCH OnlineExperiment_Dispatch::GetMeasureValueWithAcquisitionRateInDevice(LPCTSTR name, LPCTSTR acquisitionRate, LPDISPATCH dispatch_dev)
{GETIDOFNAME(GetMeasureValueWithAcquisitionRateInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, acquisitionRate, dispatch_dev);
	return result;
}

BOOL OnlineExperiment_Dispatch::GetRecordingState()
{GETIDOFNAME(GetRecordingState) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::IsIncaOnlineExperiment()
{GETIDOFNAME(IsIncaOnlineExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::PauseRecording()
{GETIDOFNAME(PauseRecording) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::StartRecording()
{GETIDOFNAME(StartRecording) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::StopAndDiscardRecording()
{GETIDOFNAME(StopAndDiscardRecording) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::StopRecording(LPCTSTR fileName, LPCTSTR fileFormat)
{GETIDOFNAME(StopRecording) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, fileFormat);
	return result;
}

BOOL OnlineExperiment_Dispatch::ConvertMdfFile(LPCTSTR fileName, LPCTSTR fileFormat)
{GETIDOFNAME(ConvertMdfFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, fileFormat);
	return result;
}

VARIANT OnlineExperiment_Dispatch::GetHWDevicesFlat(LPDISPATCH dispatch_aHWConfig)
{GETIDOFNAME(GetHWDevicesFlat) 
	VARIANT result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		dispatch_aHWConfig);
	return result;
}

VARIANT OnlineExperiment_Dispatch::GetDependentCommonAxisConsumers(LPCTSTR elementName)
{GETIDOFNAME(GetDependentCommonAxisConsumers) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		elementName);
	return result;
}

long OnlineExperiment_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString OnlineExperiment_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OnlineExperiment_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long OnlineExperiment_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// MeasureDataItem_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// MeasureDataItem_Dispatch operations

VARIANT MeasureDataItem_Dispatch::ActivateRci2()
{GETIDOFNAME(ActivateRci2) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::DeActivateRci2()
{GETIDOFNAME(DeActivateRci2) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString MeasureDataItem_Dispatch::GetCurrentAcquisitionRate()
{GETIDOFNAME(GetCurrentAcquisitionRate) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString MeasureDataItem_Dispatch::GetImplType()
{GETIDOFNAME(GetImplType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double MeasureDataItem_Dispatch::GetMeasureRangeMax()
{GETIDOFNAME(GetMeasureRangeMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double MeasureDataItem_Dispatch::GetMeasureRangeMin()
{GETIDOFNAME(GetMeasureRangeMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString MeasureDataItem_Dispatch::GetPhysType()
{GETIDOFNAME(GetPhysType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::SetCurrentAcquisitionRate(LPCTSTR rate)
{GETIDOFNAME(SetCurrentAcquisitionRate) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		rate);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString MeasureDataItem_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long MeasureDataItem_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString MeasureDataItem_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureDataItem_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long MeasureDataItem_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// MeasureScalarData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// MeasureScalarData_Dispatch operations

VARIANT MeasureScalarData_Dispatch::GetRCI2SignalHandle()
{GETIDOFNAME(GetRCI2SignalHandle) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT MeasureScalarData_Dispatch::GetRCI2GrpHandle()
{GETIDOFNAME(GetRCI2GrpHandle) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::GetBooleanPhysValue()
{GETIDOFNAME(GetBooleanPhysValue) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString MeasureScalarData_Dispatch::GetCharPhysValue()
{GETIDOFNAME(GetCharPhysValue) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double MeasureScalarData_Dispatch::GetDoublePhysValue()
{GETIDOFNAME(GetDoublePhysValue) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double MeasureScalarData_Dispatch::GetFloatPhysValue()
{GETIDOFNAME(GetFloatPhysValue) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double MeasureScalarData_Dispatch::GetImplValue()
{GETIDOFNAME(GetImplValue) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

long MeasureScalarData_Dispatch::GetIntegerPhysValue()
{GETIDOFNAME(GetIntegerPhysValue) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long MeasureScalarData_Dispatch::GetLongPhysValue()
{GETIDOFNAME(GetLongPhysValue) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT MeasureScalarData_Dispatch::ActivateRci2()
{GETIDOFNAME(ActivateRci2) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::DeActivateRci2()
{GETIDOFNAME(DeActivateRci2) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString MeasureScalarData_Dispatch::GetCurrentAcquisitionRate()
{GETIDOFNAME(GetCurrentAcquisitionRate) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString MeasureScalarData_Dispatch::GetImplType()
{GETIDOFNAME(GetImplType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double MeasureScalarData_Dispatch::GetMeasureRangeMax()
{GETIDOFNAME(GetMeasureRangeMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double MeasureScalarData_Dispatch::GetMeasureRangeMin()
{GETIDOFNAME(GetMeasureRangeMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString MeasureScalarData_Dispatch::GetPhysType()
{GETIDOFNAME(GetPhysType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::SetCurrentAcquisitionRate(LPCTSTR rate)
{GETIDOFNAME(SetCurrentAcquisitionRate) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		rate);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString MeasureScalarData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long MeasureScalarData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString MeasureScalarData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureScalarData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long MeasureScalarData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationCurveAxisTwoDTableData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationCurveAxisTwoDTableData_Dispatch operations

LPDISPATCH CalibrationCurveAxisTwoDTableData_Dispatch::GetCalculatedXDistribution()
{GETIDOFNAME(GetCalculatedXDistribution) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationCurveAxisTwoDTableData_Dispatch::GetCalculatedYDistribution()
{GETIDOFNAME(GetCalculatedYDistribution) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationCurveAxisTwoDTableData_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationCurveAxisTwoDTableData_Dispatch::GetXCurveAxis()
{GETIDOFNAME(GetXCurveAxis) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationCurveAxisTwoDTableData_Dispatch::GetYCurveAxis()
{GETIDOFNAME(GetYCurveAxis) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::SetValue(LPDISPATCH dispatch_matrix)
{GETIDOFNAME(SetValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_matrix);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationImplYAxisMinIncrement()
{GETIDOFNAME(GetCalibrationImplYAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationImplYAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplYAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationImplYAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplYAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationYAxisMinIncrement()
{GETIDOFNAME(GetCalibrationYAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationYAxisSourceLabel()
{GETIDOFNAME(GetCalibrationYAxisSourceLabel) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationYAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationYAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationYAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationYAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::SetYAxisWeakBoundtoHardBound()
{GETIDOFNAME(SetYAxisWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationImplXAxisMinIncrement()
{GETIDOFNAME(GetCalibrationImplXAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationImplXAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplXAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationImplXAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplXAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationXAxisMinIncrement()
{GETIDOFNAME(GetCalibrationXAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationXAxisSourceLabel()
{GETIDOFNAME(GetCalibrationXAxisSourceLabel) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationXAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationXAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationXAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationXAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::SetXAxisWeakBoundtoHardBound()
{GETIDOFNAME(SetXAxisWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CalibrationCurveAxisTwoDTableData_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationCurveAxisTwoDTableData_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationHardBoundMax()
{GETIDOFNAME(GetCalibrationHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationHardBoundMin()
{GETIDOFNAME(GetCalibrationHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationImplHardBoundMax()
{GETIDOFNAME(GetCalibrationImplHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationImplHardBoundMin()
{GETIDOFNAME(GetCalibrationImplHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationImplMinIncrement()
{GETIDOFNAME(GetCalibrationImplMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationImplWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationImplWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationMinIncrement()
{GETIDOFNAME(GetCalibrationMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationWeakBoundMax()
{GETIDOFNAME(GetCalibrationWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisTwoDTableData_Dispatch::GetCalibrationWeakBoundMin()
{GETIDOFNAME(GetCalibrationWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::SetWeakBoundtoHardBound()
{GETIDOFNAME(SetWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationCurveAxisTwoDTableData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationCurveAxisTwoDTableData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationCurveAxisTwoDTableData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisTwoDTableData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationCurveAxisTwoDTableData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationMatrixData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationMatrixData_Dispatch operations

VARIANT CalibrationMatrixData_Dispatch::GetBooleanImplValuesRange(long startXIndex, long startYIndex, long endXIndex, long endYIndex)
{GETIDOFNAME(GetBooleanImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startXIndex, startYIndex, endXIndex, endYIndex);
	return result;
}

VARIANT CalibrationMatrixData_Dispatch::GetBooleanPhysValue()
{GETIDOFNAME(GetBooleanPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationMatrixData_Dispatch::GetDoubleImplValuesRange(long startXIndex, long startYIndex, long endXIndex, long endYIndex)
{GETIDOFNAME(GetDoubleImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startXIndex, startYIndex, endXIndex, endYIndex);
	return result;
}

VARIANT CalibrationMatrixData_Dispatch::GetDoublePhysValue()
{GETIDOFNAME(GetDoublePhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationMatrixData_Dispatch::GetDoublePhysValuesRange(long startXIndex, long startYIndex, long endXIndex, long endYIndex)
{GETIDOFNAME(GetDoublePhysValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startXIndex, startYIndex, endXIndex, endYIndex);
	return result;
}

VARIANT CalibrationMatrixData_Dispatch::GetFloatImplValuesRange(long startXIndex, long startYIndex, long endXIndex, long endYIndex)
{GETIDOFNAME(GetFloatImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startXIndex, startYIndex, endXIndex, endYIndex);
	return result;
}

VARIANT CalibrationMatrixData_Dispatch::GetFloatPhysValue()
{GETIDOFNAME(GetFloatPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationMatrixData_Dispatch::GetFloatPhysValuesRange(long startXIndex, long startYIndex, long endXIndex, long endYIndex)
{GETIDOFNAME(GetFloatPhysValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startXIndex, startYIndex, endXIndex, endYIndex);
	return result;
}

CString CalibrationMatrixData_Dispatch::GetImplType()
{GETIDOFNAME(GetImplType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationMatrixData_Dispatch::GetImplValue()
{GETIDOFNAME(GetImplValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationMatrixData_Dispatch::GetIntegerImplValuesRange(long startXIndex, long startYIndex, long endXIndex, long endYIndex)
{GETIDOFNAME(GetIntegerImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startXIndex, startYIndex, endXIndex, endYIndex);
	return result;
}

VARIANT CalibrationMatrixData_Dispatch::GetIntegerPhysValue()
{GETIDOFNAME(GetIntegerPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationMatrixData_Dispatch::GetLongImplValuesRange(long startXIndex, long startYIndex, long endXIndex, long endYIndex)
{GETIDOFNAME(GetLongImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startXIndex, startYIndex, endXIndex, endYIndex);
	return result;
}

VARIANT CalibrationMatrixData_Dispatch::GetLongPhysValue()
{GETIDOFNAME(GetLongPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long CalibrationMatrixData_Dispatch::GetMaxXSize()
{GETIDOFNAME(GetMaxXSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CalibrationMatrixData_Dispatch::GetMaxYSize()
{GETIDOFNAME(GetMaxYSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationMatrixData_Dispatch::GetPhysType()
{GETIDOFNAME(GetPhysType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationMatrixData_Dispatch::GetXSize()
{GETIDOFNAME(GetXSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CalibrationMatrixData_Dispatch::GetYSize()
{GETIDOFNAME(GetYSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsWriteProtected()
{GETIDOFNAME(IsWriteProtected) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetBooleanImplValuesRange(const VARIANT& value_Renamed, long startXIndex, long startYIndex, long endXIndex, long endYIndex)
{GETIDOFNAME(SetBooleanImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startXIndex, startYIndex, endXIndex, endYIndex);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetBooleanPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetBooleanPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetDoubleImplValuesRange(const VARIANT& value_Renamed, long startXIndex, long startYIndex, long endXIndex, long endYIndex)
{GETIDOFNAME(SetDoubleImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startXIndex, startYIndex, endXIndex, endYIndex);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetDoublePhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetDoublePhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetDoublePhysValuesRange(const VARIANT& value_Renamed, long startXIndex, long startYIndex, long endXIndex, long endYIndex)
{GETIDOFNAME(SetDoublePhysValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startXIndex, startYIndex, endXIndex, endYIndex);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetFloatImplValuesRange(const VARIANT& value_Renamed, long startXIndex, long startYIndex, long endXIndex, long endYIndex)
{GETIDOFNAME(SetFloatImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startXIndex, startYIndex, endXIndex, endYIndex);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetFloatPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetFloatPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetFloatPhysValuesRange(const VARIANT& value_Renamed, long startXIndex, long startYIndex, long endXIndex, long endYIndex)
{GETIDOFNAME(SetFloatPhysValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startXIndex, startYIndex, endXIndex, endYIndex);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetImplValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetImplValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetIntegerImplValuesRange(const VARIANT& value_Renamed, long startXIndex, long startYIndex, long endXIndex, long endYIndex)
{GETIDOFNAME(SetIntegerImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startXIndex, startYIndex, endXIndex, endYIndex);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetIntegerPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetIntegerPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetLongImplValuesRange(const VARIANT& value_Renamed, long startXIndex, long startYIndex, long endXIndex, long endYIndex)
{GETIDOFNAME(SetLongImplValuesRange) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed, startXIndex, startYIndex, endXIndex, endYIndex);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetLongPhysValue(const VARIANT& value_Renamed)
{GETIDOFNAME(SetLongPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&value_Renamed);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetXSize(long xSize)
{GETIDOFNAME(SetXSize) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		xSize);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetYSize(long ySize)
{GETIDOFNAME(SetYSize) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		ySize);
	return result;
}

long CalibrationMatrixData_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationMatrixData_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationMatrixData_Dispatch::GetCalibrationHardBoundMax()
{GETIDOFNAME(GetCalibrationHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationMatrixData_Dispatch::GetCalibrationHardBoundMin()
{GETIDOFNAME(GetCalibrationHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationMatrixData_Dispatch::GetCalibrationImplHardBoundMax()
{GETIDOFNAME(GetCalibrationImplHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationMatrixData_Dispatch::GetCalibrationImplHardBoundMin()
{GETIDOFNAME(GetCalibrationImplHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationMatrixData_Dispatch::GetCalibrationImplMinIncrement()
{GETIDOFNAME(GetCalibrationImplMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationMatrixData_Dispatch::GetCalibrationImplWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationMatrixData_Dispatch::GetCalibrationImplWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationMatrixData_Dispatch::GetCalibrationMinIncrement()
{GETIDOFNAME(GetCalibrationMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationMatrixData_Dispatch::GetCalibrationWeakBoundMax()
{GETIDOFNAME(GetCalibrationWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationMatrixData_Dispatch::GetCalibrationWeakBoundMin()
{GETIDOFNAME(GetCalibrationWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::SetWeakBoundtoHardBound()
{GETIDOFNAME(SetWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationMatrixData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationMatrixData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationMatrixData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationMatrixData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationMatrixData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ExperimentView_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// ExperimentView_Dispatch operations

BOOL ExperimentView_Dispatch::CloseAllAPICalibrationViews()
{GETIDOFNAME(CloseAllAPICalibrationViews) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::CloseAllAPIMeasureViews()
{GETIDOFNAME(CloseAllAPIMeasureViews) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::CloseAllViews()
{GETIDOFNAME(CloseAllViews) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ExperimentView_Dispatch::GetExperiment()
{GETIDOFNAME(GetExperiment) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::IsExperimentChanged()
{GETIDOFNAME(IsExperimentChanged) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::IsExperimentView()
{GETIDOFNAME(IsExperimentView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::IsGroupedDevices()
{GETIDOFNAME(IsGroupedDevices) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::IsIncaExperimentView()
{GETIDOFNAME(IsIncaExperimentView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::OpenViewForExperimentDataItem(LPDISPATCH dispatch_edi)
{GETIDOFNAME(OpenViewForExperimentDataItem) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_edi);
	return result;
}

BOOL ExperimentView_Dispatch::OpenViewForExperimentElement(LPDISPATCH dispatch_el)
{GETIDOFNAME(OpenViewForExperimentElement) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_el);
	return result;
}

BOOL ExperimentView_Dispatch::OpenViewForMeasureDataItemWithMaxLabels(LPDISPATCH dispatch_mdi, long amount)
{GETIDOFNAME(OpenViewForMeasureDataItemWithMaxLabels) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_mdi, amount);
	return result;
}

BOOL ExperimentView_Dispatch::OpenViewForMeasureElementWithMaxLabels(LPDISPATCH dispatch_el, long amount)
{GETIDOFNAME(OpenViewForMeasureElementWithMaxLabels) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_el, amount);
	return result;
}

BOOL ExperimentView_Dispatch::OpenViewsForExperimentDataItems(const VARIANT& edi)
{GETIDOFNAME(OpenViewsForExperimentDataItems) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&edi);
	return result;
}

BOOL ExperimentView_Dispatch::OpenViewsForExperimentElements(const VARIANT& el)
{GETIDOFNAME(OpenViewsForExperimentElements) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&el);
	return result;
}

BOOL ExperimentView_Dispatch::OpenViewsForMeasureDataItemsWithMaxLabels(const VARIANT& mdi, long amount)
{GETIDOFNAME(OpenViewsForMeasureDataItemsWithMaxLabels) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&mdi, amount);
	return result;
}

BOOL ExperimentView_Dispatch::OpenViewsForMeasureElementsWithMaxLabels(const VARIANT& el, long amount)
{GETIDOFNAME(OpenViewsForMeasureElementsWithMaxLabels) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&el, amount);
	return result;
}

BOOL ExperimentView_Dispatch::Quit()
{GETIDOFNAME(Quit) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::SaveExperiment()
{GETIDOFNAME(SaveExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::SetGroupedDevices(long onOff)
{GETIDOFNAME(SetGroupedDevices) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		onOff);
	return result;
}

BOOL ExperimentView_Dispatch::UpdateViewForExperimentDataItem(LPDISPATCH dispatch_edi)
{GETIDOFNAME(UpdateViewForExperimentDataItem) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_edi);
	return result;
}

BOOL ExperimentView_Dispatch::UpdateViewForExperimentElement(LPDISPATCH dispatch_el)
{GETIDOFNAME(UpdateViewForExperimentElement) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_el);
	return result;
}

BOOL ExperimentView_Dispatch::UpdateViewsForExperimentDataItems(const VARIANT& edi)
{GETIDOFNAME(UpdateViewsForExperimentDataItems) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&edi);
	return result;
}

BOOL ExperimentView_Dispatch::UpdateViewsForExperimentElements(const VARIANT& el)
{GETIDOFNAME(UpdateViewsForExperimentElements) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&el);
	return result;
}

BOOL ExperimentView_Dispatch::WriteCalibrationElementsToDCMFile(const VARIANT& edi, LPCTSTR fileName)
{GETIDOFNAME(WriteCalibrationElementsToDCMFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&edi, fileName);
	return result;
}

BOOL ExperimentView_Dispatch::BringToFront()
{GETIDOFNAME(BringToFront) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::Close()
{GETIDOFNAME(Close) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::IsView()
{GETIDOFNAME(IsView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::IsDialog()
{GETIDOFNAME(IsDialog) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ExperimentView_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString ExperimentView_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentView_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long ExperimentView_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ScalarMeasureElement_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// ScalarMeasureElement_Dispatch operations

BOOL ScalarMeasureElement_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ScalarMeasureElement_Dispatch::GetValueForAcquisitionRate(LPCTSTR rate)
{GETIDOFNAME(GetValueForAcquisitionRate) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		rate);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::IsMeasureElement()
{GETIDOFNAME(IsMeasureElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::OpenViewWithMaxLabels(long amount)
{GETIDOFNAME(OpenViewWithMaxLabels) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		amount);
	return result;
}

LPDISPATCH ScalarMeasureElement_Dispatch::GetAsap2Label()
{GETIDOFNAME(GetAsap2Label) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ScalarMeasureElement_Dispatch::GetDevice()
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString ScalarMeasureElement_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH ScalarMeasureElement_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::IsCalibrationElement()
{GETIDOFNAME(IsCalibrationElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::OpenView()
{GETIDOFNAME(OpenView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ScalarMeasureElement_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString ScalarMeasureElement_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ScalarMeasureElement_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long ScalarMeasureElement_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationCurveAxisData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationCurveAxisData_Dispatch operations

BOOL CalibrationCurveAxisData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationCurveAxisData_Dispatch::GetDistribution()
{GETIDOFNAME(GetDistribution) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalibrationCurveAxisData_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::SetDistribution(LPDISPATCH dispatch_dis)
{GETIDOFNAME(SetDistribution) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_dis);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::SetValue(LPDISPATCH dispatch_array)
{GETIDOFNAME(SetValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_array);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationImplXAxisMinIncrement()
{GETIDOFNAME(GetCalibrationImplXAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationImplXAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplXAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationImplXAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplXAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationXAxisMinIncrement()
{GETIDOFNAME(GetCalibrationXAxisMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString CalibrationCurveAxisData_Dispatch::GetCalibrationXAxisSourceLabel()
{GETIDOFNAME(GetCalibrationXAxisSourceLabel) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationXAxisWeakBoundMax()
{GETIDOFNAME(GetCalibrationXAxisWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationXAxisWeakBoundMin()
{GETIDOFNAME(GetCalibrationXAxisWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::SetXAxisWeakBoundtoHardBound()
{GETIDOFNAME(SetXAxisWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CalibrationCurveAxisData_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationCurveAxisData_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationHardBoundMax()
{GETIDOFNAME(GetCalibrationHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationHardBoundMin()
{GETIDOFNAME(GetCalibrationHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationImplHardBoundMax()
{GETIDOFNAME(GetCalibrationImplHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationImplHardBoundMin()
{GETIDOFNAME(GetCalibrationImplHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationImplMinIncrement()
{GETIDOFNAME(GetCalibrationImplMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationImplWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationImplWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationMinIncrement()
{GETIDOFNAME(GetCalibrationMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationWeakBoundMax()
{GETIDOFNAME(GetCalibrationWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationCurveAxisData_Dispatch::GetCalibrationWeakBoundMin()
{GETIDOFNAME(GetCalibrationWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::SetWeakBoundtoHardBound()
{GETIDOFNAME(SetWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationCurveAxisData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationCurveAxisData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationCurveAxisData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationCurveAxisData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationCurveAxisData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ExperimentDevice_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// ExperimentDevice_Dispatch operations

VARIANT ExperimentDevice_Dispatch::ActivateRci2ForAcquisitionRate(LPCTSTR name)
{GETIDOFNAME(ActivateRci2ForAcquisitionRate) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

BOOL ExperimentDevice_Dispatch::CanAssignProject()
{GETIDOFNAME(CanAssignProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::DeActivateRci2ForAcquisitionRate(LPCTSTR name)
{GETIDOFNAME(DeActivateRci2ForAcquisitionRate) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

double ExperimentDevice_Dispatch::GetA2lScalingFactorOfSignalGroup(LPCTSTR signalGroupName)
{GETIDOFNAME(GetA2lScalingFactorOfSignalGroup) 
	double result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		signalGroupName);
	return result;
}

long ExperimentDevice_Dispatch::GetA2lScalingUnitOfSignalGroup(LPCTSTR signalGroupName)
{GETIDOFNAME(GetA2lScalingUnitOfSignalGroup) 
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		signalGroupName);
	return result;
}

VARIANT ExperimentDevice_Dispatch::GetAllAcquisitionRates()
{GETIDOFNAME(GetAllAcquisitionRates) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH ExperimentDevice_Dispatch::GetASAP2Module()
{GETIDOFNAME(GetASAP2Module) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString ExperimentDevice_Dispatch::GetDeviceType()
{GETIDOFNAME(GetDeviceType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ExperimentDevice_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ExperimentDevice_Dispatch::GetProjectDataBasePath()
{GETIDOFNAME(GetProjectDataBasePath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double ExperimentDevice_Dispatch::GetSampleRateFor(LPCTSTR aName)
{GETIDOFNAME(GetSampleRateFor) 
	double result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		aName);
	return result;
}

BOOL ExperimentDevice_Dispatch::IsAcquisitionRateAvailable(LPCTSTR rate)
{GETIDOFNAME(IsAcquisitionRateAvailable) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		rate);
	return result;
}

BOOL ExperimentDevice_Dispatch::IsActive()
{GETIDOFNAME(IsActive) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::IsCANMonitoringDevice()
{GETIDOFNAME(IsCANMonitoringDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::IsKwp2000Device()
{GETIDOFNAME(IsKwp2000Device) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::IsOutputDevice()
{GETIDOFNAME(IsOutputDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::IsWorkbaseDevice()
{GETIDOFNAME(IsWorkbaseDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::IsEtherCATSupported()
{GETIDOFNAME(IsEtherCATSupported) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::IsFULISupported()
{GETIDOFNAME(IsFULISupported) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::ResetTarget()
{GETIDOFNAME(ResetTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::StartTargetOS()
{GETIDOFNAME(StartTargetOS) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::StopTargetOS()
{GETIDOFNAME(StopTargetOS) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ExperimentDevice_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString ExperimentDevice_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentDevice_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long ExperimentDevice_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Folder_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Folder_Dispatch operations

LPDISPATCH Folder_Dispatch::AddSubFolder(LPCTSTR folderName)
{GETIDOFNAME(AddSubFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		folderName);
	return result;
}

VARIANT Folder_Dispatch::BrowseComponent(LPCTSTR name)
{GETIDOFNAME(BrowseComponent) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT Folder_Dispatch::BrowseDataBaseItem(LPCTSTR name)
{GETIDOFNAME(BrowseDataBaseItem) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT Folder_Dispatch::BrowseSubFolder(LPCTSTR name)
{GETIDOFNAME(BrowseSubFolder) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT Folder_Dispatch::GetAllComponents()
{GETIDOFNAME(GetAllComponents) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Folder_Dispatch::GetAllDataBaseItems()
{GETIDOFNAME(GetAllDataBaseItems) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Folder_Dispatch::GetAllSubFolders()
{GETIDOFNAME(GetAllSubFolders) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Folder_Dispatch::GetComponent(LPCTSTR componentName)
{GETIDOFNAME(GetComponent) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		componentName);
	return result;
}

LPDISPATCH Folder_Dispatch::GetDataBaseItem(LPCTSTR itemName)
{GETIDOFNAME(GetDataBaseItem) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		itemName);
	return result;
}

LPDISPATCH Folder_Dispatch::GetSubFolder(LPCTSTR folderName)
{GETIDOFNAME(GetSubFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		folderName);
	return result;
}

BOOL Folder_Dispatch::IsFolder()
{GETIDOFNAME(IsFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::RemoveComponent(LPDISPATCH dispatch_comp)
{GETIDOFNAME(RemoveComponent) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_comp);
	return result;
}

BOOL Folder_Dispatch::RemoveFolder(LPDISPATCH dispatch_folder, BOOL recursive)
{GETIDOFNAME(RemoveFolder) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_folder, recursive);
	return result;
}

LPDISPATCH Folder_Dispatch::Copy(LPCTSTR name)
{GETIDOFNAME(Copy) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH Folder_Dispatch::CopyToFolder(LPCTSTR name, LPDISPATCH dispatch_folder)
{GETIDOFNAME(CopyToFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_folder);
	return result;
}

BOOL Folder_Dispatch::ExportToFile(LPCTSTR fileName, BOOL multipleFiles, BOOL reference)
{GETIDOFNAME(ExportToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, multipleFiles, reference);
	return result;
}

BOOL Folder_Dispatch::GetAccessRightApplication()
{GETIDOFNAME(GetAccessRightApplication) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::GetAccessRightCodeGeneration()
{GETIDOFNAME(GetAccessRightCodeGeneration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::GetAccessRightExecute()
{GETIDOFNAME(GetAccessRightExecute) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::GetAccessRightRead()
{GETIDOFNAME(GetAccessRightRead) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::GetAccessRightWrite()
{GETIDOFNAME(GetAccessRightWrite) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT Folder_Dispatch::GetAllReferecedDataBaseItems()
{GETIDOFNAME(GetAllReferecedDataBaseItems) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString Folder_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::GetDisallowImport()
{GETIDOFNAME(GetDisallowImport) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString Folder_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Folder_Dispatch::GetNameWithPath()
{GETIDOFNAME(GetNameWithPath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Folder_Dispatch::GetOID()
{GETIDOFNAME(GetOID) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH Folder_Dispatch::GetParentFolder()
{GETIDOFNAME(GetParentFolder) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Folder_Dispatch::GetType()
{GETIDOFNAME(GetType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsAsap2CanDB()
{GETIDOFNAME(IsAsap2CanDB) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsAsap2Catalog()
{GETIDOFNAME(IsAsap2Catalog) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsAsap2Item()
{GETIDOFNAME(IsAsap2Item) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsAsap2Project()
{GETIDOFNAME(IsAsap2Project) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsAsap2ProjectFolder()
{GETIDOFNAME(IsAsap2ProjectFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsAscetContainer()
{GETIDOFNAME(IsAscetContainer) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsAscetFolder()
{GETIDOFNAME(IsAscetFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsAscetNetwork()
{GETIDOFNAME(IsAscetNetwork) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsAscetProject()
{GETIDOFNAME(IsAscetProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsAscetProtocol()
{GETIDOFNAME(IsAscetProtocol) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsClass()
{GETIDOFNAME(IsClass) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsCodeComponent()
{GETIDOFNAME(IsCodeComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsComponent()
{GETIDOFNAME(IsComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsConditionalTable()
{GETIDOFNAME(IsConditionalTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsCTBlock()
{GETIDOFNAME(IsCTBlock) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsCTComponent()
{GETIDOFNAME(IsCTComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsDataSet()
{GETIDOFNAME(IsDataSet) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsDiscreteComponent()
{GETIDOFNAME(IsDiscreteComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsEnumeration()
{GETIDOFNAME(IsEnumeration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsExperimentEnvironment()
{GETIDOFNAME(IsExperimentEnvironment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsODXProject()
{GETIDOFNAME(IsODXProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsFunctionalComponent()
{GETIDOFNAME(IsFunctionalComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsHardwareConfiguration()
{GETIDOFNAME(IsHardwareConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsIcon()
{GETIDOFNAME(IsIcon) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsIncaFolder()
{GETIDOFNAME(IsIncaFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsModule()
{GETIDOFNAME(IsModule) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsProject()
{GETIDOFNAME(IsProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsSignal()
{GETIDOFNAME(IsSignal) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsStateMachine()
{GETIDOFNAME(IsStateMachine) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::Move(LPDISPATCH dispatch_folder)
{GETIDOFNAME(Move) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_folder);
	return result;
}

BOOL Folder_Dispatch::SetAccessRightApplication(BOOL aBool)
{GETIDOFNAME(SetAccessRightApplication) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Folder_Dispatch::SetAccessRightCodeGeneration(BOOL aBool)
{GETIDOFNAME(SetAccessRightCodeGeneration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Folder_Dispatch::SetAccessRightExecute(BOOL aBool)
{GETIDOFNAME(SetAccessRightExecute) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Folder_Dispatch::SetAccessRightRead(BOOL aBool)
{GETIDOFNAME(SetAccessRightRead) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Folder_Dispatch::SetAccessRightWrite(BOOL aBool)
{GETIDOFNAME(SetAccessRightWrite) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Folder_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

BOOL Folder_Dispatch::SetDisallowImport(BOOL aBool)
{GETIDOFNAME(SetDisallowImport) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Folder_Dispatch::SetName(LPCTSTR aName)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH Folder_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Folder_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Folder_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Folder_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Folder_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// OneDTableCalibrationElement_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// OneDTableCalibrationElement_Dispatch operations

BOOL OneDTableCalibrationElement_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::IsCalibrationElement()
{GETIDOFNAME(IsCalibrationElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH OneDTableCalibrationElement_Dispatch::GetAsap2Label()
{GETIDOFNAME(GetAsap2Label) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH OneDTableCalibrationElement_Dispatch::GetDevice()
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString OneDTableCalibrationElement_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH OneDTableCalibrationElement_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::IsMeasureElement()
{GETIDOFNAME(IsMeasureElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::OpenView()
{GETIDOFNAME(OpenView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long OneDTableCalibrationElement_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString OneDTableCalibrationElement_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL OneDTableCalibrationElement_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long OneDTableCalibrationElement_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationReadOnlyDistributionData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationReadOnlyDistributionData_Dispatch operations

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationReadOnlyDistributionData_Dispatch::GetBooleanImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetBooleanImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationReadOnlyDistributionData_Dispatch::GetBooleanPhysValue()
{GETIDOFNAME(GetBooleanPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationReadOnlyDistributionData_Dispatch::GetDoubleImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetDoubleImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationReadOnlyDistributionData_Dispatch::GetDoublePhysValue()
{GETIDOFNAME(GetDoublePhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationReadOnlyDistributionData_Dispatch::GetDoublePhysValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetDoublePhysValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationReadOnlyDistributionData_Dispatch::GetFloatImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetFloatImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationReadOnlyDistributionData_Dispatch::GetFloatPhysValue()
{GETIDOFNAME(GetFloatPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationReadOnlyDistributionData_Dispatch::GetFloatPhysValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetFloatPhysValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

CString CalibrationReadOnlyDistributionData_Dispatch::GetImplType()
{GETIDOFNAME(GetImplType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationReadOnlyDistributionData_Dispatch::GetImplValue()
{GETIDOFNAME(GetImplValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationReadOnlyDistributionData_Dispatch::GetIntegerImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetIntegerImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationReadOnlyDistributionData_Dispatch::GetIntegerPhysValue()
{GETIDOFNAME(GetIntegerPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CalibrationReadOnlyDistributionData_Dispatch::GetLongImplValuesRange(long startIndex, long endIndex)
{GETIDOFNAME(GetLongImplValuesRange) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		startIndex, endIndex);
	return result;
}

VARIANT CalibrationReadOnlyDistributionData_Dispatch::GetLongPhysValue()
{GETIDOFNAME(GetLongPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long CalibrationReadOnlyDistributionData_Dispatch::GetMaxSize()
{GETIDOFNAME(GetMaxSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationReadOnlyDistributionData_Dispatch::GetPhysType()
{GETIDOFNAME(GetPhysType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationReadOnlyDistributionData_Dispatch::GetSize()
{GETIDOFNAME(GetSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsWriteProtected()
{GETIDOFNAME(IsWriteProtected) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CalibrationReadOnlyDistributionData_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationReadOnlyDistributionData_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyDistributionData_Dispatch::GetCalibrationHardBoundMax()
{GETIDOFNAME(GetCalibrationHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyDistributionData_Dispatch::GetCalibrationHardBoundMin()
{GETIDOFNAME(GetCalibrationHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyDistributionData_Dispatch::GetCalibrationImplHardBoundMax()
{GETIDOFNAME(GetCalibrationImplHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyDistributionData_Dispatch::GetCalibrationImplHardBoundMin()
{GETIDOFNAME(GetCalibrationImplHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyDistributionData_Dispatch::GetCalibrationImplMinIncrement()
{GETIDOFNAME(GetCalibrationImplMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyDistributionData_Dispatch::GetCalibrationImplWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyDistributionData_Dispatch::GetCalibrationImplWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyDistributionData_Dispatch::GetCalibrationMinIncrement()
{GETIDOFNAME(GetCalibrationMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyDistributionData_Dispatch::GetCalibrationWeakBoundMax()
{GETIDOFNAME(GetCalibrationWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationReadOnlyDistributionData_Dispatch::GetCalibrationWeakBoundMin()
{GETIDOFNAME(GetCalibrationWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::SetWeakBoundtoHardBound()
{GETIDOFNAME(SetWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationReadOnlyDistributionData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationReadOnlyDistributionData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationReadOnlyDistributionData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationReadOnlyDistributionData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationReadOnlyDistributionData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// MessageBox_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// MessageBox_Dispatch operations

BOOL MessageBox_Dispatch::Close()
{GETIDOFNAME(Close) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MessageBox_Dispatch::IsDialog()
{GETIDOFNAME(IsDialog) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MessageBox_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MessageBox_Dispatch::IsView()
{GETIDOFNAME(IsView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long MessageBox_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString MessageBox_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL MessageBox_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MessageBox_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MessageBox_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MessageBox_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MessageBox_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MessageBox_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MessageBox_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long MessageBox_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// MeasureMatrixData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// MeasureMatrixData_Dispatch operations

VARIANT MeasureMatrixData_Dispatch::GetBooleanPhysValue()
{GETIDOFNAME(GetBooleanPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT MeasureMatrixData_Dispatch::GetDoublePhysValue()
{GETIDOFNAME(GetDoublePhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT MeasureMatrixData_Dispatch::GetFloatPhysValue()
{GETIDOFNAME(GetFloatPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT MeasureMatrixData_Dispatch::GetImplValue()
{GETIDOFNAME(GetImplValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT MeasureMatrixData_Dispatch::GetIntegerPhysValue()
{GETIDOFNAME(GetIntegerPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT MeasureMatrixData_Dispatch::GetLongPhysValue()
{GETIDOFNAME(GetLongPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long MeasureMatrixData_Dispatch::GetMaxXSize()
{GETIDOFNAME(GetMaxXSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long MeasureMatrixData_Dispatch::GetMaxYSize()
{GETIDOFNAME(GetMaxYSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long MeasureMatrixData_Dispatch::GetXSize()
{GETIDOFNAME(GetXSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long MeasureMatrixData_Dispatch::GetYSize()
{GETIDOFNAME(GetYSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT MeasureMatrixData_Dispatch::ActivateRci2()
{GETIDOFNAME(ActivateRci2) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::DeActivateRci2()
{GETIDOFNAME(DeActivateRci2) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString MeasureMatrixData_Dispatch::GetCurrentAcquisitionRate()
{GETIDOFNAME(GetCurrentAcquisitionRate) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString MeasureMatrixData_Dispatch::GetImplType()
{GETIDOFNAME(GetImplType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double MeasureMatrixData_Dispatch::GetMeasureRangeMax()
{GETIDOFNAME(GetMeasureRangeMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double MeasureMatrixData_Dispatch::GetMeasureRangeMin()
{GETIDOFNAME(GetMeasureRangeMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString MeasureMatrixData_Dispatch::GetPhysType()
{GETIDOFNAME(GetPhysType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::SetCurrentAcquisitionRate(LPCTSTR rate)
{GETIDOFNAME(SetCurrentAcquisitionRate) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		rate);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString MeasureMatrixData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long MeasureMatrixData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString MeasureMatrixData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureMatrixData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long MeasureMatrixData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// MatrixCalibrationElement_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// MatrixCalibrationElement_Dispatch operations

BOOL MatrixCalibrationElement_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::IsCalibrationElement()
{GETIDOFNAME(IsCalibrationElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH MatrixCalibrationElement_Dispatch::GetAsap2Label()
{GETIDOFNAME(GetAsap2Label) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH MatrixCalibrationElement_Dispatch::GetDevice()
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString MatrixCalibrationElement_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH MatrixCalibrationElement_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::IsMeasureElement()
{GETIDOFNAME(IsMeasureElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::OpenView()
{GETIDOFNAME(OpenView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long MatrixCalibrationElement_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString MatrixCalibrationElement_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MatrixCalibrationElement_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long MatrixCalibrationElement_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// DistributionCalibrationElement_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// DistributionCalibrationElement_Dispatch operations

BOOL DistributionCalibrationElement_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::IsCalibrationElement()
{GETIDOFNAME(IsCalibrationElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH DistributionCalibrationElement_Dispatch::GetAsap2Label()
{GETIDOFNAME(GetAsap2Label) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DistributionCalibrationElement_Dispatch::GetDevice()
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString DistributionCalibrationElement_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH DistributionCalibrationElement_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::IsMeasureElement()
{GETIDOFNAME(IsMeasureElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::OpenView()
{GETIDOFNAME(OpenView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long DistributionCalibrationElement_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString DistributionCalibrationElement_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DistributionCalibrationElement_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long DistributionCalibrationElement_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CalibrationScalarData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CalibrationScalarData_Dispatch operations

BOOL CalibrationScalarData_Dispatch::GetBooleanImplValue()
{GETIDOFNAME(GetBooleanImplValue) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::GetBooleanPhysValue()
{GETIDOFNAME(GetBooleanPhysValue) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationScalarData_Dispatch::GetCharPhysValue()
{GETIDOFNAME(GetCharPhysValue) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationScalarData_Dispatch::GetDoubleImplValue()
{GETIDOFNAME(GetDoubleImplValue) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationScalarData_Dispatch::GetDoublePhysValue()
{GETIDOFNAME(GetDoublePhysValue) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationScalarData_Dispatch::GetFloatImplValue()
{GETIDOFNAME(GetFloatImplValue) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationScalarData_Dispatch::GetFloatPhysValue()
{GETIDOFNAME(GetFloatPhysValue) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString CalibrationScalarData_Dispatch::GetImplType()
{GETIDOFNAME(GetImplType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationScalarData_Dispatch::GetImplValue()
{GETIDOFNAME(GetImplValue) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

long CalibrationScalarData_Dispatch::GetIntegerImplValue()
{GETIDOFNAME(GetIntegerImplValue) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CalibrationScalarData_Dispatch::GetIntegerPhysValue()
{GETIDOFNAME(GetIntegerPhysValue) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CalibrationScalarData_Dispatch::GetLongImplValue()
{GETIDOFNAME(GetLongImplValue) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CalibrationScalarData_Dispatch::GetLongPhysValue()
{GETIDOFNAME(GetLongPhysValue) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationScalarData_Dispatch::GetPhysType()
{GETIDOFNAME(GetPhysType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsWriteProtected()
{GETIDOFNAME(IsWriteProtected) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::SetBooleanImplValue(BOOL value_Renamed)
{GETIDOFNAME(SetBooleanImplValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		value_Renamed);
	return result;
}

BOOL CalibrationScalarData_Dispatch::SetBooleanPhysValue(BOOL value_Renamed)
{GETIDOFNAME(SetBooleanPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		value_Renamed);
	return result;
}

BOOL CalibrationScalarData_Dispatch::SetCharPhysValue(LPCTSTR value_Renamed)
{GETIDOFNAME(SetCharPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		value_Renamed);
	return result;
}

BOOL CalibrationScalarData_Dispatch::SetDoublePhysValue(double value_Renamed)
{GETIDOFNAME(SetDoublePhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		value_Renamed);
	return result;
}

BOOL CalibrationScalarData_Dispatch::SetFloatPhysValue(double value_Renamed)
{GETIDOFNAME(SetFloatPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		value_Renamed);
	return result;
}

BOOL CalibrationScalarData_Dispatch::SetImplValue(double value_Renamed)
{GETIDOFNAME(SetImplValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		value_Renamed);
	return result;
}

BOOL CalibrationScalarData_Dispatch::SetIntegerImplValue(long value_Renamed)
{GETIDOFNAME(SetIntegerImplValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		value_Renamed);
	return result;
}

BOOL CalibrationScalarData_Dispatch::SetIntegerPhysValue(long value_Renamed)
{GETIDOFNAME(SetIntegerPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		value_Renamed);
	return result;
}

BOOL CalibrationScalarData_Dispatch::SetLongImplValue(long value_Renamed)
{GETIDOFNAME(SetLongImplValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		value_Renamed);
	return result;
}

BOOL CalibrationScalarData_Dispatch::SetLongPhysValue(long value_Renamed)
{GETIDOFNAME(SetLongPhysValue) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		value_Renamed);
	return result;
}

long CalibrationScalarData_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationScalarData_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CalibrationScalarData_Dispatch::GetCalibrationHardBoundMax()
{GETIDOFNAME(GetCalibrationHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationScalarData_Dispatch::GetCalibrationHardBoundMin()
{GETIDOFNAME(GetCalibrationHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationScalarData_Dispatch::GetCalibrationImplHardBoundMax()
{GETIDOFNAME(GetCalibrationImplHardBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationScalarData_Dispatch::GetCalibrationImplHardBoundMin()
{GETIDOFNAME(GetCalibrationImplHardBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationScalarData_Dispatch::GetCalibrationImplMinIncrement()
{GETIDOFNAME(GetCalibrationImplMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationScalarData_Dispatch::GetCalibrationImplWeakBoundMax()
{GETIDOFNAME(GetCalibrationImplWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationScalarData_Dispatch::GetCalibrationImplWeakBoundMin()
{GETIDOFNAME(GetCalibrationImplWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationScalarData_Dispatch::GetCalibrationMinIncrement()
{GETIDOFNAME(GetCalibrationMinIncrement) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationScalarData_Dispatch::GetCalibrationWeakBoundMax()
{GETIDOFNAME(GetCalibrationWeakBoundMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CalibrationScalarData_Dispatch::GetCalibrationWeakBoundMin()
{GETIDOFNAME(GetCalibrationWeakBoundMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::SetWeakBoundtoHardBound()
{GETIDOFNAME(SetWeakBoundtoHardBound) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CalibrationScalarData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CalibrationScalarData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CalibrationScalarData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CalibrationScalarData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CalibrationScalarData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// MeasureArrayData_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// MeasureArrayData_Dispatch operations

VARIANT MeasureArrayData_Dispatch::GetBooleanPhysValue()
{GETIDOFNAME(GetBooleanPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT MeasureArrayData_Dispatch::GetDoublePhysValue()
{GETIDOFNAME(GetDoublePhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT MeasureArrayData_Dispatch::GetFloatPhysValue()
{GETIDOFNAME(GetFloatPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT MeasureArrayData_Dispatch::GetImplValue()
{GETIDOFNAME(GetImplValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT MeasureArrayData_Dispatch::GetIntegerPhysValue()
{GETIDOFNAME(GetIntegerPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT MeasureArrayData_Dispatch::GetLongPhysValue()
{GETIDOFNAME(GetLongPhysValue) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long MeasureArrayData_Dispatch::GetMaxSize()
{GETIDOFNAME(GetMaxSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long MeasureArrayData_Dispatch::GetSize()
{GETIDOFNAME(GetSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT MeasureArrayData_Dispatch::ActivateRci2()
{GETIDOFNAME(ActivateRci2) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::DeActivateRci2()
{GETIDOFNAME(DeActivateRci2) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString MeasureArrayData_Dispatch::GetCurrentAcquisitionRate()
{GETIDOFNAME(GetCurrentAcquisitionRate) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString MeasureArrayData_Dispatch::GetImplType()
{GETIDOFNAME(GetImplType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double MeasureArrayData_Dispatch::GetMeasureRangeMax()
{GETIDOFNAME(GetMeasureRangeMax) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double MeasureArrayData_Dispatch::GetMeasureRangeMin()
{GETIDOFNAME(GetMeasureRangeMin) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

CString MeasureArrayData_Dispatch::GetPhysType()
{GETIDOFNAME(GetPhysType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsMeasureDataItem()
{GETIDOFNAME(IsMeasureDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::SetCurrentAcquisitionRate(LPCTSTR rate)
{GETIDOFNAME(SetCurrentAcquisitionRate) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		rate);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsCalibrationDataItem()
{GETIDOFNAME(IsCalibrationDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsCurveAxis()
{GETIDOFNAME(IsCurveAxis) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsCurveAxisOneDTable()
{GETIDOFNAME(IsCurveAxisOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsCurveAxisTwoDTable()
{GETIDOFNAME(IsCurveAxisTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsRescaleDistribution()
{GETIDOFNAME(IsRescaleDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsRescaleOneDTable()
{GETIDOFNAME(IsRescaleOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsRescaleTwoDTable()
{GETIDOFNAME(IsRescaleTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString MeasureArrayData_Dispatch::Label()
{GETIDOFNAME(Label) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long MeasureArrayData_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString MeasureArrayData_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL MeasureArrayData_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long MeasureArrayData_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Formula_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Formula_Dispatch operations

VARIANT Formula_Dispatch::AvailableFormulaTypes()
{GETIDOFNAME(AvailableFormulaTypes) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString Formula_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Formula_Dispatch::GetContents()
{GETIDOFNAME(GetContents) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT Formula_Dispatch::GetFormulaParameters()
{GETIDOFNAME(GetFormulaParameters) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString Formula_Dispatch::GetFormulaType()
{GETIDOFNAME(GetFormulaType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Formula_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Formula_Dispatch::GetUnit()
{GETIDOFNAME(GetUnit) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::Is5Parameters()
{GETIDOFNAME(Is5Parameters) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsIdentity()
{GETIDOFNAME(IsIdentity) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsLinear()
{GETIDOFNAME(IsLinear) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsMoebius()
{GETIDOFNAME(IsMoebius) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::Set5ParameterParameters(double p1, double p2, double p3, double p4, double p56)
{GETIDOFNAME(Set5ParameterParameters) 
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		p1, p2, p3, p4, p56);
	return result;
}

BOOL Formula_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

BOOL Formula_Dispatch::SetLinearParameters(double c0, double c1)
{GETIDOFNAME(SetLinearParameters) 
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		c0, c1);
	return result;
}

BOOL Formula_Dispatch::SetMoebiusParameters(double c0, double c1, double d0, double d1)
{GETIDOFNAME(SetMoebiusParameters) 
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		c0, c1, d0, d1);
	return result;
}

BOOL Formula_Dispatch::SetName(LPCTSTR name)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL Formula_Dispatch::SetUnit(LPCTSTR unit)
{GETIDOFNAME(SetUnit) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		unit);
	return result;
}

LPDISPATCH Formula_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Formula_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Formula_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Formula_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Formula_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// TwoDTableCalibrationElement_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// TwoDTableCalibrationElement_Dispatch operations

BOOL TwoDTableCalibrationElement_Dispatch::IsTwoDTable()
{GETIDOFNAME(IsTwoDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::IsCalibrationElement()
{GETIDOFNAME(IsCalibrationElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH TwoDTableCalibrationElement_Dispatch::GetAsap2Label()
{GETIDOFNAME(GetAsap2Label) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TwoDTableCalibrationElement_Dispatch::GetDevice()
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString TwoDTableCalibrationElement_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH TwoDTableCalibrationElement_Dispatch::GetValue()
{GETIDOFNAME(GetValue) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::IsDistribution()
{GETIDOFNAME(IsDistribution) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::IsMeasureElement()
{GETIDOFNAME(IsMeasureElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::IsOneDTable()
{GETIDOFNAME(IsOneDTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::OpenView()
{GETIDOFNAME(OpenView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long TwoDTableCalibrationElement_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString TwoDTableCalibrationElement_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL TwoDTableCalibrationElement_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long TwoDTableCalibrationElement_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// IncaDataBase_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// IncaDataBase_Dispatch operations

LPDISPATCH IncaDataBase_Dispatch::AddIncaFolder(LPCTSTR folderName)
{GETIDOFNAME(AddIncaFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		folderName);
	return result;
}

LPDISPATCH IncaDataBase_Dispatch::GetActiveHardwareConfiguration()
{GETIDOFNAME(GetActiveHardwareConfiguration) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT IncaDataBase_Dispatch::GetAllIncaFolders()
{GETIDOFNAME(GetAllIncaFolders) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH IncaDataBase_Dispatch::GetIncaFolder(LPCTSTR folderName)
{GETIDOFNAME(GetIncaFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		folderName);
	return result;
}

BOOL IncaDataBase_Dispatch::IsIncaDataBase()
{GETIDOFNAME(IsIncaDataBase) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH IncaDataBase_Dispatch::AddFolder(LPCTSTR folderName)
{GETIDOFNAME(AddFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		folderName);
	return result;
}

VARIANT IncaDataBase_Dispatch::BrowseItem(LPCTSTR itemName)
{GETIDOFNAME(BrowseItem) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		itemName);
	return result;
}

VARIANT IncaDataBase_Dispatch::BrowseItemInFolder(LPCTSTR itemName, LPCTSTR folderName)
{GETIDOFNAME(BrowseItemInFolder) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		itemName, folderName);
	return result;
}

BOOL IncaDataBase_Dispatch::Close()
{GETIDOFNAME(Close) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void IncaDataBase_Dispatch::DisableAutoCommit()
{GETIDOFNAME(DisableAutoCommit) 
	InvokeHelper( dispid , DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void IncaDataBase_Dispatch::EnableAutoCommit()
{GETIDOFNAME(EnableAutoCommit) 
	InvokeHelper( dispid , DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL IncaDataBase_Dispatch::ExportToFile(const VARIANT& items, LPCTSTR aFilePath, BOOL multipleFiles, BOOL withReferences)
{GETIDOFNAME(ExportToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&items, aFilePath, multipleFiles, withReferences);
	return result;
}

VARIANT IncaDataBase_Dispatch::GetAllFolders()
{GETIDOFNAME(GetAllFolders) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH IncaDataBase_Dispatch::GetFolder(LPCTSTR folderName)
{GETIDOFNAME(GetFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		folderName);
	return result;
}

LPDISPATCH IncaDataBase_Dispatch::GetItem(LPCTSTR itemName)
{GETIDOFNAME(GetItem) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		itemName);
	return result;
}

LPDISPATCH IncaDataBase_Dispatch::GetItemForOID(LPCTSTR oid)
{GETIDOFNAME(GetItemForOID) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		oid);
	return result;
}

LPDISPATCH IncaDataBase_Dispatch::GetItemInFolder(LPCTSTR itemName, LPCTSTR folderName)
{GETIDOFNAME(GetItemInFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		itemName, folderName);
	return result;
}

CString IncaDataBase_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long IncaDataBase_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString IncaDataBase_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL IncaDataBase_Dispatch::ImportFromFile(LPCTSTR aFileName, BOOL overwriteFlag, BOOL discardImplFlag)
{GETIDOFNAME(ImportFromFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aFileName, overwriteFlag, discardImplFlag);
	return result;
}

VARIANT IncaDataBase_Dispatch::ImportItemsFromFile(LPCTSTR aFileName, BOOL overwriteFlag, BOOL discardImplFlag)
{GETIDOFNAME(ImportItemsFromFile) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		aFileName, overwriteFlag, discardImplFlag);
	return result;
}

BOOL IncaDataBase_Dispatch::IsAscetDataBase()
{GETIDOFNAME(IsAscetDataBase) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaDataBase_Dispatch::IsDataBase()
{GETIDOFNAME(IsDataBase) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaDataBase_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaDataBase_Dispatch::Remove(LPDISPATCH dispatch_aFolderItem, BOOL recursive)
{GETIDOFNAME(Remove) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_aFolderItem, recursive);
	return result;
}

BOOL IncaDataBase_Dispatch::Save()
{GETIDOFNAME(Save) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaDataBase_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long IncaDataBase_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// HWSystem_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// HWSystem_Dispatch operations

VARIANT HWSystem_Dispatch::GetAllDevices()
{GETIDOFNAME(GetAllDevices) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT HWSystem_Dispatch::GetAllSystems()
{GETIDOFNAME(GetAllSystems) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWSystem_Dispatch::GetDevice(LPCTSTR aName)
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		aName);
	return result;
}

CString HWSystem_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWSystem_Dispatch::GetParentSystem()
{GETIDOFNAME(GetParentSystem) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWSystem_Dispatch::GetSystem(LPCTSTR aName)
{GETIDOFNAME(GetSystem) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH HWSystem_Dispatch::GetSystemDescription()
{GETIDOFNAME(GetSystemDescription) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::SetName(LPCTSTR aName)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH HWSystem_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long HWSystem_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString HWSystem_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystem_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long HWSystem_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// HWDeviceDescription_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// HWDeviceDescription_Dispatch operations

VARIANT HWDeviceDescription_Dispatch::GetAllSubDeviceDescriptions()
{GETIDOFNAME(GetAllSubDeviceDescriptions) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString HWDeviceDescription_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWDeviceDescription_Dispatch::GetParentSystemDescription()
{GETIDOFNAME(GetParentSystemDescription) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWDeviceDescription_Dispatch::GetSubDeviceDescription(LPCTSTR aName)
{GETIDOFNAME(GetSubDeviceDescription) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		aName);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWDeviceDescription_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long HWDeviceDescription_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString HWDeviceDescription_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDeviceDescription_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long HWDeviceDescription_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// HWDevice_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// HWDevice_Dispatch operations

VARIANT HWDevice_Dispatch::GetAllSubDevices()
{GETIDOFNAME(GetAllSubDevices) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWDevice_Dispatch::GetDeviceDescription()
{GETIDOFNAME(GetDeviceDescription) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString HWDevice_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWDevice_Dispatch::GetParentSystem()
{GETIDOFNAME(GetParentSystem) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWDevice_Dispatch::GetSubDevice(LPCTSTR aName)
{GETIDOFNAME(GetSubDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		aName);
	return result;
}

BOOL HWDevice_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsProjectDevice()
{GETIDOFNAME(IsProjectDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsWorkbaseDevice()
{GETIDOFNAME(IsWorkbaseDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::SetName(LPCTSTR aName)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH HWDevice_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long HWDevice_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString HWDevice_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWDevice_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long HWDevice_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// HWSubDevice_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// HWSubDevice_Dispatch operations

CString HWSubDevice_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWSubDevice_Dispatch::GetParentDevice()
{GETIDOFNAME(GetParentDevice) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWSubDevice_Dispatch::GetSubDeviceDescription()
{GETIDOFNAME(GetSubDeviceDescription) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::SetName(LPCTSTR aName)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH HWSubDevice_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long HWSubDevice_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString HWSubDevice_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDevice_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long HWSubDevice_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Asap2RationalCompuMethod_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Asap2RationalCompuMethod_Dispatch operations

VARIANT Asap2RationalCompuMethod_Dispatch::FormulaCoefficients()
{GETIDOFNAME(FormulaCoefficients) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

double Asap2RationalCompuMethod_Dispatch::GetC0()
{GETIDOFNAME(GetC0) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double Asap2RationalCompuMethod_Dispatch::GetC1()
{GETIDOFNAME(GetC1) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

VARIANT Asap2RationalCompuMethod_Dispatch::GetFormulaCoefficients()
{GETIDOFNAME(GetFormulaCoefficients) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2RationalCompuMethod_Dispatch::GetParameterValues()
{GETIDOFNAME(GetParameterValues) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::IsIdentity()
{GETIDOFNAME(IsIdentity) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::IsLinear()
{GETIDOFNAME(IsLinear) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::SetC0(double c0)
{GETIDOFNAME(SetC0) 
	BOOL result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		c0);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::SetC1(double c1)
{GETIDOFNAME(SetC1) 
	BOOL result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		c1);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::SetFormulaCoefficients(const VARIANT& coeffs)
{GETIDOFNAME(SetFormulaCoefficients) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&coeffs);
	return result;
}

CString Asap2RationalCompuMethod_Dispatch::GetConversionType()
{GETIDOFNAME(GetConversionType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2RationalCompuMethod_Dispatch::GetType()
{GETIDOFNAME(GetType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2RationalCompuMethod_Dispatch::GetUnit()
{GETIDOFNAME(GetUnit) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::SetUnit(LPCTSTR unit)
{GETIDOFNAME(SetUnit) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		unit);
	return result;
}

CString Asap2RationalCompuMethod_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2RationalCompuMethod_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::Remove()
{GETIDOFNAME(Remove) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::Rename(LPCTSTR name)
{GETIDOFNAME(Rename) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

long Asap2RationalCompuMethod_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2RationalCompuMethod_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2RationalCompuMethod_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Asap2RationalCompuMethod_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// KWP2000Response_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// KWP2000Response_Dispatch operations

VARIANT KWP2000Response_Dispatch::Data()
{GETIDOFNAME(Data) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString KWP2000Response_Dispatch::ErrorText()
{GETIDOFNAME(ErrorText) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Response_Dispatch::IsBusy()
{GETIDOFNAME(IsBusy) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Response_Dispatch::IsError()
{GETIDOFNAME(IsError) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long KWP2000Response_Dispatch::ServiceId()
{GETIDOFNAME(ServiceId) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// DServerDiagnosticExperimentAccess_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// DServerDiagnosticExperimentAccess_Dispatch operations

VARIANT DServerDiagnosticExperimentAccess_Dispatch::GetAvailableDiagnosticActions()
{GETIDOFNAME(GetAvailableDiagnosticActions) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// IncaExperimentView_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// IncaExperimentView_Dispatch operations

CString IncaExperimentView_Dispatch::GetExperimentEnvironmentPathName()
{GETIDOFNAME(GetExperimentEnvironmentPathName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaExperimentView_Dispatch::GetHardwareConfigurationPathName()
{GETIDOFNAME(GetHardwareConfigurationPathName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::IsIncaExperimentView()
{GETIDOFNAME(IsIncaExperimentView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::CloseAllAPICalibrationViews()
{GETIDOFNAME(CloseAllAPICalibrationViews) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::CloseAllAPIMeasureViews()
{GETIDOFNAME(CloseAllAPIMeasureViews) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::CloseAllViews()
{GETIDOFNAME(CloseAllViews) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH IncaExperimentView_Dispatch::GetExperiment()
{GETIDOFNAME(GetExperiment) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::IsExperimentChanged()
{GETIDOFNAME(IsExperimentChanged) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::IsExperimentView()
{GETIDOFNAME(IsExperimentView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::IsGroupedDevices()
{GETIDOFNAME(IsGroupedDevices) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::OpenViewForExperimentDataItem(LPDISPATCH dispatch_edi)
{GETIDOFNAME(OpenViewForExperimentDataItem) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_edi);
	return result;
}

BOOL IncaExperimentView_Dispatch::OpenViewForExperimentElement(LPDISPATCH dispatch_el)
{GETIDOFNAME(OpenViewForExperimentElement) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_el);
	return result;
}

BOOL IncaExperimentView_Dispatch::OpenViewForMeasureDataItemWithMaxLabels(LPDISPATCH dispatch_mdi, long amount)
{GETIDOFNAME(OpenViewForMeasureDataItemWithMaxLabels) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_mdi, amount);
	return result;
}

BOOL IncaExperimentView_Dispatch::OpenViewForMeasureElementWithMaxLabels(LPDISPATCH dispatch_el, long amount)
{GETIDOFNAME(OpenViewForMeasureElementWithMaxLabels) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_el, amount);
	return result;
}

BOOL IncaExperimentView_Dispatch::OpenViewsForExperimentDataItems(const VARIANT& edi)
{GETIDOFNAME(OpenViewsForExperimentDataItems) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&edi);
	return result;
}

BOOL IncaExperimentView_Dispatch::OpenViewsForExperimentElements(const VARIANT& el)
{GETIDOFNAME(OpenViewsForExperimentElements) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&el);
	return result;
}

BOOL IncaExperimentView_Dispatch::OpenViewsForMeasureDataItemsWithMaxLabels(const VARIANT& mdi, long amount)
{GETIDOFNAME(OpenViewsForMeasureDataItemsWithMaxLabels) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&mdi, amount);
	return result;
}

BOOL IncaExperimentView_Dispatch::OpenViewsForMeasureElementsWithMaxLabels(const VARIANT& el, long amount)
{GETIDOFNAME(OpenViewsForMeasureElementsWithMaxLabels) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&el, amount);
	return result;
}

BOOL IncaExperimentView_Dispatch::Quit()
{GETIDOFNAME(Quit) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::SaveExperiment()
{GETIDOFNAME(SaveExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::SetGroupedDevices(long onOff)
{GETIDOFNAME(SetGroupedDevices) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		onOff);
	return result;
}

BOOL IncaExperimentView_Dispatch::UpdateViewForExperimentDataItem(LPDISPATCH dispatch_edi)
{GETIDOFNAME(UpdateViewForExperimentDataItem) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_edi);
	return result;
}

BOOL IncaExperimentView_Dispatch::UpdateViewForExperimentElement(LPDISPATCH dispatch_el)
{GETIDOFNAME(UpdateViewForExperimentElement) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_el);
	return result;
}

BOOL IncaExperimentView_Dispatch::UpdateViewsForExperimentDataItems(const VARIANT& edi)
{GETIDOFNAME(UpdateViewsForExperimentDataItems) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&edi);
	return result;
}

BOOL IncaExperimentView_Dispatch::UpdateViewsForExperimentElements(const VARIANT& el)
{GETIDOFNAME(UpdateViewsForExperimentElements) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&el);
	return result;
}

BOOL IncaExperimentView_Dispatch::WriteCalibrationElementsToDCMFile(const VARIANT& edi, LPCTSTR fileName)
{GETIDOFNAME(WriteCalibrationElementsToDCMFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&edi, fileName);
	return result;
}

BOOL IncaExperimentView_Dispatch::BringToFront()
{GETIDOFNAME(BringToFront) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::Close()
{GETIDOFNAME(Close) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::IsView()
{GETIDOFNAME(IsView) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::IsDialog()
{GETIDOFNAME(IsDialog) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long IncaExperimentView_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString IncaExperimentView_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaExperimentView_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long IncaExperimentView_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// HWProjectDevice_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// HWProjectDevice_Dispatch operations

BOOL HWProjectDevice_Dispatch::IsProjectDevice()
{GETIDOFNAME(IsProjectDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::SetProject(LPDISPATCH dispatch_prj)
{GETIDOFNAME(SetProject) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_prj);
	return result;
}

BOOL HWProjectDevice_Dispatch::CanBeUsedWithProject(LPDISPATCH dispatch_prj)
{GETIDOFNAME(CanBeUsedWithProject) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_prj);
	return result;
}

VARIANT HWProjectDevice_Dispatch::GetAllSubDevices()
{GETIDOFNAME(GetAllSubDevices) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWProjectDevice_Dispatch::GetDeviceDescription()
{GETIDOFNAME(GetDeviceDescription) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString HWProjectDevice_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWProjectDevice_Dispatch::GetParentSystem()
{GETIDOFNAME(GetParentSystem) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWProjectDevice_Dispatch::GetSubDevice(LPCTSTR aName)
{GETIDOFNAME(GetSubDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		aName);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsWorkbaseDevice()
{GETIDOFNAME(IsWorkbaseDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::SetName(LPCTSTR aName)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH HWProjectDevice_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long HWProjectDevice_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString HWProjectDevice_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWProjectDevice_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long HWProjectDevice_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// HWWorkbaseDevice_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// HWWorkbaseDevice_Dispatch operations

BOOL HWWorkbaseDevice_Dispatch::IsWorkbaseDevice()
{GETIDOFNAME(IsWorkbaseDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::SetProjectAndDataSet(LPDISPATCH dispatch_prj, LPCTSTR aName)
{GETIDOFNAME(SetProjectAndDataSet) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_prj, aName);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::SetProjectAndWorkbase(LPDISPATCH dispatch_prj, LPCTSTR aName)
{GETIDOFNAME(SetProjectAndWorkbase) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_prj, aName);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::SetWorkbase(LPCTSTR aName)
{GETIDOFNAME(SetWorkbase) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::SetODXProject(LPDISPATCH dispatch_prj)
{GETIDOFNAME(SetODXProject) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_prj);
	return result;
}

LPDISPATCH HWWorkbaseDevice_Dispatch::GetOdxFlashDevice()
{GETIDOFNAME(GetOdxFlashDevice) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsOdxSupport()
{GETIDOFNAME(IsOdxSupport) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsConfiguredForOdxFlashing()
{GETIDOFNAME(IsConfiguredForOdxFlashing) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::QuickStart_Enable()
{GETIDOFNAME(QuickStart_Enable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::QuickStart_Disable()
{GETIDOFNAME(QuickStart_Disable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsProjectDevice()
{GETIDOFNAME(IsProjectDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::SetProject(LPDISPATCH dispatch_prj)
{GETIDOFNAME(SetProject) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_prj);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::CanBeUsedWithProject(LPDISPATCH dispatch_prj)
{GETIDOFNAME(CanBeUsedWithProject) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_prj);
	return result;
}

VARIANT HWWorkbaseDevice_Dispatch::GetAllSubDevices()
{GETIDOFNAME(GetAllSubDevices) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWWorkbaseDevice_Dispatch::GetDeviceDescription()
{GETIDOFNAME(GetDeviceDescription) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString HWWorkbaseDevice_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWWorkbaseDevice_Dispatch::GetParentSystem()
{GETIDOFNAME(GetParentSystem) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWWorkbaseDevice_Dispatch::GetSubDevice(LPCTSTR aName)
{GETIDOFNAME(GetSubDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		aName);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::SetName(LPCTSTR aName)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH HWWorkbaseDevice_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long HWWorkbaseDevice_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString HWWorkbaseDevice_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWWorkbaseDevice_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long HWWorkbaseDevice_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Asap2Project_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Asap2Project_Dispatch operations

LPDISPATCH Asap2Project_Dispatch::AddTopFolder(LPCTSTR name)
{GETIDOFNAME(AddTopFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

VARIANT Asap2Project_Dispatch::AllDataSets()
{GETIDOFNAME(AllDataSets) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2Project_Dispatch::Asap2Module()
{GETIDOFNAME(Asap2Module) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2Project_Dispatch::Asap2ModuleForDataSet(LPDISPATCH dispatch_dataSet)
{GETIDOFNAME(Asap2ModuleForDataSet) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		dispatch_dataSet);
	return result;
}

CString Asap2Project_Dispatch::CopyDataSetNamed(LPCTSTR aDataSetName)
{GETIDOFNAME(CopyDataSetNamed) 
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		aDataSetName);
	return result;
}

LPDISPATCH Asap2Project_Dispatch::DataSetForName(LPCTSTR folderPathName)
{GETIDOFNAME(DataSetForName) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		folderPathName);
	return result;
}

BOOL Asap2Project_Dispatch::DeleteDataSetNamed(LPCTSTR aDataSetName)
{GETIDOFNAME(DeleteDataSetNamed) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aDataSetName);
	return result;
}

VARIANT Asap2Project_Dispatch::GetAllDataSets()
{GETIDOFNAME(GetAllDataSets) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Project_Dispatch::GetAllReadOnlyDataSets()
{GETIDOFNAME(GetAllReadOnlyDataSets) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Project_Dispatch::GetAllDataSetNames()
{GETIDOFNAME(GetAllDataSetNames) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Project_Dispatch::GetAllTopFolders()
{GETIDOFNAME(GetAllTopFolders) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Project_Dispatch::GetAllWorkbases()
{GETIDOFNAME(GetAllWorkbases) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString Asap2Project_Dispatch::GetMasterDataSet()
{GETIDOFNAME(GetMasterDataSet) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Project_Dispatch::GetSupportedIfdataList()
{GETIDOFNAME(GetSupportedIfdataList) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2Project_Dispatch::GetTopFolderNamed(LPCTSTR name)
{GETIDOFNAME(GetTopFolderNamed) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

BOOL Asap2Project_Dispatch::IsAsap2Project()
{GETIDOFNAME(IsAsap2Project) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsProject()
{GETIDOFNAME(IsProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2Project_Dispatch::MasterDataSet()
{GETIDOFNAME(MasterDataSet) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2Project_Dispatch::ReadHexFile(LPCTSTR pathName, LPDISPATCH dispatch_parentFolder, LPCTSTR dataSetName)
{GETIDOFNAME(ReadHexFile) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		pathName, dispatch_parentFolder, dataSetName);
	return result;
}

BOOL Asap2Project_Dispatch::RemoveTopFolder(LPCTSTR name)
{GETIDOFNAME(RemoveTopFolder) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL Asap2Project_Dispatch::WriteAsap2ToFile(LPCTSTR anA2lFileName)
{GETIDOFNAME(WriteAsap2ToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		anA2lFileName);
	return result;
}

BOOL Asap2Project_Dispatch::IsAsap2Item()
{GETIDOFNAME(IsAsap2Item) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::AddTextSegment(LPCTSTR textSegment, const VARIANT& views)
{GETIDOFNAME(AddTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		textSegment, &views);
	return result;
}

BOOL Asap2Project_Dispatch::AssignViewToTextSegment(LPCTSTR View, LPCTSTR textSegment)
{GETIDOFNAME(AssignViewToTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		View, textSegment);
	return result;
}

BOOL Asap2Project_Dispatch::DeAssignViewFromTextSegment(LPCTSTR View, LPCTSTR textSegment)
{GETIDOFNAME(DeAssignViewFromTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		View, textSegment);
	return result;
}

LPDISPATCH Asap2Project_Dispatch::Edit()
{GETIDOFNAME(Edit) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2Project_Dispatch::EditInFront()
{GETIDOFNAME(EditInFront) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Asap2Project_Dispatch::GetConfiguration()
{GETIDOFNAME(GetConfiguration) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2Project_Dispatch::GetDate()
{GETIDOFNAME(GetDate) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2Project_Dispatch::GetNoteForTextSegment(LPCTSTR textSegment)
{GETIDOFNAME(GetNoteForTextSegment) 
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		textSegment);
	return result;
}

VARIANT Asap2Project_Dispatch::GetTextSegments()
{GETIDOFNAME(GetTextSegments) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString Asap2Project_Dispatch::GetVersion()
{GETIDOFNAME(GetVersion) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Project_Dispatch::GetViewsForTextSegment(LPCTSTR textSegment)
{GETIDOFNAME(GetViewsForTextSegment) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		textSegment);
	return result;
}

BOOL Asap2Project_Dispatch::IsComponent()
{GETIDOFNAME(IsComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsEdition()
{GETIDOFNAME(IsEdition) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsVersion()
{GETIDOFNAME(IsVersion) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::RemoveTextSegment(LPCTSTR textSegment)
{GETIDOFNAME(RemoveTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		textSegment);
	return result;
}

BOOL Asap2Project_Dispatch::ResetVersion()
{GETIDOFNAME(ResetVersion) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::SetConfiguration(LPCTSTR configuration)
{GETIDOFNAME(SetConfiguration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		configuration);
	return result;
}

BOOL Asap2Project_Dispatch::SetEdition()
{GETIDOFNAME(SetEdition) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::SetNoteForTextSegment(LPCTSTR noteText, LPCTSTR textSegment)
{GETIDOFNAME(SetNoteForTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		noteText, textSegment);
	return result;
}

BOOL Asap2Project_Dispatch::SetVersion(LPCTSTR version)
{GETIDOFNAME(SetVersion) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		version);
	return result;
}

LPDISPATCH Asap2Project_Dispatch::Copy(LPCTSTR name)
{GETIDOFNAME(Copy) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH Asap2Project_Dispatch::CopyToFolder(LPCTSTR name, LPDISPATCH dispatch_folder)
{GETIDOFNAME(CopyToFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_folder);
	return result;
}

BOOL Asap2Project_Dispatch::ExportToFile(LPCTSTR fileName, BOOL multipleFiles, BOOL reference)
{GETIDOFNAME(ExportToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, multipleFiles, reference);
	return result;
}

BOOL Asap2Project_Dispatch::GetAccessRightApplication()
{GETIDOFNAME(GetAccessRightApplication) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::GetAccessRightCodeGeneration()
{GETIDOFNAME(GetAccessRightCodeGeneration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::GetAccessRightExecute()
{GETIDOFNAME(GetAccessRightExecute) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::GetAccessRightRead()
{GETIDOFNAME(GetAccessRightRead) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::GetAccessRightWrite()
{GETIDOFNAME(GetAccessRightWrite) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Project_Dispatch::GetAllReferecedDataBaseItems()
{GETIDOFNAME(GetAllReferecedDataBaseItems) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString Asap2Project_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::GetDisallowImport()
{GETIDOFNAME(GetDisallowImport) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString Asap2Project_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2Project_Dispatch::GetNameWithPath()
{GETIDOFNAME(GetNameWithPath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2Project_Dispatch::GetOID()
{GETIDOFNAME(GetOID) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2Project_Dispatch::GetParentFolder()
{GETIDOFNAME(GetParentFolder) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Asap2Project_Dispatch::GetType()
{GETIDOFNAME(GetType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsAsap2CanDB()
{GETIDOFNAME(IsAsap2CanDB) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsAsap2Catalog()
{GETIDOFNAME(IsAsap2Catalog) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsAsap2ProjectFolder()
{GETIDOFNAME(IsAsap2ProjectFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsAscetContainer()
{GETIDOFNAME(IsAscetContainer) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsAscetFolder()
{GETIDOFNAME(IsAscetFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsAscetNetwork()
{GETIDOFNAME(IsAscetNetwork) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsAscetProject()
{GETIDOFNAME(IsAscetProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsAscetProtocol()
{GETIDOFNAME(IsAscetProtocol) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsClass()
{GETIDOFNAME(IsClass) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsCodeComponent()
{GETIDOFNAME(IsCodeComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsConditionalTable()
{GETIDOFNAME(IsConditionalTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsCTBlock()
{GETIDOFNAME(IsCTBlock) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsCTComponent()
{GETIDOFNAME(IsCTComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsDataSet()
{GETIDOFNAME(IsDataSet) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsDiscreteComponent()
{GETIDOFNAME(IsDiscreteComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsEnumeration()
{GETIDOFNAME(IsEnumeration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsExperimentEnvironment()
{GETIDOFNAME(IsExperimentEnvironment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsODXProject()
{GETIDOFNAME(IsODXProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsFolder()
{GETIDOFNAME(IsFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsFunctionalComponent()
{GETIDOFNAME(IsFunctionalComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsHardwareConfiguration()
{GETIDOFNAME(IsHardwareConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsIcon()
{GETIDOFNAME(IsIcon) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsIncaFolder()
{GETIDOFNAME(IsIncaFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsModule()
{GETIDOFNAME(IsModule) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsSignal()
{GETIDOFNAME(IsSignal) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsStateMachine()
{GETIDOFNAME(IsStateMachine) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::Move(LPDISPATCH dispatch_folder)
{GETIDOFNAME(Move) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_folder);
	return result;
}

BOOL Asap2Project_Dispatch::SetAccessRightApplication(BOOL aBool)
{GETIDOFNAME(SetAccessRightApplication) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Asap2Project_Dispatch::SetAccessRightCodeGeneration(BOOL aBool)
{GETIDOFNAME(SetAccessRightCodeGeneration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Asap2Project_Dispatch::SetAccessRightExecute(BOOL aBool)
{GETIDOFNAME(SetAccessRightExecute) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Asap2Project_Dispatch::SetAccessRightRead(BOOL aBool)
{GETIDOFNAME(SetAccessRightRead) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Asap2Project_Dispatch::SetAccessRightWrite(BOOL aBool)
{GETIDOFNAME(SetAccessRightWrite) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Asap2Project_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

BOOL Asap2Project_Dispatch::SetDisallowImport(BOOL aBool)
{GETIDOFNAME(SetDisallowImport) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Asap2Project_Dispatch::SetName(LPCTSTR aName)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH Asap2Project_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Asap2Project_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2Project_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Project_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Asap2Project_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ExperimentEnvironment_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// ExperimentEnvironment_Dispatch operations

LPDISPATCH ExperimentEnvironment_Dispatch::GetHardwareConfiguration()
{GETIDOFNAME(GetHardwareConfiguration) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsExperimentEnvironment()
{GETIDOFNAME(IsExperimentEnvironment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ExperimentEnvironment_Dispatch::OpenExperiment()
{GETIDOFNAME(OpenExperiment) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::SetHardwareConfiguration(LPDISPATCH dispatch_hwk)
{GETIDOFNAME(SetHardwareConfiguration) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hwk);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::AddTextSegment(LPCTSTR textSegment, const VARIANT& views)
{GETIDOFNAME(AddTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		textSegment, &views);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::AssignViewToTextSegment(LPCTSTR View, LPCTSTR textSegment)
{GETIDOFNAME(AssignViewToTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		View, textSegment);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::DeAssignViewFromTextSegment(LPCTSTR View, LPCTSTR textSegment)
{GETIDOFNAME(DeAssignViewFromTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		View, textSegment);
	return result;
}

LPDISPATCH ExperimentEnvironment_Dispatch::Edit()
{GETIDOFNAME(Edit) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ExperimentEnvironment_Dispatch::EditInFront()
{GETIDOFNAME(EditInFront) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString ExperimentEnvironment_Dispatch::GetConfiguration()
{GETIDOFNAME(GetConfiguration) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ExperimentEnvironment_Dispatch::GetDate()
{GETIDOFNAME(GetDate) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ExperimentEnvironment_Dispatch::GetNoteForTextSegment(LPCTSTR textSegment)
{GETIDOFNAME(GetNoteForTextSegment) 
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		textSegment);
	return result;
}

VARIANT ExperimentEnvironment_Dispatch::GetTextSegments()
{GETIDOFNAME(GetTextSegments) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString ExperimentEnvironment_Dispatch::GetVersion()
{GETIDOFNAME(GetVersion) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT ExperimentEnvironment_Dispatch::GetViewsForTextSegment(LPCTSTR textSegment)
{GETIDOFNAME(GetViewsForTextSegment) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		textSegment);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsComponent()
{GETIDOFNAME(IsComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsEdition()
{GETIDOFNAME(IsEdition) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsVersion()
{GETIDOFNAME(IsVersion) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::RemoveTextSegment(LPCTSTR textSegment)
{GETIDOFNAME(RemoveTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		textSegment);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::ResetVersion()
{GETIDOFNAME(ResetVersion) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::SetConfiguration(LPCTSTR configuration)
{GETIDOFNAME(SetConfiguration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		configuration);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::SetEdition()
{GETIDOFNAME(SetEdition) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::SetNoteForTextSegment(LPCTSTR noteText, LPCTSTR textSegment)
{GETIDOFNAME(SetNoteForTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		noteText, textSegment);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::SetVersion(LPCTSTR version)
{GETIDOFNAME(SetVersion) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		version);
	return result;
}

LPDISPATCH ExperimentEnvironment_Dispatch::Copy(LPCTSTR name)
{GETIDOFNAME(Copy) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH ExperimentEnvironment_Dispatch::CopyToFolder(LPCTSTR name, LPDISPATCH dispatch_folder)
{GETIDOFNAME(CopyToFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_folder);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::ExportToFile(LPCTSTR fileName, BOOL multipleFiles, BOOL reference)
{GETIDOFNAME(ExportToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, multipleFiles, reference);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::GetAccessRightApplication()
{GETIDOFNAME(GetAccessRightApplication) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::GetAccessRightCodeGeneration()
{GETIDOFNAME(GetAccessRightCodeGeneration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::GetAccessRightExecute()
{GETIDOFNAME(GetAccessRightExecute) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::GetAccessRightRead()
{GETIDOFNAME(GetAccessRightRead) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::GetAccessRightWrite()
{GETIDOFNAME(GetAccessRightWrite) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT ExperimentEnvironment_Dispatch::GetAllReferecedDataBaseItems()
{GETIDOFNAME(GetAllReferecedDataBaseItems) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString ExperimentEnvironment_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::GetDisallowImport()
{GETIDOFNAME(GetDisallowImport) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString ExperimentEnvironment_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ExperimentEnvironment_Dispatch::GetNameWithPath()
{GETIDOFNAME(GetNameWithPath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ExperimentEnvironment_Dispatch::GetOID()
{GETIDOFNAME(GetOID) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH ExperimentEnvironment_Dispatch::GetParentFolder()
{GETIDOFNAME(GetParentFolder) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString ExperimentEnvironment_Dispatch::GetType()
{GETIDOFNAME(GetType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsAsap2CanDB()
{GETIDOFNAME(IsAsap2CanDB) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsAsap2Catalog()
{GETIDOFNAME(IsAsap2Catalog) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsAsap2Item()
{GETIDOFNAME(IsAsap2Item) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsAsap2Project()
{GETIDOFNAME(IsAsap2Project) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsAsap2ProjectFolder()
{GETIDOFNAME(IsAsap2ProjectFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsAscetContainer()
{GETIDOFNAME(IsAscetContainer) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsAscetFolder()
{GETIDOFNAME(IsAscetFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsAscetNetwork()
{GETIDOFNAME(IsAscetNetwork) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsAscetProject()
{GETIDOFNAME(IsAscetProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsAscetProtocol()
{GETIDOFNAME(IsAscetProtocol) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsClass()
{GETIDOFNAME(IsClass) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsCodeComponent()
{GETIDOFNAME(IsCodeComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsConditionalTable()
{GETIDOFNAME(IsConditionalTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsCTBlock()
{GETIDOFNAME(IsCTBlock) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsCTComponent()
{GETIDOFNAME(IsCTComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsDataSet()
{GETIDOFNAME(IsDataSet) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsDiscreteComponent()
{GETIDOFNAME(IsDiscreteComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsEnumeration()
{GETIDOFNAME(IsEnumeration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsODXProject()
{GETIDOFNAME(IsODXProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsFolder()
{GETIDOFNAME(IsFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsFunctionalComponent()
{GETIDOFNAME(IsFunctionalComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsHardwareConfiguration()
{GETIDOFNAME(IsHardwareConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsIcon()
{GETIDOFNAME(IsIcon) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsIncaFolder()
{GETIDOFNAME(IsIncaFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsModule()
{GETIDOFNAME(IsModule) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsProject()
{GETIDOFNAME(IsProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsSignal()
{GETIDOFNAME(IsSignal) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsStateMachine()
{GETIDOFNAME(IsStateMachine) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::Move(LPDISPATCH dispatch_folder)
{GETIDOFNAME(Move) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_folder);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::SetAccessRightApplication(BOOL aBool)
{GETIDOFNAME(SetAccessRightApplication) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::SetAccessRightCodeGeneration(BOOL aBool)
{GETIDOFNAME(SetAccessRightCodeGeneration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::SetAccessRightExecute(BOOL aBool)
{GETIDOFNAME(SetAccessRightExecute) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::SetAccessRightRead(BOOL aBool)
{GETIDOFNAME(SetAccessRightRead) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::SetAccessRightWrite(BOOL aBool)
{GETIDOFNAME(SetAccessRightWrite) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::SetDisallowImport(BOOL aBool)
{GETIDOFNAME(SetDisallowImport) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::SetName(LPCTSTR aName)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH ExperimentEnvironment_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ExperimentEnvironment_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString ExperimentEnvironment_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ExperimentEnvironment_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long ExperimentEnvironment_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// DataSet_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// DataSet_Dispatch operations

BOOL DataSet_Dispatch::ClearReadOnly()
{GETIDOFNAME(ClearReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataSet_Dispatch::CopyToFolder(LPCTSTR name, LPDISPATCH dispatch_folder)
{GETIDOFNAME(CopyToFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_folder);
	return result;
}

BOOL DataSet_Dispatch::CreateHexFile(LPCTSTR pathName)
{GETIDOFNAME(CreateHexFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pathName);
	return result;
}

BOOL DataSet_Dispatch::Delete()
{GETIDOFNAME(Delete) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataSet_Dispatch::Duplicate()
{GETIDOFNAME(Duplicate) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString DataSet_Dispatch::GetBinaryFileName()
{GETIDOFNAME(GetBinaryFileName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataSet_Dispatch::GetProject()
{GETIDOFNAME(GetProject) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsDataSet()
{GETIDOFNAME(IsDataSet) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsMasterData()
{GETIDOFNAME(IsMasterData) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsReadOnly()
{GETIDOFNAME(IsReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::Move(LPDISPATCH dispatch_folder)
{GETIDOFNAME(Move) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_folder);
	return result;
}

BOOL DataSet_Dispatch::SetReadOnly()
{GETIDOFNAME(SetReadOnly) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataSet_Dispatch::Copy(LPCTSTR name)
{GETIDOFNAME(Copy) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

BOOL DataSet_Dispatch::ExportToFile(LPCTSTR fileName, BOOL multipleFiles, BOOL reference)
{GETIDOFNAME(ExportToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, multipleFiles, reference);
	return result;
}

BOOL DataSet_Dispatch::GetAccessRightApplication()
{GETIDOFNAME(GetAccessRightApplication) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::GetAccessRightCodeGeneration()
{GETIDOFNAME(GetAccessRightCodeGeneration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::GetAccessRightExecute()
{GETIDOFNAME(GetAccessRightExecute) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::GetAccessRightRead()
{GETIDOFNAME(GetAccessRightRead) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::GetAccessRightWrite()
{GETIDOFNAME(GetAccessRightWrite) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT DataSet_Dispatch::GetAllReferecedDataBaseItems()
{GETIDOFNAME(GetAllReferecedDataBaseItems) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString DataSet_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::GetDisallowImport()
{GETIDOFNAME(GetDisallowImport) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString DataSet_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString DataSet_Dispatch::GetNameWithPath()
{GETIDOFNAME(GetNameWithPath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString DataSet_Dispatch::GetOID()
{GETIDOFNAME(GetOID) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataSet_Dispatch::GetParentFolder()
{GETIDOFNAME(GetParentFolder) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString DataSet_Dispatch::GetType()
{GETIDOFNAME(GetType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsAsap2CanDB()
{GETIDOFNAME(IsAsap2CanDB) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsAsap2Catalog()
{GETIDOFNAME(IsAsap2Catalog) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsAsap2Item()
{GETIDOFNAME(IsAsap2Item) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsAsap2Project()
{GETIDOFNAME(IsAsap2Project) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsAsap2ProjectFolder()
{GETIDOFNAME(IsAsap2ProjectFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsAscetContainer()
{GETIDOFNAME(IsAscetContainer) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsAscetFolder()
{GETIDOFNAME(IsAscetFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsAscetNetwork()
{GETIDOFNAME(IsAscetNetwork) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsAscetProject()
{GETIDOFNAME(IsAscetProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsAscetProtocol()
{GETIDOFNAME(IsAscetProtocol) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsClass()
{GETIDOFNAME(IsClass) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsCodeComponent()
{GETIDOFNAME(IsCodeComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsComponent()
{GETIDOFNAME(IsComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsConditionalTable()
{GETIDOFNAME(IsConditionalTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsCTBlock()
{GETIDOFNAME(IsCTBlock) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsCTComponent()
{GETIDOFNAME(IsCTComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsDiscreteComponent()
{GETIDOFNAME(IsDiscreteComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsEnumeration()
{GETIDOFNAME(IsEnumeration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsExperimentEnvironment()
{GETIDOFNAME(IsExperimentEnvironment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsODXProject()
{GETIDOFNAME(IsODXProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsFolder()
{GETIDOFNAME(IsFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsFunctionalComponent()
{GETIDOFNAME(IsFunctionalComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsHardwareConfiguration()
{GETIDOFNAME(IsHardwareConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsIcon()
{GETIDOFNAME(IsIcon) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsIncaFolder()
{GETIDOFNAME(IsIncaFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsModule()
{GETIDOFNAME(IsModule) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsProject()
{GETIDOFNAME(IsProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsSignal()
{GETIDOFNAME(IsSignal) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsStateMachine()
{GETIDOFNAME(IsStateMachine) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::SetAccessRightApplication(BOOL aBool)
{GETIDOFNAME(SetAccessRightApplication) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL DataSet_Dispatch::SetAccessRightCodeGeneration(BOOL aBool)
{GETIDOFNAME(SetAccessRightCodeGeneration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL DataSet_Dispatch::SetAccessRightExecute(BOOL aBool)
{GETIDOFNAME(SetAccessRightExecute) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL DataSet_Dispatch::SetAccessRightRead(BOOL aBool)
{GETIDOFNAME(SetAccessRightRead) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL DataSet_Dispatch::SetAccessRightWrite(BOOL aBool)
{GETIDOFNAME(SetAccessRightWrite) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL DataSet_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

BOOL DataSet_Dispatch::SetDisallowImport(BOOL aBool)
{GETIDOFNAME(SetDisallowImport) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL DataSet_Dispatch::SetName(LPCTSTR aName)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH DataSet_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DataSet_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString DataSet_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL DataSet_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long DataSet_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Asap2Measurement_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Asap2Measurement_Dispatch operations

double Asap2Measurement_Dispatch::GetAccuracy()
{GETIDOFNAME(GetAccuracy) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

long Asap2Measurement_Dispatch::GetResolution()
{GETIDOFNAME(GetResolution) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Asap2Measurement_Dispatch::GetXSize()
{GETIDOFNAME(GetXSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Asap2Measurement_Dispatch::GetYSize()
{GETIDOFNAME(GetYSize) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::IsMeasurement()
{GETIDOFNAME(IsMeasurement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Asap2Measurement_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2Measurement_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2Measurement_Dispatch::GetCompuMethod()
{GETIDOFNAME(GetCompuMethod) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2Measurement_Dispatch::GetDataItem()
{GETIDOFNAME(GetDataItem) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Asap2Measurement_Dispatch::GetDataType()
{GETIDOFNAME(GetDataType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double Asap2Measurement_Dispatch::GetLowerBound()
{GETIDOFNAME(GetLowerBound) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double Asap2Measurement_Dispatch::GetUpperBound()
{GETIDOFNAME(GetUpperBound) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::IsAxisPoints()
{GETIDOFNAME(IsAxisPoints) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::IsCharacteristic()
{GETIDOFNAME(IsCharacteristic) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::SetCompuMethod(LPDISPATCH dispatch_compuMethod)
{GETIDOFNAME(SetCompuMethod) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_compuMethod);
	return result;
}

CString Asap2Measurement_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2Measurement_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::Remove()
{GETIDOFNAME(Remove) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::Rename(LPCTSTR name)
{GETIDOFNAME(Rename) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL Asap2Measurement_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

long Asap2Measurement_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2Measurement_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Measurement_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Asap2Measurement_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Asap2AxisDescription_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Asap2AxisDescription_Dispatch operations

long Asap2AxisDescription_Dispatch::MaxAxisPoints()
{GETIDOFNAME(MaxAxisPoints) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Asap2AxisDescription_Dispatch::GetAddress()
{GETIDOFNAME(GetAddress) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2AxisDescription_Dispatch::GetAddressAsHexString()
{GETIDOFNAME(GetAddressAsHexString) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2AxisDescription_Dispatch::GetCompuMethod()
{GETIDOFNAME(GetCompuMethod) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2AxisDescription_Dispatch::GetDataItem()
{GETIDOFNAME(GetDataItem) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Asap2AxisDescription_Dispatch::GetDataType()
{GETIDOFNAME(GetDataType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double Asap2AxisDescription_Dispatch::GetLowerBound()
{GETIDOFNAME(GetLowerBound) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double Asap2AxisDescription_Dispatch::GetUpperBound()
{GETIDOFNAME(GetUpperBound) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::IsArray()
{GETIDOFNAME(IsArray) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::IsAxisPoints()
{GETIDOFNAME(IsAxisPoints) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::IsCharacteristic()
{GETIDOFNAME(IsCharacteristic) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::IsMatrix()
{GETIDOFNAME(IsMatrix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::IsMeasurement()
{GETIDOFNAME(IsMeasurement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::IsScalar()
{GETIDOFNAME(IsScalar) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::SetCompuMethod(LPDISPATCH dispatch_compuMethod)
{GETIDOFNAME(SetCompuMethod) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_compuMethod);
	return result;
}

CString Asap2AxisDescription_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2AxisDescription_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::Remove()
{GETIDOFNAME(Remove) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::Rename(LPCTSTR name)
{GETIDOFNAME(Rename) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

long Asap2AxisDescription_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2AxisDescription_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2AxisDescription_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Asap2AxisDescription_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ODXProject_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// ODXProject_Dispatch operations

BOOL ODXProject_Dispatch::IsODXProject()
{GETIDOFNAME(IsODXProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::AddTextSegment(LPCTSTR textSegment, const VARIANT& views)
{GETIDOFNAME(AddTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		textSegment, &views);
	return result;
}

BOOL ODXProject_Dispatch::AssignViewToTextSegment(LPCTSTR View, LPCTSTR textSegment)
{GETIDOFNAME(AssignViewToTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		View, textSegment);
	return result;
}

BOOL ODXProject_Dispatch::DeAssignViewFromTextSegment(LPCTSTR View, LPCTSTR textSegment)
{GETIDOFNAME(DeAssignViewFromTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		View, textSegment);
	return result;
}

LPDISPATCH ODXProject_Dispatch::Edit()
{GETIDOFNAME(Edit) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ODXProject_Dispatch::EditInFront()
{GETIDOFNAME(EditInFront) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString ODXProject_Dispatch::GetConfiguration()
{GETIDOFNAME(GetConfiguration) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ODXProject_Dispatch::GetDate()
{GETIDOFNAME(GetDate) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ODXProject_Dispatch::GetNoteForTextSegment(LPCTSTR textSegment)
{GETIDOFNAME(GetNoteForTextSegment) 
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		textSegment);
	return result;
}

VARIANT ODXProject_Dispatch::GetTextSegments()
{GETIDOFNAME(GetTextSegments) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString ODXProject_Dispatch::GetVersion()
{GETIDOFNAME(GetVersion) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT ODXProject_Dispatch::GetViewsForTextSegment(LPCTSTR textSegment)
{GETIDOFNAME(GetViewsForTextSegment) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		textSegment);
	return result;
}

BOOL ODXProject_Dispatch::IsComponent()
{GETIDOFNAME(IsComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsEdition()
{GETIDOFNAME(IsEdition) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsVersion()
{GETIDOFNAME(IsVersion) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::RemoveTextSegment(LPCTSTR textSegment)
{GETIDOFNAME(RemoveTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		textSegment);
	return result;
}

BOOL ODXProject_Dispatch::ResetVersion()
{GETIDOFNAME(ResetVersion) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::SetConfiguration(LPCTSTR configuration)
{GETIDOFNAME(SetConfiguration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		configuration);
	return result;
}

BOOL ODXProject_Dispatch::SetEdition()
{GETIDOFNAME(SetEdition) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::SetNoteForTextSegment(LPCTSTR noteText, LPCTSTR textSegment)
{GETIDOFNAME(SetNoteForTextSegment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		noteText, textSegment);
	return result;
}

BOOL ODXProject_Dispatch::SetVersion(LPCTSTR version)
{GETIDOFNAME(SetVersion) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		version);
	return result;
}

LPDISPATCH ODXProject_Dispatch::Copy(LPCTSTR name)
{GETIDOFNAME(Copy) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH ODXProject_Dispatch::CopyToFolder(LPCTSTR name, LPDISPATCH dispatch_folder)
{GETIDOFNAME(CopyToFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_folder);
	return result;
}

BOOL ODXProject_Dispatch::ExportToFile(LPCTSTR fileName, BOOL multipleFiles, BOOL reference)
{GETIDOFNAME(ExportToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, multipleFiles, reference);
	return result;
}

BOOL ODXProject_Dispatch::GetAccessRightApplication()
{GETIDOFNAME(GetAccessRightApplication) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::GetAccessRightCodeGeneration()
{GETIDOFNAME(GetAccessRightCodeGeneration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::GetAccessRightExecute()
{GETIDOFNAME(GetAccessRightExecute) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::GetAccessRightRead()
{GETIDOFNAME(GetAccessRightRead) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::GetAccessRightWrite()
{GETIDOFNAME(GetAccessRightWrite) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT ODXProject_Dispatch::GetAllReferecedDataBaseItems()
{GETIDOFNAME(GetAllReferecedDataBaseItems) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString ODXProject_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::GetDisallowImport()
{GETIDOFNAME(GetDisallowImport) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString ODXProject_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ODXProject_Dispatch::GetNameWithPath()
{GETIDOFNAME(GetNameWithPath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ODXProject_Dispatch::GetOID()
{GETIDOFNAME(GetOID) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH ODXProject_Dispatch::GetParentFolder()
{GETIDOFNAME(GetParentFolder) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString ODXProject_Dispatch::GetType()
{GETIDOFNAME(GetType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsAsap2CanDB()
{GETIDOFNAME(IsAsap2CanDB) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsAsap2Catalog()
{GETIDOFNAME(IsAsap2Catalog) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsAsap2Item()
{GETIDOFNAME(IsAsap2Item) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsAsap2Project()
{GETIDOFNAME(IsAsap2Project) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsAsap2ProjectFolder()
{GETIDOFNAME(IsAsap2ProjectFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsAscetContainer()
{GETIDOFNAME(IsAscetContainer) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsAscetFolder()
{GETIDOFNAME(IsAscetFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsAscetNetwork()
{GETIDOFNAME(IsAscetNetwork) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsAscetProject()
{GETIDOFNAME(IsAscetProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsAscetProtocol()
{GETIDOFNAME(IsAscetProtocol) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsClass()
{GETIDOFNAME(IsClass) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsCodeComponent()
{GETIDOFNAME(IsCodeComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsConditionalTable()
{GETIDOFNAME(IsConditionalTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsCTBlock()
{GETIDOFNAME(IsCTBlock) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsCTComponent()
{GETIDOFNAME(IsCTComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsDataSet()
{GETIDOFNAME(IsDataSet) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsDiscreteComponent()
{GETIDOFNAME(IsDiscreteComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsEnumeration()
{GETIDOFNAME(IsEnumeration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsExperimentEnvironment()
{GETIDOFNAME(IsExperimentEnvironment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsFolder()
{GETIDOFNAME(IsFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsFunctionalComponent()
{GETIDOFNAME(IsFunctionalComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsHardwareConfiguration()
{GETIDOFNAME(IsHardwareConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsIcon()
{GETIDOFNAME(IsIcon) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsIncaFolder()
{GETIDOFNAME(IsIncaFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsModule()
{GETIDOFNAME(IsModule) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsProject()
{GETIDOFNAME(IsProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsSignal()
{GETIDOFNAME(IsSignal) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsStateMachine()
{GETIDOFNAME(IsStateMachine) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::Move(LPDISPATCH dispatch_folder)
{GETIDOFNAME(Move) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_folder);
	return result;
}

BOOL ODXProject_Dispatch::SetAccessRightApplication(BOOL aBool)
{GETIDOFNAME(SetAccessRightApplication) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL ODXProject_Dispatch::SetAccessRightCodeGeneration(BOOL aBool)
{GETIDOFNAME(SetAccessRightCodeGeneration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL ODXProject_Dispatch::SetAccessRightExecute(BOOL aBool)
{GETIDOFNAME(SetAccessRightExecute) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL ODXProject_Dispatch::SetAccessRightRead(BOOL aBool)
{GETIDOFNAME(SetAccessRightRead) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL ODXProject_Dispatch::SetAccessRightWrite(BOOL aBool)
{GETIDOFNAME(SetAccessRightWrite) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL ODXProject_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

BOOL ODXProject_Dispatch::SetDisallowImport(BOOL aBool)
{GETIDOFNAME(SetDisallowImport) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL ODXProject_Dispatch::SetName(LPCTSTR aName)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH ODXProject_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ODXProject_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString ODXProject_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ODXProject_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long ODXProject_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// WorkbaseDevice_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// WorkbaseDevice_Dispatch operations

BOOL WorkbaseDevice_Dispatch::CheckCodePageConform()
{GETIDOFNAME(CheckCodePageConform) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::DoChecksumCalculation()
{GETIDOFNAME(DoChecksumCalculation) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::CheckDataPagesConform()
{GETIDOFNAME(CheckDataPagesConform) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsCalibrationPossible()
{GETIDOFNAME(IsCalibrationPossible) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::CanSwitchMemoryPage()
{GETIDOFNAME(CanSwitchMemoryPage) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::CopyBinaryToFile(LPCTSTR aPathAndFileName)
{GETIDOFNAME(CopyBinaryToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aPathAndFileName);
	return result;
}

BOOL WorkbaseDevice_Dispatch::CopyReferencePageToWorkingPage()
{GETIDOFNAME(CopyReferencePageToWorkingPage) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::CopyReferencePageToETKFlash()
{GETIDOFNAME(CopyReferencePageToETKFlash) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::CopyWorkingPageToETKFlash()
{GETIDOFNAME(CopyWorkingPageToETKFlash) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::CopyReferencePageToFlash(BOOL flagForDataOnly)
{GETIDOFNAME(CopyReferencePageToFlash) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		flagForDataOnly);
	return result;
}

BOOL WorkbaseDevice_Dispatch::CopyWorkingPageToFlash(BOOL flagForDataOnly)
{GETIDOFNAME(CopyWorkingPageToFlash) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		flagForDataOnly);
	return result;
}

BOOL WorkbaseDevice_Dispatch::CreateHexFileForReferencePageAndCode(LPCTSTR fileName)
{GETIDOFNAME(CreateHexFileForReferencePageAndCode) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL WorkbaseDevice_Dispatch::CreateHexFileForWorkPageAndCode(LPCTSTR fileName)
{GETIDOFNAME(CreateHexFileForWorkPageAndCode) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL WorkbaseDevice_Dispatch::DisableDownloadDifferencesAfterIgnitionOffOn()
{GETIDOFNAME(DisableDownloadDifferencesAfterIgnitionOffOn) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::DownloadDifferences()
{GETIDOFNAME(DownloadDifferences) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::DownloadPage(LPCTSTR name)
{GETIDOFNAME(DownloadPage) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL WorkbaseDevice_Dispatch::DownloadReferencePage()
{GETIDOFNAME(DownloadReferencePage) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::DownloadReferencePageAndCode()
{GETIDOFNAME(DownloadReferencePageAndCode) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::DownloadWorkbase()
{GETIDOFNAME(DownloadWorkbase) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::DownloadWorkPage()
{GETIDOFNAME(DownloadWorkPage) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::DownloadWorkPageAndCode()
{GETIDOFNAME(DownloadWorkPageAndCode) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::EnableDownloadDifferencesAfterIgnitionOffOn()
{GETIDOFNAME(EnableDownloadDifferencesAfterIgnitionOffOn) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::FlashHexFileWithControlFlow(LPCTSTR fileName, LPCTSTR controlFlow)
{GETIDOFNAME(FlashHexFileWithControlFlow) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, controlFlow);
	return result;
}

BOOL WorkbaseDevice_Dispatch::ExecuteODXFlashing(LPCTSTR hexFileName, LPCTSTR projectName, LPCTSTR vehicleInfo, LPCTSTR logicalLink, LPCTSTR flashSession, BOOL automaticVariantIdentification)
{GETIDOFNAME(ExecuteODXFlashing) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		hexFileName, projectName, vehicleInfo, logicalLink, flashSession, automaticVariantIdentification);
	return result;
}

BOOL WorkbaseDevice_Dispatch::FlashHexFileWithControlFlowOnFlashPort(LPCTSTR fileName, LPCTSTR controlFlow, LPCTSTR flashPort)
{GETIDOFNAME(FlashHexFileWithControlFlowOnFlashPort) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, controlFlow, flashPort);
	return result;
}

VARIANT WorkbaseDevice_Dispatch::GetAllPageNames()
{GETIDOFNAME(GetAllPageNames) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString WorkbaseDevice_Dispatch::GetBinaryFileName()
{GETIDOFNAME(GetBinaryFileName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long WorkbaseDevice_Dispatch::GetCodeCheckStatus()
{GETIDOFNAME(GetCodeCheckStatus) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT WorkbaseDevice_Dispatch::GetDataAddressRanges()
{GETIDOFNAME(GetDataAddressRanges) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT WorkbaseDevice_Dispatch::GetDataAddressRangesAsHexString()
{GETIDOFNAME(GetDataAddressRangesAsHexString) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString WorkbaseDevice_Dispatch::GetDescriptionFileName()
{GETIDOFNAME(GetDescriptionFileName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT WorkbaseDevice_Dispatch::GetExRAMAddressRanges()
{GETIDOFNAME(GetExRAMAddressRanges) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString WorkbaseDevice_Dispatch::GetReferenceDataSetDataBasePath()
{GETIDOFNAME(GetReferenceDataSetDataBasePath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT WorkbaseDevice_Dispatch::GetSupportedFlashPortNames()
{GETIDOFNAME(GetSupportedFlashPortNames) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString WorkbaseDevice_Dispatch::GetWorkingDataSetDataBasePath()
{GETIDOFNAME(GetWorkingDataSetDataBasePath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsConfiguredForOdxFlashing()
{GETIDOFNAME(IsConfiguredForOdxFlashing) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsCurrentPageWriteProtected()
{GETIDOFNAME(IsCurrentPageWriteProtected) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsTargetOnWorkPage()
{GETIDOFNAME(IsTargetOnWorkPage) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsWorkbaseDevice()
{GETIDOFNAME(IsWorkbaseDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::ReadBinaryFromFile(LPCTSTR aPathOrFileName, BOOL createNewDS, BOOL download)
{GETIDOFNAME(ReadBinaryFromFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aPathOrFileName, createNewDS, download);
	return result;
}

VARIANT WorkbaseDevice_Dispatch::ReadFromDataPage(long start, long length)
{GETIDOFNAME(ReadFromDataPage) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		start, length);
	return result;
}

VARIANT WorkbaseDevice_Dispatch::ReadFromExRAM(long start, long length)
{GETIDOFNAME(ReadFromExRAM) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		start, length);
	return result;
}

BOOL WorkbaseDevice_Dispatch::SetOrCreateWorkBase(LPCTSTR aPathOrFileName, BOOL aFlag)
{GETIDOFNAME(SetOrCreateWorkBase) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aPathOrFileName, aFlag);
	return result;
}

BOOL WorkbaseDevice_Dispatch::SetWorkingDataSet(LPDISPATCH dispatch_aDataSet)
{GETIDOFNAME(SetWorkingDataSet) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_aDataSet);
	return result;
}

BOOL WorkbaseDevice_Dispatch::SwitchToReferencePage()
{GETIDOFNAME(SwitchToReferencePage) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::SwitchToWorkingPage()
{GETIDOFNAME(SwitchToWorkingPage) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::UploadWorkbase()
{GETIDOFNAME(UploadWorkbase) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::UploadWorkbaseUsePageNames(LPCTSTR referencePageName, LPCTSTR workingPageName)
{GETIDOFNAME(UploadWorkbaseUsePageNames) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		referencePageName, workingPageName);
	return result;
}

BOOL WorkbaseDevice_Dispatch::UploadWorkbaseUsePageNamesConditional(LPCTSTR rpName, LPCTSTR wpName, long rpCondition, long wpCondition)
{GETIDOFNAME(UploadWorkbaseUsePageNamesConditional) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		rpName, wpName, rpCondition, wpCondition);
	return result;
}

BOOL WorkbaseDevice_Dispatch::WriteToDataPage(long start, long length, const VARIANT& values)
{GETIDOFNAME(WriteToDataPage) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		start, length, &values);
	return result;
}

BOOL WorkbaseDevice_Dispatch::WriteToExRAM(long start, long length, const VARIANT& values)
{GETIDOFNAME(WriteToExRAM) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		start, length, &values);
	return result;
}

BOOL WorkbaseDevice_Dispatch::InCircuit2ExperimentPreparation(const VARIANT& emulatedLabelNames, LPCTSTR controlFlow)
{GETIDOFNAME(InCircuit2ExperimentPreparation) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&emulatedLabelNames, controlFlow);
	return result;
}

BOOL WorkbaseDevice_Dispatch::SetStoreBit()
{GETIDOFNAME(SetStoreBit) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::RemoveStoreBit()
{GETIDOFNAME(RemoveStoreBit) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::QuickStart_IsFeatureInstalled()
{GETIDOFNAME(QuickStart_IsFeatureInstalled) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::QuickStart_IsQuickStartModeConfiguredInHWC()
{GETIDOFNAME(QuickStart_IsQuickStartModeConfiguredInHWC) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::QuickStart_StoreMeasurementConfigurationInECU()
{GETIDOFNAME(QuickStart_StoreMeasurementConfigurationInECU) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::QuickStart_DeleteMeasurementConfigurationInECU()
{GETIDOFNAME(QuickStart_DeleteMeasurementConfigurationInECU) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::QuickStart_Enable()
{GETIDOFNAME(QuickStart_Enable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::QuickStart_Disable()
{GETIDOFNAME(QuickStart_Disable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT WorkbaseDevice_Dispatch::ActivateRci2ForAcquisitionRate(LPCTSTR name)
{GETIDOFNAME(ActivateRci2ForAcquisitionRate) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

BOOL WorkbaseDevice_Dispatch::CanAssignProject()
{GETIDOFNAME(CanAssignProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::DeActivateRci2ForAcquisitionRate(LPCTSTR name)
{GETIDOFNAME(DeActivateRci2ForAcquisitionRate) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

double WorkbaseDevice_Dispatch::GetA2lScalingFactorOfSignalGroup(LPCTSTR signalGroupName)
{GETIDOFNAME(GetA2lScalingFactorOfSignalGroup) 
	double result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		signalGroupName);
	return result;
}

long WorkbaseDevice_Dispatch::GetA2lScalingUnitOfSignalGroup(LPCTSTR signalGroupName)
{GETIDOFNAME(GetA2lScalingUnitOfSignalGroup) 
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		signalGroupName);
	return result;
}

VARIANT WorkbaseDevice_Dispatch::GetAllAcquisitionRates()
{GETIDOFNAME(GetAllAcquisitionRates) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH WorkbaseDevice_Dispatch::GetASAP2Module()
{GETIDOFNAME(GetASAP2Module) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString WorkbaseDevice_Dispatch::GetDeviceType()
{GETIDOFNAME(GetDeviceType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString WorkbaseDevice_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString WorkbaseDevice_Dispatch::GetProjectDataBasePath()
{GETIDOFNAME(GetProjectDataBasePath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double WorkbaseDevice_Dispatch::GetSampleRateFor(LPCTSTR aName)
{GETIDOFNAME(GetSampleRateFor) 
	double result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		aName);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsAcquisitionRateAvailable(LPCTSTR rate)
{GETIDOFNAME(IsAcquisitionRateAvailable) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		rate);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsActive()
{GETIDOFNAME(IsActive) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsCANMonitoringDevice()
{GETIDOFNAME(IsCANMonitoringDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsKwp2000Device()
{GETIDOFNAME(IsKwp2000Device) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsOutputDevice()
{GETIDOFNAME(IsOutputDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsEtherCATSupported()
{GETIDOFNAME(IsEtherCATSupported) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsFULISupported()
{GETIDOFNAME(IsFULISupported) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::ResetTarget()
{GETIDOFNAME(ResetTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::StartTargetOS()
{GETIDOFNAME(StartTargetOS) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::StopTargetOS()
{GETIDOFNAME(StopTargetOS) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long WorkbaseDevice_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString WorkbaseDevice_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WorkbaseDevice_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long WorkbaseDevice_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// KWP2000Device_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// KWP2000Device_Dispatch operations

VARIANT KWP2000Device_Dispatch::ClearDiagnosticInformation(long groupOfDiagnosticInformation)
{GETIDOFNAME(ClearDiagnosticInformation) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		groupOfDiagnosticInformation);
	return result;
}

VARIANT KWP2000Device_Dispatch::DynamicallyDefineLocalIdentifier(const VARIANT& dataArray)
{GETIDOFNAME(DynamicallyDefineLocalIdentifier) 
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&dataArray);
	return result;
}

VARIANT KWP2000Device_Dispatch::EcuReset(long resetStatus)
{GETIDOFNAME(EcuReset) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		resetStatus);
	return result;
}

VARIANT KWP2000Device_Dispatch::EscapeCode(long manufacturerSpecific, const VARIANT& recordValue)
{GETIDOFNAME(EscapeCode) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		manufacturerSpecific, &recordValue);
	return result;
}

BOOL KWP2000Device_Dispatch::FinishDirectDiagnosticAccess()
{GETIDOFNAME(FinishDirectDiagnosticAccess) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT KWP2000Device_Dispatch::GetCommParas(long paramType)
{GETIDOFNAME(GetCommParas) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		paramType);
	return result;
}

VARIANT KWP2000Device_Dispatch::GetEcuIdent(long indentNo)
{GETIDOFNAME(GetEcuIdent) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		indentNo);
	return result;
}

VARIANT KWP2000Device_Dispatch::IdentifyEcu(long identFormat)
{GETIDOFNAME(IdentifyEcu) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		identFormat);
	return result;
}

BOOL KWP2000Device_Dispatch::InitDirectDiagnosticAccess()
{GETIDOFNAME(InitDirectDiagnosticAccess) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT KWP2000Device_Dispatch::InputOutputControlByCommonIdentifier(long inputOutputCommonIdentifier, const VARIANT& controlOption)
{GETIDOFNAME(InputOutputControlByCommonIdentifier) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		inputOutputCommonIdentifier, &controlOption);
	return result;
}

VARIANT KWP2000Device_Dispatch::InputOutputControlByLocalIdentifier(long inputOutputLocalIdentifier, const VARIANT& controlOption)
{GETIDOFNAME(InputOutputControlByLocalIdentifier) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		inputOutputLocalIdentifier, &controlOption);
	return result;
}

BOOL KWP2000Device_Dispatch::IsKwp2000Device()
{GETIDOFNAME(IsKwp2000Device) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT KWP2000Device_Dispatch::ReadDataByCommonIdentifier(long recordCommonIdentifier)
{GETIDOFNAME(ReadDataByCommonIdentifier) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		recordCommonIdentifier);
	return result;
}

VARIANT KWP2000Device_Dispatch::ReadDataByLocalIdentifier(long recordLocalIdentifier)
{GETIDOFNAME(ReadDataByLocalIdentifier) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		recordLocalIdentifier);
	return result;
}

VARIANT KWP2000Device_Dispatch::ReadDiasgnosticTroubleCodesByStatus(long statusOfDTC, long groupOfDTC)
{GETIDOFNAME(ReadDiasgnosticTroubleCodesByStatus) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		statusOfDTC, groupOfDTC);
	return result;
}

VARIANT KWP2000Device_Dispatch::ReadECUIdentification(long identificationOption)
{GETIDOFNAME(ReadECUIdentification) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		identificationOption);
	return result;
}

VARIANT KWP2000Device_Dispatch::ReadFreezeFrameData(long freezeFrameNumber, long recordAccess, long recordIdentification)
{GETIDOFNAME(ReadFreezeFrameData) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		freezeFrameNumber, recordAccess, recordIdentification);
	return result;
}

VARIANT KWP2000Device_Dispatch::ReadMemoryByAddress(long memoryAddress, long memorySize)
{GETIDOFNAME(ReadMemoryByAddress) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		memoryAddress, memorySize);
	return result;
}

VARIANT KWP2000Device_Dispatch::ReadStatusOfDiasgnosticTroubleCodes(long groupOfDTC)
{GETIDOFNAME(ReadStatusOfDiasgnosticTroubleCodes) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		groupOfDTC);
	return result;
}

VARIANT KWP2000Device_Dispatch::RequestDownload(long memoryAddress, long dataFormatIdentifier, long memorySize)
{GETIDOFNAME(RequestDownload) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		memoryAddress, dataFormatIdentifier, memorySize);
	return result;
}

VARIANT KWP2000Device_Dispatch::RequestRoutineResutsByAddress(long routineAddress)
{GETIDOFNAME(RequestRoutineResutsByAddress) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		routineAddress);
	return result;
}

VARIANT KWP2000Device_Dispatch::RequestRoutineResutsByLocalIdentifier(long routineLocalIdentifier)
{GETIDOFNAME(RequestRoutineResutsByLocalIdentifier) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		routineLocalIdentifier);
	return result;
}

VARIANT KWP2000Device_Dispatch::RequestTransferExit(const VARIANT& transferRequestParameter)
{GETIDOFNAME(RequestTransferExit) 
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&transferRequestParameter);
	return result;
}

VARIANT KWP2000Device_Dispatch::RequestUpload(long memoryAddress, long dataFormatIdentifier, long memorySize)
{GETIDOFNAME(RequestUpload) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		memoryAddress, dataFormatIdentifier, memorySize);
	return result;
}

VARIANT KWP2000Device_Dispatch::SecurityAccessAllowed(long accessMode)
{GETIDOFNAME(SecurityAccessAllowed) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		accessMode);
	return result;
}

VARIANT KWP2000Device_Dispatch::SecurityAccessAllowedUsingKey(long accessMode, const VARIANT& key)
{GETIDOFNAME(SecurityAccessAllowedUsingKey) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		accessMode, &key);
	return result;
}

VARIANT KWP2000Device_Dispatch::SendFrameWithByteArray(const VARIANT& Data)
{GETIDOFNAME(SendFrameWithByteArray) 
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Data);
	return result;
}

VARIANT KWP2000Device_Dispatch::SendFrameWithShortArray(const VARIANT& Data)
{GETIDOFNAME(SendFrameWithShortArray) 
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Data);
	return result;
}

VARIANT KWP2000Device_Dispatch::SendMessageWithByteArray(const VARIANT& Data)
{GETIDOFNAME(SendMessageWithByteArray) 
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Data);
	return result;
}

VARIANT KWP2000Device_Dispatch::SendMessageWithShortArray(const VARIANT& Data)
{GETIDOFNAME(SendMessageWithShortArray) 
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Data);
	return result;
}

BOOL KWP2000Device_Dispatch::SetCommParas(long p1Max, long p2Min, long p2Max, long p3Min, long p3Max, long p4Min)
{GETIDOFNAME(SetCommParas) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		p1Max, p2Min, p2Max, p3Min, p3Max, p4Min);
	return result;
}

BOOL KWP2000Device_Dispatch::SetCyclicDiagnosticMessageWithByteArray(long mode, long delay, const VARIANT& Data)
{GETIDOFNAME(SetCyclicDiagnosticMessageWithByteArray) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		mode, delay, &Data);
	return result;
}

BOOL KWP2000Device_Dispatch::SetCyclicDiagnosticMessageWithShortArray(long mode, long delay, const VARIANT& Data)
{GETIDOFNAME(SetCyclicDiagnosticMessageWithShortArray) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		mode, delay, &Data);
	return result;
}

BOOL KWP2000Device_Dispatch::SetDefaultCommParas()
{GETIDOFNAME(SetDefaultCommParas) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::SetDiagnosticIfAnalogOutput(long voltage)
{GETIDOFNAME(SetDiagnosticIfAnalogOutput) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		voltage);
	return result;
}

BOOL KWP2000Device_Dispatch::SetDiagnosticIfBaudrate(long baudrate)
{GETIDOFNAME(SetDiagnosticIfBaudrate) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		baudrate);
	return result;
}

BOOL KWP2000Device_Dispatch::SetDiagnosticIfRepeatCounter(long counter)
{GETIDOFNAME(SetDiagnosticIfRepeatCounter) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		counter);
	return result;
}

BOOL KWP2000Device_Dispatch::SetDiagnosticIfSpecialCond(long specialCond)
{GETIDOFNAME(SetDiagnosticIfSpecialCond) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		specialCond);
	return result;
}

BOOL KWP2000Device_Dispatch::SetDiagnosticIfTiming(long p1Max, long p2Min, long p2Max, long p3Min, long p3Max, long p4Min)
{GETIDOFNAME(SetDiagnosticIfTiming) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		p1Max, p2Min, p2Max, p3Min, p3Max, p4Min);
	return result;
}

VARIANT KWP2000Device_Dispatch::StartDiagnosticCommunication(long protocolType, const VARIANT& timingParameter, long baud, long w1, long w2, long w3, long w4Min, long w4Max, long w5, long tiniL, long wuP, long activationLine, long activationType, long target, 
		long source)
{GETIDOFNAME(StartDiagnosticCommunication) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		protocolType, &timingParameter, baud, w1, w2, w3, w4Min, w4Max, w5, tiniL, wuP, activationLine, activationType, target, source);
	return result;
}

VARIANT KWP2000Device_Dispatch::StartDiagnosticSession(long diagnosticMode, long baudrateIdentifier)
{GETIDOFNAME(StartDiagnosticSession) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		diagnosticMode, baudrateIdentifier);
	return result;
}

VARIANT KWP2000Device_Dispatch::StartDiagnosticSession115200Baud(long diagnosticMode)
{GETIDOFNAME(StartDiagnosticSession115200Baud) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		diagnosticMode);
	return result;
}

VARIANT KWP2000Device_Dispatch::StartDiagnosticSession19200Baud(long diagnosticMode)
{GETIDOFNAME(StartDiagnosticSession19200Baud) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		diagnosticMode);
	return result;
}

VARIANT KWP2000Device_Dispatch::StartDiagnosticSession38400Baud(long diagnosticMode)
{GETIDOFNAME(StartDiagnosticSession38400Baud) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		diagnosticMode);
	return result;
}

VARIANT KWP2000Device_Dispatch::StartDiagnosticSession57600Baud(long diagnosticMode)
{GETIDOFNAME(StartDiagnosticSession57600Baud) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		diagnosticMode);
	return result;
}

VARIANT KWP2000Device_Dispatch::StartDiagnosticSession9600Baud(long diagnosticMode)
{GETIDOFNAME(StartDiagnosticSession9600Baud) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		diagnosticMode);
	return result;
}

VARIANT KWP2000Device_Dispatch::StartDiagnosticSessionUserDefinedBaud(long diagnosticMode, long baudrate)
{GETIDOFNAME(StartDiagnosticSessionUserDefinedBaud) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		diagnosticMode, baudrate);
	return result;
}

VARIANT KWP2000Device_Dispatch::StartRoutineByAddress(long routineAddress, const VARIANT& routineEntryOption)
{GETIDOFNAME(StartRoutineByAddress) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		routineAddress, &routineEntryOption);
	return result;
}

VARIANT KWP2000Device_Dispatch::StartRoutineByLocalIdentifier(long routineLocalIdentifier, const VARIANT& routineEntryOption)
{GETIDOFNAME(StartRoutineByLocalIdentifier) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		routineLocalIdentifier, &routineEntryOption);
	return result;
}

VARIANT KWP2000Device_Dispatch::StopDiagnosticSession()
{GETIDOFNAME(StopDiagnosticSession) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT KWP2000Device_Dispatch::StopRoutineByAddress(long routineAddress, const VARIANT& routineExitOption)
{GETIDOFNAME(StopRoutineByAddress) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		routineAddress, &routineExitOption);
	return result;
}

VARIANT KWP2000Device_Dispatch::StopRoutineByLocalIdentifier(long routineLocalIdentifier, const VARIANT& routineExitOption)
{GETIDOFNAME(StopRoutineByLocalIdentifier) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		routineLocalIdentifier, &routineExitOption);
	return result;
}

VARIANT KWP2000Device_Dispatch::TesterPresent()
{GETIDOFNAME(TesterPresent) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT KWP2000Device_Dispatch::TransferData(const VARIANT& transferRequestParameter)
{GETIDOFNAME(TransferData) 
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&transferRequestParameter);
	return result;
}

VARIANT KWP2000Device_Dispatch::WriteDataByCommonIdentifier(long recordCommonIdentifier, const VARIANT& memData)
{GETIDOFNAME(WriteDataByCommonIdentifier) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		recordCommonIdentifier, &memData);
	return result;
}

VARIANT KWP2000Device_Dispatch::WriteDataByLocalIdentifier(long recordLocalIdentifier, const VARIANT& memData)
{GETIDOFNAME(WriteDataByLocalIdentifier) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		recordLocalIdentifier, &memData);
	return result;
}

VARIANT KWP2000Device_Dispatch::WriteMemoryByAddress(long memoryAddress, const VARIANT& memData)
{GETIDOFNAME(WriteMemoryByAddress) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		memoryAddress, &memData);
	return result;
}

BOOL KWP2000Device_Dispatch::CheckCodePageConform()
{GETIDOFNAME(CheckCodePageConform) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::DoChecksumCalculation()
{GETIDOFNAME(DoChecksumCalculation) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::CheckDataPagesConform()
{GETIDOFNAME(CheckDataPagesConform) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsCalibrationPossible()
{GETIDOFNAME(IsCalibrationPossible) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::CanSwitchMemoryPage()
{GETIDOFNAME(CanSwitchMemoryPage) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::CopyBinaryToFile(LPCTSTR aPathAndFileName)
{GETIDOFNAME(CopyBinaryToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aPathAndFileName);
	return result;
}

BOOL KWP2000Device_Dispatch::CopyReferencePageToWorkingPage()
{GETIDOFNAME(CopyReferencePageToWorkingPage) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::CopyReferencePageToETKFlash()
{GETIDOFNAME(CopyReferencePageToETKFlash) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::CopyWorkingPageToETKFlash()
{GETIDOFNAME(CopyWorkingPageToETKFlash) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::CopyReferencePageToFlash(BOOL flagForDataOnly)
{GETIDOFNAME(CopyReferencePageToFlash) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		flagForDataOnly);
	return result;
}

BOOL KWP2000Device_Dispatch::CopyWorkingPageToFlash(BOOL flagForDataOnly)
{GETIDOFNAME(CopyWorkingPageToFlash) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		flagForDataOnly);
	return result;
}

BOOL KWP2000Device_Dispatch::CreateHexFileForReferencePageAndCode(LPCTSTR fileName)
{GETIDOFNAME(CreateHexFileForReferencePageAndCode) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL KWP2000Device_Dispatch::CreateHexFileForWorkPageAndCode(LPCTSTR fileName)
{GETIDOFNAME(CreateHexFileForWorkPageAndCode) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL KWP2000Device_Dispatch::DisableDownloadDifferencesAfterIgnitionOffOn()
{GETIDOFNAME(DisableDownloadDifferencesAfterIgnitionOffOn) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::DownloadDifferences()
{GETIDOFNAME(DownloadDifferences) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::DownloadPage(LPCTSTR name)
{GETIDOFNAME(DownloadPage) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL KWP2000Device_Dispatch::DownloadReferencePage()
{GETIDOFNAME(DownloadReferencePage) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::DownloadReferencePageAndCode()
{GETIDOFNAME(DownloadReferencePageAndCode) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::DownloadWorkbase()
{GETIDOFNAME(DownloadWorkbase) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::DownloadWorkPage()
{GETIDOFNAME(DownloadWorkPage) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::DownloadWorkPageAndCode()
{GETIDOFNAME(DownloadWorkPageAndCode) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::EnableDownloadDifferencesAfterIgnitionOffOn()
{GETIDOFNAME(EnableDownloadDifferencesAfterIgnitionOffOn) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::FlashHexFileWithControlFlow(LPCTSTR fileName, LPCTSTR controlFlow)
{GETIDOFNAME(FlashHexFileWithControlFlow) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, controlFlow);
	return result;
}

BOOL KWP2000Device_Dispatch::ExecuteODXFlashing(LPCTSTR hexFileName, LPCTSTR projectName, LPCTSTR vehicleInfo, LPCTSTR logicalLink, LPCTSTR flashSession, BOOL automaticVariantIdentification)
{GETIDOFNAME(ExecuteODXFlashing) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		hexFileName, projectName, vehicleInfo, logicalLink, flashSession, automaticVariantIdentification);
	return result;
}

BOOL KWP2000Device_Dispatch::FlashHexFileWithControlFlowOnFlashPort(LPCTSTR fileName, LPCTSTR controlFlow, LPCTSTR flashPort)
{GETIDOFNAME(FlashHexFileWithControlFlowOnFlashPort) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, controlFlow, flashPort);
	return result;
}

VARIANT KWP2000Device_Dispatch::GetAllPageNames()
{GETIDOFNAME(GetAllPageNames) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString KWP2000Device_Dispatch::GetBinaryFileName()
{GETIDOFNAME(GetBinaryFileName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long KWP2000Device_Dispatch::GetCodeCheckStatus()
{GETIDOFNAME(GetCodeCheckStatus) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT KWP2000Device_Dispatch::GetDataAddressRanges()
{GETIDOFNAME(GetDataAddressRanges) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT KWP2000Device_Dispatch::GetDataAddressRangesAsHexString()
{GETIDOFNAME(GetDataAddressRangesAsHexString) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString KWP2000Device_Dispatch::GetDescriptionFileName()
{GETIDOFNAME(GetDescriptionFileName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT KWP2000Device_Dispatch::GetExRAMAddressRanges()
{GETIDOFNAME(GetExRAMAddressRanges) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString KWP2000Device_Dispatch::GetReferenceDataSetDataBasePath()
{GETIDOFNAME(GetReferenceDataSetDataBasePath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT KWP2000Device_Dispatch::GetSupportedFlashPortNames()
{GETIDOFNAME(GetSupportedFlashPortNames) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString KWP2000Device_Dispatch::GetWorkingDataSetDataBasePath()
{GETIDOFNAME(GetWorkingDataSetDataBasePath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsConfiguredForOdxFlashing()
{GETIDOFNAME(IsConfiguredForOdxFlashing) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsCurrentPageWriteProtected()
{GETIDOFNAME(IsCurrentPageWriteProtected) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsTargetOnWorkPage()
{GETIDOFNAME(IsTargetOnWorkPage) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsWorkbaseDevice()
{GETIDOFNAME(IsWorkbaseDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::ReadBinaryFromFile(LPCTSTR aPathOrFileName, BOOL createNewDS, BOOL download)
{GETIDOFNAME(ReadBinaryFromFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aPathOrFileName, createNewDS, download);
	return result;
}

VARIANT KWP2000Device_Dispatch::ReadFromDataPage(long start, long length)
{GETIDOFNAME(ReadFromDataPage) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		start, length);
	return result;
}

VARIANT KWP2000Device_Dispatch::ReadFromExRAM(long start, long length)
{GETIDOFNAME(ReadFromExRAM) 
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		start, length);
	return result;
}

BOOL KWP2000Device_Dispatch::SetOrCreateWorkBase(LPCTSTR aPathOrFileName, BOOL aFlag)
{GETIDOFNAME(SetOrCreateWorkBase) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aPathOrFileName, aFlag);
	return result;
}

BOOL KWP2000Device_Dispatch::SetWorkingDataSet(LPDISPATCH dispatch_aDataSet)
{GETIDOFNAME(SetWorkingDataSet) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_aDataSet);
	return result;
}

BOOL KWP2000Device_Dispatch::SwitchToReferencePage()
{GETIDOFNAME(SwitchToReferencePage) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::SwitchToWorkingPage()
{GETIDOFNAME(SwitchToWorkingPage) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::UploadWorkbase()
{GETIDOFNAME(UploadWorkbase) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::UploadWorkbaseUsePageNames(LPCTSTR referencePageName, LPCTSTR workingPageName)
{GETIDOFNAME(UploadWorkbaseUsePageNames) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		referencePageName, workingPageName);
	return result;
}

BOOL KWP2000Device_Dispatch::UploadWorkbaseUsePageNamesConditional(LPCTSTR rpName, LPCTSTR wpName, long rpCondition, long wpCondition)
{GETIDOFNAME(UploadWorkbaseUsePageNamesConditional) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		rpName, wpName, rpCondition, wpCondition);
	return result;
}

BOOL KWP2000Device_Dispatch::WriteToDataPage(long start, long length, const VARIANT& values)
{GETIDOFNAME(WriteToDataPage) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		start, length, &values);
	return result;
}

BOOL KWP2000Device_Dispatch::WriteToExRAM(long start, long length, const VARIANT& values)
{GETIDOFNAME(WriteToExRAM) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		start, length, &values);
	return result;
}

BOOL KWP2000Device_Dispatch::InCircuit2ExperimentPreparation(const VARIANT& emulatedLabelNames, LPCTSTR controlFlow)
{GETIDOFNAME(InCircuit2ExperimentPreparation) 
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&emulatedLabelNames, controlFlow);
	return result;
}

BOOL KWP2000Device_Dispatch::SetStoreBit()
{GETIDOFNAME(SetStoreBit) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::RemoveStoreBit()
{GETIDOFNAME(RemoveStoreBit) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::QuickStart_IsFeatureInstalled()
{GETIDOFNAME(QuickStart_IsFeatureInstalled) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::QuickStart_IsQuickStartModeConfiguredInHWC()
{GETIDOFNAME(QuickStart_IsQuickStartModeConfiguredInHWC) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::QuickStart_StoreMeasurementConfigurationInECU()
{GETIDOFNAME(QuickStart_StoreMeasurementConfigurationInECU) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::QuickStart_DeleteMeasurementConfigurationInECU()
{GETIDOFNAME(QuickStart_DeleteMeasurementConfigurationInECU) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::QuickStart_Enable()
{GETIDOFNAME(QuickStart_Enable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::QuickStart_Disable()
{GETIDOFNAME(QuickStart_Disable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT KWP2000Device_Dispatch::ActivateRci2ForAcquisitionRate(LPCTSTR name)
{GETIDOFNAME(ActivateRci2ForAcquisitionRate) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

BOOL KWP2000Device_Dispatch::CanAssignProject()
{GETIDOFNAME(CanAssignProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::DeActivateRci2ForAcquisitionRate(LPCTSTR name)
{GETIDOFNAME(DeActivateRci2ForAcquisitionRate) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

double KWP2000Device_Dispatch::GetA2lScalingFactorOfSignalGroup(LPCTSTR signalGroupName)
{GETIDOFNAME(GetA2lScalingFactorOfSignalGroup) 
	double result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		signalGroupName);
	return result;
}

long KWP2000Device_Dispatch::GetA2lScalingUnitOfSignalGroup(LPCTSTR signalGroupName)
{GETIDOFNAME(GetA2lScalingUnitOfSignalGroup) 
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		signalGroupName);
	return result;
}

VARIANT KWP2000Device_Dispatch::GetAllAcquisitionRates()
{GETIDOFNAME(GetAllAcquisitionRates) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH KWP2000Device_Dispatch::GetASAP2Module()
{GETIDOFNAME(GetASAP2Module) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString KWP2000Device_Dispatch::GetDeviceType()
{GETIDOFNAME(GetDeviceType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString KWP2000Device_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString KWP2000Device_Dispatch::GetProjectDataBasePath()
{GETIDOFNAME(GetProjectDataBasePath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double KWP2000Device_Dispatch::GetSampleRateFor(LPCTSTR aName)
{GETIDOFNAME(GetSampleRateFor) 
	double result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		aName);
	return result;
}

BOOL KWP2000Device_Dispatch::IsAcquisitionRateAvailable(LPCTSTR rate)
{GETIDOFNAME(IsAcquisitionRateAvailable) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		rate);
	return result;
}

BOOL KWP2000Device_Dispatch::IsActive()
{GETIDOFNAME(IsActive) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsCANMonitoringDevice()
{GETIDOFNAME(IsCANMonitoringDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsOutputDevice()
{GETIDOFNAME(IsOutputDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsEtherCATSupported()
{GETIDOFNAME(IsEtherCATSupported) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsFULISupported()
{GETIDOFNAME(IsFULISupported) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::ResetTarget()
{GETIDOFNAME(ResetTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::StartTargetOS()
{GETIDOFNAME(StartTargetOS) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::StopTargetOS()
{GETIDOFNAME(StopTargetOS) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long KWP2000Device_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString KWP2000Device_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KWP2000Device_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long KWP2000Device_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// IncaFolder_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// IncaFolder_Dispatch operations

LPDISPATCH IncaFolder_Dispatch::AddExperimentEnvironment(LPCTSTR itemName)
{GETIDOFNAME(AddExperimentEnvironment) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		itemName);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::AddHardwareConfiguration(LPCTSTR itemName)
{GETIDOFNAME(AddHardwareConfiguration) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		itemName);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::AddIncaSubFolder(LPCTSTR folderName)
{GETIDOFNAME(AddIncaSubFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		folderName);
	return result;
}

VARIANT IncaFolder_Dispatch::BrowseIncaSubFolder(LPCTSTR name)
{GETIDOFNAME(BrowseIncaSubFolder) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT IncaFolder_Dispatch::GetAllIncaSubFolders()
{GETIDOFNAME(GetAllIncaSubFolders) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::GetIncaSubFolder(LPCTSTR folderName)
{GETIDOFNAME(GetIncaSubFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		folderName);
	return result;
}

BOOL IncaFolder_Dispatch::IsIncaFolder()
{GETIDOFNAME(IsIncaFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::ReadASAP2File(LPCTSTR fileName)
{GETIDOFNAME(ReadASAP2File) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		fileName);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::ReadASAP2FileAndHexFile(LPCTSTR asap2FileName, LPCTSTR hexFileName)
{GETIDOFNAME(ReadASAP2FileAndHexFile) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		asap2FileName, hexFileName);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::ReadCanDBFile(LPCTSTR fileName)
{GETIDOFNAME(ReadCanDBFile) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		fileName);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::ReadFibexFile(LPCTSTR fileName)
{GETIDOFNAME(ReadFibexFile) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		fileName);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::ReadODXProject(const VARIANT& fileNames)
{GETIDOFNAME(ReadODXProject) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&fileNames);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::AddSubFolder(LPCTSTR folderName)
{GETIDOFNAME(AddSubFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		folderName);
	return result;
}

VARIANT IncaFolder_Dispatch::BrowseComponent(LPCTSTR name)
{GETIDOFNAME(BrowseComponent) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT IncaFolder_Dispatch::BrowseDataBaseItem(LPCTSTR name)
{GETIDOFNAME(BrowseDataBaseItem) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT IncaFolder_Dispatch::BrowseSubFolder(LPCTSTR name)
{GETIDOFNAME(BrowseSubFolder) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT IncaFolder_Dispatch::GetAllComponents()
{GETIDOFNAME(GetAllComponents) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT IncaFolder_Dispatch::GetAllDataBaseItems()
{GETIDOFNAME(GetAllDataBaseItems) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT IncaFolder_Dispatch::GetAllSubFolders()
{GETIDOFNAME(GetAllSubFolders) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::GetComponent(LPCTSTR componentName)
{GETIDOFNAME(GetComponent) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		componentName);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::GetDataBaseItem(LPCTSTR itemName)
{GETIDOFNAME(GetDataBaseItem) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		itemName);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::GetSubFolder(LPCTSTR folderName)
{GETIDOFNAME(GetSubFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		folderName);
	return result;
}

BOOL IncaFolder_Dispatch::IsFolder()
{GETIDOFNAME(IsFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::RemoveComponent(LPDISPATCH dispatch_comp)
{GETIDOFNAME(RemoveComponent) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_comp);
	return result;
}

BOOL IncaFolder_Dispatch::RemoveFolder(LPDISPATCH dispatch_folder, BOOL recursive)
{GETIDOFNAME(RemoveFolder) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_folder, recursive);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::Copy(LPCTSTR name)
{GETIDOFNAME(Copy) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::CopyToFolder(LPCTSTR name, LPDISPATCH dispatch_folder)
{GETIDOFNAME(CopyToFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_folder);
	return result;
}

BOOL IncaFolder_Dispatch::ExportToFile(LPCTSTR fileName, BOOL multipleFiles, BOOL reference)
{GETIDOFNAME(ExportToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, multipleFiles, reference);
	return result;
}

BOOL IncaFolder_Dispatch::GetAccessRightApplication()
{GETIDOFNAME(GetAccessRightApplication) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::GetAccessRightCodeGeneration()
{GETIDOFNAME(GetAccessRightCodeGeneration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::GetAccessRightExecute()
{GETIDOFNAME(GetAccessRightExecute) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::GetAccessRightRead()
{GETIDOFNAME(GetAccessRightRead) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::GetAccessRightWrite()
{GETIDOFNAME(GetAccessRightWrite) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT IncaFolder_Dispatch::GetAllReferecedDataBaseItems()
{GETIDOFNAME(GetAllReferecedDataBaseItems) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString IncaFolder_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::GetDisallowImport()
{GETIDOFNAME(GetDisallowImport) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString IncaFolder_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaFolder_Dispatch::GetNameWithPath()
{GETIDOFNAME(GetNameWithPath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaFolder_Dispatch::GetOID()
{GETIDOFNAME(GetOID) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::GetParentFolder()
{GETIDOFNAME(GetParentFolder) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString IncaFolder_Dispatch::GetType()
{GETIDOFNAME(GetType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsAsap2CanDB()
{GETIDOFNAME(IsAsap2CanDB) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsAsap2Catalog()
{GETIDOFNAME(IsAsap2Catalog) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsAsap2Item()
{GETIDOFNAME(IsAsap2Item) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsAsap2Project()
{GETIDOFNAME(IsAsap2Project) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsAsap2ProjectFolder()
{GETIDOFNAME(IsAsap2ProjectFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsAscetContainer()
{GETIDOFNAME(IsAscetContainer) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsAscetFolder()
{GETIDOFNAME(IsAscetFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsAscetNetwork()
{GETIDOFNAME(IsAscetNetwork) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsAscetProject()
{GETIDOFNAME(IsAscetProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsAscetProtocol()
{GETIDOFNAME(IsAscetProtocol) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsClass()
{GETIDOFNAME(IsClass) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsCodeComponent()
{GETIDOFNAME(IsCodeComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsComponent()
{GETIDOFNAME(IsComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsConditionalTable()
{GETIDOFNAME(IsConditionalTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsCTBlock()
{GETIDOFNAME(IsCTBlock) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsCTComponent()
{GETIDOFNAME(IsCTComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsDataSet()
{GETIDOFNAME(IsDataSet) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsDiscreteComponent()
{GETIDOFNAME(IsDiscreteComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsEnumeration()
{GETIDOFNAME(IsEnumeration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsExperimentEnvironment()
{GETIDOFNAME(IsExperimentEnvironment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsODXProject()
{GETIDOFNAME(IsODXProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsFunctionalComponent()
{GETIDOFNAME(IsFunctionalComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsHardwareConfiguration()
{GETIDOFNAME(IsHardwareConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsIcon()
{GETIDOFNAME(IsIcon) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsModule()
{GETIDOFNAME(IsModule) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsProject()
{GETIDOFNAME(IsProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsSignal()
{GETIDOFNAME(IsSignal) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsStateMachine()
{GETIDOFNAME(IsStateMachine) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::Move(LPDISPATCH dispatch_folder)
{GETIDOFNAME(Move) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_folder);
	return result;
}

BOOL IncaFolder_Dispatch::SetAccessRightApplication(BOOL aBool)
{GETIDOFNAME(SetAccessRightApplication) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL IncaFolder_Dispatch::SetAccessRightCodeGeneration(BOOL aBool)
{GETIDOFNAME(SetAccessRightCodeGeneration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL IncaFolder_Dispatch::SetAccessRightExecute(BOOL aBool)
{GETIDOFNAME(SetAccessRightExecute) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL IncaFolder_Dispatch::SetAccessRightRead(BOOL aBool)
{GETIDOFNAME(SetAccessRightRead) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL IncaFolder_Dispatch::SetAccessRightWrite(BOOL aBool)
{GETIDOFNAME(SetAccessRightWrite) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL IncaFolder_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

BOOL IncaFolder_Dispatch::SetDisallowImport(BOOL aBool)
{GETIDOFNAME(SetDisallowImport) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL IncaFolder_Dispatch::SetName(LPCTSTR aName)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH IncaFolder_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long IncaFolder_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString IncaFolder_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaFolder_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long IncaFolder_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// HWSystemDescription_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// HWSystemDescription_Dispatch operations

VARIANT HWSystemDescription_Dispatch::GetAllDeviceDescriptions()
{GETIDOFNAME(GetAllDeviceDescriptions) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT HWSystemDescription_Dispatch::GetAllSystemDescriptions()
{GETIDOFNAME(GetAllSystemDescriptions) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWSystemDescription_Dispatch::GetDeviceDescription(LPCTSTR aName)
{GETIDOFNAME(GetDeviceDescription) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		aName);
	return result;
}

CString HWSystemDescription_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWSystemDescription_Dispatch::GetParentSystemDescription()
{GETIDOFNAME(GetParentSystemDescription) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWSystemDescription_Dispatch::GetSystemDescription(LPCTSTR aName)
{GETIDOFNAME(GetSystemDescription) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		aName);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWSystemDescription_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long HWSystemDescription_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString HWSystemDescription_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSystemDescription_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long HWSystemDescription_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// IncaOnlineExperimentMcd3Ext_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// IncaOnlineExperimentMcd3Ext_Dispatch operations

CString IncaOnlineExperimentMcd3Ext_Dispatch::GetVariableInformation(LPCTSTR deviceName)
{GETIDOFNAME(GetVariableInformation) 
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		deviceName);
	return result;
}

CString IncaOnlineExperimentMcd3Ext_Dispatch::GetVariableInformationTest(LPCTSTR deviceName, long count)
{GETIDOFNAME(GetVariableInformationTest) 
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		deviceName, count);
	return result;
}

LPUNKNOWN IncaOnlineExperimentMcd3Ext_Dispatch::GetVariableInformationAsStream(LPCTSTR deviceName)
{GETIDOFNAME(GetVariableInformationAsStream) 
	LPUNKNOWN result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, parms,
		deviceName);
	return result;
}

LPUNKNOWN IncaOnlineExperimentMcd3Ext_Dispatch::GetVariableInformationTestAsStream(LPCTSTR deviceName, long count)
{GETIDOFNAME(GetVariableInformationTestAsStream) 
	LPUNKNOWN result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, parms,
		deviceName, count);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Asap2ProjectFolder_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Asap2ProjectFolder_Dispatch operations

BOOL Asap2ProjectFolder_Dispatch::IsAsap2ProjectFolder()
{GETIDOFNAME(IsAsap2ProjectFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2ProjectFolder_Dispatch::AddSubFolder(LPCTSTR folderName)
{GETIDOFNAME(AddSubFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		folderName);
	return result;
}

VARIANT Asap2ProjectFolder_Dispatch::BrowseComponent(LPCTSTR name)
{GETIDOFNAME(BrowseComponent) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT Asap2ProjectFolder_Dispatch::BrowseDataBaseItem(LPCTSTR name)
{GETIDOFNAME(BrowseDataBaseItem) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT Asap2ProjectFolder_Dispatch::BrowseSubFolder(LPCTSTR name)
{GETIDOFNAME(BrowseSubFolder) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT Asap2ProjectFolder_Dispatch::GetAllComponents()
{GETIDOFNAME(GetAllComponents) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2ProjectFolder_Dispatch::GetAllDataBaseItems()
{GETIDOFNAME(GetAllDataBaseItems) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2ProjectFolder_Dispatch::GetAllSubFolders()
{GETIDOFNAME(GetAllSubFolders) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2ProjectFolder_Dispatch::GetComponent(LPCTSTR componentName)
{GETIDOFNAME(GetComponent) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		componentName);
	return result;
}

LPDISPATCH Asap2ProjectFolder_Dispatch::GetDataBaseItem(LPCTSTR itemName)
{GETIDOFNAME(GetDataBaseItem) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		itemName);
	return result;
}

LPDISPATCH Asap2ProjectFolder_Dispatch::GetSubFolder(LPCTSTR folderName)
{GETIDOFNAME(GetSubFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		folderName);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsFolder()
{GETIDOFNAME(IsFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::RemoveComponent(LPDISPATCH dispatch_comp)
{GETIDOFNAME(RemoveComponent) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_comp);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::RemoveFolder(LPDISPATCH dispatch_folder, BOOL recursive)
{GETIDOFNAME(RemoveFolder) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_folder, recursive);
	return result;
}

LPDISPATCH Asap2ProjectFolder_Dispatch::Copy(LPCTSTR name)
{GETIDOFNAME(Copy) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH Asap2ProjectFolder_Dispatch::CopyToFolder(LPCTSTR name, LPDISPATCH dispatch_folder)
{GETIDOFNAME(CopyToFolder) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_folder);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::ExportToFile(LPCTSTR fileName, BOOL multipleFiles, BOOL reference)
{GETIDOFNAME(ExportToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, multipleFiles, reference);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::GetAccessRightApplication()
{GETIDOFNAME(GetAccessRightApplication) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::GetAccessRightCodeGeneration()
{GETIDOFNAME(GetAccessRightCodeGeneration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::GetAccessRightExecute()
{GETIDOFNAME(GetAccessRightExecute) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::GetAccessRightRead()
{GETIDOFNAME(GetAccessRightRead) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::GetAccessRightWrite()
{GETIDOFNAME(GetAccessRightWrite) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT Asap2ProjectFolder_Dispatch::GetAllReferecedDataBaseItems()
{GETIDOFNAME(GetAllReferecedDataBaseItems) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString Asap2ProjectFolder_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::GetDisallowImport()
{GETIDOFNAME(GetDisallowImport) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString Asap2ProjectFolder_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2ProjectFolder_Dispatch::GetNameWithPath()
{GETIDOFNAME(GetNameWithPath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2ProjectFolder_Dispatch::GetOID()
{GETIDOFNAME(GetOID) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2ProjectFolder_Dispatch::GetParentFolder()
{GETIDOFNAME(GetParentFolder) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Asap2ProjectFolder_Dispatch::GetType()
{GETIDOFNAME(GetType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsAsap2CanDB()
{GETIDOFNAME(IsAsap2CanDB) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsAsap2Catalog()
{GETIDOFNAME(IsAsap2Catalog) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsAsap2Item()
{GETIDOFNAME(IsAsap2Item) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsAsap2Project()
{GETIDOFNAME(IsAsap2Project) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsAscetContainer()
{GETIDOFNAME(IsAscetContainer) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsAscetFolder()
{GETIDOFNAME(IsAscetFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsAscetNetwork()
{GETIDOFNAME(IsAscetNetwork) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsAscetProject()
{GETIDOFNAME(IsAscetProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsAscetProtocol()
{GETIDOFNAME(IsAscetProtocol) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsClass()
{GETIDOFNAME(IsClass) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsCodeComponent()
{GETIDOFNAME(IsCodeComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsComponent()
{GETIDOFNAME(IsComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsConditionalTable()
{GETIDOFNAME(IsConditionalTable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsCTBlock()
{GETIDOFNAME(IsCTBlock) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsCTComponent()
{GETIDOFNAME(IsCTComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsDataSet()
{GETIDOFNAME(IsDataSet) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsDiscreteComponent()
{GETIDOFNAME(IsDiscreteComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsEnumeration()
{GETIDOFNAME(IsEnumeration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsExperimentEnvironment()
{GETIDOFNAME(IsExperimentEnvironment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsODXProject()
{GETIDOFNAME(IsODXProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsFunctionalComponent()
{GETIDOFNAME(IsFunctionalComponent) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsHardwareConfiguration()
{GETIDOFNAME(IsHardwareConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsIcon()
{GETIDOFNAME(IsIcon) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsIncaFolder()
{GETIDOFNAME(IsIncaFolder) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsModule()
{GETIDOFNAME(IsModule) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsProject()
{GETIDOFNAME(IsProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsSignal()
{GETIDOFNAME(IsSignal) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsStateMachine()
{GETIDOFNAME(IsStateMachine) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::Move(LPDISPATCH dispatch_folder)
{GETIDOFNAME(Move) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_folder);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::SetAccessRightApplication(BOOL aBool)
{GETIDOFNAME(SetAccessRightApplication) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::SetAccessRightCodeGeneration(BOOL aBool)
{GETIDOFNAME(SetAccessRightCodeGeneration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::SetAccessRightExecute(BOOL aBool)
{GETIDOFNAME(SetAccessRightExecute) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::SetAccessRightRead(BOOL aBool)
{GETIDOFNAME(SetAccessRightRead) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::SetAccessRightWrite(BOOL aBool)
{GETIDOFNAME(SetAccessRightWrite) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::SetDisallowImport(BOOL aBool)
{GETIDOFNAME(SetDisallowImport) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aBool);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::SetName(LPCTSTR aName)
{GETIDOFNAME(SetName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH Asap2ProjectFolder_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Asap2ProjectFolder_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2ProjectFolder_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2ProjectFolder_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Asap2ProjectFolder_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Asap2Group_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Asap2Group_Dispatch operations

VARIANT Asap2Group_Dispatch::GetAllReferencedMeasurements()
{GETIDOFNAME(GetAllReferencedMeasurements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Group_Dispatch::GetAllSubFunctions()
{GETIDOFNAME(GetAllSubFunctions) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Group_Dispatch::GetAllSubGroups()
{GETIDOFNAME(GetAllSubGroups) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Group_Dispatch::GetAllCharacteristics()
{GETIDOFNAME(GetAllCharacteristics) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Group_Dispatch::GetAllDefinedCharacteristics()
{GETIDOFNAME(GetAllDefinedCharacteristics) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Group_Dispatch::GetAllLabels()
{GETIDOFNAME(GetAllLabels) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Group_Dispatch::GetAllMeasurements()
{GETIDOFNAME(GetAllMeasurements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Group_Dispatch::GetAllReferencedCharacteristics()
{GETIDOFNAME(GetAllReferencedCharacteristics) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL Asap2Group_Dispatch::IsRoot()
{GETIDOFNAME(IsRoot) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString Asap2Group_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2Group_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Group_Dispatch::Remove()
{GETIDOFNAME(Remove) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Group_Dispatch::Rename(LPCTSTR name)
{GETIDOFNAME(Rename) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL Asap2Group_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

long Asap2Group_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2Group_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Group_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Group_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Group_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Group_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Group_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Group_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Group_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Group_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Asap2Group_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// IncaOnlineExperiment_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// IncaOnlineExperiment_Dispatch operations

CString IncaOnlineExperiment_Dispatch::GetEtas_binary()
{GETIDOFNAME(GetEtas_binary) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetDiadem_atf()
{GETIDOFNAME(GetDiadem_atf) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetEtas_ascii()
{GETIDOFNAME(GetEtas_ascii) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetEtas_groupascii()
{GETIDOFNAME(GetEtas_groupascii) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetMatlab_mfile()
{GETIDOFNAME(GetMatlab_mfile) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetFamos_record()
{GETIDOFNAME(GetFamos_record) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetEtas_mdf()
{GETIDOFNAME(GetEtas_mdf) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetEtas_mdf4()
{GETIDOFNAME(GetEtas_mdf4) 
	CString result;
	InvokeHelper( dispid , DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::ChangeWorkingData(LPCTSTR aDataSetName)
{GETIDOFNAME(ChangeWorkingData) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aDataSetName);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::CheckRecordingTriggerFormula(LPCTSTR triggerString)
{GETIDOFNAME(CheckRecordingTriggerFormula) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		triggerString);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::ClearRecordingStateOf(LPDISPATCH dispatch_aMeasureDataItem)
{GETIDOFNAME(ClearRecordingStateOf) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_aMeasureDataItem);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::GetAcquisitionState()
{GETIDOFNAME(GetAcquisitionState) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long IncaOnlineExperiment_Dispatch::GetActualRecordingTimeMs()
{GETIDOFNAME(GetActualRecordingTimeMs) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetAllActiveMeasureLabels()
{GETIDOFNAME(GetAllActiveMeasureLabels) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetAllPossibleTriggerOperators()
{GETIDOFNAME(GetAllPossibleTriggerOperators) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long IncaOnlineExperiment_Dispatch::GetGlobalMeasureStateIndex()
{GETIDOFNAME(GetGlobalMeasureStateIndex) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetGlobalMeasureStateLabel()
{GETIDOFNAME(GetGlobalMeasureStateLabel) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long IncaOnlineExperiment_Dispatch::GetLastTSMessageCategoryBuffered(BOOL aBool)
{GETIDOFNAME(GetLastTSMessageCategoryBuffered) 
	long result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		aBool);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetLastTSMessageStringBuffered(BOOL aBool)
{GETIDOFNAME(GetLastTSMessageStringBuffered) 
	CString result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		aBool);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::GetRecordingFileAutoincrementFlag()
{GETIDOFNAME(GetRecordingFileAutoincrementFlag) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetRecordingFileFormat()
{GETIDOFNAME(GetRecordingFileFormat) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetRecordingFileFormats()
{GETIDOFNAME(GetRecordingFileFormats) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetRecordingFileFormatsInternal()
{GETIDOFNAME(GetRecordingFileFormatsInternal) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetPrimaryRecordingFormatID()
{GETIDOFNAME(GetPrimaryRecordingFormatID) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetPrimaryRecordingFormatFileExtension()
{GETIDOFNAME(GetPrimaryRecordingFormatFileExtension) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetRecordingFileName()
{GETIDOFNAME(GetRecordingFileName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetLastRecordingFileName()
{GETIDOFNAME(GetLastRecordingFileName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetRecordingHeaderComment()
{GETIDOFNAME(GetRecordingHeaderComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetRecordingHeaderCompany()
{GETIDOFNAME(GetRecordingHeaderCompany) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetRecordingHeaderDefaultComment()
{GETIDOFNAME(GetRecordingHeaderDefaultComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetRecordingHeaderProject()
{GETIDOFNAME(GetRecordingHeaderProject) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetRecordingHeaderUser()
{GETIDOFNAME(GetRecordingHeaderUser) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetRecordingHeaderVehicle()
{GETIDOFNAME(GetRecordingHeaderVehicle) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetRecordingPathName()
{GETIDOFNAME(GetRecordingPathName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long IncaOnlineExperiment_Dispatch::GetRemainingRecordingTimeMs()
{GETIDOFNAME(GetRemainingRecordingTimeMs) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetStateOf(LPDISPATCH dispatch_anExperimentDataItem)
{GETIDOFNAME(GetStateOf) 
	CString result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		dispatch_anExperimentDataItem);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::InitializeHardware()
{GETIDOFNAME(InitializeHardware) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::IsIncaOnlineExperiment()
{GETIDOFNAME(IsIncaOnlineExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::IsMeasureLabelActive(LPCTSTR measureLabel, LPDISPATCH dispatch_device)
{GETIDOFNAME(IsMeasureLabelActive) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		measureLabel, dispatch_device);
	return result;
}

double IncaOnlineExperiment_Dispatch::RecordingTimeActual()
{GETIDOFNAME(RecordingTimeActual) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double IncaOnlineExperiment_Dispatch::RecordingTimeRemaining()
{GETIDOFNAME(RecordingTimeRemaining) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::RecordWithDuration(double duration)
{GETIDOFNAME(RecordWithDuration) 
	BOOL result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		duration);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::RecordWithManualStartPreTimeManualStop(double preTriggerTime)
{GETIDOFNAME(RecordWithManualStartPreTimeManualStop) 
	BOOL result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		preTriggerTime);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::RecordWithManualStartPreTimePostTime(double preTriggerTime, double postTriggerTime)
{GETIDOFNAME(RecordWithManualStartPreTimePostTime) 
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		preTriggerTime, postTriggerTime);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::RecordWithManualStartPreTimeStopTrigger(double preTriggerTime, LPCTSTR stopTriggerString)
{GETIDOFNAME(RecordWithManualStartPreTimeStopTrigger) 
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		preTriggerTime, stopTriggerString);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::RecordWithManualStop()
{GETIDOFNAME(RecordWithManualStop) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::RecordWithManuelStop()
{GETIDOFNAME(RecordWithManuelStop) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::RecordWithStartTriggerDuration(LPCTSTR startTriggerString, double duration)
{GETIDOFNAME(RecordWithStartTriggerDuration) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		startTriggerString, duration);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::RecordWithStartTriggerManualStop(LPCTSTR startTriggerString)
{GETIDOFNAME(RecordWithStartTriggerManualStop) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		startTriggerString);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::RecordWithStartTriggerPreTimeManualStop(LPCTSTR startTriggerString, double preTriggerTime)
{GETIDOFNAME(RecordWithStartTriggerPreTimeManualStop) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		startTriggerString, preTriggerTime);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::RecordWithStartTriggerPreTimePostTime(LPCTSTR startTriggerString, double preTriggerTime, double postTriggerTime)
{GETIDOFNAME(RecordWithStartTriggerPreTimePostTime) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		startTriggerString, preTriggerTime, postTriggerTime);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::RecordWithStartTriggerPreTimeStopTrigger(LPCTSTR startTriggerString, double preTriggerTime, LPCTSTR stopTriggerString)
{GETIDOFNAME(RecordWithStartTriggerPreTimeStopTrigger) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		startTriggerString, preTriggerTime, stopTriggerString);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SendManualStartTrigger()
{GETIDOFNAME(SendManualStartTrigger) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SendManualStopTrigger()
{GETIDOFNAME(SendManualStopTrigger) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetLastRecordingFileName(LPCTSTR fileName)
{GETIDOFNAME(SetLastRecordingFileName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetRecordingFileAttributes(LPCTSTR fileName, LPCTSTR pathName, LPCTSTR formatName, BOOL state)
{GETIDOFNAME(SetRecordingFileAttributes) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, pathName, formatName, state);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetRecordingFileAutoincrementFlag(BOOL state)
{GETIDOFNAME(SetRecordingFileAutoincrementFlag) 
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		state);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::DisableRecordingFileDateTimeSuffix()
{GETIDOFNAME(DisableRecordingFileDateTimeSuffix) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetRecordingFileFormat(LPCTSTR formatName)
{GETIDOFNAME(SetRecordingFileFormat) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		formatName);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetRecordingFileName(LPCTSTR fileName)
{GETIDOFNAME(SetRecordingFileName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetRecordingHeader(LPCTSTR comment, LPCTSTR user, LPCTSTR company, LPCTSTR project, LPCTSTR vehicle)
{GETIDOFNAME(SetRecordingHeader) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment, user, company, project, vehicle);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetRecordingHeaderComment(LPCTSTR comment)
{GETIDOFNAME(SetRecordingHeaderComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetRecordingHeaderCompany(LPCTSTR company)
{GETIDOFNAME(SetRecordingHeaderCompany) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		company);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetRecordingHeaderProject(LPCTSTR project)
{GETIDOFNAME(SetRecordingHeaderProject) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		project);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetRecordingHeaderUser(LPCTSTR user)
{GETIDOFNAME(SetRecordingHeaderUser) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		user);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetRecordingHeaderVehicle(LPCTSTR vehicle)
{GETIDOFNAME(SetRecordingHeaderVehicle) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		vehicle);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetRecordingPathName(LPCTSTR pathName)
{GETIDOFNAME(SetRecordingPathName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pathName);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetRecordingStateOf(LPDISPATCH dispatch_aMeasureDataItem)
{GETIDOFNAME(SetRecordingStateOf) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_aMeasureDataItem);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetStateFor(LPCTSTR state, LPDISPATCH dispatch_anExperimentDataItem)
{GETIDOFNAME(SetStateFor) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		state, dispatch_anExperimentDataItem);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SwitchCalibrationAccessOff()
{GETIDOFNAME(SwitchCalibrationAccessOff) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SwitchCalibrationAccessOn()
{GETIDOFNAME(SwitchCalibrationAccessOn) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::EnableEtherCATAccess(LPCTSTR aLabel, LPDISPATCH dispatch_device)
{GETIDOFNAME(EnableEtherCATAccess) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aLabel, dispatch_device);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::DisableEtherCATAccess(LPCTSTR aLabel, LPDISPATCH dispatch_device)
{GETIDOFNAME(DisableEtherCATAccess) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aLabel, dispatch_device);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::EnableFULIAccess(LPCTSTR aLabel, LPDISPATCH dispatch_device)
{GETIDOFNAME(EnableFULIAccess) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aLabel, dispatch_device);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::DisableFULIAccess(LPCTSTR aLabel, LPDISPATCH dispatch_device)
{GETIDOFNAME(DisableFULIAccess) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aLabel, dispatch_device);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetAsap2NameForDisplayIdentifier(LPCTSTR aDisplayIdentifier, LPDISPATCH dispatch_aDevice)
{GETIDOFNAME(GetAsap2NameForDisplayIdentifier) 
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		aDisplayIdentifier, dispatch_aDevice);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::WriteEventComment(LPCTSTR aComment, BOOL aFlag)
{GETIDOFNAME(WriteEventComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aComment, aFlag);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetScenarioNames()
{GETIDOFNAME(GetScenarioNames) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::ActivateScenario(LPCTSTR scenarioName)
{GETIDOFNAME(ActivateScenario) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		scenarioName);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetMCD3Extensions(LPCTSTR AccessControlModifierKey_ETASEngineering)
{GETIDOFNAME(GetMCD3Extensions) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		AccessControlModifierKey_ETASEngineering);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::IsOdxProjectLoaded()
{GETIDOFNAME(IsOdxProjectLoaded) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetDiagnosticExtensionsForLoadedODXProject()
{GETIDOFNAME(GetDiagnosticExtensionsForLoadedODXProject) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetOpenLogicalLinks()
{GETIDOFNAME(GetOpenLogicalLinks) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetAllExperimentSolverBlockLabels()
{GETIDOFNAME(GetAllExperimentSolverBlockLabels) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetAllSolverIntegratorLabels()
{GETIDOFNAME(GetAllSolverIntegratorLabels) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetIntegratorNameForSolver(LPCTSTR aLabel)
{GETIDOFNAME(GetIntegratorNameForSolver) 
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		aLabel);
	return result;
}

double IncaOnlineExperiment_Dispatch::GetIntegratorParameterForSolver(LPCTSTR parameterLabel, LPCTSTR aLabel)
{GETIDOFNAME(GetIntegratorParameterForSolver) 
	double result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		parameterLabel, aLabel);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetIntegratorParameterLabels()
{GETIDOFNAME(GetIntegratorParameterLabels) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::IsExperimentLocked()
{GETIDOFNAME(IsExperimentLocked) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::IsMeasurementRunning()
{GETIDOFNAME(IsMeasurementRunning) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::IsOnlineExperiment()
{GETIDOFNAME(IsOnlineExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::LockExperiment()
{GETIDOFNAME(LockExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetIntegratorAdamsMoulton2ForSolver(LPCTSTR aLabel, double dt, double h)
{GETIDOFNAME(SetIntegratorAdamsMoulton2ForSolver) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aLabel, dt, h);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetIntegratorEulerForSolver(LPCTSTR aLabel, double dt, double h)
{GETIDOFNAME(SetIntegratorEulerForSolver) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aLabel, dt, h);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetIntegratorHeunForSolver(LPCTSTR aLabel, double dt, double h)
{GETIDOFNAME(SetIntegratorHeunForSolver) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aLabel, dt, h);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetIntegratorMulstep2ForSolver(LPCTSTR aLabel, double dt, double h)
{GETIDOFNAME(SetIntegratorMulstep2ForSolver) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aLabel, dt, h);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetIntegratorParameterForSolver(LPCTSTR parameterLabel, LPCTSTR aLabel, double value_Renamed)
{GETIDOFNAME(SetIntegratorParameterForSolver) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		parameterLabel, aLabel, value_Renamed);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::SetIntegratorRungeKutta4ForSolver(LPCTSTR aLabel, double dt, double h)
{GETIDOFNAME(SetIntegratorRungeKutta4ForSolver) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_R8;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aLabel, dt, h);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::StartMeasurement()
{GETIDOFNAME(StartMeasurement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::StopMeasurement()
{GETIDOFNAME(StopMeasurement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::StopMeasurementAndSaveToFile(LPCTSTR fileName, LPCTSTR fileFormat)
{GETIDOFNAME(StopMeasurementAndSaveToFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, fileFormat);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::UnlockExperiment()
{GETIDOFNAME(UnlockExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::BrowseCalibrationElement(LPCTSTR name)
{GETIDOFNAME(BrowseCalibrationElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::BrowseCalibrationElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseCalibrationElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::BrowseCaseInsensitiveCalibrationElement(LPCTSTR name)
{GETIDOFNAME(BrowseCaseInsensitiveCalibrationElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::BrowseCaseInsensitiveCalibrationElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseCaseInsensitiveCalibrationElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::BrowseCaseInsensitiveExperimentElement(LPCTSTR name)
{GETIDOFNAME(BrowseCaseInsensitiveExperimentElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::BrowseCaseInsensitiveExperimentElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseCaseInsensitiveExperimentElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::BrowseCaseInsensitiveMeasureElement(LPCTSTR name)
{GETIDOFNAME(BrowseCaseInsensitiveMeasureElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::BrowseCaseInsensitiveMeasureElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseCaseInsensitiveMeasureElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::BrowseExperimentElement(LPCTSTR name)
{GETIDOFNAME(BrowseExperimentElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::BrowseExperimentElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseExperimentElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::BrowseMeasureElement(LPCTSTR name)
{GETIDOFNAME(BrowseMeasureElement) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::BrowseMeasureElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(BrowseMeasureElementInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

long IncaOnlineExperiment_Dispatch::CheckTypeForElementNameInDevice(LPCTSTR aLabelName, LPDISPATCH dispatch_aDevice)
{GETIDOFNAME(CheckTypeForElementNameInDevice) 
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		aLabelName, dispatch_aDevice);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetAllCalibrationElements()
{GETIDOFNAME(GetAllCalibrationElements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetAllCalibrationElementsInDevice(LPDISPATCH dispatch_device)
{GETIDOFNAME(GetAllCalibrationElementsInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		dispatch_device);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetAllDevices()
{GETIDOFNAME(GetAllDevices) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetAllExperimentElements()
{GETIDOFNAME(GetAllExperimentElements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetAllExperimentElementsInDevice(LPDISPATCH dispatch_device)
{GETIDOFNAME(GetAllExperimentElementsInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		dispatch_device);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetAllMeasureElements()
{GETIDOFNAME(GetAllMeasureElements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetAllMeasureElementsInDevice(LPDISPATCH dispatch_device)
{GETIDOFNAME(GetAllMeasureElementsInDevice) 
	VARIANT result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		dispatch_device);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetCalibrationElement(LPCTSTR name)
{GETIDOFNAME(GetCalibrationElement) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetCalibrationElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(GetCalibrationElementInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetCalibrationValue(LPCTSTR name)
{GETIDOFNAME(GetCalibrationValue) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetCalibrationValueInDevice(LPCTSTR name, LPDISPATCH dispatch_dev)
{GETIDOFNAME(GetCalibrationValueInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_dev);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetDefaultRasterForMeasureElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(GetDefaultRasterForMeasureElementInDevice) 
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetDevice(LPCTSTR name)
{GETIDOFNAME(GetDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetExperimentElement(LPCTSTR name)
{GETIDOFNAME(GetExperimentElement) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetExperimentElementForCaseInsensitiveLabel(LPCTSTR name)
{GETIDOFNAME(GetExperimentElementForCaseInsensitiveLabel) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetExperimentElementForCaseInsensitiveLabelInDevice(LPCTSTR name, LPDISPATCH dispatch_dev)
{GETIDOFNAME(GetExperimentElementForCaseInsensitiveLabelInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_dev);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetExperimentElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(GetExperimentElementInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetMeasureElement(LPCTSTR name)
{GETIDOFNAME(GetMeasureElement) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetMeasureElementInDevice(LPCTSTR name, LPDISPATCH dispatch_device)
{GETIDOFNAME(GetMeasureElementInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_device);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetMeasureValue(LPCTSTR name)
{GETIDOFNAME(GetMeasureValue) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetMeasureValueInDevice(LPCTSTR name, LPDISPATCH dispatch_dev)
{GETIDOFNAME(GetMeasureValueInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, dispatch_dev);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetMeasureValueWithAcquisitionRate(LPCTSTR name, LPCTSTR acquisitionRate)
{GETIDOFNAME(GetMeasureValueWithAcquisitionRate) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, acquisitionRate);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetMeasurementsWithRCI2(const VARIANT& devNames, const VARIANT& rasterNames, const VARIANT& messNames)
{GETIDOFNAME(GetMeasurementsWithRCI2) 
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&devNames, &rasterNames, &messNames);
	return result;
}

LPDISPATCH IncaOnlineExperiment_Dispatch::GetMeasureValueWithAcquisitionRateInDevice(LPCTSTR name, LPCTSTR acquisitionRate, LPDISPATCH dispatch_dev)
{GETIDOFNAME(GetMeasureValueWithAcquisitionRateInDevice) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, acquisitionRate, dispatch_dev);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::GetRecordingState()
{GETIDOFNAME(GetRecordingState) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::PauseRecording()
{GETIDOFNAME(PauseRecording) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::StartRecording()
{GETIDOFNAME(StartRecording) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::StopAndDiscardRecording()
{GETIDOFNAME(StopAndDiscardRecording) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::StopRecording(LPCTSTR fileName, LPCTSTR fileFormat)
{GETIDOFNAME(StopRecording) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, fileFormat);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::ConvertMdfFile(LPCTSTR fileName, LPCTSTR fileFormat)
{GETIDOFNAME(ConvertMdfFile) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, fileFormat);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetHWDevicesFlat(LPDISPATCH dispatch_aHWConfig)
{GETIDOFNAME(GetHWDevicesFlat) 
	VARIANT result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		dispatch_aHWConfig);
	return result;
}

VARIANT IncaOnlineExperiment_Dispatch::GetDependentCommonAxisConsumers(LPCTSTR elementName)
{GETIDOFNAME(GetDependentCommonAxisConsumers) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		elementName);
	return result;
}

long IncaOnlineExperiment_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString IncaOnlineExperiment_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL IncaOnlineExperiment_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long IncaOnlineExperiment_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Inca_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Inca_Dispatch operations

CString Inca_Dispatch::APIVersion()
{GETIDOFNAME(APIVersion) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT Inca_Dispatch::GetAllSystemDescriptions()
{GETIDOFNAME(GetAllSystemDescriptions) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long Inca_Dispatch::GetCurrentASAMMCD3Mode()
{GETIDOFNAME(GetCurrentASAMMCD3Mode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Inca_Dispatch::GetCurrentDataBase()
{GETIDOFNAME(GetCurrentDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Inca_Dispatch::GetDataBasePath()
{GETIDOFNAME(GetDataBasePath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double Inca_Dispatch::GetPollingCycleTimeTS()
{GETIDOFNAME(GetPollingCycleTimeTS) 
	double result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

VARIANT Inca_Dispatch::GetRecordingFileFormats()
{GETIDOFNAME(GetRecordingFileFormats) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Inca_Dispatch::GetRecordingFileFormatsInternal()
{GETIDOFNAME(GetRecordingFileFormatsInternal) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString Inca_Dispatch::GetPrimaryRecordingFormatID()
{GETIDOFNAME(GetPrimaryRecordingFormatID) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Inca_Dispatch::GetPrimaryRecordingFormatFileExtension()
{GETIDOFNAME(GetPrimaryRecordingFormatFileExtension) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH Inca_Dispatch::GetSystemDescription(LPCTSTR aName)
{GETIDOFNAME(GetSystemDescription) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		aName);
	return result;
}

BOOL Inca_Dispatch::IsWorkbaseActive()
{GETIDOFNAME(IsWorkbaseActive) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH Inca_Dispatch::OpenDataBase(LPCTSTR DataBase)
{GETIDOFNAME(OpenDataBase) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		DataBase);
	return result;
}

BOOL Inca_Dispatch::RegisterASAP3ProcId(long aProgId)
{GETIDOFNAME(RegisterASAP3ProcId) 
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aProgId);
	return result;
}

BOOL Inca_Dispatch::SwitchToDataSet()
{GETIDOFNAME(SwitchToDataSet) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::SwitchToUserNamed(LPCTSTR userName)
{GETIDOFNAME(SwitchToUserNamed) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		userName);
	return result;
}

BOOL Inca_Dispatch::SwitchToWorkbase()
{GETIDOFNAME(SwitchToWorkbase) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString Inca_Dispatch::ToolName()
{GETIDOFNAME(ToolName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::GetDriveRecorderMode()
{GETIDOFNAME(GetDriveRecorderMode) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::IsIndexAlignmentLeft()
{GETIDOFNAME(IsIndexAlignmentLeft) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::AddMenuButton(LPCTSTR aMenuButtonName, LPCTSTR aMenuName, LPCTSTR aViewName)
{GETIDOFNAME(AddMenuButton) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		aMenuButtonName, aMenuName, aViewName);
	return result;
}

BOOL Inca_Dispatch::ClearMonitor()
{GETIDOFNAME(ClearMonitor) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::CloseDatabase()
{GETIDOFNAME(CloseDatabase) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::CloseTool()
{GETIDOFNAME(CloseTool) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Inca_Dispatch::CreateSeed()
{GETIDOFNAME(CreateSeed) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::DisconnectFromTool()
{GETIDOFNAME(DisconnectFromTool) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Inca_Dispatch::Exit(long exitNumber)
{GETIDOFNAME(Exit) 
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 exitNumber);
}

VARIANT Inca_Dispatch::GetAllToolboxNames()
{GETIDOFNAME(GetAllToolboxNames) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString Inca_Dispatch::GetApplicationDataPath()
{GETIDOFNAME(GetApplicationDataPath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Inca_Dispatch::GetApplicationLanguage()
{GETIDOFNAME(GetApplicationLanguage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Inca_Dispatch::GetApplicationProgramPath()
{GETIDOFNAME(GetApplicationProgramPath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Inca_Dispatch::GetApplicationSharedPath()
{GETIDOFNAME(GetApplicationSharedPath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH Inca_Dispatch::GetCDMToolbox()
{GETIDOFNAME(GetCDMToolbox) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Inca_Dispatch::GetCurrentVersion()
{GETIDOFNAME(GetCurrentVersion) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Inca_Dispatch::GetETASLogFilePath()
{GETIDOFNAME(GetETASLogFilePath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Inca_Dispatch::GetETASManualPath()
{GETIDOFNAME(GetETASManualPath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Inca_Dispatch::GetETASTempPath()
{GETIDOFNAME(GetETASTempPath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH Inca_Dispatch::GetLicenseManager()
{GETIDOFNAME(GetLicenseManager) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Inca_Dispatch::GetOpenedExperiment()
{GETIDOFNAME(GetOpenedExperiment) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Inca_Dispatch::GetOpenedExperimentView()
{GETIDOFNAME(GetOpenedExperimentView) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Inca_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Inca_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::IsDatabaseLocked()
{GETIDOFNAME(IsDatabaseLocked) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::IsToolLocked()
{GETIDOFNAME(IsToolLocked) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::LockDatabase()
{GETIDOFNAME(LockDatabase) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::LockTool()
{GETIDOFNAME(LockTool) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::PermitMessageBoxes()
{GETIDOFNAME(PermitMessageBoxes) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString Inca_Dispatch::ProgId()
{GETIDOFNAME(ProgId) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::SuppressMessageBoxes()
{GETIDOFNAME(SuppressMessageBoxes) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Inca_Dispatch::SwitchCatchWalkbackOff()
{GETIDOFNAME(SwitchCatchWalkbackOff) 
	InvokeHelper( dispid , DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Inca_Dispatch::SwitchCatchWalkbackOn()
{GETIDOFNAME(SwitchCatchWalkbackOn) 
	InvokeHelper( dispid , DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Inca_Dispatch::SwitchLoggingOff()
{GETIDOFNAME(SwitchLoggingOff) 
	InvokeHelper( dispid , DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Inca_Dispatch::SwitchLoggingOn()
{GETIDOFNAME(SwitchLoggingOn) 
	InvokeHelper( dispid , DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL Inca_Dispatch::UnlockDatabase()
{GETIDOFNAME(UnlockDatabase) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::UnlockTool()
{GETIDOFNAME(UnlockTool) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH Inca_Dispatch::WaitMessage(LPCTSTR text)
{GETIDOFNAME(WaitMessage) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		text);
	return result;
}

BOOL Inca_Dispatch::WriteMonitorLogFileToPath(LPCTSTR pathName)
{GETIDOFNAME(WriteMonitorLogFileToPath) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pathName);
	return result;
}

BOOL Inca_Dispatch::WriteMonitorLogFileToPathUsingFileName(LPCTSTR pathName, LPCTSTR fileName)
{GETIDOFNAME(WriteMonitorLogFileToPathUsingFileName) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pathName, fileName);
	return result;
}

BOOL Inca_Dispatch::WriteReadyToMonitor()
{GETIDOFNAME(WriteReadyToMonitor) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Inca_Dispatch::WriteToMonitor(LPCTSTR text)
{GETIDOFNAME(WriteToMonitor) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		text);
	return result;
}

BOOL Inca_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Inca_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CarbDevice_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// CarbDevice_Dispatch operations

BOOL CarbDevice_Dispatch::IsCarbDevice()
{GETIDOFNAME(IsCarbDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH CarbDevice_Dispatch::SendCarbMessageByte(const VARIANT& Data)
{GETIDOFNAME(SendCarbMessageByte) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Data);
	return result;
}

LPDISPATCH CarbDevice_Dispatch::SendCarbMessageShort(const VARIANT& Data)
{GETIDOFNAME(SendCarbMessageShort) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Data);
	return result;
}

LPDISPATCH CarbDevice_Dispatch::SendCarbMessage(const VARIANT& Data)
{GETIDOFNAME(SendCarbMessage) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Data);
	return result;
}

LPDISPATCH CarbDevice_Dispatch::SendMode1Service(long pid)
{GETIDOFNAME(SendMode1Service) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		pid);
	return result;
}

LPDISPATCH CarbDevice_Dispatch::SendMode2Service(long pid, long frameNumber)
{GETIDOFNAME(SendMode2Service) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		pid, frameNumber);
	return result;
}

LPDISPATCH CarbDevice_Dispatch::SendMode3Service()
{GETIDOFNAME(SendMode3Service) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CarbDevice_Dispatch::SendMode4Service()
{GETIDOFNAME(SendMode4Service) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CarbDevice_Dispatch::SendMode5Service(long testId, long oxygenSensor)
{GETIDOFNAME(SendMode5Service) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		testId, oxygenSensor);
	return result;
}

LPDISPATCH CarbDevice_Dispatch::SendMode6Service(long testId)
{GETIDOFNAME(SendMode6Service) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		testId);
	return result;
}

LPDISPATCH CarbDevice_Dispatch::SendMode7Service()
{GETIDOFNAME(SendMode7Service) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CarbDevice_Dispatch::SendMode8Service(long testId, const VARIANT& Data)
{GETIDOFNAME(SendMode8Service) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		testId, &Data);
	return result;
}

LPDISPATCH CarbDevice_Dispatch::SendMode8Service_2(long testId, long dataA, long dataB, long dataC, long dataD, long dataE)
{GETIDOFNAME(SendMode8Service_2) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		testId, dataA, dataB, dataC, dataD, dataE);
	return result;
}

LPDISPATCH CarbDevice_Dispatch::SendMode9Service(long infoType)
{GETIDOFNAME(SendMode9Service) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		infoType);
	return result;
}

VARIANT CarbDevice_Dispatch::ActivateRci2ForAcquisitionRate(LPCTSTR name)
{GETIDOFNAME(ActivateRci2ForAcquisitionRate) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		name);
	return result;
}

BOOL CarbDevice_Dispatch::CanAssignProject()
{GETIDOFNAME(CanAssignProject) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::DeActivateRci2ForAcquisitionRate(LPCTSTR name)
{GETIDOFNAME(DeActivateRci2ForAcquisitionRate) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

double CarbDevice_Dispatch::GetA2lScalingFactorOfSignalGroup(LPCTSTR signalGroupName)
{GETIDOFNAME(GetA2lScalingFactorOfSignalGroup) 
	double result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		signalGroupName);
	return result;
}

long CarbDevice_Dispatch::GetA2lScalingUnitOfSignalGroup(LPCTSTR signalGroupName)
{GETIDOFNAME(GetA2lScalingUnitOfSignalGroup) 
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		signalGroupName);
	return result;
}

VARIANT CarbDevice_Dispatch::GetAllAcquisitionRates()
{GETIDOFNAME(GetAllAcquisitionRates) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH CarbDevice_Dispatch::GetASAP2Module()
{GETIDOFNAME(GetASAP2Module) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString CarbDevice_Dispatch::GetDeviceType()
{GETIDOFNAME(GetDeviceType) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString CarbDevice_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString CarbDevice_Dispatch::GetProjectDataBasePath()
{GETIDOFNAME(GetProjectDataBasePath) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

double CarbDevice_Dispatch::GetSampleRateFor(LPCTSTR aName)
{GETIDOFNAME(GetSampleRateFor) 
	double result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		aName);
	return result;
}

BOOL CarbDevice_Dispatch::IsAcquisitionRateAvailable(LPCTSTR rate)
{GETIDOFNAME(IsAcquisitionRateAvailable) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		rate);
	return result;
}

BOOL CarbDevice_Dispatch::IsActive()
{GETIDOFNAME(IsActive) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::IsCANMonitoringDevice()
{GETIDOFNAME(IsCANMonitoringDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::IsKwp2000Device()
{GETIDOFNAME(IsKwp2000Device) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::IsOutputDevice()
{GETIDOFNAME(IsOutputDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::IsWorkbaseDevice()
{GETIDOFNAME(IsWorkbaseDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::IsEtherCATSupported()
{GETIDOFNAME(IsEtherCATSupported) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::IsFULISupported()
{GETIDOFNAME(IsFULISupported) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::ResetTarget()
{GETIDOFNAME(ResetTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::StartTargetOS()
{GETIDOFNAME(StartTargetOS) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::StopTargetOS()
{GETIDOFNAME(StopTargetOS) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CarbDevice_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CarbDevice_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CarbDevice_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long CarbDevice_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// HWSubDeviceDescription_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// HWSubDeviceDescription_Dispatch operations

CString HWSubDeviceDescription_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWSubDeviceDescription_Dispatch::GetParentDeviceDescription()
{GETIDOFNAME(GetParentDeviceDescription) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsSubDeviceDescription()
{GETIDOFNAME(IsSubDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH HWSubDeviceDescription_Dispatch::GetDataBase()
{GETIDOFNAME(GetDataBase) 
	LPDISPATCH result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long HWSubDeviceDescription_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString HWSubDeviceDescription_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsAbstractBlockDiagramElement()
{GETIDOFNAME(IsAbstractBlockDiagramElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsAbstractMethod()
{GETIDOFNAME(IsAbstractMethod) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsAscetDiagram()
{GETIDOFNAME(IsAscetDiagram) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsAscetProjectFile()
{GETIDOFNAME(IsAscetProjectFile) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsCodeGenerator()
{GETIDOFNAME(IsCodeGenerator) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsConfiguration()
{GETIDOFNAME(IsConfiguration) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsConfigurationItem()
{GETIDOFNAME(IsConfigurationItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsDataBaseItem()
{GETIDOFNAME(IsDataBaseItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsDeviceDescription()
{GETIDOFNAME(IsDeviceDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsFormula()
{GETIDOFNAME(IsFormula) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsHWDevice()
{GETIDOFNAME(IsHWDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsHWSubDevice()
{GETIDOFNAME(IsHWSubDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsHWSystem()
{GETIDOFNAME(IsHWSystem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsImplInfo()
{GETIDOFNAME(IsImplInfo) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsModelElement()
{GETIDOFNAME(IsModelElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsSystemDescription()
{GETIDOFNAME(IsSystemDescription) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsTarget()
{GETIDOFNAME(IsTarget) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsTask()
{GETIDOFNAME(IsTask) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HWSubDeviceDescription_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long HWSubDeviceDescription_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Asap2Module_Dispatch properties

/////////////////////////////////////////////////////////////////////////////
// Asap2Module_Dispatch operations

LPDISPATCH Asap2Module_Dispatch::CreateCompuMethod(LPCTSTR formulaType, LPCTSTR formulaName)
{GETIDOFNAME(CreateCompuMethod) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		formulaType, formulaName);
	return result;
}

VARIANT Asap2Module_Dispatch::GetAllAvailableCompuMethodTypes()
{GETIDOFNAME(GetAllAvailableCompuMethodTypes) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Module_Dispatch::GetAllCharacteristics()
{GETIDOFNAME(GetAllCharacteristics) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Module_Dispatch::GetAllCompuMethods()
{GETIDOFNAME(GetAllCompuMethods) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Module_Dispatch::GetAllElementNamesOfType(LPCTSTR aType)
{GETIDOFNAME(GetAllElementNamesOfType) 
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		aType);
	return result;
}

VARIANT Asap2Module_Dispatch::GetAllFunctions()
{GETIDOFNAME(GetAllFunctions) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Module_Dispatch::GetAllGroups()
{GETIDOFNAME(GetAllGroups) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Module_Dispatch::GetAllMeasurements()
{GETIDOFNAME(GetAllMeasurements) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Module_Dispatch::GetAllRootFunctions()
{GETIDOFNAME(GetAllRootFunctions) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Module_Dispatch::GetAllRootGroups()
{GETIDOFNAME(GetAllRootGroups) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Asap2Module_Dispatch::GetAllUnreferencedCharacteristics()
{GETIDOFNAME(GetAllUnreferencedCharacteristics) 
	VARIANT result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2Module_Dispatch::GetAxisPointNamed(LPCTSTR aName)
{GETIDOFNAME(GetAxisPointNamed) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH Asap2Module_Dispatch::GetCharacteristicNamed(LPCTSTR aName)
{GETIDOFNAME(GetCharacteristicNamed) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		aName);
	return result;
}

LPDISPATCH Asap2Module_Dispatch::GetCompuMethod(LPCTSTR formulaName)
{GETIDOFNAME(GetCompuMethod) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		formulaName);
	return result;
}

CString Asap2Module_Dispatch::GetDescriptionFileName()
{GETIDOFNAME(GetDescriptionFileName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH Asap2Module_Dispatch::GetMeasurementNamed(LPCTSTR aName)
{GETIDOFNAME(GetMeasurementNamed) 
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		aName);
	return result;
}

CString Asap2Module_Dispatch::GetComment()
{GETIDOFNAME(GetComment) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Asap2Module_Dispatch::GetName()
{GETIDOFNAME(GetName) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Module_Dispatch::Remove()
{GETIDOFNAME(Remove) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Module_Dispatch::Rename(LPCTSTR name)
{GETIDOFNAME(Rename) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

BOOL Asap2Module_Dispatch::SetComment(LPCTSTR comment)
{GETIDOFNAME(SetComment) 
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		comment);
	return result;
}

long Asap2Module_Dispatch::GetToolErrorCode()
{GETIDOFNAME(GetToolErrorCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Asap2Module_Dispatch::GetToolErrorMessage()
{GETIDOFNAME(GetToolErrorMessage) 
	CString result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Asap2Module_Dispatch::IsAbstractDevice()
{GETIDOFNAME(IsAbstractDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Module_Dispatch::IsExperiment()
{GETIDOFNAME(IsExperiment) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Module_Dispatch::IsExperimentDataItem()
{GETIDOFNAME(IsExperimentDataItem) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Module_Dispatch::IsExperimentDevice()
{GETIDOFNAME(IsExperimentDevice) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Module_Dispatch::IsExperimentElement()
{GETIDOFNAME(IsExperimentElement) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Module_Dispatch::IsToolErrorAvailable()
{GETIDOFNAME(IsToolErrorAvailable) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Module_Dispatch::IsUserInterface()
{GETIDOFNAME(IsUserInterface) 
	BOOL result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Asap2Module_Dispatch::Equals(LPDISPATCH dispatch_hndl)
{GETIDOFNAME(Equals) 
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		dispatch_hndl);
	return result;
}

long Asap2Module_Dispatch::GetHashCode()
{GETIDOFNAME(GetHashCode) 
	long result;
	InvokeHelper( dispid , DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}