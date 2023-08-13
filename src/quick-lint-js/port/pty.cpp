// Copyright (C) 2020  Matthew "strager" Glazar
// See end of file for extended copyright information.

#include <quick-lint-js/port/have.h>
#include <quick-lint-js/port/pty.h>

#if QLJS_HAVE_UNISTD_H
#include <unistd.h>
#endif

#if QLJS_HAVE_LIBUTIL_H
#include <libutil.h>
#endif

#if QLJS_HAVE_UTIL_H
#include <util.h>
#endif

#if QLJS_HAVE_PTY_H
#include <pty.h>
#endif

namespace quick_lint_js {
#if QLJS_HAVE_FORKPTY
::pid_t forkpty(int *amaster, char *name, struct ::termios *termp,
                struct ::winsize *winp) {
  return ::forkpty(amaster, name, termp, winp);
}
#endif
}

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