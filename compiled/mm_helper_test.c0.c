#include "cc0lib.h"
#include "c0rt.h"
#include "mm_helper_test.c0.h"

//#use <conio>
extern void print(c0_string _c0v_s);

void _c0t_print__1(c0_string _c0v_s, c0_string _c0t__caller) {
  print(_c0v_s);
  return;
}
extern void println(c0_string _c0v_s);

void _c0t_println__1(c0_string _c0v_s, c0_string _c0t__caller) {
  println(_c0v_s);
  return;
}
extern void printint(int _c0v_i);

void _c0t_printint__1(int _c0v_i, c0_string _c0t__caller) {
  printint(_c0v_i);
  return;
}
extern void printbool(bool _c0v_b);

void _c0t_printbool__1(bool _c0v_b, c0_string _c0t__caller) {
  printbool(_c0v_b);
  return;
}
extern void printchar(char _c0v_c);

void _c0t_printchar__1(char _c0v_c, c0_string _c0t__caller) {
  printchar(_c0v_c);
  return;
}
extern void flush();

void _c0t_flush__1(c0_string _c0t__caller) {
  flush();
  return;
}
extern bool eof();

bool _c0t_eof__1(c0_string _c0t__caller) {
  bool _c0t__result;
  bool _c0t__tmp_1 = eof();
  _c0t__result = _c0t__tmp_1;
  return _c0t__result;
}
extern c0_string readline();

c0_string _c0t_readline__1(c0_string _c0t__caller) {
  c0_string _c0t__result;
  bool _c0t__tmp_2 = _c0t_eof__1(c0_string_fromliteral("readline__1 (/afs/andrew/course/15/122/lib/conio.h0: 14.16-14.21)"));
  cc0_assert(!(_c0t__tmp_2), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/conio.h0: 14.6-14.22: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  c0_string _c0t__tmp_3 = readline();
  _c0t__result = _c0t__tmp_3;
  return _c0t__result;
}
// end <conio>

//#use <util>
int _c0_int_size(c0_string _c0t__caller);

int _c0t_int_size__1(c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_4 = _c0_int_size(c0_string_fromliteral("int_size__1 (/afs/andrew/course/15/122/lib/util.h0: 8.1-9.33)"));
  _c0t__result = _c0t__tmp_4;
  cc0_assert((_c0t__result == 4), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.h0: 9.6-9.27: @ensures annotation failed"));
  return _c0t__result;
}
int _c0_int_max(c0_string _c0t__caller);

int _c0t_int_max__1(c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_5 = _c0_int_max(c0_string_fromliteral("int_max__1 (/afs/andrew/course/15/122/lib/util.h0: 10.1-11.42)"));
  _c0t__result = _c0t__tmp_5;
  cc0_assert((_c0t__result == 2147483647), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.h0: 11.6-11.36: @ensures annotation failed"));
  return _c0t__result;
}
int _c0_int_min(c0_string _c0t__caller);

int _c0t_int_min__1(c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_6 = _c0_int_min(c0_string_fromliteral("int_min__1 (/afs/andrew/course/15/122/lib/util.h0: 12.1-13.43)"));
  _c0t__result = _c0t__tmp_6;
  cc0_assert((_c0t__result == -((-2147483647-1))), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.h0: 13.6-13.37: @ensures annotation failed"));
  return _c0t__result;
}
int _c0_abs(int _c0v_x, c0_string _c0t__caller);

int _c0t_abs__1(int _c0v_x, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_7 = _c0t_int_min__1(c0_string_fromliteral("abs__1 (/afs/andrew/course/15/122/lib/util.h0: 17.19-17.28)"));
  cc0_assert((_c0v_x > _c0t__tmp_7), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.h0: 17.6-17.29: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_8 = _c0_abs(_c0v_x, c0_string_fromliteral("abs__1 (/afs/andrew/course/15/122/lib/util.h0: 16.1-19.48)"));
  _c0t__result = _c0t__tmp_8;
  cc0_assert((_c0t__result >= 0), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.h0: 18.6-18.27: @ensures annotation failed"));
  cc0_assert((_c0t__result == ((_c0v_x < 0) ? -(_c0v_x) : _c0v_x)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.h0: 19.6-19.42: @ensures annotation failed"));
  return _c0t__result;
}
int _c0_max(int _c0v_x, int _c0v_y, c0_string _c0t__caller);

int _c0t_max__1(int _c0v_x, int _c0v_y, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_10 = _c0_max(_c0v_x, _c0v_y, c0_string_fromliteral("max__1 (/afs/andrew/course/15/122/lib/util.h0: 22.1-24.49)"));
  _c0t__result = _c0t__tmp_10;
  cc0_assert(((_c0t__result == _c0v_x) || (_c0t__result == _c0v_y)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.h0: 23.6-23.43: @ensures annotation failed"));
  cc0_assert(((_c0t__result >= _c0v_x) && (_c0t__result >= _c0v_y)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.h0: 24.6-24.43: @ensures annotation failed"));
  return _c0t__result;
}
int _c0_min(int _c0v_x, int _c0v_y, c0_string _c0t__caller);

int _c0t_min__1(int _c0v_x, int _c0v_y, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_13 = _c0_min(_c0v_x, _c0v_y, c0_string_fromliteral("min__1 (/afs/andrew/course/15/122/lib/util.h0: 27.1-29.49)"));
  _c0t__result = _c0t__tmp_13;
  cc0_assert(((_c0t__result == _c0v_x) || (_c0t__result == _c0v_y)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.h0: 28.6-28.43: @ensures annotation failed"));
  cc0_assert(((_c0t__result <= _c0v_x) && (_c0t__result <= _c0v_y)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.h0: 29.6-29.43: @ensures annotation failed"));
  return _c0t__result;
}
c0_string _c0_int2hex(int _c0v_x, c0_string _c0t__caller);

//#use <string>
extern int string_length(c0_string _c0v_s);

int _c0t_string_length__1(c0_string _c0v_s, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_16 = string_length(_c0v_s);
  _c0t__result = _c0t__tmp_16;
  return _c0t__result;
}
extern char string_charat(c0_string _c0v_s, int _c0v_idx);

char _c0t_string_charat__1(c0_string _c0v_s, int _c0v_idx, c0_string _c0t__caller) {
  char _c0t__result;
  bool _c0t__tmp_18;
  if ((0 <= _c0v_idx)) {
    int _c0t__tmp_17 = _c0t_string_length__1(_c0v_s, c0_string_fromliteral("string_charat__1 (/afs/andrew/course/15/122/lib/string.h0: 19.33-19.49)"));
    _c0t__tmp_18 = (_c0v_idx < _c0t__tmp_17);
  } else {
    _c0t__tmp_18 = false;
  }
  cc0_assert(_c0t__tmp_18, c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 19.6-19.50: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  char _c0t__tmp_19 = string_charat(_c0v_s, _c0v_idx);
  _c0t__result = _c0t__tmp_19;
  return _c0t__result;
}
extern c0_string string_join(c0_string _c0v_a, c0_string _c0v_b);

c0_string _c0t_string_join__1(c0_string _c0v_a, c0_string _c0v_b, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_20 = string_join(_c0v_a, _c0v_b);
  _c0t__result = _c0t__tmp_20;
  int _c0t__tmp_21 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_join__1 (/afs/andrew/course/15/122/lib/string.h0: 23.14-23.36)"));
  int _c0t__tmp_22 = _c0t_string_length__1(_c0v_a, c0_string_fromliteral("string_join__1 (/afs/andrew/course/15/122/lib/string.h0: 24.19-24.35)"));
  int _c0t__tmp_23 = _c0t_string_length__1(_c0v_b, c0_string_fromliteral("string_join__1 (/afs/andrew/course/15/122/lib/string.h0: 24.38-24.54)"));
  cc0_assert((_c0t__tmp_21 == (_c0t__tmp_22 + _c0t__tmp_23)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 23.6-24.55: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_sub(c0_string _c0v_a, int _c0v_start, int _c0v_end);

c0_string _c0t_string_sub__1(c0_string _c0v_a, int _c0v_start, int _c0v_end, c0_string _c0t__caller) {
  c0_string _c0t__result;
  bool _c0t__tmp_26;
  if (((0 <= _c0v_start) && (_c0v_start <= _c0v_end))) {
    int _c0t__tmp_25 = _c0t_string_length__1(_c0v_a, c0_string_fromliteral("string_sub__1 (/afs/andrew/course/15/122/lib/string.h0: 31.52-31.68)"));
    _c0t__tmp_26 = (_c0v_end <= _c0t__tmp_25);
  } else {
    _c0t__tmp_26 = false;
  }
  cc0_assert(_c0t__tmp_26, c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 31.6-31.69: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  c0_string _c0t__tmp_27 = string_sub(_c0v_a, _c0v_start, _c0v_end);
  _c0t__result = _c0t__tmp_27;
  int _c0t__tmp_28 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_sub__1 (/afs/andrew/course/15/122/lib/string.h0: 32.14-32.36)"));
  cc0_assert((_c0t__tmp_28 == (_c0v_end - _c0v_start)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 32.6-32.52: @ensures annotation failed"));
  return _c0t__result;
}
extern bool string_equal(c0_string _c0v_a, c0_string _c0v_b);

bool _c0t_string_equal__1(c0_string _c0v_a, c0_string _c0v_b, c0_string _c0t__caller) {
  bool _c0t__result;
  bool _c0t__tmp_29 = string_equal(_c0v_a, _c0v_b);
  _c0t__result = _c0t__tmp_29;
  return _c0t__result;
}
extern int string_compare(c0_string _c0v_a, c0_string _c0v_b);

int _c0t_string_compare__1(c0_string _c0v_a, c0_string _c0v_b, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_30 = string_compare(_c0v_a, _c0v_b);
  _c0t__result = _c0t__tmp_30;
  cc0_assert(((-(1) <= _c0t__result) && (_c0t__result <= 1)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 37.6-37.44: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_fromint(int _c0v_i);

c0_string _c0t_string_fromint__1(int _c0v_i, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_32 = string_fromint(_c0v_i);
  _c0t__result = _c0t__tmp_32;
  return _c0t__result;
}
extern c0_string string_frombool(bool _c0v_b);

c0_string _c0t_string_frombool__1(bool _c0v_b, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_33 = string_frombool(_c0v_b);
  _c0t__result = _c0t__tmp_33;
  return _c0t__result;
}
extern c0_string string_fromchar(char _c0v_c);

c0_string _c0t_string_fromchar__1(char _c0v_c, c0_string _c0t__caller) {
  c0_string _c0t__result;
  cc0_assert((_c0v_c != '\000'), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 43.6-43.25: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  c0_string _c0t__tmp_34 = string_fromchar(_c0v_c);
  _c0t__result = _c0t__tmp_34;
  int _c0t__tmp_35 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_fromchar__1 (/afs/andrew/course/15/122/lib/string.h0: 44.14-44.36)"));
  cc0_assert((_c0t__tmp_35 == 1), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 44.6-44.42: @ensures annotation failed"));
  char _c0t__tmp_36 = _c0t_string_charat__1(_c0t__result, 0, c0_string_fromliteral("string_fromchar__1 (/afs/andrew/course/15/122/lib/string.h0: 45.14-45.39)"));
  cc0_assert((_c0t__tmp_36 == _c0v_c), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 45.6-45.45: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_tolower(c0_string _c0v_s);

c0_string _c0t_string_tolower__1(c0_string _c0v_s, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_37 = string_tolower(_c0v_s);
  _c0t__result = _c0t__tmp_37;
  return _c0t__result;
}
extern bool string_terminated(cc0_array(char) _c0v_A, int _c0v_n);

bool _c0t_string_terminated__1(cc0_array(char) _c0v_A, int _c0v_n, c0_string _c0t__caller) {
  bool _c0t__result;
  cc0_assert(((0 <= _c0v_n) && (_c0v_n <= c0_array_length(_c0v_A))), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 52.6-52.41: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  bool _c0t__tmp_39 = string_terminated(_c0v_A, _c0v_n);
  _c0t__result = _c0t__tmp_39;
  return _c0t__result;
}
extern cc0_array(char) string_to_chararray(c0_string _c0v_s);

cc0_array(char) _c0t_string_to_chararray__1(c0_string _c0v_s, c0_string _c0t__caller) {
  cc0_array(char) _c0t__result;
  cc0_array(char) _c0t__tmp_40 = string_to_chararray(_c0v_s);
  _c0t__result = _c0t__tmp_40;
  int _c0t__tmp_41 = _c0t_string_length__1(_c0v_s, c0_string_fromliteral("string_to_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 56.34-56.50)"));
  cc0_assert((c0_array_length(_c0t__result) >= (_c0t__tmp_41 + 1)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 56.6-56.55: @ensures annotation failed"));
  int _c0t__tmp_42 = _c0t_string_length__1(_c0v_s, c0_string_fromliteral("string_to_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 57.41-57.57)"));
  bool _c0t__tmp_43 = _c0t_string_terminated__1(_c0t__result, (_c0t__tmp_42 + 1), c0_string_fromliteral("string_to_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 57.14-57.62)"));
  cc0_assert(_c0t__tmp_43, c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 57.6-57.63: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_from_chararray(cc0_array(char) _c0v_A);

c0_string _c0t_string_from_chararray__1(cc0_array(char) _c0v_A, c0_string _c0t__caller) {
  c0_string _c0t__result;
  bool _c0t__tmp_44 = _c0t_string_terminated__1(_c0v_A, c0_array_length(_c0v_A), c0_string_fromliteral("string_from_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 62.15-62.47)"));
  cc0_assert(_c0t__tmp_44, c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 62.6-62.48: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  c0_string _c0t__tmp_45 = string_from_chararray(_c0v_A);
  _c0t__result = _c0t__tmp_45;
  int _c0t__tmp_46 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_from_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 63.14-63.36)"));
  cc0_assert(((_c0t__tmp_46 + 1) <= c0_array_length(_c0v_A)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 63.6-63.55: @ensures annotation failed"));
  return _c0t__result;
}
extern int char_ord(char _c0v_c);

int _c0t_char_ord__1(char _c0v_c, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_47 = char_ord(_c0v_c);
  _c0t__result = _c0t__tmp_47;
  cc0_assert(((0 <= _c0t__result) && (_c0t__result <= 127)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 67.6-67.45: @ensures annotation failed"));
  return _c0t__result;
}
extern char char_chr(int _c0v_n);

char _c0t_char_chr__1(int _c0v_n, c0_string _c0t__caller) {
  char _c0t__result;
  cc0_assert(((0 <= _c0v_n) && (_c0v_n <= 127)), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 69.6-69.34: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  char _c0t__tmp_50 = char_chr(_c0v_n);
  _c0t__result = _c0t__tmp_50;
  return _c0t__result;
}
// end <string>

int _c0_int_size(c0_string _c0t__caller) {
  int _c0t__result;
  _c0t__result = 4;
  return _c0t__result;
}

int _c0_int_max(c0_string _c0t__caller) {
  int _c0t__result;
  _c0t__result = 2147483647;
  return _c0t__result;
}

int _c0_int_min(c0_string _c0t__caller) {
  int _c0t__result;
  _c0t__result = (-2147483647-1);
  return _c0t__result;
}

int _c0_max(int _c0v_x, int _c0v_y, c0_string _c0t__caller) {
  int _c0t__result;
  _c0t__result = ((_c0v_x > _c0v_y) ? _c0v_x : _c0v_y);
  cc0_assert(((_c0t__result == _c0v_x) || (_c0t__result == _c0v_y)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.c0: 13.4-13.41: @ensures annotation failed"));
  cc0_assert(((_c0t__result >= _c0v_x) && (_c0t__result >= _c0v_y)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.c0: 14.4-14.41: @ensures annotation failed"));
  return _c0t__result;
}

int _c0_min(int _c0v_x, int _c0v_y, c0_string _c0t__caller) {
  int _c0t__result;
  _c0t__result = ((_c0v_x > _c0v_y) ? _c0v_y : _c0v_x);
  cc0_assert(((_c0t__result == _c0v_x) || (_c0t__result == _c0v_y)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.c0: 21.4-21.41: @ensures annotation failed"));
  cc0_assert(((_c0t__result <= _c0v_x) && (_c0t__result <= _c0v_y)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.c0: 22.4-22.41: @ensures annotation failed"));
  return _c0t__result;
}

int _c0_abs(int _c0v_x, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_57 = _c0t_int_min__1(c0_string_fromliteral("abs (/afs/andrew/course/15/122/lib/util.c0: 29.17-29.26)"));
  cc0_assert((_c0v_x > _c0t__tmp_57), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.c0: 29.4-29.27: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  _c0t__result = ((_c0v_x < 0) ? -(_c0v_x) : _c0v_x);
  cc0_assert((_c0t__result >= 0), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.c0: 30.4-30.25: @ensures annotation failed"));
  return _c0t__result;
}

char _c0_hexdig2char(int _c0v_d, c0_string _c0t__caller) {
  char _c0t__result;
  cc0_assert(((0 <= _c0v_d) && (_c0v_d < 16)), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.c0: 37.4-37.30: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  if (((0 <= _c0v_d) && (_c0v_d < 10))) {
    int _c0t__tmp_61 = _c0t_char_ord__1('0', c0_string_fromliteral("hexdig2char (/afs/andrew/course/15/122/lib/util.c0: 40.21-40.34)"));
    char _c0t__tmp_62 = _c0t_char_chr__1((_c0t__tmp_61 + _c0v_d), c0_string_fromliteral("hexdig2char (/afs/andrew/course/15/122/lib/util.c0: 40.12-40.39)"));
    _c0t__result = _c0t__tmp_62;
    return _c0t__result;
  } else {
    if (((10 <= _c0v_d) && (_c0v_d < 16))) {
      int _c0t__tmp_64 = _c0t_char_ord__1('A', c0_string_fromliteral("hexdig2char (/afs/andrew/course/15/122/lib/util.c0: 42.21-42.34)"));
      char _c0t__tmp_65 = _c0t_char_chr__1((_c0t__tmp_64 + (_c0v_d - 10)), c0_string_fromliteral("hexdig2char (/afs/andrew/course/15/122/lib/util.c0: 42.12-42.44)"));
      _c0t__result = _c0t__tmp_65;
      return _c0t__result;
    } else {
      _c0t__result = '\?';
      return _c0t__result;
    }
  }
}

c0_string _c0_int2hex(int _c0v_x, c0_string _c0t__caller) {
  c0_string _c0t__result;
  int _c0t__tmp_66 = _c0t_int_size__1(c0_string_fromliteral("int2hex (/afs/andrew/course/15/122/lib/util.c0: 51.18-51.28)"));
  int _c0v_digits = (2 * _c0t__tmp_66);
  cc0_array(char) _c0t__tmp_67 = cc0_alloc_array(char,(_c0v_digits + 1));
  cc0_array(char) _c0v_s = _c0t__tmp_67;
  char* _c0t__tmp_68;
  _c0t__tmp_68 = &(cc0_array_sub(char,_c0v_s,_c0v_digits));
  cc0_deref(char, _c0t__tmp_68) = '\000';
  {
    int _c0v_i = 0;
    while (true) {
      cc0_assert(((0 <= _c0v_i) && (_c0v_i <= _c0v_digits)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.c0: 55.8-55.45: @loop_invariant annotation failed"));
      if ((_c0v_i < _c0v_digits)) {
        {
          char* _c0t__tmp_70;
          _c0t__tmp_70 = &(cc0_array_sub(char,_c0v_s,((_c0v_digits - _c0v_i) - 1)));
          char _c0t__tmp_71 = _c0_hexdig2char((_c0v_x & 15), c0_string_fromliteral("int2hex (/afs/andrew/course/15/122/lib/util.c0: 57.23-57.43)"));
          cc0_deref(char, _c0t__tmp_70) = _c0t__tmp_71;
          _c0v_x = (_c0v_x >> 4);
        }
        _c0v_i += 1;
      } else {
        break;
      }
    }
  }
  c0_string _c0t__tmp_72 = _c0t_string_from_chararray__1(_c0v_s, c0_string_fromliteral("int2hex (/afs/andrew/course/15/122/lib/util.c0: 60.10-60.34)"));
  _c0t__result = _c0t__tmp_72;
  int _c0t__tmp_73 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("int2hex (/afs/andrew/course/15/122/lib/util.c0: 49.12-49.34)"));
  int _c0t__tmp_74 = _c0t_int_size__1(c0_string_fromliteral("int2hex (/afs/andrew/course/15/122/lib/util.c0: 49.40-49.50)"));
  cc0_assert((_c0t__tmp_73 == (2 * _c0t__tmp_74)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/util.c0: 49.4-49.51: @ensures annotation failed"));
  return _c0t__result;
}
// end <util>
typedef int _c0_block_t;
struct _c0_heap {
  int _c0_size;
  cc0_array(int) _c0_heap_mem;
};
typedef struct _c0_heap _c0_heap_t;

int _c0_max_heap_size(c0_string _c0t__caller) {
  int _c0t__result;
  _c0t__result = 65535;
  return _c0t__result;
}

int _c0_max_payload_size(c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_75 = _c0_max_heap_size(c0_string_fromliteral("max_payload_size (mm_helper.c0: 31.12-31.27)"));
  _c0t__result = (_c0t__tmp_75 - 2);
  return _c0t__result;
}

int _c0_get_block_size(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  int _c0t__result;
  _c0t__result = (_c0v_b & 65535);
  cc0_assert((_c0t__result >= 0), c0_string_fromliteral("mm_helper.c0: 37.4-37.25: @ensures annotation failed"));
  int _c0t__tmp_76 = _c0_max_heap_size(c0_string_fromliteral("get_block_size (mm_helper.c0: 38.23-38.38)"));
  cc0_assert((_c0t__result <= _c0t__tmp_76), c0_string_fromliteral("mm_helper.c0: 38.4-38.39: @ensures annotation failed"));
  return _c0t__result;
}

bool _c0_is_header(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  bool _c0t__result;
  int _c0v_h = (_c0v_b & 131072);
  _c0v_h = (_c0v_h >> 17);
  _c0t__result = ((_c0v_h == 1) && true);
  return _c0t__result;
}

bool _c0_is_alloc(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  bool _c0t__result;
  _c0v_b = (_c0v_b & 65536);
  _c0v_b = (_c0v_b >> 16);
  _c0t__result = ((_c0v_b == 1) && true);
  return _c0t__result;
}

_c0_block_t _c0_set_free(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  bool _c0t__tmp_79 = _c0_is_alloc(_c0v_b, c0_string_fromliteral("set_free (mm_helper.c0: 62.9-62.20)"));
  if (_c0t__tmp_79) {
    _c0v_b = (_c0v_b ^ 65536);
  }
  _c0t__result = _c0v_b;
  bool _c0t__tmp_80 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("set_free (mm_helper.c0: 60.13-60.30)"));
  cc0_assert(!(_c0t__tmp_80), c0_string_fromliteral("mm_helper.c0: 60.4-60.31: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_alloc(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  _c0t__result = (_c0v_b | 65536);
  bool _c0t__tmp_81 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("set_alloc (mm_helper.c0: 69.12-69.29)"));
  cc0_assert(_c0t__tmp_81, c0_string_fromliteral("mm_helper.c0: 69.4-69.30: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_alloc_bit(_c0_block_t _c0v_b, bool _c0v_is_alloced, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  if (_c0v_is_alloced) {
    int _c0t__tmp_82 = _c0_set_alloc(_c0v_b, c0_string_fromliteral("set_alloc_bit (mm_helper.c0: 78.16-78.28)"));
    _c0t__result = _c0t__tmp_82;
    bool _c0t__tmp_83 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("set_alloc_bit (mm_helper.c0: 75.12-75.29)"));
    cc0_assert((_c0t__tmp_83 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 75.4-75.44: @ensures annotation failed"));
    return _c0t__result;
  } else {
    int _c0t__tmp_84 = _c0_set_free(_c0v_b, c0_string_fromliteral("set_alloc_bit (mm_helper.c0: 80.16-80.27)"));
    _c0t__result = _c0t__tmp_84;
    bool _c0t__tmp_85 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("set_alloc_bit (mm_helper.c0: 75.12-75.29)"));
    cc0_assert((_c0t__tmp_85 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 75.4-75.44: @ensures annotation failed"));
    return _c0t__result;
  }
}

int _c0_get_footer_from_header(_c0_heap_t* _c0v_h, int _c0v_header_pos, c0_string _c0t__caller) {
  int _c0t__result;
  cc0_array(int) _c0t__tmp_86 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_87 = cc0_array_sub(int,_c0t__tmp_86,_c0v_header_pos);
  int _c0t__tmp_88 = _c0_get_block_size(_c0t__tmp_87, c0_string_fromliteral("get_footer_from_header (mm_helper.c0: 86.25-86.64)"));
  _c0t__result = ((_c0v_header_pos + _c0t__tmp_88) - 1);
  return _c0t__result;
}

int _c0_get_header_from_footer(_c0_heap_t* _c0v_h, int _c0v_footer_pos, c0_string _c0t__caller) {
  int _c0t__result;
  cc0_array(int) _c0t__tmp_89 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_90 = cc0_array_sub(int,_c0t__tmp_89,_c0v_footer_pos);
  int _c0t__tmp_91 = _c0_get_block_size(_c0t__tmp_90, c0_string_fromliteral("get_header_from_footer (mm_helper.c0: 90.25-90.64)"));
  _c0t__result = ((_c0v_footer_pos - _c0t__tmp_91) + 1);
  return _c0t__result;
}

void _c0_set_alloc_block(_c0_heap_t* _c0v_h, int _c0v_header_pos, bool _c0v_is_alloced, c0_string _c0t__caller) {
  int _c0t__tmp_92 = _c0_get_footer_from_header(_c0v_h, _c0v_header_pos, c0_string_fromliteral("set_alloc_block (mm_helper.c0: 96.22-96.59)"));
  int _c0v_footer_pos = _c0t__tmp_92;
  cc0_array(int) _c0t__tmp_93 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int* _c0t__tmp_94;
  _c0t__tmp_94 = &(cc0_array_sub(int,_c0t__tmp_93,_c0v_header_pos));
  cc0_array(int) _c0t__tmp_95 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_96 = cc0_array_sub(int,_c0t__tmp_95,_c0v_header_pos);
  int _c0t__tmp_97 = _c0_set_alloc_bit(_c0t__tmp_96, _c0v_is_alloced, c0_string_fromliteral("set_alloc_block (mm_helper.c0: 97.31-97.81)"));
  cc0_deref(int, _c0t__tmp_94) = _c0t__tmp_97;
  cc0_array(int) _c0t__tmp_98 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int* _c0t__tmp_99;
  _c0t__tmp_99 = &(cc0_array_sub(int,_c0t__tmp_98,_c0v_footer_pos));
  cc0_array(int) _c0t__tmp_100 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_101 = cc0_array_sub(int,_c0t__tmp_100,_c0v_footer_pos);
  int _c0t__tmp_102 = _c0_set_alloc_bit(_c0t__tmp_101, _c0v_is_alloced, c0_string_fromliteral("set_alloc_block (mm_helper.c0: 98.31-98.81)"));
  cc0_deref(int, _c0t__tmp_99) = _c0t__tmp_102;
}

bool _c0_is_prev_alloc(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  bool _c0t__result;
  _c0v_b = (_c0v_b & 262144);
  _c0v_b = (_c0v_b >> 18);
  _c0t__result = ((_c0v_b == 1) && true);
  return _c0t__result;
}

bool _c0_is_next_alloc(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  bool _c0t__result;
  _c0v_b = (_c0v_b & 524288);
  _c0v_b = (_c0v_b >> 19);
  _c0t__result = ((_c0v_b == 1) && true);
  return _c0t__result;
}

_c0_block_t _c0_set_prev_alloc(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  _c0t__result = (_c0v_b | 262144);
  bool _c0t__tmp_105 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("set_prev_alloc (mm_helper.c0: 117.12-117.34)"));
  cc0_assert(_c0t__tmp_105, c0_string_fromliteral("mm_helper.c0: 117.4-117.35: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_prev_free(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  bool _c0t__tmp_106 = _c0_is_prev_alloc(_c0v_b, c0_string_fromliteral("set_prev_free (mm_helper.c0: 125.9-125.25)"));
  if (_c0t__tmp_106) {
    _c0v_b = (_c0v_b ^ 262144);
  }
  _c0t__result = _c0v_b;
  bool _c0t__tmp_107 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("set_prev_free (mm_helper.c0: 123.13-123.35)"));
  cc0_assert(!(_c0t__tmp_107), c0_string_fromliteral("mm_helper.c0: 123.4-123.36: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_next_alloc(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  _c0t__result = (_c0v_b | 524288);
  bool _c0t__tmp_108 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("set_next_alloc (mm_helper.c0: 132.12-132.34)"));
  cc0_assert(_c0t__tmp_108, c0_string_fromliteral("mm_helper.c0: 132.4-132.35: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_next_free(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  bool _c0t__tmp_109 = _c0_is_next_alloc(_c0v_b, c0_string_fromliteral("set_next_free (mm_helper.c0: 140.9-140.25)"));
  if (_c0t__tmp_109) {
    _c0v_b = (_c0v_b ^ 524288);
  }
  _c0t__result = _c0v_b;
  bool _c0t__tmp_110 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("set_next_free (mm_helper.c0: 138.13-138.35)"));
  cc0_assert(!(_c0t__tmp_110), c0_string_fromliteral("mm_helper.c0: 138.4-138.36: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_prev(_c0_block_t _c0v_b, bool _c0v_is_alloced, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  if (_c0v_is_alloced) {
    int _c0t__tmp_111 = _c0_set_prev_alloc(_c0v_b, c0_string_fromliteral("set_prev (mm_helper.c0: 150.16-150.33)"));
    _c0t__result = _c0t__tmp_111;
    bool _c0t__tmp_112 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("set_prev (mm_helper.c0: 147.12-147.34)"));
    cc0_assert((_c0t__tmp_112 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 147.4-147.49: @ensures annotation failed"));
    return _c0t__result;
  } else {
    int _c0t__tmp_113 = _c0_set_prev_free(_c0v_b, c0_string_fromliteral("set_prev (mm_helper.c0: 152.16-152.32)"));
    _c0t__result = _c0t__tmp_113;
    bool _c0t__tmp_114 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("set_prev (mm_helper.c0: 147.12-147.34)"));
    cc0_assert((_c0t__tmp_114 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 147.4-147.49: @ensures annotation failed"));
    return _c0t__result;
  }
}

void _c0_set_prev_block(_c0_heap_t* _c0v_h, int _c0v_header_pos, bool _c0v_is_alloced, c0_string _c0t__caller) {
  int _c0t__tmp_115 = _c0_get_footer_from_header(_c0v_h, _c0v_header_pos, c0_string_fromliteral("set_prev_block (mm_helper.c0: 159.22-159.59)"));
  int _c0v_footer_pos = _c0t__tmp_115;
  cc0_array(int) _c0t__tmp_116 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int* _c0t__tmp_117;
  _c0t__tmp_117 = &(cc0_array_sub(int,_c0t__tmp_116,_c0v_header_pos));
  cc0_array(int) _c0t__tmp_118 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_119 = cc0_array_sub(int,_c0t__tmp_118,_c0v_header_pos);
  int _c0t__tmp_120 = _c0_set_prev(_c0t__tmp_119, _c0v_is_alloced, c0_string_fromliteral("set_prev_block (mm_helper.c0: 160.31-160.76)"));
  cc0_deref(int, _c0t__tmp_117) = _c0t__tmp_120;
  cc0_array(int) _c0t__tmp_121 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int* _c0t__tmp_122;
  _c0t__tmp_122 = &(cc0_array_sub(int,_c0t__tmp_121,_c0v_footer_pos));
  cc0_array(int) _c0t__tmp_123 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_124 = cc0_array_sub(int,_c0t__tmp_123,_c0v_footer_pos);
  int _c0t__tmp_125 = _c0_set_prev(_c0t__tmp_124, _c0v_is_alloced, c0_string_fromliteral("set_prev_block (mm_helper.c0: 161.31-161.76)"));
  cc0_deref(int, _c0t__tmp_122) = _c0t__tmp_125;
}

_c0_block_t _c0_set_next(_c0_block_t _c0v_b, bool _c0v_is_alloced, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  if (_c0v_is_alloced) {
    int _c0t__tmp_126 = _c0_set_next_alloc(_c0v_b, c0_string_fromliteral("set_next (mm_helper.c0: 168.16-168.33)"));
    _c0t__result = _c0t__tmp_126;
    bool _c0t__tmp_127 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("set_next (mm_helper.c0: 165.12-165.34)"));
    cc0_assert((_c0t__tmp_127 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 165.4-165.49: @ensures annotation failed"));
    return _c0t__result;
  } else {
    int _c0t__tmp_128 = _c0_set_next_free(_c0v_b, c0_string_fromliteral("set_next (mm_helper.c0: 170.16-170.32)"));
    _c0t__result = _c0t__tmp_128;
    bool _c0t__tmp_129 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("set_next (mm_helper.c0: 165.12-165.34)"));
    cc0_assert((_c0t__tmp_129 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 165.4-165.49: @ensures annotation failed"));
    return _c0t__result;
  }
}

void _c0_set_next_block(_c0_heap_t* _c0v_h, int _c0v_header_pos, bool _c0v_is_alloced, c0_string _c0t__caller) {
  int _c0t__tmp_130 = _c0_get_footer_from_header(_c0v_h, _c0v_header_pos, c0_string_fromliteral("set_next_block (mm_helper.c0: 177.22-177.59)"));
  int _c0v_footer_pos = _c0t__tmp_130;
  cc0_array(int) _c0t__tmp_131 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int* _c0t__tmp_132;
  _c0t__tmp_132 = &(cc0_array_sub(int,_c0t__tmp_131,_c0v_header_pos));
  cc0_array(int) _c0t__tmp_133 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_134 = cc0_array_sub(int,_c0t__tmp_133,_c0v_header_pos);
  int _c0t__tmp_135 = _c0_set_next(_c0t__tmp_134, _c0v_is_alloced, c0_string_fromliteral("set_next_block (mm_helper.c0: 178.31-178.76)"));
  cc0_deref(int, _c0t__tmp_132) = _c0t__tmp_135;
  cc0_array(int) _c0t__tmp_136 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int* _c0t__tmp_137;
  _c0t__tmp_137 = &(cc0_array_sub(int,_c0t__tmp_136,_c0v_footer_pos));
  cc0_array(int) _c0t__tmp_138 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_139 = cc0_array_sub(int,_c0t__tmp_138,_c0v_footer_pos);
  int _c0t__tmp_140 = _c0_set_next(_c0t__tmp_139, _c0v_is_alloced, c0_string_fromliteral("set_next_block (mm_helper.c0: 179.31-179.76)"));
  cc0_deref(int, _c0t__tmp_137) = _c0t__tmp_140;
}

_c0_block_t _c0_make_block_header(int _c0v_size, bool _c0v_is_alloced, bool _c0v_prev_alloc, bool _c0v_next_alloc, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  int _c0t__tmp_141 = _c0_max_heap_size(c0_string_fromliteral("make_block_header (mm_helper.c0: 183.21-183.36)"));
  cc0_assert((_c0v_size <= _c0t__tmp_141), c0_string_join(c0_string_fromliteral("mm_helper.c0: 183.4-183.37: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  _c0_block_t _c0v_b = (_c0v_size | 131072);
  int _c0t__tmp_142 = _c0_set_alloc_bit(_c0v_b, _c0v_is_alloced, c0_string_fromliteral("make_block_header (mm_helper.c0: 191.9-191.37)"));
  _c0v_b = _c0t__tmp_142;
  int _c0t__tmp_143 = _c0_set_prev(_c0v_b, _c0v_prev_alloc, c0_string_fromliteral("make_block_header (mm_helper.c0: 192.9-192.32)"));
  _c0v_b = _c0t__tmp_143;
  int _c0t__tmp_144 = _c0_set_next(_c0v_b, _c0v_next_alloc, c0_string_fromliteral("make_block_header (mm_helper.c0: 193.9-193.32)"));
  _c0v_b = _c0t__tmp_144;
  _c0t__result = _c0v_b;
  int _c0t__tmp_145 = _c0_get_block_size(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 184.12-184.35)"));
  cc0_assert((_c0t__tmp_145 == _c0v_size), c0_string_fromliteral("mm_helper.c0: 184.4-184.44: @ensures annotation failed"));
  bool _c0t__tmp_146 = _c0_is_header(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 185.12-185.30)"));
  cc0_assert(_c0t__tmp_146, c0_string_fromliteral("mm_helper.c0: 185.4-185.31: @ensures annotation failed"));
  bool _c0t__tmp_147 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 186.12-186.29)"));
  cc0_assert((_c0t__tmp_147 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 186.4-186.44: @ensures annotation failed"));
  bool _c0t__tmp_148 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 187.12-187.34)"));
  cc0_assert((_c0t__tmp_148 == _c0v_prev_alloc), c0_string_fromliteral("mm_helper.c0: 187.4-187.49: @ensures annotation failed"));
  bool _c0t__tmp_149 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 188.12-188.34)"));
  cc0_assert((_c0t__tmp_149 == _c0v_next_alloc), c0_string_fromliteral("mm_helper.c0: 188.4-188.49: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_make_block_footer(int _c0v_size, bool _c0v_is_alloced, bool _c0v_prev_alloc, bool _c0v_next_alloc, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  int _c0t__tmp_150 = _c0_max_heap_size(c0_string_fromliteral("make_block_footer (mm_helper.c0: 198.21-198.36)"));
  cc0_assert((_c0v_size <= _c0t__tmp_150), c0_string_join(c0_string_fromliteral("mm_helper.c0: 198.4-198.37: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  _c0_block_t _c0v_b = _c0v_size;
  int _c0t__tmp_151 = _c0_set_alloc_bit(_c0v_b, _c0v_is_alloced, c0_string_fromliteral("make_block_footer (mm_helper.c0: 206.9-206.37)"));
  _c0v_b = _c0t__tmp_151;
  int _c0t__tmp_152 = _c0_set_prev(_c0v_b, _c0v_prev_alloc, c0_string_fromliteral("make_block_footer (mm_helper.c0: 207.9-207.32)"));
  _c0v_b = _c0t__tmp_152;
  int _c0t__tmp_153 = _c0_set_next(_c0v_b, _c0v_next_alloc, c0_string_fromliteral("make_block_footer (mm_helper.c0: 208.9-208.32)"));
  _c0v_b = _c0t__tmp_153;
  _c0t__result = _c0v_b;
  int _c0t__tmp_154 = _c0_get_block_size(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 199.12-199.35)"));
  cc0_assert((_c0t__tmp_154 == _c0v_size), c0_string_fromliteral("mm_helper.c0: 199.4-199.44: @ensures annotation failed"));
  bool _c0t__tmp_155 = _c0_is_header(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 200.13-200.31)"));
  cc0_assert(!(_c0t__tmp_155), c0_string_fromliteral("mm_helper.c0: 200.4-200.32: @ensures annotation failed"));
  bool _c0t__tmp_156 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 201.12-201.29)"));
  cc0_assert((_c0t__tmp_156 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 201.4-201.44: @ensures annotation failed"));
  bool _c0t__tmp_157 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 202.12-202.34)"));
  cc0_assert((_c0t__tmp_157 == _c0v_prev_alloc), c0_string_fromliteral("mm_helper.c0: 202.4-202.49: @ensures annotation failed"));
  bool _c0t__tmp_158 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 203.12-203.34)"));
  cc0_assert((_c0t__tmp_158 == _c0v_next_alloc), c0_string_fromliteral("mm_helper.c0: 203.4-203.49: @ensures annotation failed"));
  return _c0t__result;
}
typedef int _c0_obj_t;

int _c0_get_header_pos(_c0_obj_t _c0v_o, c0_string _c0t__caller) {
  int _c0t__result;
  _c0t__result = (_c0v_o & 65535);
  return _c0t__result;
}

int _c0_get_footer_pos(_c0_obj_t _c0v_o, c0_string _c0t__caller) {
  int _c0t__result;
  _c0t__result = ((_c0v_o >> 16) & 65535);
  return _c0t__result;
}

int _c0_get_obj_size(_c0_obj_t _c0v_o, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_159 = _c0_get_footer_pos(_c0v_o, c0_string_fromliteral("get_obj_size (mm_helper.c0: 228.12-228.29)"));
  int _c0t__tmp_160 = _c0_get_header_pos(_c0v_o, c0_string_fromliteral("get_obj_size (mm_helper.c0: 228.32-228.49)"));
  _c0t__result = ((_c0t__tmp_159 - _c0t__tmp_160) - 1);
  int _c0t__tmp_161 = _c0_max_payload_size(c0_string_fromliteral("get_obj_size (mm_helper.c0: 226.23-226.41)"));
  cc0_assert((_c0t__result <= _c0t__tmp_161), c0_string_fromliteral("mm_helper.c0: 226.4-226.42: @ensures annotation failed"));
  return _c0t__result;
}

_c0_obj_t _c0_make_obj(int _c0v_header_pos, int _c0v_footer_pos, c0_string _c0t__caller) {
  _c0_obj_t _c0t__result;
  int _c0t__tmp_162 = _c0_max_heap_size(c0_string_fromliteral("make_obj (mm_helper.c0: 232.27-232.42)"));
  cc0_assert((_c0v_header_pos <= (_c0t__tmp_162 - 2)), c0_string_join(c0_string_fromliteral("mm_helper.c0: 232.4-232.47: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_163 = _c0_max_heap_size(c0_string_fromliteral("make_obj (mm_helper.c0: 233.27-233.42)"));
  cc0_assert((_c0v_footer_pos <= _c0t__tmp_163), c0_string_join(c0_string_fromliteral("mm_helper.c0: 233.4-233.43: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  cc0_assert((_c0v_header_pos < (_c0v_footer_pos + 1)), c0_string_join(c0_string_fromliteral("mm_helper.c0: 234.4-234.41: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  _c0t__result = ((_c0v_footer_pos << 16) | _c0v_header_pos);
  int _c0t__tmp_164 = _c0_get_header_pos(_c0t__result, c0_string_fromliteral("make_obj (mm_helper.c0: 235.12-235.35)"));
  cc0_assert((_c0t__tmp_164 == _c0v_header_pos), c0_string_fromliteral("mm_helper.c0: 235.4-235.50: @ensures annotation failed"));
  int _c0t__tmp_165 = _c0_get_footer_pos(_c0t__result, c0_string_fromliteral("make_obj (mm_helper.c0: 236.12-236.35)"));
  cc0_assert((_c0t__tmp_165 == _c0v_footer_pos), c0_string_fromliteral("mm_helper.c0: 236.4-236.50: @ensures annotation failed"));
  return _c0t__result;
}

void _c0_update_next_block(_c0_heap_t* _c0v_h, int _c0v_header_pos, bool _c0v_is_cur_alloc, c0_string _c0t__caller) {
  cc0_array(int) _c0t__tmp_166 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_167 = cc0_array_sub(int,_c0t__tmp_166,_c0v_header_pos);
  int _c0t__tmp_168 = _c0_get_block_size(_c0t__tmp_167, c0_string_fromliteral("update_next_block (mm_helper.c0: 244.40-244.79)"));
  int _c0v_next_header_pos = (_c0v_header_pos + _c0t__tmp_168);
  _c0_set_prev_block(_c0v_h, _c0v_next_header_pos, _c0v_is_cur_alloc, c0_string_fromliteral("update_next_block (mm_helper.c0: 246.5-246.53)"));
}

void _c0_update_prev_block(_c0_heap_t* _c0v_h, int _c0v_header_pos, bool _c0v_is_cur_alloc, c0_string _c0t__caller) {
  cc0_array(int) _c0t__tmp_169 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_170 = cc0_array_sub(int,_c0t__tmp_169,(_c0v_header_pos - 1));
  int _c0t__tmp_171 = _c0_get_block_size(_c0t__tmp_170, c0_string_fromliteral("update_prev_block (mm_helper.c0: 252.40-252.83)"));
  int _c0v_prev_header_pos = ((_c0v_header_pos - _c0t__tmp_171) + 1);
  _c0_set_next_block(_c0v_h, _c0v_prev_header_pos, _c0v_is_cur_alloc, c0_string_fromliteral("update_prev_block (mm_helper.c0: 254.5-254.53)"));
}

void _c0_update_surrounding_blocks(_c0_heap_t* _c0v_h, int _c0v_header_pos, bool _c0v_is_cur_alloc, c0_string _c0t__caller) {
  if ((_c0v_header_pos != 0)) {
    _c0_update_prev_block(_c0v_h, _c0v_header_pos, _c0v_is_cur_alloc, c0_string_fromliteral("update_surrounding_blocks (mm_helper.c0: 260.9-260.55)"));
  }
  cc0_array(int) _c0t__tmp_172 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_173 = cc0_array_sub(int,_c0t__tmp_172,_c0v_header_pos);
  int _c0t__tmp_174 = _c0_get_block_size(_c0t__tmp_173, c0_string_fromliteral("update_surrounding_blocks (mm_helper.c0: 262.9-262.48)"));
  int _c0t__tmp_175 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_size;
  if (((_c0t__tmp_174 + _c0v_header_pos) != _c0t__tmp_175)) {
    _c0_update_next_block(_c0v_h, _c0v_header_pos, _c0v_is_cur_alloc, c0_string_fromliteral("update_surrounding_blocks (mm_helper.c0: 263.9-263.55)"));
  }
}

_c0_obj_t _c0_make_full_block(_c0_heap_t* _c0v_heap, int _c0v_header_pos, int _c0v_size, bool _c0v_is_alloced, bool _c0v_prev_alloc, bool _c0v_next_alloc, c0_string _c0t__caller) {
  _c0_obj_t _c0t__result;
  int _c0t__tmp_176 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_size;
  cc0_assert((_c0v_header_pos < _c0t__tmp_176), c0_string_join(c0_string_fromliteral("mm_helper.c0: 270.4-270.37: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0v_footer_pos = ((_c0v_header_pos + _c0v_size) + 1);
  cc0_array(int) _c0t__tmp_177 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int* _c0t__tmp_178;
  _c0t__tmp_178 = &(cc0_array_sub(int,_c0t__tmp_177,_c0v_header_pos));
  int _c0t__tmp_179 = _c0_make_block_header((_c0v_size + 2), _c0v_is_alloced, _c0v_prev_alloc, _c0v_next_alloc, c0_string_fromliteral("make_full_block (mm_helper.c0: 276.34-276.97)"));
  cc0_deref(int, _c0t__tmp_178) = _c0t__tmp_179;
  cc0_array(int) _c0t__tmp_180 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int* _c0t__tmp_181;
  _c0t__tmp_181 = &(cc0_array_sub(int,_c0t__tmp_180,_c0v_footer_pos));
  int _c0t__tmp_182 = _c0_make_block_footer((_c0v_size + 2), _c0v_is_alloced, _c0v_prev_alloc, _c0v_next_alloc, c0_string_fromliteral("make_full_block (mm_helper.c0: 277.34-277.97)"));
  cc0_deref(int, _c0t__tmp_181) = _c0t__tmp_182;
  int _c0t__tmp_183 = _c0_make_obj(_c0v_header_pos, _c0v_footer_pos, c0_string_fromliteral("make_full_block (mm_helper.c0: 279.15-279.47)"));
  _c0_obj_t _c0v_o = _c0t__tmp_183;
  {
    cc0_array(int) _c0t__tmp_184 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
    int _c0t__tmp_185 = cc0_array_sub(int,_c0t__tmp_184,_c0v_header_pos);
    int _c0t__tmp_186 = _c0_get_block_size(_c0t__tmp_185, c0_string_fromliteral("make_full_block (mm_helper.c0: 280.15-280.57)"));
    int _c0t__tmp_187 = _c0_get_obj_size(_c0v_o, c0_string_fromliteral("make_full_block (mm_helper.c0: 280.61-280.76)"));
    cc0_assert((_c0t__tmp_186 == (_c0t__tmp_187 + 2)), c0_string_fromliteral("mm_helper.c0: 280.8-280.81: @assert annotation failed"));
  }
  _c0t__result = _c0v_o;
  int _c0t__tmp_188 = _c0_get_header_pos(_c0t__result, c0_string_fromliteral("make_full_block (mm_helper.c0: 271.12-271.35)"));
  cc0_assert((_c0t__tmp_188 == _c0v_header_pos), c0_string_fromliteral("mm_helper.c0: 271.4-271.50: @ensures annotation failed"));
  int _c0t__tmp_189 = _c0_get_footer_pos(_c0t__result, c0_string_fromliteral("make_full_block (mm_helper.c0: 272.12-272.35)"));
  cc0_assert((_c0t__tmp_189 == ((_c0v_header_pos + _c0v_size) + 1)), c0_string_fromliteral("mm_helper.c0: 272.4-272.61: @ensures annotation failed"));
  return _c0t__result;
}

_c0_heap_t* _c0_heap_init(int _c0v_size, c0_string _c0t__caller) {
  _c0_heap_t* _c0t__result;
  cc0_assert((_c0v_size > 0), c0_string_join(c0_string_fromliteral("mm_helper.c0: 286.4-286.22: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_190 = _c0_max_payload_size(c0_string_fromliteral("heap_init (mm_helper.c0: 287.21-287.39)"));
  cc0_assert((_c0v_size <= _c0t__tmp_190), c0_string_join(c0_string_fromliteral("mm_helper.c0: 287.4-287.40: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  struct _c0_heap* _c0t__tmp_191 = cc0_alloc(_c0_heap_t);
  _c0_heap_t* _c0v_heap = _c0t__tmp_191;
  cc0_array(int) _c0t__tmp_192 = cc0_alloc_array(int,_c0v_size);
  cc0_array(int) _c0v_heap_mem = _c0t__tmp_192;
  int* _c0t__tmp_193;
  _c0t__tmp_193 = &((cc0_deref(struct _c0_heap, _c0v_heap))._c0_size);
  cc0_deref(int, _c0t__tmp_193) = _c0v_size;
  cc0_array(int)* _c0t__tmp_194;
  _c0t__tmp_194 = &((cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem);
  cc0_deref(cc0_array(int), _c0t__tmp_194) = _c0v_heap_mem;
  int _c0t__tmp_195 = _c0_make_full_block(_c0v_heap, 0, (_c0v_size - 2), false, true, true, c0_string_fromliteral("heap_init (mm_helper.c0: 298.15-298.66)"));
  _c0_obj_t _c0v_b = _c0t__tmp_195;
  _c0t__result = _c0v_heap;
  cc0_array(int) _c0t__tmp_196 = (cc0_deref(struct _c0_heap, _c0t__result))._c0_heap_mem;
  cc0_assert((c0_array_length(_c0t__tmp_196) == _c0v_size), c0_string_fromliteral("mm_helper.c0: 288.4-288.47: @ensures annotation failed"));
  return _c0t__result;
}

void _c0_print_metadata(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  {
    _c0t_print__1(c0_string_fromliteral("Metadata: \n"), c0_string_fromliteral("print_metadata (mm_helper.c0: 304.5-304.27)"));
  }
  bool _c0t__tmp_197 = _c0_is_alloc(_c0v_b, c0_string_fromliteral("print_metadata (mm_helper.c0: 305.9-305.20)"));
  if (_c0t__tmp_197) {
    _c0t_print__1(c0_string_fromliteral("Is allocted \n"), c0_string_fromliteral("print_metadata (mm_helper.c0: 306.9-306.33)"));
  }
  bool _c0t__tmp_198 = _c0_is_prev_alloc(_c0v_b, c0_string_fromliteral("print_metadata (mm_helper.c0: 308.9-308.25)"));
  if (_c0t__tmp_198) {
    _c0t_print__1(c0_string_fromliteral("Prev is allocted \n"), c0_string_fromliteral("print_metadata (mm_helper.c0: 309.9-309.38)"));
  }
  bool _c0t__tmp_199 = _c0_is_next_alloc(_c0v_b, c0_string_fromliteral("print_metadata (mm_helper.c0: 311.9-311.25)"));
  if (_c0t__tmp_199) {
    _c0t_print__1(c0_string_fromliteral("Next is allocted \n"), c0_string_fromliteral("print_metadata (mm_helper.c0: 312.9-312.38)"));
  }
}

void _c0_print_block(_c0_heap_t* _c0v_h, int _c0v_header_pos, c0_string _c0t__caller) {
  cc0_array(int) _c0t__tmp_200 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_201 = cc0_array_sub(int,_c0t__tmp_200,_c0v_header_pos);
  bool _c0t__tmp_202 = _c0_is_header(_c0t__tmp_201, c0_string_fromliteral("print_block (mm_helper.c0: 318.13-318.47)"));
  cc0_assert(_c0t__tmp_202, c0_string_join(c0_string_fromliteral("mm_helper.c0: 318.4-318.48: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  cc0_array(int) _c0t__tmp_203 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_204 = cc0_array_sub(int,_c0t__tmp_203,_c0v_header_pos);
  int _c0t__tmp_205 = _c0_get_block_size(_c0t__tmp_204, c0_string_fromliteral("print_block (mm_helper.c0: 320.16-320.55)"));
  int _c0v_size = _c0t__tmp_205;
  int _c0v_footer_pos = ((_c0v_header_pos - 1) + _c0v_size);
  {
    _c0t_print__1(c0_string_fromliteral("\nHeader: \n"), c0_string_fromliteral("print_block (mm_helper.c0: 323.5-323.49)"));
    _c0t_printint__1(_c0v_size, c0_string_fromliteral("print_block (mm_helper.c0: 323.5-323.49)"));
    _c0t_print__1(c0_string_fromliteral(" block size \n"), c0_string_fromliteral("print_block (mm_helper.c0: 323.5-323.49)"));
  }
  cc0_array(int) _c0t__tmp_206 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_207 = cc0_array_sub(int,_c0t__tmp_206,_c0v_header_pos);
  _c0_print_metadata(_c0t__tmp_207, c0_string_fromliteral("print_block (mm_helper.c0: 324.5-324.44)"));
  cc0_array(int) _c0t__tmp_208 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_209 = cc0_array_sub(int,_c0t__tmp_208,_c0v_header_pos);
  bool _c0t__tmp_210 = _c0_is_alloc(_c0t__tmp_209, c0_string_fromliteral("print_block (mm_helper.c0: 327.13-327.46)"));
  if (_c0t__tmp_210) {
    {
      _c0t_print__1(c0_string_fromliteral("\nData: \n"), c0_string_fromliteral("print_block (mm_helper.c0: 328.13-328.33)"));
    }
    int _c0v_data_pos = (_c0v_header_pos + 1);
    int _c0v_index = 0;
    while (true) {
      if ((_c0v_data_pos < _c0v_footer_pos)) {
        {
          _c0t_print__1(c0_string_fromliteral("(["), c0_string_fromliteral("print_block (mm_helper.c0: 332.13-332.66)"));
          _c0t_printint__1(_c0v_index, c0_string_fromliteral("print_block (mm_helper.c0: 332.13-332.66)"));
          _c0t_print__1(c0_string_fromliteral("], "), c0_string_fromliteral("print_block (mm_helper.c0: 332.13-332.66)"));
          cc0_array(int) _c0t__tmp_211 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
          int _c0t__tmp_212 = cc0_array_sub(int,_c0t__tmp_211,_c0v_data_pos);
          _c0t_printint__1(_c0t__tmp_212, c0_string_fromliteral("print_block (mm_helper.c0: 332.13-332.66)"));
          _c0t_print__1(c0_string_fromliteral(") "), c0_string_fromliteral("print_block (mm_helper.c0: 332.13-332.66)"));
        }
        _c0v_index += 1;
        _c0v_data_pos += 1;
      } else {
        break;
      }
    }
  }
  cc0_array(int) _c0t__tmp_213 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_214 = cc0_array_sub(int,_c0t__tmp_213,_c0v_footer_pos);
  int _c0t__tmp_215 = _c0_get_block_size(_c0t__tmp_214, c0_string_fromliteral("print_block (mm_helper.c0: 338.12-338.51)"));
  _c0v_size = _c0t__tmp_215;
  {
    _c0t_print__1(c0_string_fromliteral("\n\nFooter: \n"), c0_string_fromliteral("print_block (mm_helper.c0: 339.5-339.51)"));
    _c0t_printint__1(_c0v_size, c0_string_fromliteral("print_block (mm_helper.c0: 339.5-339.51)"));
    _c0t_print__1(c0_string_fromliteral(" block size \n"), c0_string_fromliteral("print_block (mm_helper.c0: 339.5-339.51)"));
  }
  cc0_array(int) _c0t__tmp_216 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_217 = cc0_array_sub(int,_c0t__tmp_216,_c0v_footer_pos);
  _c0_print_metadata(_c0t__tmp_217, c0_string_fromliteral("print_block (mm_helper.c0: 340.5-340.44)"));
}

void _c0_print_heap(_c0_heap_t* _c0v_h, c0_string _c0t__caller) {
  {
    _c0t_print__1(c0_string_fromliteral("\nStart Heap \n"), c0_string_fromliteral("print_heap (mm_helper.c0: 345.5-345.30)"));
  }
  int _c0v_cur_header_pos = 0;
  while (true) {
    int _c0t__tmp_218 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_size;
    if ((_c0v_cur_header_pos < _c0t__tmp_218)) {
      _c0_print_block(_c0v_h, _c0v_cur_header_pos, c0_string_fromliteral("print_heap (mm_helper.c0: 349.9-349.39)"));
      cc0_array(int) _c0t__tmp_219 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
      int _c0t__tmp_220 = cc0_array_sub(int,_c0t__tmp_219,_c0v_cur_header_pos);
      int _c0t__tmp_221 = _c0_get_block_size(_c0t__tmp_220, c0_string_fromliteral("print_heap (mm_helper.c0: 350.27-350.70)"));
      _c0v_cur_header_pos += _c0t__tmp_221;
    } else {
      break;
    }
  }
  _c0t_print__1(c0_string_fromliteral("End Heap \n\n"), c0_string_fromliteral("print_heap (mm_helper.c0: 352.5-352.28)"));
}

int _c0_read_from_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, int _c0v_index, c0_string _c0t__caller) {
  int _c0t__result;
  bool _c0t__tmp_223;
  if ((0 <= _c0v_index)) {
    int _c0t__tmp_222 = _c0_get_obj_size(_c0v_obj, c0_string_fromliteral("read_from_obj (mm_rw.c0: 9.35-9.52)"));
    _c0t__tmp_223 = (_c0v_index < _c0t__tmp_222);
  } else {
    _c0t__tmp_223 = false;
  }
  cc0_assert(_c0t__tmp_223, c0_string_join(c0_string_fromliteral("mm_rw.c0: 9.4-9.53: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_224 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("read_from_obj (mm_rw.c0: 11.22-11.41)"));
  int _c0v_real_index = ((_c0t__tmp_224 + _c0v_index) + 1);
  cc0_array(int) _c0t__tmp_225 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int _c0t__tmp_226 = cc0_array_sub(int,_c0t__tmp_225,_c0v_real_index);
  _c0t__result = _c0t__tmp_226;
  return _c0t__result;
}

void _c0_write_to_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, int _c0v_data, int _c0v_index, c0_string _c0t__caller) {
  bool _c0t__tmp_228;
  if ((0 <= _c0v_index)) {
    int _c0t__tmp_227 = _c0_get_obj_size(_c0v_obj, c0_string_fromliteral("write_to_obj (mm_rw.c0: 17.35-17.52)"));
    _c0t__tmp_228 = (_c0v_index < _c0t__tmp_227);
  } else {
    _c0t__tmp_228 = false;
  }
  cc0_assert(_c0t__tmp_228, c0_string_join(c0_string_fromliteral("mm_rw.c0: 17.4-17.53: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  {
    int _c0t__tmp_229 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("write_to_obj (mm_rw.c0: 20.22-20.41)"));
    int _c0v_real_index = ((_c0t__tmp_229 + _c0v_index) + 1);
    cc0_array(int) _c0t__tmp_230 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
    int* _c0t__tmp_231;
    _c0t__tmp_231 = &(cc0_array_sub(int,_c0t__tmp_230,_c0v_real_index));
    cc0_deref(int, _c0t__tmp_231) = _c0v_data;
  }
  int _c0t__tmp_232 = _c0_read_from_obj(_c0v_heap, _c0v_obj, _c0v_index, c0_string_fromliteral("write_to_obj (mm_rw.c0: 18.20-18.51)"));
  cc0_assert((_c0v_data == _c0t__tmp_232), c0_string_fromliteral("mm_rw.c0: 18.4-18.52: @ensures annotation failed"));
}

int _c0_read_byte_from_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, int _c0v_index, int _c0v_byte_num, c0_string _c0t__caller) {
  int _c0t__result;
  bool _c0t__tmp_234;
  if ((0 <= _c0v_index)) {
    int _c0t__tmp_233 = _c0_get_obj_size(_c0v_obj, c0_string_fromliteral("read_byte_from_obj (mm_rw.c0: 29.35-29.52)"));
    _c0t__tmp_234 = (_c0v_index < _c0t__tmp_233);
  } else {
    _c0t__tmp_234 = false;
  }
  cc0_assert(_c0t__tmp_234, c0_string_join(c0_string_fromliteral("mm_rw.c0: 29.4-29.53: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  cc0_assert(((0 <= _c0v_byte_num) && (_c0v_byte_num <= 3)), c0_string_join(c0_string_fromliteral("mm_rw.c0: 30.4-30.44: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_236 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("read_byte_from_obj (mm_rw.c0: 33.20-33.39)"));
  int _c0v_real_index = ((_c0t__tmp_236 + _c0v_index) + 1);
  cc0_array(int) _c0t__tmp_237 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int _c0t__tmp_238 = cc0_array_sub(int,_c0t__tmp_237,_c0v_real_index);
  int _c0v_data = _c0t__tmp_238;
  int _c0v_shift = ((3 - _c0v_byte_num) * 8);
  int _c0t__tmp_239 = c0_sar(_c0v_data,_c0v_shift);
  _c0v_data = _c0t__tmp_239;
  _c0t__result = (_c0v_data & 255);
  cc0_assert(((0 <= _c0t__result) && (_c0t__result <= 255)), c0_string_fromliteral("mm_rw.c0: 31.4-31.43: @ensures annotation failed"));
  return _c0t__result;
}

void _c0_write_byte_to_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, int _c0v_data, int _c0v_index, int _c0v_byte_num, c0_string _c0t__caller) {
  bool _c0t__tmp_242;
  if ((0 <= _c0v_index)) {
    int _c0t__tmp_241 = _c0_get_obj_size(_c0v_obj, c0_string_fromliteral("write_byte_to_obj (mm_rw.c0: 42.35-42.52)"));
    _c0t__tmp_242 = (_c0v_index < _c0t__tmp_241);
  } else {
    _c0t__tmp_242 = false;
  }
  cc0_assert(_c0t__tmp_242, c0_string_join(c0_string_fromliteral("mm_rw.c0: 42.4-42.53: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  cc0_assert(((0 <= _c0v_data) && (_c0v_data <= 255)), c0_string_join(c0_string_fromliteral("mm_rw.c0: 43.4-43.38: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  cc0_assert(((0 <= _c0v_byte_num) && (_c0v_byte_num <= 3)), c0_string_join(c0_string_fromliteral("mm_rw.c0: 44.4-44.44: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  {
    int _c0t__tmp_245 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("write_byte_to_obj (mm_rw.c0: 47.22-47.41)"));
    int _c0v_real_index = ((_c0t__tmp_245 + _c0v_index) + 1);
    int _c0v_shift = ((3 - _c0v_byte_num) * 8);
    cc0_array(int) _c0t__tmp_246 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
    int* _c0t__tmp_247;
    _c0t__tmp_247 = &(cc0_array_sub(int,_c0t__tmp_246,_c0v_real_index));
    int _c0t__tmp_248 = c0_sal(_c0v_data,_c0v_shift);
    cc0_deref(int, _c0t__tmp_247) = _c0t__tmp_248;
  }
  int _c0t__tmp_249 = _c0_read_byte_from_obj(_c0v_heap, _c0v_obj, _c0v_index, _c0v_byte_num, c0_string_fromliteral("write_byte_to_obj (mm_rw.c0: 45.20-45.66)"));
  cc0_assert((_c0v_data == _c0t__tmp_249), c0_string_fromliteral("mm_rw.c0: 45.4-45.67: @ensures annotation failed"));
}

bool _c0_is_null(_c0_obj_t _c0v_o, c0_string _c0t__caller) {
  bool _c0t__result;
  _c0t__result = (_c0v_o == 0);
  return _c0t__result;
}

//#use <string>
// end <string>

//#use <conio>
// end <conio>

int _c0_main() {
  c0_string _c0t__caller = c0_string_fromliteral("(program start)");
  int _c0t__result;
  struct _c0_heap* _c0t__tmp_250 = _c0_heap_init(1024, c0_string_fromliteral("main (mm_helper_test.c0: 8.17-8.32)"));
  _c0_heap_t* _c0v_h = _c0t__tmp_250;
  int _c0t__tmp_251 = _c0_make_full_block(_c0v_h, 2, 4, true, false, false, c0_string_fromliteral("main (mm_helper_test.c0: 9.15-9.59)"));
  _c0_obj_t _c0v_o = _c0t__tmp_251;
  _c0_write_to_obj(_c0v_h, _c0v_o, 10, 0, c0_string_fromliteral("main (mm_helper_test.c0: 10.5-10.30)"));
  cc0_array(int) _c0t__tmp_252 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_253 = cc0_array_sub(int,_c0t__tmp_252,3);
  cc0_assert((_c0t__tmp_253 == 10), c0_string_fromliteral("mm_helper_test.c0: 11.5-11.34: assert failed"));
  _c0_write_to_obj(_c0v_h, _c0v_o, 11, 1, c0_string_fromliteral("main (mm_helper_test.c0: 12.5-12.30)"));
  cc0_array(int) _c0t__tmp_254 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_255 = cc0_array_sub(int,_c0t__tmp_254,4);
  cc0_assert((_c0t__tmp_255 == 11), c0_string_fromliteral("mm_helper_test.c0: 13.5-13.34: assert failed"));
  _c0_write_byte_to_obj(_c0v_h, _c0v_o, 1, 2, 1, c0_string_fromliteral("main (mm_helper_test.c0: 14.5-14.39)"));
  cc0_array(int) _c0t__tmp_256 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_257 = cc0_array_sub(int,_c0t__tmp_256,5);
  cc0_assert((_c0t__tmp_257 == 65536), c0_string_fromliteral("mm_helper_test.c0: 16.5-16.39: assert failed"));
  _c0_print_heap(_c0v_h, c0_string_fromliteral("main (mm_helper_test.c0: 17.5-17.18)"));
  {
    _c0t_print__1(c0_string_fromliteral("All tests passed. \n"), c0_string_fromliteral("main (mm_helper_test.c0: 18.5-18.35)"));
  }
  _c0t__result = 0;
  return _c0t__result;
}
long map_length = 1029;
const char* source_map[1029] = {
  [9] = "<unknown location>",
  [15] = "<unknown location>",
  [21] = "<unknown location>",
  [27] = "<unknown location>",
  [33] = "<unknown location>",
  [39] = "<unknown location>",
  [46] = "<unknown location>",
  [54] = "/afs/andrew/course/15/122/lib/conio.h0: 14.16-14.21",
  [55] = "/afs/andrew/course/15/122/lib/conio.h0: 14.6-14.22",
  [56] = "<unknown location>",
  [67] = "<unknown location>",
  [69] = "/afs/andrew/course/15/122/lib/util.h0: 9.6-9.27",
  [76] = "<unknown location>",
  [78] = "/afs/andrew/course/15/122/lib/util.h0: 11.6-11.36",
  [85] = "<unknown location>",
  [87] = "/afs/andrew/course/15/122/lib/util.h0: 13.6-13.37",
  [94] = "/afs/andrew/course/15/122/lib/util.h0: 17.19-17.28",
  [95] = "/afs/andrew/course/15/122/lib/util.h0: 17.6-17.29",
  [96] = "<unknown location>",
  [98] = "/afs/andrew/course/15/122/lib/util.h0: 18.6-18.27",
  [99] = "/afs/andrew/course/15/122/lib/util.h0: 19.6-19.42",
  [106] = "<unknown location>",
  [108] = "/afs/andrew/course/15/122/lib/util.h0: 23.6-23.43",
  [109] = "/afs/andrew/course/15/122/lib/util.h0: 24.6-24.43",
  [116] = "<unknown location>",
  [118] = "/afs/andrew/course/15/122/lib/util.h0: 28.6-28.43",
  [119] = "/afs/andrew/course/15/122/lib/util.h0: 29.6-29.43",
  [129] = "<unknown location>",
  [139] = "/afs/andrew/course/15/122/lib/string.h0: 19.33-19.49",
  [144] = "/afs/andrew/course/15/122/lib/string.h0: 19.6-19.50",
  [145] = "<unknown location>",
  [153] = "<unknown location>",
  [155] = "/afs/andrew/course/15/122/lib/string.h0: 23.14-23.36",
  [156] = "/afs/andrew/course/15/122/lib/string.h0: 24.19-24.35",
  [157] = "/afs/andrew/course/15/122/lib/string.h0: 24.38-24.54",
  [158] = "/afs/andrew/course/15/122/lib/string.h0: 23.6-24.55",
  [167] = "/afs/andrew/course/15/122/lib/string.h0: 31.52-31.68",
  [172] = "/afs/andrew/course/15/122/lib/string.h0: 31.6-31.69",
  [173] = "<unknown location>",
  [175] = "/afs/andrew/course/15/122/lib/string.h0: 32.14-32.36",
  [176] = "/afs/andrew/course/15/122/lib/string.h0: 32.6-32.52",
  [183] = "<unknown location>",
  [191] = "<unknown location>",
  [193] = "/afs/andrew/course/15/122/lib/string.h0: 37.6-37.44",
  [200] = "<unknown location>",
  [208] = "<unknown location>",
  [216] = "/afs/andrew/course/15/122/lib/string.h0: 43.6-43.25",
  [217] = "<unknown location>",
  [219] = "/afs/andrew/course/15/122/lib/string.h0: 44.14-44.36",
  [220] = "/afs/andrew/course/15/122/lib/string.h0: 44.6-44.42",
  [221] = "/afs/andrew/course/15/122/lib/string.h0: 45.14-45.39",
  [222] = "/afs/andrew/course/15/122/lib/string.h0: 45.6-45.45",
  [229] = "<unknown location>",
  [237] = "/afs/andrew/course/15/122/lib/string.h0: 52.6-52.41",
  [238] = "<unknown location>",
  [246] = "<unknown location>",
  [248] = "/afs/andrew/course/15/122/lib/string.h0: 56.34-56.50",
  [249] = "/afs/andrew/course/15/122/lib/string.h0: 56.6-56.55",
  [250] = "/afs/andrew/course/15/122/lib/string.h0: 57.41-57.57",
  [251] = "/afs/andrew/course/15/122/lib/string.h0: 57.14-57.62",
  [252] = "/afs/andrew/course/15/122/lib/string.h0: 57.6-57.63",
  [259] = "/afs/andrew/course/15/122/lib/string.h0: 62.15-62.47",
  [260] = "/afs/andrew/course/15/122/lib/string.h0: 62.6-62.48",
  [261] = "<unknown location>",
  [263] = "/afs/andrew/course/15/122/lib/string.h0: 63.14-63.36",
  [264] = "/afs/andrew/course/15/122/lib/string.h0: 63.6-63.55",
  [271] = "<unknown location>",
  [273] = "/afs/andrew/course/15/122/lib/string.h0: 67.6-67.45",
  [280] = "/afs/andrew/course/15/122/lib/string.h0: 69.6-69.34",
  [281] = "<unknown location>",
  [308] = "/afs/andrew/course/15/122/lib/util.c0: 13.4-13.41",
  [309] = "/afs/andrew/course/15/122/lib/util.c0: 14.4-14.41",
  [316] = "/afs/andrew/course/15/122/lib/util.c0: 21.4-21.41",
  [317] = "/afs/andrew/course/15/122/lib/util.c0: 22.4-22.41",
  [323] = "/afs/andrew/course/15/122/lib/util.c0: 29.17-29.26",
  [324] = "/afs/andrew/course/15/122/lib/util.c0: 29.4-29.27",
  [326] = "/afs/andrew/course/15/122/lib/util.c0: 30.4-30.25",
  [332] = "/afs/andrew/course/15/122/lib/util.c0: 37.4-37.30",
  [334] = "/afs/andrew/course/15/122/lib/util.c0: 40.21-40.34",
  [335] = "/afs/andrew/course/15/122/lib/util.c0: 40.12-40.39",
  [340] = "/afs/andrew/course/15/122/lib/util.c0: 42.21-42.34",
  [341] = "/afs/andrew/course/15/122/lib/util.c0: 42.12-42.44",
  [353] = "/afs/andrew/course/15/122/lib/util.c0: 51.18-51.28",
  [358] = "/afs/andrew/course/15/122/lib/util.c0: 53.3-53.12",
  [359] = "/afs/andrew/course/15/122/lib/util.c0: 53.3-53.19",
  [363] = "/afs/andrew/course/15/122/lib/util.c0: 55.8-55.45",
  [367] = "/afs/andrew/course/15/122/lib/util.c0: 57.7-57.20",
  [368] = "/afs/andrew/course/15/122/lib/util.c0: 57.23-57.43",
  [369] = "/afs/andrew/course/15/122/lib/util.c0: 57.7-57.43",
  [378] = "/afs/andrew/course/15/122/lib/util.c0: 60.10-60.34",
  [380] = "/afs/andrew/course/15/122/lib/util.c0: 49.12-49.34",
  [381] = "/afs/andrew/course/15/122/lib/util.c0: 49.40-49.50",
  [382] = "/afs/andrew/course/15/122/lib/util.c0: 49.4-49.51",
  [401] = "mm_helper.c0: 31.12-31.27",
  [409] = "mm_helper.c0: 37.4-37.25",
  [410] = "mm_helper.c0: 38.23-38.38",
  [411] = "mm_helper.c0: 38.4-38.39",
  [433] = "mm_helper.c0: 62.9-62.20",
  [438] = "mm_helper.c0: 60.13-60.30",
  [439] = "mm_helper.c0: 60.4-60.31",
  [446] = "mm_helper.c0: 69.12-69.29",
  [447] = "mm_helper.c0: 69.4-69.30",
  [454] = "mm_helper.c0: 78.16-78.28",
  [456] = "mm_helper.c0: 75.12-75.29",
  [457] = "mm_helper.c0: 75.4-75.44",
  [460] = "mm_helper.c0: 80.16-80.27",
  [462] = "mm_helper.c0: 75.12-75.29",
  [463] = "mm_helper.c0: 75.4-75.44",
  [470] = "mm_helper.c0: 86.40-86.51",
  [471] = "mm_helper.c0: 86.40-86.63",
  [472] = "mm_helper.c0: 86.25-86.64",
  [479] = "mm_helper.c0: 90.40-90.51",
  [480] = "mm_helper.c0: 90.40-90.63",
  [481] = "mm_helper.c0: 90.25-90.64",
  [487] = "mm_helper.c0: 96.22-96.59",
  [489] = "mm_helper.c0: 97.5-97.16",
  [491] = "mm_helper.c0: 97.5-97.28",
  [492] = "mm_helper.c0: 97.45-97.56",
  [493] = "mm_helper.c0: 97.45-97.68",
  [494] = "mm_helper.c0: 97.31-97.81",
  [495] = "mm_helper.c0: 97.5-97.81",
  [496] = "mm_helper.c0: 98.5-98.16",
  [498] = "mm_helper.c0: 98.5-98.28",
  [499] = "mm_helper.c0: 98.45-98.56",
  [500] = "mm_helper.c0: 98.45-98.68",
  [501] = "mm_helper.c0: 98.31-98.81",
  [502] = "mm_helper.c0: 98.5-98.81",
  [524] = "mm_helper.c0: 117.12-117.34",
  [525] = "mm_helper.c0: 117.4-117.35",
  [531] = "mm_helper.c0: 125.9-125.25",
  [536] = "mm_helper.c0: 123.13-123.35",
  [537] = "mm_helper.c0: 123.4-123.36",
  [544] = "mm_helper.c0: 132.12-132.34",
  [545] = "mm_helper.c0: 132.4-132.35",
  [551] = "mm_helper.c0: 140.9-140.25",
  [556] = "mm_helper.c0: 138.13-138.35",
  [557] = "mm_helper.c0: 138.4-138.36",
  [564] = "mm_helper.c0: 150.16-150.33",
  [566] = "mm_helper.c0: 147.12-147.34",
  [567] = "mm_helper.c0: 147.4-147.49",
  [570] = "mm_helper.c0: 152.16-152.32",
  [572] = "mm_helper.c0: 147.12-147.34",
  [573] = "mm_helper.c0: 147.4-147.49",
  [579] = "mm_helper.c0: 159.22-159.59",
  [581] = "mm_helper.c0: 160.5-160.16",
  [583] = "mm_helper.c0: 160.5-160.28",
  [584] = "mm_helper.c0: 160.40-160.51",
  [585] = "mm_helper.c0: 160.40-160.63",
  [586] = "mm_helper.c0: 160.31-160.76",
  [587] = "mm_helper.c0: 160.5-160.76",
  [588] = "mm_helper.c0: 161.5-161.16",
  [590] = "mm_helper.c0: 161.5-161.28",
  [591] = "mm_helper.c0: 161.40-161.51",
  [592] = "mm_helper.c0: 161.40-161.63",
  [593] = "mm_helper.c0: 161.31-161.76",
  [594] = "mm_helper.c0: 161.5-161.76",
  [600] = "mm_helper.c0: 168.16-168.33",
  [602] = "mm_helper.c0: 165.12-165.34",
  [603] = "mm_helper.c0: 165.4-165.49",
  [606] = "mm_helper.c0: 170.16-170.32",
  [608] = "mm_helper.c0: 165.12-165.34",
  [609] = "mm_helper.c0: 165.4-165.49",
  [615] = "mm_helper.c0: 177.22-177.59",
  [617] = "mm_helper.c0: 178.5-178.16",
  [619] = "mm_helper.c0: 178.5-178.28",
  [620] = "mm_helper.c0: 178.40-178.51",
  [621] = "mm_helper.c0: 178.40-178.63",
  [622] = "mm_helper.c0: 178.31-178.76",
  [623] = "mm_helper.c0: 178.5-178.76",
  [624] = "mm_helper.c0: 179.5-179.16",
  [626] = "mm_helper.c0: 179.5-179.28",
  [627] = "mm_helper.c0: 179.40-179.51",
  [628] = "mm_helper.c0: 179.40-179.63",
  [629] = "mm_helper.c0: 179.31-179.76",
  [630] = "mm_helper.c0: 179.5-179.76",
  [635] = "mm_helper.c0: 183.21-183.36",
  [636] = "mm_helper.c0: 183.4-183.37",
  [638] = "mm_helper.c0: 191.9-191.37",
  [640] = "mm_helper.c0: 192.9-192.32",
  [642] = "mm_helper.c0: 193.9-193.32",
  [645] = "mm_helper.c0: 184.12-184.35",
  [646] = "mm_helper.c0: 184.4-184.44",
  [647] = "mm_helper.c0: 185.12-185.30",
  [648] = "mm_helper.c0: 185.4-185.31",
  [649] = "mm_helper.c0: 186.12-186.29",
  [650] = "mm_helper.c0: 186.4-186.44",
  [651] = "mm_helper.c0: 187.12-187.34",
  [652] = "mm_helper.c0: 187.4-187.49",
  [653] = "mm_helper.c0: 188.12-188.34",
  [654] = "mm_helper.c0: 188.4-188.49",
  [660] = "mm_helper.c0: 198.21-198.36",
  [661] = "mm_helper.c0: 198.4-198.37",
  [663] = "mm_helper.c0: 206.9-206.37",
  [665] = "mm_helper.c0: 207.9-207.32",
  [667] = "mm_helper.c0: 208.9-208.32",
  [670] = "mm_helper.c0: 199.12-199.35",
  [671] = "mm_helper.c0: 199.4-199.44",
  [672] = "mm_helper.c0: 200.13-200.31",
  [673] = "mm_helper.c0: 200.4-200.32",
  [674] = "mm_helper.c0: 201.12-201.29",
  [675] = "mm_helper.c0: 201.4-201.44",
  [676] = "mm_helper.c0: 202.12-202.34",
  [677] = "mm_helper.c0: 202.4-202.49",
  [678] = "mm_helper.c0: 203.12-203.34",
  [679] = "mm_helper.c0: 203.4-203.49",
  [698] = "mm_helper.c0: 228.12-228.29",
  [699] = "mm_helper.c0: 228.32-228.49",
  [701] = "mm_helper.c0: 226.23-226.41",
  [702] = "mm_helper.c0: 226.4-226.42",
  [708] = "mm_helper.c0: 232.27-232.42",
  [709] = "mm_helper.c0: 232.4-232.47",
  [710] = "mm_helper.c0: 233.27-233.42",
  [711] = "mm_helper.c0: 233.4-233.43",
  [712] = "mm_helper.c0: 234.4-234.41",
  [714] = "mm_helper.c0: 235.12-235.35",
  [715] = "mm_helper.c0: 235.4-235.50",
  [716] = "mm_helper.c0: 236.12-236.35",
  [717] = "mm_helper.c0: 236.4-236.50",
  [722] = "mm_helper.c0: 244.55-244.66",
  [723] = "mm_helper.c0: 244.55-244.78",
  [724] = "mm_helper.c0: 244.40-244.79",
  [726] = "mm_helper.c0: 246.5-246.53",
  [730] = "mm_helper.c0: 252.55-252.66",
  [731] = "mm_helper.c0: 252.55-252.82",
  [732] = "mm_helper.c0: 252.40-252.83",
  [734] = "mm_helper.c0: 254.5-254.53",
  [739] = "mm_helper.c0: 260.9-260.55",
  [741] = "mm_helper.c0: 262.24-262.35",
  [742] = "mm_helper.c0: 262.24-262.47",
  [743] = "mm_helper.c0: 262.9-262.48",
  [744] = "mm_helper.c0: 262.65-262.72",
  [746] = "mm_helper.c0: 263.9-263.55",
  [752] = "mm_helper.c0: 270.26-270.36",
  [753] = "mm_helper.c0: 270.4-270.37",
  [755] = "mm_helper.c0: 276.5-276.19",
  [757] = "mm_helper.c0: 276.5-276.31",
  [758] = "mm_helper.c0: 276.34-276.97",
  [759] = "mm_helper.c0: 276.5-276.97",
  [760] = "mm_helper.c0: 277.5-277.19",
  [762] = "mm_helper.c0: 277.5-277.31",
  [763] = "mm_helper.c0: 277.34-277.97",
  [764] = "mm_helper.c0: 277.5-277.97",
  [765] = "mm_helper.c0: 279.15-279.47",
  [768] = "mm_helper.c0: 280.30-280.44",
  [769] = "mm_helper.c0: 280.30-280.56",
  [770] = "mm_helper.c0: 280.15-280.57",
  [771] = "mm_helper.c0: 280.61-280.76",
  [772] = "mm_helper.c0: 280.8-280.81",
  [775] = "mm_helper.c0: 271.12-271.35",
  [776] = "mm_helper.c0: 271.4-271.50",
  [777] = "mm_helper.c0: 272.12-272.35",
  [778] = "mm_helper.c0: 272.4-272.61",
  [784] = "mm_helper.c0: 286.4-286.22",
  [785] = "mm_helper.c0: 287.21-287.39",
  [786] = "mm_helper.c0: 287.4-287.40",
  [792] = "mm_helper.c0: 294.5-294.15",
  [793] = "mm_helper.c0: 294.5-294.22",
  [795] = "mm_helper.c0: 295.5-295.19",
  [796] = "mm_helper.c0: 295.5-295.30",
  [797] = "mm_helper.c0: 298.15-298.66",
  [800] = "mm_helper.c0: 288.20-288.37",
  [801] = "mm_helper.c0: 288.4-288.47",
  [807] = "mm_helper.c0: 304.5-304.27",
  [809] = "mm_helper.c0: 305.9-305.20",
  [811] = "mm_helper.c0: 306.9-306.33",
  [813] = "mm_helper.c0: 308.9-308.25",
  [815] = "mm_helper.c0: 309.9-309.38",
  [817] = "mm_helper.c0: 311.9-311.25",
  [819] = "mm_helper.c0: 312.9-312.38",
  [824] = "mm_helper.c0: 318.23-318.34",
  [825] = "mm_helper.c0: 318.23-318.46",
  [826] = "mm_helper.c0: 318.13-318.47",
  [827] = "mm_helper.c0: 318.4-318.48",
  [828] = "mm_helper.c0: 320.31-320.42",
  [829] = "mm_helper.c0: 320.31-320.54",
  [830] = "mm_helper.c0: 320.16-320.55",
  [834] = "mm_helper.c0: 323.5-323.49",
  [835] = "mm_helper.c0: 323.5-323.49",
  [836] = "mm_helper.c0: 323.5-323.49",
  [838] = "mm_helper.c0: 324.20-324.31",
  [839] = "mm_helper.c0: 324.20-324.43",
  [840] = "mm_helper.c0: 324.5-324.44",
  [841] = "mm_helper.c0: 327.22-327.33",
  [842] = "mm_helper.c0: 327.22-327.45",
  [843] = "mm_helper.c0: 327.13-327.46",
  [846] = "mm_helper.c0: 328.13-328.33",
  [853] = "mm_helper.c0: 332.13-332.66",
  [854] = "mm_helper.c0: 332.13-332.66",
  [855] = "mm_helper.c0: 332.13-332.66",
  [856] = "mm_helper.c0: 332.43-332.54",
  [857] = "mm_helper.c0: 332.43-332.64",
  [858] = "mm_helper.c0: 332.13-332.66",
  [859] = "mm_helper.c0: 332.13-332.66",
  [868] = "mm_helper.c0: 338.27-338.38",
  [869] = "mm_helper.c0: 338.27-338.50",
  [870] = "mm_helper.c0: 338.12-338.51",
  [873] = "mm_helper.c0: 339.5-339.51",
  [874] = "mm_helper.c0: 339.5-339.51",
  [875] = "mm_helper.c0: 339.5-339.51",
  [877] = "mm_helper.c0: 340.20-340.31",
  [878] = "mm_helper.c0: 340.20-340.43",
  [879] = "mm_helper.c0: 340.5-340.44",
  [884] = "mm_helper.c0: 345.5-345.30",
  [888] = "mm_helper.c0: 347.28-347.35",
  [890] = "mm_helper.c0: 349.9-349.39",
  [891] = "mm_helper.c0: 350.42-350.53",
  [892] = "mm_helper.c0: 350.42-350.69",
  [893] = "mm_helper.c0: 350.27-350.70",
  [899] = "mm_helper.c0: 352.5-352.28",
  [906] = "mm_rw.c0: 9.35-9.52",
  [911] = "mm_rw.c0: 9.4-9.53",
  [912] = "mm_rw.c0: 11.22-11.41",
  [914] = "mm_rw.c0: 12.12-12.26",
  [915] = "mm_rw.c0: 12.12-12.38",
  [923] = "mm_rw.c0: 17.35-17.52",
  [928] = "mm_rw.c0: 17.4-17.53",
  [930] = "mm_rw.c0: 20.22-20.41",
  [932] = "mm_rw.c0: 21.5-21.19",
  [934] = "mm_rw.c0: 21.5-21.31",
  [935] = "mm_rw.c0: 21.5-21.38",
  [937] = "mm_rw.c0: 18.20-18.51",
  [938] = "mm_rw.c0: 18.4-18.52",
  [945] = "mm_rw.c0: 29.35-29.52",
  [950] = "mm_rw.c0: 29.4-29.53",
  [951] = "mm_rw.c0: 30.4-30.44",
  [952] = "mm_rw.c0: 33.20-33.39",
  [954] = "mm_rw.c0: 34.14-34.28",
  [955] = "mm_rw.c0: 34.14-34.40",
  [958] = "mm_rw.c0: 36.10-36.23",
  [961] = "mm_rw.c0: 31.4-31.43",
  [968] = "mm_rw.c0: 42.35-42.52",
  [973] = "mm_rw.c0: 42.4-42.53",
  [974] = "mm_rw.c0: 43.4-43.38",
  [975] = "mm_rw.c0: 44.4-44.44",
  [977] = "mm_rw.c0: 47.22-47.41",
  [980] = "mm_rw.c0: 49.5-49.19",
  [982] = "mm_rw.c0: 49.5-49.31",
  [983] = "mm_rw.c0: 49.35-49.48",
  [984] = "mm_rw.c0: 49.5-49.49",
  [986] = "mm_rw.c0: 45.20-45.66",
  [987] = "mm_rw.c0: 45.4-45.67",
  [1005] = "mm_helper_test.c0: 8.17-8.32",
  [1007] = "mm_helper_test.c0: 9.15-9.59",
  [1009] = "mm_helper_test.c0: 10.5-10.30",
  [1010] = "mm_helper_test.c0: 11.12-11.23",
  [1011] = "mm_helper_test.c0: 11.12-11.26",
  [1012] = "mm_helper_test.c0: 11.5-11.34",
  [1013] = "mm_helper_test.c0: 12.5-12.30",
  [1014] = "mm_helper_test.c0: 13.12-13.23",
  [1015] = "mm_helper_test.c0: 13.12-13.26",
  [1016] = "mm_helper_test.c0: 13.5-13.34",
  [1017] = "mm_helper_test.c0: 14.5-14.39",
  [1018] = "mm_helper_test.c0: 16.12-16.23",
  [1019] = "mm_helper_test.c0: 16.12-16.26",
  [1020] = "mm_helper_test.c0: 16.5-16.39",
  [1021] = "mm_helper_test.c0: 17.5-17.18",
  [1023] = "mm_helper_test.c0: 18.5-18.35"
};
