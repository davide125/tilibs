# Microsoft Developer Studio Project File - Name="ticalcs" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=ticalcs - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "ticalcs.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "ticalcs.mak" CFG="ticalcs - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "ticalcs - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "ticalcs - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "ticalcs - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir ""
# PROP Intermediate_Dir "C:\msvc\Output\ticalcs"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /YX /FD /c
# ADD CPP /nologo /MT /w /W0 /GX /I "." /I "../../../ticables2/src" /I "../../../tifiles2/src" /I "C:\Gtk2Dev\Include" /D "NDEBUG" /D "_WINDOWS" /D "WIN32" /D "TICALCS_EXPORTS" /D "__WIN32__" /YX /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /o /win32 "NUL"
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /o /win32 "NUL"
# ADD BASE RSC /l 0x40c /d "NDEBUG"
# ADD RSC /l 0x40c /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386 /out:"..\..\tests\ticalcs2.dll"

!ELSEIF  "$(CFG)" == "ticalcs - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "C:\msvc\tilp2\"
# PROP Intermediate_Dir "C:\msvc\Output\ticalcs"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /YX /FD /c
# ADD CPP /nologo /MTd /W3 /GX /ZI /Od /I "../../../ticables2/src" /I "../../../tifiles2/src" /I "C:\Gtk2Dev\include" /I "c:\gtk2dev\include\glib-2.0" /I "C:\GTK2DEV\lib\glib-2.0\include" /D "_DEBUG" /D "_CONSOLE" /D "WIN32" /D "TICALCS_EXPORTS" /D "__WIN32__" /FD /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /o /win32 "NUL"
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /o /win32 "NUL"
# ADD BASE RSC /l 0x40c /d "_DEBUG"
# ADD RSC /l 0x40c /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /debug /machine:I386 /out:"C:\msvc\tilp2\ticalcs2.dll" /pdbtype:sept
# SUBTRACT LINK32 /map

!ENDIF 

# Begin Target

# Name "ticalcs - Win32 Release"
# Name "ticalcs - Win32 Debug"
# Begin Group "TI calcs"

# PROP Default_Filter ""
# Begin Group "calcs"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\src\calc_00.c
# End Source File
# Begin Source File

SOURCE=..\..\src\calc_73.c
# End Source File
# Begin Source File

SOURCE=..\..\src\calc_83.c
# End Source File
# Begin Source File

SOURCE=..\..\src\calc_86.c
# End Source File
# Begin Source File

SOURCE=..\..\src\calc_89.c
# End Source File
# Begin Source File

SOURCE=..\..\src\calc_92.c
# End Source File
# End Group
# Begin Group "keys"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\src\keys73.c
# End Source File
# Begin Source File

SOURCE=..\..\src\keys83p.c
# End Source File
# Begin Source File

SOURCE=..\..\src\keys89.c
# End Source File
# Begin Source File

SOURCE=..\..\src\keys92p.c
# End Source File
# Begin Source File

SOURCE=..\..\src\tikeys.c
# End Source File
# End Group
# Begin Group "cmds"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\src\cmd82.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cmd85.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cmd89.c
# End Source File
# Begin Source File

SOURCE=..\..\src\cmd92.c
# End Source File
# Begin Source File

SOURCE=..\..\src\packets.c
# End Source File
# End Group
# Begin Source File

SOURCE=..\..\src\calc_xx.c
# End Source File
# End Group
# Begin Group "Others"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\src\clock.c
# End Source File
# Begin Source File

SOURCE=..\..\src\logging.c
# End Source File
# Begin Source File

SOURCE=..\..\src\tnode.c
# End Source File
# Begin Source File

SOURCE=..\..\src\update.c
# End Source File
# End Group
# Begin Group "Headers"

# PROP Default_Filter ""
# End Group
# Begin Group "ROMdumping"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\src\rom82.h
# End Source File
# Begin Source File

SOURCE=..\..\src\rom83.h
# End Source File
# Begin Source File

SOURCE=..\..\src\rom83p.h
# End Source File
# Begin Source File

SOURCE=..\..\src\rom85u.h
# End Source File
# Begin Source File

SOURCE=..\..\src\rom85z.h
# End Source File
# Begin Source File

SOURCE=..\..\src\rom86.h
# End Source File
# Begin Source File

SOURCE=..\..\src\Rom89.h
# End Source File
# Begin Source File

SOURCE=..\..\src\Rom92f2.h
# End Source File
# End Group
# Begin Group "API"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\src\dirlist.c
# End Source File
# Begin Source File

SOURCE=..\..\src\error.c
# End Source File
# Begin Source File

SOURCE=..\..\src\ticalcs.c
# End Source File
# Begin Source File

SOURCE=..\..\src\ticalcs.h
# End Source File
# Begin Source File

SOURCE=..\..\src\type2str.c
# End Source File
# End Group
# Begin Source File

SOURCE=..\..\ChangeLog
# End Source File
# Begin Source File

SOURCE=.\ticalcs.rc
# End Source File
# Begin Source File

SOURCE="..\..\..\..\..\GTK2DEV\lib\glib-2.0.lib"
# End Source File
# End Target
# End Project
