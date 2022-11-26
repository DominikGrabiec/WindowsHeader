//
// Windows Header that undoes the macro damage that including the normal windows.h header file will inflict.
//
#pragma once

// Set minimum SDK and Windows versions
#include <SdkDdkVer.h>

// Set Windows components to remove
#define STRICT
#define NOMINMAX

#include <Windows.h>

//
// Undefine Ansi/Wide character macros defined in windows.h
//

// datetimeapi.h
#undef GetDateFormat
#undef GetTimeFormat

// fileapi.h
#undef CreateDirectory
#undef CreateFile
#undef DefineDosDevice
#undef DeleteFile
#undef DeleteVolumeMountPoint
#undef FindFirstChangeNotification
#undef FindFirstFile
#undef FindFirstFileEx
#undef FindFirstVolume
#undef FindNextFile
#undef FindNextVolume
#undef GetCompressedFileSize
#undef GetDiskFreeSpace
#undef GetDiskFreeSpaceEx
#undef GetDiskSpaceInformation
#undef GetDriveType
#undef GetFileAttributes
#undef GetFileAttributesEx
#undef GetFinalPathNameByHandle
#undef GetFullPathName
#undef GetLogicalDriveStrings
#undef GetLongPathName
#undef GetShortPathName
#undef GetTempFileName
#undef GetTempPath
#undef GetVolumeInformation
#undef GetVolumeNameForVolumeMountPoint
#undef GetVolumePathName
#undef GetVolumePathNamesForVolumeName
#undef QueryDosDevice
#undef RemoveDirectory
#undef SetFileAttributes

// libloaderapi.h
#undef ENUMRESLANGPROC
#undef ENUMRESNAMEPROC
#undef EnumResourceLanguagesEx
#undef EnumResourceNames
#undef EnumResourceNamesEx
#undef EnumResourceTypesEx
#undef ENUMRESTYPEPROC
#undef FindResource
#undef FindResourceEx
#undef GetModuleFileName
#undef GetModuleHandle
#undef GetModuleHandleEx
#undef LoadLibrary
#undef LoadLibraryEx
#undef LoadString
#undef PGET_MODULE_HANDLE_EX

// processenv.h
#undef ExpandEnvironmentStrings
#undef FreeEnvironmentStrings
#undef GetCommandLine
#undef GetCurrentDirectory
#undef GetEnvironmentStrings
#undef GetEnvironmentVariable
#undef NeedCurrentDirectoryForExePath
#undef SearchPath
#undef SetCurrentDirectory
#undef SetEnvironmentStrings
#undef SetEnvironmentVariable

// processthreassapi.h
#undef CreateProcess
#undef CreateProcessAsUser
#undef GetStartupInfo

// psapi.h
#undef EnumPageFiles
#undef GetDeviceDriverBaseName
#undef GetDeviceDriverFileName
#undef GetMappedFileName
#undef GetModuleBaseName
#undef GetModuleFileNameEx
#undef GetProcessImageFileName

// shellapi.h
#undef DoEnvironmentSubst
#undef DragQueryFile
#undef ExtractAssociatedIcon
#undef ExtractAssociatedIconEx
#undef ExtractIcon
#undef ExtractIconEx
#undef FindExecutable
#undef IsLFNDrive
#undef Shell_NotifyIcon
#undef ShellAbout
#undef ShellExecute
#undef ShellExecuteEx
#undef ShellMessageBox
#undef SHEmptyRecycleBin
#undef SHEnumerateUnreadMailAccounts
#undef SHFileOperation
#undef SHGetDiskFreeSpaceEx
#undef SHGetFileInfo
#undef SHGetNewLinkInfo
#undef SHGetUnreadMailCount
#undef SHInvokePrinterCommand
#undef SHQueryRecycleBin
#undef SHSetUnreadMailCount

// winbase.h
#undef AccessCheckAndAuditAlarm
#undef AccessCheckByTypeAndAuditAlarm
#undef AccessCheckByTypeResultListAndAuditAlarm
#undef AccessCheckByTypeResultListAndAuditAlarmByHandle
#undef AddAtom
#undef BackupEventLog
#undef BeginUpdateResource
#undef BuildCommDCB
#undef BuildCommDCBAndTimeouts
#undef CallNamedPipe
#undef CheckNameLegalDOS8Dot3
#undef ClearEventLog
#undef CommConfigDialog
#undef CopyFile
#undef CopyFileEx
#undef CopyFileTransacted
#undef CreateActCtx
#undef CreateBoundaryDescriptor
#undef CreateDirectoryEx
#undef CreateDirectoryTransacted
#undef CreateFileMapping
#undef CreateFileMappingNuma
#undef CreateFileTransacted
#undef CreateHardLink
#undef CreateHardLinkTransacted
#undef CreateJobObject
#undef CreateMailslot
#undef CreateNamedPipe
#undef CreatePrivateNamespace
#undef CreateSemaphore
#undef CreateSemaphoreEx
#undef CreateSymbolicLink
#undef CreateSymbolicLinkTransacted
#undef CreateWaitableTimer
#undef CreateWaitableTimerEx
#undef DecryptFile
#undef DefineDosDevice
#undef DeleteFileTransacted
#undef DeleteVolumeMountPoint
#undef DnsHostnameToComputerName
#undef EncryptFile
#undef EndUpdateResource
#undef EnumResourceLanguages
#undef EnumResourceNames
#undef EnumResourceTypes
#undef FileEncryptionStatus
#undef FindActCtxSectionString
#undef FindAtom
#undef FindFirstFileTransacted
#undef FindFirstVolume
#undef FindFirstVolumeMountPoint
#undef FindNextVolume
#undef FindNextVolumeMountPoint
#undef FindResource
#undef FindResourceEx
#undef FormatMessage
#undef GetAtomName
#undef GetBinaryType
#undef GetCompressedFileSizeTransacted
#undef GetComputerName
#undef GetCurrentHwProfile
#undef GetDefaultCommConfig
#undef GetDllDirectory
#undef GetFileAttributesTransacted
#undef GetFileSecurity
#undef GetFirmwareEnvironmentVariable
#undef GetFirmwareEnvironmentVariableEx
#undef GetFullPathNameTransacted
#undef GetLogicalDriveStrings
#undef GetLongPathNameTransacted
#undef GetNamedPipeClientComputerName
#undef GetNamedPipeHandleState
#undef GetPrivateProfileInt
#undef GetPrivateProfileSection
#undef GetPrivateProfileSectionNames
#undef GetPrivateProfileString
#undef GetPrivateProfileStruct
#undef GetProfileInt
#undef GetProfileSection
#undef GetProfileString
#undef GetShortPathName
#undef GetStartupInfo
#undef GetUserName
#undef GetVolumeNameForVolumeMountPoint
#undef GetVolumePathName
#undef GetVolumePathNamesForVolumeName
#undef GlobalAddAtom
#undef GlobalAddAtomEx
#undef GlobalFindAtom
#undef GlobalGetAtomName
#undef IsBadStringPtr
#undef IsolationAwareLoadLibrary
#undef IsolationAwareLoadLibraryEx
#undef LogonUser
#undef LogonUserEx
#undef LookupAccountName
#undef LookupAccountNameLocal
#undef LookupAccountNameLocal
#undef LookupAccountSid
#undef LookupAccountSidLocal
#undef LookupAccountSidLocal
#undef LookupPrivilegeDisplayName
#undef LookupPrivilegeName
#undef LookupPrivilegeValue
#undef lstrcat
#undef lstrcmp
#undef lstrcmpi
#undef lstrcpy
#undef lstrcpyn
#undef lstrlen
#undef MoveFile
#undef MoveFileEx
#undef MoveFileTransacted
#undef MoveFileWithProgress
#undef ObjectCloseAuditAlarm
#undef ObjectDeleteAuditAlarm
#undef ObjectOpenAuditAlarm
#undef ObjectPrivilegeAuditAlarm
#undef OpenBackupEventLog
#undef OpenEncryptedFileRaw
#undef OpenEventLog
#undef OpenFileMapping
#undef OpenJobObject
#undef OpenMutex
#undef OpenPrivateNamespace
#undef OpenSemaphore
#undef OpenWaitableTimer
#undef PrivilegedServiceAuditAlarm
#undef QueryDosDevice
#undef QueryFullProcessImageName
#undef ReadEventLog
#undef RegisterEventSource
#undef RemoveDirectoryTransacted
#undef ReplaceFile
#undef ReportEvent
#undef SetDefaultCommConfig
#undef SetDllDirectory
#undef SetEnvironmentStrings
#undef SetFileAttributesTransacted
#undef SetFileSecurity
#undef SetFileShortName
#undef SetFirmwareEnvironmentVariable
#undef SetFirmwareEnvironmentVariableEx
#undef SetVolumeLabel
#undef SetVolumeMountPoint
#undef UpdateResource
#undef VerifyVersionInfo
#undef WaitNamedPipe
#undef WritePrivateProfileSection
#undef WritePrivateProfileString
#undef WritePrivateProfileStruct
#undef WriteProfileSection
#undef WriteProfileString

// wincon.h
#undef AddConsoleAlias
#undef FillConsoleOutputCharacter
#undef GetConsoleAlias
#undef GetConsoleAliases
#undef GetConsoleAliasesLength
#undef GetConsoleAliasExes
#undef GetConsoleAliasExesLength
#undef GetConsoleOriginalTitle
#undef GetConsoleTitle
#undef ReadConsoleOutput
#undef ReadConsoleOutputCharacter
#undef ScrollConsoleScreenBuffer
#undef SetConsoleTitle
#undef WriteConsoleInput
#undef WriteConsoleOutput
#undef WriteConsoleOutputCharacter

// wingdi.h
#undef AddFontResource
#undef AddFontResourceEx
#undef CopyEnhMetaFile
#undef CopyMetaFile
#undef CreateColorSpace
#undef CreateDC
#undef CreateEnhMetaFile
#undef CreateFont
#undef CreateFontIndirect
#undef CreateFontIndirectEx
#undef CreateIC
#undef CreateMetaFile
#undef CreateScalableFontResource
#undef DeviceCapabilities
#undef EnumFontFamilies
#undef EnumFontFamiliesEx
#undef EnumFonts
#undef EnumICMProfiles
#undef ExtTextOut
#undef GetCharABCWidths
#undef GetCharABCWidthsFloat
#undef GetCharacterPlacement
#undef GetCharWidth
#undef GetCharWidth32
#undef GetCharWidthFloat
#undef GetEnhMetaFile
#undef GetEnhMetaFileDescription
#undef GetGlyphIndices
#undef GetGlyphOutline
#undef GetICMProfile
#undef GetKerningPairs
#undef GetLogColorSpace
#undef GetMetaFile
#undef GetObject
#undef GetOutlineTextMetrics
#undef GetTextExtentExPoint
#undef GetTextExtentPoint
#undef GetTextExtentPoint32
#undef GetTextFace
#undef GetTextMetrics
#undef ICMENUMPROC
#undef PolyTextOut
#undef RemoveFontResource
#undef RemoveFontResourceEx
#undef ResetDC
#undef SetICMProfile
#undef StartDoc
#undef TextOut
#undef UpdateICMRegKey

// WinUser.h
#undef AppendMenu
#undef BroadcastSystemMessage
#undef BroadcastSystemMessageEx
#undef CallMsgFilter
#undef CallWindowProc
#undef ChangeDisplaySettings
#undef ChangeDisplaySettingsEx
#undef ChangeMenu
#undef CharLower
#undef CharLowerBuff
#undef CharNext
#undef CharPrev
#undef CharToOem
#undef CharToOemBuff
#undef CharUpper
#undef CharUpperBuff
#undef CopyAcceleratorTable
#undef CreateAcceleratorTable
#undef CreateDesktop
#undef CreateDesktopEx
#undef CreateDialog
#undef CreateDialogIndirect
#undef CreateDialogIndirectParam
#undef CreateDialogParam
#undef CreateMDIWindow
#undef CreateWindow
#undef CreateWindowEx
#undef CreateWindowStation
#undef DefDlgProc
#undef DefFrameProc
#undef DefMDIChildProc
#undef DefWindowProc
#undef DialogBox
#undef DialogBoxIndirect
#undef DialogBoxIndirectParam
#undef DialogBoxParam
#undef DispatchMessage
#undef DlgDirList
#undef DlgDirListComboBox
#undef DlgDirSelectComboBoxEx
#undef DlgDirSelectEx
#undef DrawState
#undef DrawText
#undef DrawTextEx
#undef EnumDesktops
#undef EnumDisplayDevices
#undef EnumDisplaySettings
#undef EnumDisplaySettingsEx
#undef EnumProps
#undef EnumPropsEx
#undef EnumWindowStations
#undef FindWindow
#undef FindWindowEx
#undef GetAltTabInfo
#undef GetClassInfo
#undef GetClassInfoEx
#undef GetClassLong
#undef GetClassLongPtr
#undef GetClassLongPtr
#undef GetClassName
#undef GetClipboardFormatName
#undef GetDlgItemText
#undef GetIconInfoEx
#undef GetKeyboardLayoutName
#undef GetKeyNameText
#undef GetMenuItemInfo
#undef GetMenuString
#undef GetMessage
#undef GetMonitorInfo
#undef GetProp
#undef GetRawInputDeviceInfo
#undef GetTabbedTextExtent
#undef GetUserObjectInformation
#undef GetWindowLong
#undef GetWindowLongPtr
#undef GetWindowModuleFileName
#undef GetWindowText
#undef GetWindowTextLength
#undef GrayString
#undef InsertMenu
#undef InsertMenuItem
#undef IsCharAlpha
#undef IsCharAlphaNumeric
#undef IsCharLower
#undef IsCharUpper
#undef IsDialogMessage
#undef LoadAccelerators
#undef LoadBitmap
#undef LoadCursor
#undef LoadCursorFromFile
#undef LoadIcon
#undef LoadImage
#undef LoadKeyboardLayout
#undef LoadMenu
#undef LoadMenuIndirect
#undef LoadString
#undef MapVirtualKey
#undef MapVirtualKeyEx
#undef MessageBox
#undef MessageBoxEx
#undef MessageBoxIndirect
#undef ModifyMenu
#undef OemToChar
#undef OemToCharBuff
#undef OpenDesktop
#undef OpenWindowStation
#undef PeekMessage
#undef PostAppMessage
#undef PostMessage
#undef PostThreadMessage
#undef PrivateExtractIcons
#undef RealGetWindowClass
#undef RegisterClass
#undef RegisterClassEx
#undef RegisterClipboardFormat
#undef RegisterDeviceNotification
#undef RegisterWindowMessage
#undef RemoveProp
#undef SendDlgItemMessage
#undef SendMessage
#undef SendMessageCallback
#undef SendMessageTimeout
#undef SendNotifyMessage
#undef SetClassLong
#undef SetClassLongPtr
#undef SetDlgItemText
#undef SetMenuItemInfo
#undef SetProp
#undef SetUserObjectInformation
#undef SetWindowLong
#undef SetWindowLongPtr
#undef SetWindowsHook
#undef SetWindowsHookEx
#undef SetWindowText
#undef SystemParametersInfo
#undef TabbedTextOut
#undef TranslateAccelerator
#undef UnregisterClass
#undef VkKeyScan
#undef VkKeyScanEx
#undef WinHelp