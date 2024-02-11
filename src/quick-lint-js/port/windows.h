// Copyright (C) 2020  Matthew "strager" Glazar
// See end of file for extended copyright information.

#pragma once

#include <quick-lint-js/port/have.h>

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#define NOATOM
#define NOCLIPBOARD
#define NOCOLOR
#define NOCOMM
#define NOCRYPT
#define NOCTLMGR
#define NODEFERWINDOWPOS
#define NODRAWTEXT
#define NOGDI
#define NOGDICAPMASKS
#define NOHELP
#define NOICONS
#define NOKANJI
#define NOKERNEL
#define NOKEYSTATES
#define NOMB
#define NOMCX
#define NOMEMMGR
#define NOMENUS
#define NOMETAFILE
#if !defined(NOMINMAX)
#define NOMINMAX
#endif
#define NOMSG
#define NOOPENFILE
#define NOPROFILER
#define NORASTEROPS
#define NOSCROLL
#define NOSERVICE
#define NOSHOWWINDOW
#define NOSOUND
#define NOSYSCOMMANDS
#define NOSYSMETRICS
#define NOTEXTMETRIC
#define NOUSER
#define NOVIRTUALKEYCODES
#define NOWH
#define NOWINMESSAGES
#define NOWINOFFSETS
#define NOWINSTYLES
#define OEMRESOURCE

#include <windows.h>

#if !QLJS_HAVE_GETTHREADDESCRIPTION
extern "C" {
// MinGW is missing some functions. Define them ourselves.
WINBASEAPI
HRESULT WINAPI GetThreadDescription(HANDLE hThread,
                                    PWSTR *ppszThreadDescription);
WINBASEAPI
HRESULT WINAPI SetThreadDescription(HANDLE hThread, PCWSTR lpThreadDescription);
}
#endif

// <ntifs.h>
// https://learn.microsoft.com/en-us/windows-hardware/drivers/ddi/ntifs/ns-ntifs-_reparse_data_buffer
typedef struct _REPARSE_DATA_BUFFER {
  ULONG ReparseTag;
  USHORT ReparseDataLength;
  USHORT Reserved;
  union {
    struct {
      USHORT SubstituteNameOffset;
      USHORT SubstituteNameLength;
      USHORT PrintNameOffset;
      USHORT PrintNameLength;
      ULONG Flags;
      WCHAR PathBuffer[1];
    } SymbolicLinkReparseBuffer;
    struct {
      USHORT SubstituteNameOffset;
      USHORT SubstituteNameLength;
      USHORT PrintNameOffset;
      USHORT PrintNameLength;
      WCHAR PathBuffer[1];
    } MountPointReparseBuffer;
    struct {
      UCHAR DataBuffer[1];
    } GenericReparseBuffer;
  } DUMMYUNIONNAME;
} REPARSE_DATA_BUFFER, *PREPARSE_DATA_BUFFER;

#define SYMLINK_FLAG_RELATIVE 1

// quick-lint-js finds bugs in JavaScript programs.
// Copyright (C) 2020  Matthew "strager" Glazar
//
// This file is part of quick-lint-js.
//
// quick-lint-js is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// quick-lint-js is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with quick-lint-js.  If not, see <https://www.gnu.org/licenses/>.
