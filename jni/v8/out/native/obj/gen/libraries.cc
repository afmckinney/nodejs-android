// Copyright 2011 Google Inc. All Rights Reserved.

// This file was generated from .js source files by SCons.  If you
// want to make changes to this file you should either change the
// javascript source files or the SConstruct script.

#include "v8.h"
#include "natives.h"
#include "utils.h"

namespace v8 {
namespace internal {


  static const char* raw_sources = reinterpret_cast<const char*>(sources);

  template <>
  int NativesCollection<CORE>::GetBuiltinsCount() {
    return 14;
  }

  template <>
  int NativesCollection<CORE>::GetDebuggerCount() {
    return 3;
  }

  template <>
  int NativesCollection<CORE>::GetIndex(const char* name) {
    if (strcmp(name, "debug") == 0) return 0;
    if (strcmp(name, "mirror") == 0) return 1;
    if (strcmp(name, "liveedit") == 0) return 2;
    if (strcmp(name, "runtime") == 0) return 3;
    if (strcmp(name, "v8natives") == 0) return 4;
    if (strcmp(name, "array") == 0) return 5;
    if (strcmp(name, "string") == 0) return 6;
    if (strcmp(name, "uri") == 0) return 7;
    if (strcmp(name, "math") == 0) return 8;
    if (strcmp(name, "messages") == 0) return 9;
    if (strcmp(name, "apinatives") == 0) return 10;
    if (strcmp(name, "date") == 0) return 11;
    if (strcmp(name, "json") == 0) return 12;
    if (strcmp(name, "regexp") == 0) return 13;
    return -1;
  }

  template <>
  int NativesCollection<CORE>::GetRawScriptsSize() {
    return 235548;
  }

  template <>
  Vector<const char> NativesCollection<CORE>::GetRawScriptSource(int index) {
    if (index == 0) return Vector<const char>(raw_sources + 106205, 44315);
    if (index == 1) return Vector<const char>(raw_sources + 150520, 33976);
    if (index == 2) return Vector<const char>(raw_sources + 184496, 15158);
    if (index == 3) return Vector<const char>(raw_sources + 0, 10784);
    if (index == 4) return Vector<const char>(raw_sources + 10784, 26323);
    if (index == 5) return Vector<const char>(raw_sources + 37107, 19038);
    if (index == 6) return Vector<const char>(raw_sources + 56145, 16289);
    if (index == 7) return Vector<const char>(raw_sources + 72434, 5816);
    if (index == 8) return Vector<const char>(raw_sources + 78250, 3768);
    if (index == 9) return Vector<const char>(raw_sources + 82018, 22763);
    if (index == 10) return Vector<const char>(raw_sources + 104781, 1424);
    if (index == 11) return Vector<const char>(raw_sources + 199654, 21964);
    if (index == 12) return Vector<const char>(raw_sources + 221618, 5879);
    if (index == 13) return Vector<const char>(raw_sources + 227497, 8051);
    return Vector<const char>("", 0);
  }

  template <>
  Vector<const char> NativesCollection<CORE>::GetScriptName(int index) {
    if (index == 0) return Vector<const char>("native debug.js", 15);
    if (index == 1) return Vector<const char>("native mirror.js", 16);
    if (index == 2) return Vector<const char>("native liveedit.js", 18);
    if (index == 3) return Vector<const char>("native runtime.js", 17);
    if (index == 4) return Vector<const char>("native v8natives.js", 19);
    if (index == 5) return Vector<const char>("native array.js", 15);
    if (index == 6) return Vector<const char>("native string.js", 16);
    if (index == 7) return Vector<const char>("native uri.js", 13);
    if (index == 8) return Vector<const char>("native math.js", 14);
    if (index == 9) return Vector<const char>("native messages.js", 18);
    if (index == 10) return Vector<const char>("native apinatives.js", 20);
    if (index == 11) return Vector<const char>("native date.js", 14);
    if (index == 12) return Vector<const char>("native json.js", 14);
    if (index == 13) return Vector<const char>("native regexp.js", 16);
    return Vector<const char>("", 0);
  }

  template <>
  Vector<const byte> NativesCollection<CORE>::GetScriptsSource() {
    return Vector<const byte>(sources, 235548);
  }

  template <>
  void NativesCollection<CORE>::SetRawScriptsSource(Vector<const char> raw_source) {
    ASSERT(235548 == raw_source.length());
    raw_sources = raw_source.start();
  }

}  // internal
}  // v8