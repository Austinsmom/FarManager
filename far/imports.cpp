﻿/*
imports.cpp

импортируемые функции
*/
/*
Copyright © 1996 Eugene Roshal
Copyright © 2000 Far Group
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:
1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. The name of the authors may not be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "imports.hpp"

namespace imports_detail
{

imports::imports():
#define INIT_MODULE(module) m_ ## module(L## #module)

	INIT_MODULE(ntdll),
	INIT_MODULE(kernel32),
	INIT_MODULE(shell32),
	INIT_MODULE(user32),
	INIT_MODULE(virtdisk),
	INIT_MODULE(rstrtmgr),
	INIT_MODULE(netapi32),
	INIT_MODULE(dbghelp),
	INIT_MODULE(dwmapi),

#undef INIT_MODULE

// just to make it more readable
#define INIT_IMPORT(module, pointer) pointer(module)

	INIT_IMPORT(m_ntdll, NtQueryDirectoryFile),
	INIT_IMPORT(m_ntdll, NtQueryInformationFile),
	INIT_IMPORT(m_ntdll, NtSetInformationFile),
	INIT_IMPORT(m_ntdll, NtQueryObject),
	INIT_IMPORT(m_ntdll, NtOpenSymbolicLinkObject),
	INIT_IMPORT(m_ntdll, NtQuerySymbolicLinkObject),
	INIT_IMPORT(m_ntdll, NtClose),
	INIT_IMPORT(m_ntdll, RtlGetLastNtStatus),
	INIT_IMPORT(m_ntdll, RtlNtStatusToDosError),

	INIT_IMPORT(m_kernel32, GetConsoleKeyboardLayoutNameW),
	INIT_IMPORT(m_kernel32, CreateSymbolicLinkW),
	INIT_IMPORT(m_kernel32, FindFirstFileNameW),
	INIT_IMPORT(m_kernel32, FindNextFileNameW),
	INIT_IMPORT(m_kernel32, FindFirstStreamW),
	INIT_IMPORT(m_kernel32, FindNextStreamW),
	INIT_IMPORT(m_kernel32, GetFinalPathNameByHandleW),
	INIT_IMPORT(m_kernel32, GetVolumePathNamesForVolumeNameW),
	INIT_IMPORT(m_kernel32, GetPhysicallyInstalledSystemMemory),
	INIT_IMPORT(m_kernel32, HeapSetInformation),
	INIT_IMPORT(m_kernel32, IsWow64Process),
	INIT_IMPORT(m_kernel32, GetNamedPipeServerProcessId),
	INIT_IMPORT(m_kernel32, CancelSynchronousIo),
	INIT_IMPORT(m_kernel32, SetConsoleKeyShortcuts),
	INIT_IMPORT(m_kernel32, GetConsoleScreenBufferInfoEx),
	INIT_IMPORT(m_kernel32, QueryFullProcessImageNameW),
	INIT_IMPORT(m_kernel32, TzSpecificLocalTimeToSystemTime),
	INIT_IMPORT(m_kernel32, AddVectoredExceptionHandler),
	INIT_IMPORT(m_kernel32, RemoveVectoredExceptionHandler),

	INIT_IMPORT(m_shell32, SHCreateAssociationRegistration),

	INIT_IMPORT(m_user32, RegisterPowerSettingNotification),
	INIT_IMPORT(m_user32, UnregisterPowerSettingNotification),

	INIT_IMPORT(m_virtdisk, GetStorageDependencyInformation),
	INIT_IMPORT(m_virtdisk, OpenVirtualDisk),
	INIT_IMPORT(m_virtdisk, DetachVirtualDisk),

	INIT_IMPORT(m_rstrtmgr, RmStartSession),
	INIT_IMPORT(m_rstrtmgr, RmEndSession),
	INIT_IMPORT(m_rstrtmgr, RmRegisterResources),
	INIT_IMPORT(m_rstrtmgr, RmGetList),

	INIT_IMPORT(m_netapi32, NetDfsGetInfo),

	INIT_IMPORT(m_dbghelp, MiniDumpWriteDump),
	INIT_IMPORT(m_dbghelp, StackWalk64),
	INIT_IMPORT(m_dbghelp, SymInitialize),
	INIT_IMPORT(m_dbghelp, SymCleanup),
	INIT_IMPORT(m_dbghelp, SymFromAddr),
	INIT_IMPORT(m_dbghelp, SymSetOptions),
	INIT_IMPORT(m_dbghelp, SymGetLineFromAddr64),
	INIT_IMPORT(m_dbghelp, SymGetModuleInfoW64),
	INIT_IMPORT(m_dbghelp, UnDecorateSymbolName),

	INIT_IMPORT(m_dwmapi, DwmGetWindowAttribute)

#undef INIT_IMPORT
{
}

// ntdll
NTSTATUS NTAPI imports::stub_NtQueryDirectoryFile(HANDLE FileHandle, HANDLE Event, PVOID ApcRoutine, PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, PVOID FileInformation, ULONG Length, FILE_INFORMATION_CLASS FileInformationClass, BOOLEAN ReturnSingleEntry, PUNICODE_STRING FileName, BOOLEAN RestartScan)
{
	// TODO: log
	return STATUS_NOT_IMPLEMENTED;
}

NTSTATUS NTAPI imports::stub_NtQueryInformationFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID FileInformation, ULONG Length, FILE_INFORMATION_CLASS FileInformationClass)
{
	// TODO: log
	return STATUS_NOT_IMPLEMENTED;
}

NTSTATUS NTAPI imports::stub_NtSetInformationFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID FileInformation, ULONG Length, FILE_INFORMATION_CLASS FileInformationClass)
{
	// TODO: log
	return STATUS_NOT_IMPLEMENTED;
}

NTSTATUS NTAPI imports::stub_NtQueryObject(HANDLE Handle, OBJECT_INFORMATION_CLASS ObjectInformationClass, PVOID ObjectInformation, ULONG ObjectInformationLength, PULONG ReturnLength)
{
	// TODO: log
	return STATUS_NOT_IMPLEMENTED;
}

NTSTATUS NTAPI imports::stub_NtOpenSymbolicLinkObject(PHANDLE LinkHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
	// TODO: log
	return STATUS_NOT_IMPLEMENTED;
}

NTSTATUS NTAPI imports::stub_NtQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
	// TODO: log
	return STATUS_NOT_IMPLEMENTED;
}

NTSTATUS NTAPI imports::stub_NtClose(HANDLE Handle)
{
	// TODO: log
	return STATUS_NOT_IMPLEMENTED;
}

NTSTATUS NTAPI imports::stub_RtlGetLastNtStatus()
{
	// TODO: log
	return STATUS_NOT_IMPLEMENTED;
}

NTSTATUS NTAPI imports::stub_RtlNtStatusToDosError(NTSTATUS Status)
{
	// TODO: log
	return STATUS_NOT_IMPLEMENTED;
}

// kernel32
BOOL WINAPI imports::stub_GetConsoleKeyboardLayoutNameW(LPWSTR Buffer)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

BOOLEAN WINAPI imports::stub_CreateSymbolicLinkW(LPCWSTR SymlinkFileName, LPCWSTR TargetFileName, DWORD Flags)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

HANDLE WINAPI imports::stub_FindFirstFileNameW(LPCWSTR FileName, DWORD Flags, LPDWORD StringLength, LPWSTR LinkName)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return INVALID_HANDLE_VALUE;
}

BOOL WINAPI imports::stub_FindNextFileNameW(HANDLE FindStream, LPDWORD StringLength, PWCHAR LinkName)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

HANDLE WINAPI imports::stub_FindFirstStreamW(LPCWSTR FileName, STREAM_INFO_LEVELS InfoLevel, LPVOID FindStreamData, DWORD Flags)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return INVALID_HANDLE_VALUE;
}

BOOL WINAPI imports::stub_FindNextStreamW(HANDLE FindStream, LPVOID FindStreamData)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

DWORD WINAPI imports::stub_GetFinalPathNameByHandleW(HANDLE File, LPWSTR FilePath, DWORD FilePathSize, DWORD Flags)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return 0;
}

BOOL WINAPI imports::stub_GetVolumePathNamesForVolumeNameW(LPCWSTR VolumeName, LPWSTR VolumePathNames, DWORD BufferLength, PDWORD ReturnLength)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

BOOL WINAPI imports::stub_GetPhysicallyInstalledSystemMemory(PULONGLONG TotalMemoryInKilobytes)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

BOOL WINAPI imports::stub_HeapSetInformation(HANDLE HeapHandle, HEAP_INFORMATION_CLASS HeapInformationClass, PVOID HeapInformation, SIZE_T HeapInformationLength)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

BOOL WINAPI imports::stub_IsWow64Process(HANDLE Process, PBOOL Wow64Process)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

BOOL WINAPI imports::stub_GetNamedPipeServerProcessId(HANDLE Pipe, PULONG ServerProcessId)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

BOOL WINAPI imports::stub_CancelSynchronousIo(HANDLE Thread)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

BOOL WINAPI imports::stub_SetConsoleKeyShortcuts(BOOL Set, BYTE ReserveKeys, LPVOID AppKeys, DWORD NumAppKeys)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

BOOL WINAPI imports::stub_GetConsoleScreenBufferInfoEx(HANDLE ConsoleOutput, PCONSOLE_SCREEN_BUFFER_INFOEX ConsoleScreenBufferInfoEx)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

BOOL WINAPI imports::stub_QueryFullProcessImageNameW(HANDLE Process, DWORD Flags, LPWSTR ExeName, PDWORD Size)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

BOOL WINAPI imports::stub_TzSpecificLocalTimeToSystemTime(const TIME_ZONE_INFORMATION* TimeZoneInformation, const SYSTEMTIME* LocalTime, LPSYSTEMTIME UniversalTime)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

PVOID WINAPI imports::stub_AddVectoredExceptionHandler(ULONG First, PVECTORED_EXCEPTION_HANDLER Handler)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return nullptr;
}

ULONG WINAPI imports::stub_RemoveVectoredExceptionHandler(PVOID Handler)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return 0;
}

// shell32
HRESULT STDAPICALLTYPE imports::stub_SHCreateAssociationRegistration(REFIID riid, void ** ppv)
{
	// TODO: log
	return ERROR_CALL_NOT_IMPLEMENTED;
}

// user32
BOOL WINAPI imports::stub_UnregisterPowerSettingNotification(HPOWERNOTIFY Handle)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

HPOWERNOTIFY WINAPI imports::stub_RegisterPowerSettingNotification(HANDLE hRecipient, LPCGUID PowerSettingGuid, DWORD Flags)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return nullptr;
}

// virtdisk
DWORD WINAPI imports::stub_GetStorageDependencyInformation(HANDLE ObjectHandle, GET_STORAGE_DEPENDENCY_FLAG Flags, ULONG StorageDependencyInfoSize, PSTORAGE_DEPENDENCY_INFO StorageDependencyInfo, PULONG SizeUsed)
{
	// TODO: log
	return ERROR_CALL_NOT_IMPLEMENTED;
}

DWORD WINAPI imports::stub_OpenVirtualDisk(PVIRTUAL_STORAGE_TYPE VirtualStorageType, PCWSTR Path, VIRTUAL_DISK_ACCESS_MASK VirtualDiskAccessMask, OPEN_VIRTUAL_DISK_FLAG Flags, POPEN_VIRTUAL_DISK_PARAMETERS Parameters, PHANDLE Handle)
{
	// TODO: log
	return ERROR_CALL_NOT_IMPLEMENTED;
}

DWORD WINAPI imports::stub_DetachVirtualDisk(HANDLE VirtualDiskHandle, DETACH_VIRTUAL_DISK_FLAG Flags, ULONG ProviderSpecificFlags)
{
	// TODO: log
	return ERROR_CALL_NOT_IMPLEMENTED;
}

// rstrtmgr
DWORD WINAPI imports::stub_RmStartSession(DWORD *SessionHandle, DWORD SessionFlags, WCHAR strSessionKey[])
{
	// TODO: log
	return ERROR_CALL_NOT_IMPLEMENTED;
}

DWORD WINAPI imports::stub_RmEndSession(DWORD dwSessionHandle)
{
	// TODO: log
	return ERROR_CALL_NOT_IMPLEMENTED;
}

DWORD WINAPI imports::stub_RmRegisterResources(DWORD dwSessionHandle, UINT nFiles, LPCWSTR rgsFilenames[], UINT nApplications, RM_UNIQUE_PROCESS rgApplications[], UINT nServices, LPCWSTR rgsServiceNames[])
{
	// TODO: log
	return ERROR_CALL_NOT_IMPLEMENTED;
}

DWORD WINAPI imports::stub_RmGetList(DWORD dwSessionHandle, UINT *pnProcInfoNeeded, UINT *pnProcInfo, RM_PROCESS_INFO rgAffectedApps[], LPDWORD lpdwRebootReasons)
{
	// TODO: log
	return ERROR_CALL_NOT_IMPLEMENTED;
}

// netapi32
NET_API_STATUS NET_API_FUNCTION imports::stub_NetDfsGetInfo(LPWSTR DfsEntryPath, LPWSTR ServerName, LPWSTR ShareName, DWORD Level, LPBYTE* Buffer)
{
	// TODO: log
	return NERR_InvalidAPI;
}

// dbghelp
BOOL WINAPI imports::stub_MiniDumpWriteDump(HANDLE Process, DWORD ProcessId, HANDLE File, MINIDUMP_TYPE DumpType, PMINIDUMP_EXCEPTION_INFORMATION ExceptionParam, PMINIDUMP_USER_STREAM_INFORMATION UserStreamParam, PMINIDUMP_CALLBACK_INFORMATION CallbackParam)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

BOOL WINAPI imports::stub_StackWalk64(DWORD MachineType, HANDLE Process, HANDLE Thread, LPSTACKFRAME64 StackFrame, PVOID ContextRecord, PREAD_PROCESS_MEMORY_ROUTINE64 ReadMemoryRoutine, PFUNCTION_TABLE_ACCESS_ROUTINE64 FunctionTableAccessRoutine, PGET_MODULE_BASE_ROUTINE64 GetModuleBaseRoutine, PTRANSLATE_ADDRESS_ROUTINE64 TranslateAddress)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

BOOL WINAPI imports::stub_SymInitialize(HANDLE Process, PCSTR UserSearchPath, BOOL InvadeProcess)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

BOOL WINAPI imports::stub_SymCleanup(HANDLE Process)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

BOOL WINAPI imports::stub_SymFromAddr(HANDLE Process, DWORD64 Address, PDWORD64 Displacement, PSYMBOL_INFO Symbol)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

DWORD WINAPI imports::stub_SymSetOptions(DWORD SymOptions)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return 0;
}

BOOL WINAPI imports::stub_SymGetLineFromAddr64(HANDLE Process, DWORD64 Addr, PDWORD Displacement, PIMAGEHLP_LINE64 Line)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

BOOL WINAPI imports::stub_SymGetModuleInfoW64(HANDLE Process, DWORD64 Addr, PIMAGEHLP_MODULEW64 ModuleInfo)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return FALSE;
}

DWORD WINAPI imports::stub_UnDecorateSymbolName(PCSTR Name, PSTR OutputString, DWORD MaxStringLength, DWORD Flags)
{
	// TODO: log
	SetLastError(ERROR_CALL_NOT_IMPLEMENTED);
	return 0;
}

HRESULT WINAPI imports::stub_DwmGetWindowAttribute(HWND  hwnd, DWORD dwAttribute, PVOID pvAttribute, DWORD cbAttribute)
{
	// TODO: log
	return ERROR_CALL_NOT_IMPLEMENTED;
}

}

NIFTY_DEFINE(imports_detail::imports, imports);
