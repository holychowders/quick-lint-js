// Code generated by tools/compile-translations.go. DO NOT EDIT.
// source: po/*.po

// Copyright (C) 2020  Matthew "strager" Glazar
// See end of file for extended copyright information.

#ifndef QUICK_LINT_JS_TRANSLATION_TABLE_GENERATED_H
#define QUICK_LINT_JS_TRANSLATION_TABLE_GENERATED_H

#include <cstddef>
#include <cstdint>
#include <iterator>
#include <quick-lint-js/assert.h>
#include <quick-lint-js/consteval.h>
#include <quick-lint-js/hash-fnv.h>
#include <quick-lint-js/translation-table.h>
#include <string_view>

namespace quick_lint_js {
using namespace std::literals::string_view_literals;

constexpr std::uint32_t translation_table_locale_count = 5;
constexpr std::uint16_t translation_table_mapping_table_size = 287;
constexpr std::size_t translation_table_string_table_size = 60665;
constexpr std::size_t translation_table_locale_table_size = 37;

QLJS_CONSTEVAL std::uint16_t translation_table_const_hash_table_look_up(
    std::string_view untranslated) {
  struct const_hash_entry {
    std::uint16_t mapping_table_index;
    const char* untranslated;
  };

  // clang-format off
  constexpr const_hash_entry const_hash_table[] = {
          {30, "C-style for loop is missing its third component"},
          {43, "TypeScript interface properties cannot be private"},
          {66, "assignment to imported variable"},
          {0, ""},
          {0, ""},
          {0, ""},
          {18, "'if' statement"},
          {154, "let statement cannot declare variables named 'let'"},
          {109, "expected expression after 'case'"},
          {0, ""},
          {0, ""},
          {21, "'while' loop"},
          {101, "event attributes must be camelCase: '{1}'"},
          {62, "assigning to 'async' in a for-of loop requires parentheses"},
          {0, ""},
          {64, "assignment to const variable"},
          {136, "if statement is missing '{1}' around condition"},
          {0, ""},
          {29, "BigInt literal contains exponent"},
          {174, "missing body for try statement"},
          {0, ""},
          {182, "missing condition for switch statement"},
          {201, "missing parentheses around self-invoked function"},
          {8, "'.' operator needs a key name; use + to concatenate strings; use [] to access with a dynamic key"},
          {202, "missing property name after '.' operator"},
          {0, ""},
          {105, "expected 'as' between '{1}' and '{2}'"},
          {126, "free {1} and {0} {1} {2}"},
          {276, "variable declared here"},
          {204, "missing quotes around module name '{0}'"},
          {230, "stray comma in function parameter"},
          {260, "unexpected identifier in expression; missing operator before"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {40, "TypeScript interface methods cannot be marked as a generator"},
          {250, "unexpected 'catch' without 'try'"},
          {283, "write a name to declare a class method"},
          {172, "missing body for finally clause"},
          {0, ""},
          {0, ""},
          {6, "\"globals\" must be an object"},
          {225, "redundant delete statement on variable"},
          {243, "unclosed regexp literal"},
          {0, ""},
          {192, "missing name of class"},
          {0, ""},
          {0, ""},
          {83, "cannot update variable with '{0}' while declaring it"},
          {141, "index signatures require a value type"},
          {107, "expected 'from' before module specifier"},
          {0, ""},
          {76, "cannot declare and export variable with 'export default'"},
          {35, "TypeScript assignment-asserted fields are not supported in JavaScript"},
          {173, "missing body for function"},
          {223, "redeclaration of global variable"},
          {245, "unclosed template"},
          {103, "expected ')' to close function call"},
          {0, ""},
          {129, "function declared here"},
          {47, "TypeScript's 'enum' feature is not yet implemented by quick-lint-js"},
          {262, "unexpected statement before first switch case, expected 'case' or 'default'"},
          {0, ""},
          {143, "integer cannot be represented and will be rounded to '{1}'"},
          {152, "legacy octal literal may not be BigInt"},
          {0, ""},
          {180, "missing comparison; '{1}' does not extend to the right side of '{0}'"},
          {70, "binary number literal has no digits"},
          {57, "a {{0} b }} c"},
          {0, ""},
          {162, "missing '=' after variable"},
          {96, "do-while loop is missing '{1}' around condition"},
          {0, ""},
          {19, "'in' disallowed in C-style for loop initializer"},
          {0, ""},
          {0, ""},
          {0, ""},
          {9, "'=' changes variables; to compare, use '===' instead"},
          {240, "unclosed identifier escape sequence"},
          {0, ""},
          {11, "'?' creates a conditional expression"},
          {263, "unexpected token"},
          {49, "TypeScript's 'readonly' feature is not allowed in JavaScript code"},
          {67, "assignment to undeclared variable"},
          {0, ""},
          {0, ""},
          {130, "function starts here"},
          {254, "unexpected characters in binary literal"},
          {0, ""},
          {50, "a 'do-while' loop"},
          {110, "expected expression before newline"},
          {264, "unexpected token in export; expected 'export default ...' or 'export {{name}' or 'export * from ...' or 'export class' or 'export function' or 'export let'"},
          {253, "unexpected '{0}'"},
          {0, ""},
          {284, "{0} is not allowed in JavaScript"},
          {176, "missing body for {1:headlinese}"},
          {281, "with statement is missing '{1}' around expression"},
          {171, "missing body for do-while loop"},
          {0, ""},
          {210, "missing value for object property"},
          {102, "existing variable declared here"},
          {0, ""},
          {92, "const fields within classes are only allowed in TypeScript, not JavaScript"},
          {237, "unclosed block comment"},
          {89, "code point out of range"},
          {38, "TypeScript interface fields cannot be initalized"},
          {231, "stray comma in let statement"},
          {0, ""},
          {94, "continue can only be used inside of a loop"},
          {193, "missing name of exported class"},
          {0, ""},
          {69, "attribute has wrong capitalization; write '{1}' instead"},
          {61, "arrow is here"},
          {165, "missing arrow operator for arrow function"},
          {12, "'async static' is not allowed; write 'static async' instead"},
          {0, ""},
          {194, "missing name of exported function"},
          {145, "invalid UTF-8 sequence"},
          {0, ""},
          {45, "TypeScript optional properties are not allowed in JavaScript code"},
          {13, "'await' cannot be followed by an arrow function; use 'async' instead"},
          {0, ""},
          {168, "missing body for 'switch' statement"},
          {0, ""},
          {0, ""},
          {72, "cannot access private identifier outside class"},
          {179, "missing comma between object literal entries"},
          {247, "unexpected '@'"},
          {112, "expected hexadecimal digits in Unicode escape sequence"},
          {88, "code point in Unicode escape sequence must not be greater than U+10FFFF"},
          {195, "missing name or parentheses for function"},
          {0, ""},
          {24, "'{0}' is not allowed for strings; use {1} instead"},
          {0, ""},
          {0, ""},
          {150, "keywords cannot contain escape sequences"},
          {0, ""},
          {0, ""},
          {0, ""},
          {33, "React/JSX is not yet implemented"},
          {0, ""},
          {135, "hex number literal has no digits"},
          {0, ""},
          {0, ""},
          {34, "RegExp literal flags cannot contain Unicode escapes"},
          {134, "here"},
          {0, ""},
          {213, "new variable shadows existing variable"},
          {244, "unclosed string literal"},
          {226, "remove '{0}' to update an existing variable"},
          {0, ""},
          {60, "array started here"},
          {0, ""},
          {269, "unmatched parenthesis"},
          {0, ""},
          {128, "function called before declaration in block scope: {0}"},
          {5, "\"globals\" descriptor must be a boolean or an object"},
          {0, ""},
          {184, "missing end of array; expected ']'"},
          {0, ""},
          {249, "unexpected 'case' outside switch statement"},
          {106, "expected 'from \"name_of_module.mjs\"'"},
          {75, "cannot declare 'yield' inside generator function"},
          {270, "unopened block comment"},
          {0, ""},
          {255, "unexpected characters in hex literal"},
          {167, "missing body for 'if' statement"},
          {116, "expected variable name for 'import'-'as'"},
          {131, "functions/methods should not have '=>'"},
          {158, "missing ',' between variable declarations"},
          {115, "expected variable name for 'catch'"},
          {151, "label named 'await' not allowed in async function"},
          {181, "missing condition for if statement"},
          {175, "missing body for while loop"},
          {161, "missing '<>' and '</>' to enclose multiple children"},
          {205, "missing semicolon after field"},
          {142, "indexing requires an expression"},
          {10, "'>' is not allowed directly in JSX text; write {{'>'} or &gt; instead"},
          {0, ""},
          {0, ""},
          {46, "TypeScript type annotations are not allowed in JavaScript code"},
          {155, "methods cannot be readonly"},
          {280, "while loop needs parentheses around condition"},
          {0, ""},
          {0, ""},
          {28, "BigInt literal contains decimal point"},
          {80, "cannot import 'let'"},
          {228, "see here"},
          {0, ""},
          {0, ""},
          {84, "character is not allowed in identifiers"},
          {212, "misspelled React attribute; write '{1}' instead"},
          {279, "while loop is missing '{1}' around condition"},
          {139, "incomplete export; expected 'export default ...' or 'export {{name}' or 'export * from ...' or 'export class' or 'export function' or 'export let'"},
          {156, "methods should not use the 'function' keyword"},
          {268, "unmatched indexing bracket"},
          {0, ""},
          {0, ""},
          {0, ""},
          {87, "classes cannot be named 'let'"},
          {95, "depth limit exceeded"},
          {238, "unclosed class; expected '}' by end of file"},
          {7, "'**' operator cannot be used after unary '{1}' without parentheses"},
          {113, "expected parameter for arrow function, but got a literal instead"},
          {125, "forwarding exports are only allowed in export-from"},
          {137, "if statement needs parentheses around condition"},
          {272, "use of undeclared type: {0}"},
          {0, ""},
          {0, ""},
          {0, ""},
          {251, "unexpected 'default' outside switch statement"},
          {0, ""},
          {55, "a function statement is not allowed as the body of {1:singular}"},
          {97, "do-while loop needs parentheses around condition"},
          {44, "TypeScript interfaces cannot be named 'await' in async function"},
          {65, "assignment to const variable before its declaration"},
          {0, ""},
          {266, "unicode byte order mark (BOM) cannot appear before #! at beginning of script"},
          {0, ""},
          {0, ""},
          {160, "missing ':' in conditional expression"},
          {59, "another invalid string, do not use outside benchmark"},
          {0, ""},
          {163, "missing 'if' after 'else'"},
          {217, "object literal started here"},
          {256, "unexpected characters in number literal"},
          {0, ""},
          {0, ""},
          {285, "{0} with no bindings"},
          {0, ""},
          {122, "for loop needs an iterable, or condition and update clauses"},
          {148, "invalid hex escape sequence: {0}"},
          {211, "missing variable name"},
          {0, ""},
          {200, "missing parentheses around operand of '{0}'"},
          {0, ""},
          {0, ""},
          {0, ""},
          {278, "what is this '{1}' nonsense?"},
          {282, "with statement needs parentheses around expression"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {86, "classes cannot be named 'await' in async function"},
          {209, "missing semicolon between init and condition parts of for loop"},
          {124, "for-of loop expression cannot have semicolons"},
          {274, "variable already declared here"},
          {2, "\"global-groups\" must be a boolean or an array"},
          {286, "~~~ invalid string, do not use outside benchmark ~~~"},
          {0, ""},
          {133, "generator function '*' belongs before function name"},
          {177, "missing catch or finally clause for try statement"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {123, "for-in loop expression cannot have semicolons"},
          {27, "'}' is not allowed directly in JSX text; write {{'}'} instead"},
          {0, ""},
          {0, ""},
          {233, "switch statement needs parentheses around condition"},
          {54, "a class statement is not allowed as the body of {1:singular}"},
          {144, "interface properties are always public and cannot be marked {0}"},
          {258, "unexpected control character"},
          {56, "a lexical declaration is not allowed as the body of {1:singular}"},
          {239, "unclosed code block; expected '}' by end of file"},
          {120, "exporting requires '{{' and '}'"},
          {15, "'do-while' loop"},
          {0, ""},
          {79, "cannot export variable named keyword '{0}'"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {98, "do-while statement starts here"},
          {53, "a 'with' statement"},
          {183, "missing condition for while statement"},
          {25, "'{0}' is not allowed on methods"},
          {82, "cannot reference private variables without object; use 'this.'"},
          {73, "cannot assign to loop variable in for of/in loop"},
          {78, "cannot export variable named 'let'"},
          {91, "commas are not allowed between class methods"},
          {185, "missing expression between parentheses"},
          {0, ""},
          {203, "missing property name between '.' and '.'"},
          {215, "number literal contains consecutive underscores"},
          {224, "redeclaration of variable: {0}"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {119, "exporting requires 'default'"},
          {149, "invalid lone literal in object literal"},
          {0, ""},
          {0, ""},
          {241, "unclosed interface; expected '}' by end of file"},
          {220, "octal number literal has no digits"},
          {0, ""},
          {52, "a 'while' loop"},
          {37, "TypeScript generics are not allowed in JavaScript code"},
          {127, "function call started here"},
          {146, "invalid expression left of assignment"},
          {0, ""},
          {261, "unexpected literal in parameter list; expected parameter name"},
          {242, "unclosed object literal; expected '}'"},
          {77, "cannot declare variable named keyword '{0}'"},
          {26, "'{0}' operator cannot be used before '**' without parentheses"},
          {108, "expected '{{'"},
          {1, "\"global-groups\" entries must be strings"},
          {275, "variable assigned before its declaration"},
          {0, ""},
          {0, ""},
          {39, "TypeScript interface methods cannot be marked 'async'"},
          {0, ""},
          {207, "missing semicolon after statement"},
          {159, "missing '...' in JSX attribute spread"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {227, "return statement returns nothing (undefined)"},
          {0, ""},
          {0, ""},
          {42, "TypeScript interface properties cannot be 'static'"},
          {189, "missing initializer in const declaration"},
          {0, ""},
          {81, "cannot import variable named keyword '{0}'"},
          {219, "octal literal may not have exponent"},
          {234, "this {0} looks fishy"},
          {0, ""},
          {0, ""},
          {17, "'for' loop"},
          {74, "cannot declare 'await' inside async function"},
          {90, "commas are not allowed after spread parameter"},
          {23, "'{0}' found here"},
          {99, "escaped character is not allowed in identifiers"},
          {140, "index signature must be a field, not a method"},
          {208, "missing semicolon between condition and update parts of for loop"},
          {196, "missing operand for operator"},
          {235, "this {1} looks fishy"},
          {0, ""},
          {169, "missing body for catch clause"},
          {0, ""},
          {0, ""},
          {0, ""},
          {221, "opening '<{1}>' tag here"},
          {85, "children end here"},
          {259, "unexpected expression; missing key for object entry"},
          {198, "missing parameters for arrow function"},
          {265, "unexpected token in variable declaration; expected variable name"},
          {68, "assignment-asserted fields are not supported in interfaces"},
          {0, ""},
          {164, "missing 'while (condition)' for do-while statement"},
          {166, "missing body for 'for' loop"},
          {222, "private properties are not allowed in object literals"},
          {0, ""},
          {111, "expected expression before semicolon"},
          {0, ""},
          {71, "break can only be used inside of a loop or switch"},
          {232, "switch statement is missing '{1}' around condition"},
          {0, ""},
          {187, "missing function parameter list"},
          {214, "newline is not allowed between 'async' and arrow function parameter list"},
          {216, "number literal contains trailing underscore(s)"},
          {157, "mismatched JSX tags; expected '</{1}>'"},
          {236, "try statement starts here"},
          {0, ""},
          {170, "missing body for class"},
          {199, "missing parentheses around left-hand side of '**'"},
          {121, "extra ',' is not allowed between function call arguments"},
          {0, ""},
          {252, "unexpected 'finally' without 'try'"},
          {0, ""},
          {3, "\"globals\" descriptor \"shadowable\" property must be a boolean"},
          {0, ""},
          {153, "legacy octal literals may not contain underscores"},
          {16, "'else' has no corresponding 'if'"},
          {273, "use of undeclared variable: {0}"},
          {0, ""},
          {32, "JSON syntax error"},
          {0, ""},
          {4, "\"globals\" descriptor \"writable\" property must be a boolean"},
          {22, "'with' statement"},
          {58, "an 'if' statement"},
          {218, "octal literal may not have decimal"},
          {0, ""},
          {63, "assignment to const global variable"},
          {188, "missing header and body for 'for' loop"},
          {190, "missing name for class method"},
          {0, ""},
          {48, "TypeScript's 'interface' feature is not allowed in JavaScript code"},
          {36, "TypeScript call signatures are only allowed in classes"},
          {31, "C-style for loops have only three semicolon-separated components"},
          {93, "const variable declared here"},
          {138, "imported variable declared here"},
          {277, "variable used before declaration: {0}"},
          {104, "expected ',' between object literal entries"},
          {114, "expected parameter for arrow function, but got an expression instead"},
          {248, "unexpected '\\' in identifier"},
          {246, "unexpected '#'"},
          {14, "'await' is only allowed in async functions"},
          {20, "'readonly static' is not allowed; write 'static readonly' instead"},
          {51, "a 'for' loop"},
          {100, "escaping '-' is not allowed in tag names; write '-' instead"},
          {41, "TypeScript interface methods cannot contain a body"},
          {206, "missing semicolon after index signature"},
          {147, "invalid function parameter"},
          {257, "unexpected characters in octal literal"},
          {0, ""},
          {0, ""},
          {186, "missing for loop header"},
          {0, ""},
          {0, ""},
          {117, "expected {1:headlinese}"},
          {271, "use 'while' instead to loop until a condition is false"},
          {0, ""},
          {178, "missing catch variable name between parentheses"},
          {229, "something happened"},
          {118, "expected {1:singular}"},
          {191, "missing name in function statement"},
          {267, "unmatched '}'"},
          {0, ""},
          {132, "generator function '*' belongs after keyword function"},
          {197, "missing operator between expression and arrow function"},
  };
  // clang-format on

  std::uint64_t hash = hash_fnv_1a_64(untranslated, 14695981039346662402ULL);
  std::uint64_t table_size = 430;
  for (std::uint64_t attempt = 0; attempt <= 4; ++attempt) {
    const const_hash_entry& hash_entry =
        const_hash_table[(hash + attempt * attempt) % table_size];
    if (hash_entry.mapping_table_index == 0) {
      break;
    }
    if (hash_entry.untranslated == untranslated) {
      return hash_entry.mapping_table_index;
    }
  }

  // If you see an error with the following line, translation-table-generated.h
  // is out of date. Run tools/update-translator-sources to rebuild this file.
  QLJS_CONSTEXPR_ASSERT(false);

  return 0;
}
}

#endif

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
