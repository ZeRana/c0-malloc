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
typedef int _c0_block_t;

int _c0_max_heap_size(c0_string _c0t__caller) {
  int _c0t__result;
  _c0t__result = 65535;
  return _c0t__result;
}

int _c0_max_payload_size(c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_4 = _c0_max_heap_size(c0_string_fromliteral("max_payload_size (mm_helper.c0: 23.12-23.27)"));
  _c0t__result = (_c0t__tmp_4 - 2);
  return _c0t__result;
}

int _c0_get_block_size(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  int _c0t__result;
  _c0t__result = (_c0v_b & 65535);
  cc0_assert((_c0t__result >= 0), c0_string_fromliteral("mm_helper.c0: 28.4-28.25: @ensures annotation failed"));
  int _c0t__tmp_5 = _c0_max_heap_size(c0_string_fromliteral("get_block_size (mm_helper.c0: 29.23-29.38)"));
  cc0_assert((_c0t__result <= _c0t__tmp_5), c0_string_fromliteral("mm_helper.c0: 29.4-29.39: @ensures annotation failed"));
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
  bool _c0t__tmp_8 = _c0_is_alloc(_c0v_b, c0_string_fromliteral("set_free (mm_helper.c0: 53.9-53.20)"));
  if (_c0t__tmp_8) {
    _c0v_b = (_c0v_b ^ 65536);
  }
  _c0t__result = _c0v_b;
  bool _c0t__tmp_9 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("set_free (mm_helper.c0: 51.13-51.30)"));
  cc0_assert(!(_c0t__tmp_9), c0_string_fromliteral("mm_helper.c0: 51.4-51.31: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_alloc(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  _c0t__result = (_c0v_b | 65536);
  bool _c0t__tmp_10 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("set_alloc (mm_helper.c0: 60.12-60.29)"));
  cc0_assert(_c0t__tmp_10, c0_string_fromliteral("mm_helper.c0: 60.4-60.30: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_alloc_bit(_c0_block_t _c0v_b, bool _c0v_is_alloced, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  if (_c0v_is_alloced) {
    int _c0t__tmp_11 = _c0_set_alloc(_c0v_b, c0_string_fromliteral("set_alloc_bit (mm_helper.c0: 69.16-69.28)"));
    _c0t__result = _c0t__tmp_11;
    bool _c0t__tmp_12 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("set_alloc_bit (mm_helper.c0: 66.12-66.29)"));
    cc0_assert((_c0t__tmp_12 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 66.4-66.44: @ensures annotation failed"));
    return _c0t__result;
  } else {
    int _c0t__tmp_13 = _c0_set_free(_c0v_b, c0_string_fromliteral("set_alloc_bit (mm_helper.c0: 71.16-71.27)"));
    _c0t__result = _c0t__tmp_13;
    bool _c0t__tmp_14 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("set_alloc_bit (mm_helper.c0: 66.12-66.29)"));
    cc0_assert((_c0t__tmp_14 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 66.4-66.44: @ensures annotation failed"));
    return _c0t__result;
  }
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
  bool _c0t__tmp_17 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("set_prev_alloc (mm_helper.c0: 91.12-91.34)"));
  cc0_assert(_c0t__tmp_17, c0_string_fromliteral("mm_helper.c0: 91.4-91.35: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_prev_free(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  bool _c0t__tmp_18 = _c0_is_prev_alloc(_c0v_b, c0_string_fromliteral("set_prev_free (mm_helper.c0: 99.9-99.25)"));
  if (_c0t__tmp_18) {
    _c0v_b = (_c0v_b ^ 262144);
  }
  _c0t__result = _c0v_b;
  bool _c0t__tmp_19 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("set_prev_free (mm_helper.c0: 97.13-97.35)"));
  cc0_assert(!(_c0t__tmp_19), c0_string_fromliteral("mm_helper.c0: 97.4-97.36: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_next_alloc(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  _c0t__result = (_c0v_b | 524288);
  bool _c0t__tmp_20 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("set_next_alloc (mm_helper.c0: 106.12-106.34)"));
  cc0_assert(_c0t__tmp_20, c0_string_fromliteral("mm_helper.c0: 106.4-106.35: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_next_free(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  bool _c0t__tmp_21 = _c0_is_next_alloc(_c0v_b, c0_string_fromliteral("set_next_free (mm_helper.c0: 114.9-114.25)"));
  if (_c0t__tmp_21) {
    _c0v_b = (_c0v_b ^ 524288);
  }
  _c0t__result = _c0v_b;
  bool _c0t__tmp_22 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("set_next_free (mm_helper.c0: 112.13-112.35)"));
  cc0_assert(!(_c0t__tmp_22), c0_string_fromliteral("mm_helper.c0: 112.4-112.36: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_prev(_c0_block_t _c0v_b, bool _c0v_is_alloced, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  if (_c0v_is_alloced) {
    int _c0t__tmp_23 = _c0_set_prev_alloc(_c0v_b, c0_string_fromliteral("set_prev (mm_helper.c0: 124.16-124.33)"));
    _c0t__result = _c0t__tmp_23;
    bool _c0t__tmp_24 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("set_prev (mm_helper.c0: 121.12-121.34)"));
    cc0_assert((_c0t__tmp_24 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 121.4-121.49: @ensures annotation failed"));
    return _c0t__result;
  } else {
    int _c0t__tmp_25 = _c0_set_prev_free(_c0v_b, c0_string_fromliteral("set_prev (mm_helper.c0: 126.16-126.32)"));
    _c0t__result = _c0t__tmp_25;
    bool _c0t__tmp_26 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("set_prev (mm_helper.c0: 121.12-121.34)"));
    cc0_assert((_c0t__tmp_26 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 121.4-121.49: @ensures annotation failed"));
    return _c0t__result;
  }
}

_c0_block_t _c0_set_next(_c0_block_t _c0v_b, bool _c0v_is_alloced, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  if (_c0v_is_alloced) {
    int _c0t__tmp_27 = _c0_set_next_alloc(_c0v_b, c0_string_fromliteral("set_next (mm_helper.c0: 134.16-134.33)"));
    _c0t__result = _c0t__tmp_27;
    bool _c0t__tmp_28 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("set_next (mm_helper.c0: 131.12-131.34)"));
    cc0_assert((_c0t__tmp_28 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 131.4-131.49: @ensures annotation failed"));
    return _c0t__result;
  } else {
    int _c0t__tmp_29 = _c0_set_next_free(_c0v_b, c0_string_fromliteral("set_next (mm_helper.c0: 136.16-136.32)"));
    _c0t__result = _c0t__tmp_29;
    bool _c0t__tmp_30 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("set_next (mm_helper.c0: 131.12-131.34)"));
    cc0_assert((_c0t__tmp_30 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 131.4-131.49: @ensures annotation failed"));
    return _c0t__result;
  }
}

_c0_block_t _c0_make_block_header(int _c0v_size, bool _c0v_is_alloced, bool _c0v_prev_alloc, bool _c0v_next_alloc, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  int _c0t__tmp_31 = _c0_max_heap_size(c0_string_fromliteral("make_block_header (mm_helper.c0: 141.21-141.36)"));
  cc0_assert((_c0v_size <= _c0t__tmp_31), c0_string_join(c0_string_fromliteral("mm_helper.c0: 141.4-141.37: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  _c0_block_t _c0v_b = (_c0v_size | 131072);
  int _c0t__tmp_32 = _c0_set_alloc_bit(_c0v_b, _c0v_is_alloced, c0_string_fromliteral("make_block_header (mm_helper.c0: 149.9-149.37)"));
  _c0v_b = _c0t__tmp_32;
  int _c0t__tmp_33 = _c0_set_prev(_c0v_b, _c0v_prev_alloc, c0_string_fromliteral("make_block_header (mm_helper.c0: 150.9-150.32)"));
  _c0v_b = _c0t__tmp_33;
  int _c0t__tmp_34 = _c0_set_next(_c0v_b, _c0v_next_alloc, c0_string_fromliteral("make_block_header (mm_helper.c0: 151.9-151.32)"));
  _c0v_b = _c0t__tmp_34;
  _c0t__result = _c0v_b;
  int _c0t__tmp_35 = _c0_get_block_size(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 142.12-142.35)"));
  cc0_assert((_c0t__tmp_35 == _c0v_size), c0_string_fromliteral("mm_helper.c0: 142.4-142.44: @ensures annotation failed"));
  bool _c0t__tmp_36 = _c0_is_header(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 143.12-143.30)"));
  cc0_assert(_c0t__tmp_36, c0_string_fromliteral("mm_helper.c0: 143.4-143.31: @ensures annotation failed"));
  bool _c0t__tmp_37 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 144.12-144.29)"));
  cc0_assert((_c0t__tmp_37 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 144.4-144.44: @ensures annotation failed"));
  bool _c0t__tmp_38 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 145.12-145.34)"));
  cc0_assert((_c0t__tmp_38 == _c0v_prev_alloc), c0_string_fromliteral("mm_helper.c0: 145.4-145.49: @ensures annotation failed"));
  bool _c0t__tmp_39 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 146.12-146.34)"));
  cc0_assert((_c0t__tmp_39 == _c0v_next_alloc), c0_string_fromliteral("mm_helper.c0: 146.4-146.49: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_make_block_footer(int _c0v_size, bool _c0v_is_alloced, bool _c0v_prev_alloc, bool _c0v_next_alloc, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  int _c0t__tmp_40 = _c0_max_heap_size(c0_string_fromliteral("make_block_footer (mm_helper.c0: 156.21-156.36)"));
  cc0_assert((_c0v_size <= _c0t__tmp_40), c0_string_join(c0_string_fromliteral("mm_helper.c0: 156.4-156.37: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  _c0_block_t _c0v_b = _c0v_size;
  int _c0t__tmp_41 = _c0_set_alloc_bit(_c0v_b, _c0v_is_alloced, c0_string_fromliteral("make_block_footer (mm_helper.c0: 164.9-164.37)"));
  _c0v_b = _c0t__tmp_41;
  int _c0t__tmp_42 = _c0_set_prev(_c0v_b, _c0v_prev_alloc, c0_string_fromliteral("make_block_footer (mm_helper.c0: 165.9-165.32)"));
  _c0v_b = _c0t__tmp_42;
  int _c0t__tmp_43 = _c0_set_next(_c0v_b, _c0v_next_alloc, c0_string_fromliteral("make_block_footer (mm_helper.c0: 166.9-166.32)"));
  _c0v_b = _c0t__tmp_43;
  _c0t__result = _c0v_b;
  int _c0t__tmp_44 = _c0_get_block_size(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 157.12-157.35)"));
  cc0_assert((_c0t__tmp_44 == _c0v_size), c0_string_fromliteral("mm_helper.c0: 157.4-157.44: @ensures annotation failed"));
  bool _c0t__tmp_45 = _c0_is_header(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 158.13-158.31)"));
  cc0_assert(!(_c0t__tmp_45), c0_string_fromliteral("mm_helper.c0: 158.4-158.32: @ensures annotation failed"));
  bool _c0t__tmp_46 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 159.12-159.29)"));
  cc0_assert((_c0t__tmp_46 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 159.4-159.44: @ensures annotation failed"));
  bool _c0t__tmp_47 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 160.12-160.34)"));
  cc0_assert((_c0t__tmp_47 == _c0v_prev_alloc), c0_string_fromliteral("mm_helper.c0: 160.4-160.49: @ensures annotation failed"));
  bool _c0t__tmp_48 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 161.12-161.34)"));
  cc0_assert((_c0t__tmp_48 == _c0v_next_alloc), c0_string_fromliteral("mm_helper.c0: 161.4-161.49: @ensures annotation failed"));
  return _c0t__result;
}
struct _c0_heap {
  int _c0_size;
  cc0_array(int) _c0_heap_mem;
};
typedef struct _c0_heap _c0_heap_t;
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
  int _c0t__tmp_49 = _c0_get_footer_pos(_c0v_o, c0_string_fromliteral("get_obj_size (mm_helper.c0: 192.12-192.29)"));
  int _c0t__tmp_50 = _c0_get_header_pos(_c0v_o, c0_string_fromliteral("get_obj_size (mm_helper.c0: 192.32-192.49)"));
  _c0t__result = ((_c0t__tmp_49 - _c0t__tmp_50) - 1);
  int _c0t__tmp_51 = _c0_max_payload_size(c0_string_fromliteral("get_obj_size (mm_helper.c0: 190.23-190.41)"));
  cc0_assert((_c0t__result <= _c0t__tmp_51), c0_string_fromliteral("mm_helper.c0: 190.4-190.42: @ensures annotation failed"));
  return _c0t__result;
}

_c0_obj_t _c0_make_obj(int _c0v_header_pos, int _c0v_footer_pos, c0_string _c0t__caller) {
  _c0_obj_t _c0t__result;
  int _c0t__tmp_52 = _c0_max_heap_size(c0_string_fromliteral("make_obj (mm_helper.c0: 196.27-196.42)"));
  cc0_assert((_c0v_header_pos <= (_c0t__tmp_52 - 2)), c0_string_join(c0_string_fromliteral("mm_helper.c0: 196.4-196.47: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_53 = _c0_max_heap_size(c0_string_fromliteral("make_obj (mm_helper.c0: 197.27-197.42)"));
  cc0_assert((_c0v_footer_pos <= _c0t__tmp_53), c0_string_join(c0_string_fromliteral("mm_helper.c0: 197.4-197.43: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  cc0_assert((_c0v_header_pos < (_c0v_footer_pos + 1)), c0_string_join(c0_string_fromliteral("mm_helper.c0: 198.4-198.41: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  _c0t__result = ((_c0v_footer_pos << 16) | _c0v_header_pos);
  int _c0t__tmp_54 = _c0_get_header_pos(_c0t__result, c0_string_fromliteral("make_obj (mm_helper.c0: 199.12-199.35)"));
  cc0_assert((_c0t__tmp_54 == _c0v_header_pos), c0_string_fromliteral("mm_helper.c0: 199.4-199.50: @ensures annotation failed"));
  int _c0t__tmp_55 = _c0_get_footer_pos(_c0t__result, c0_string_fromliteral("make_obj (mm_helper.c0: 200.12-200.35)"));
  cc0_assert((_c0t__tmp_55 == _c0v_footer_pos), c0_string_fromliteral("mm_helper.c0: 200.4-200.50: @ensures annotation failed"));
  return _c0t__result;
}

_c0_obj_t _c0_make_full_block(_c0_heap_t* _c0v_heap, int _c0v_header_pos, int _c0v_size, bool _c0v_is_alloced, bool _c0v_prev_alloc, bool _c0v_next_alloc, c0_string _c0t__caller) {
  _c0_obj_t _c0t__result;
  int _c0t__tmp_56 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_size;
  cc0_assert((_c0v_header_pos < _c0t__tmp_56), c0_string_join(c0_string_fromliteral("mm_helper.c0: 208.4-208.37: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0v_footer_pos = ((_c0v_header_pos + _c0v_size) + 1);
  cc0_array(int) _c0t__tmp_57 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int* _c0t__tmp_58;
  _c0t__tmp_58 = &(cc0_array_sub(int,_c0t__tmp_57,_c0v_header_pos));
  int _c0t__tmp_59 = _c0_make_block_header(_c0v_size, _c0v_is_alloced, _c0v_prev_alloc, _c0v_next_alloc, c0_string_fromliteral("make_full_block (mm_helper.c0: 214.34-214.93)"));
  cc0_deref(int, _c0t__tmp_58) = _c0t__tmp_59;
  cc0_array(int) _c0t__tmp_60 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int* _c0t__tmp_61;
  _c0t__tmp_61 = &(cc0_array_sub(int,_c0t__tmp_60,_c0v_footer_pos));
  int _c0t__tmp_62 = _c0_make_block_footer(_c0v_size, _c0v_is_alloced, _c0v_prev_alloc, _c0v_next_alloc, c0_string_fromliteral("make_full_block (mm_helper.c0: 215.34-215.93)"));
  cc0_deref(int, _c0t__tmp_61) = _c0t__tmp_62;
  int _c0t__tmp_63 = _c0_make_obj(_c0v_header_pos, _c0v_footer_pos, c0_string_fromliteral("make_full_block (mm_helper.c0: 217.12-217.44)"));
  _c0t__result = _c0t__tmp_63;
  int _c0t__tmp_64 = _c0_get_header_pos(_c0t__result, c0_string_fromliteral("make_full_block (mm_helper.c0: 209.12-209.35)"));
  cc0_assert((_c0t__tmp_64 == _c0v_header_pos), c0_string_fromliteral("mm_helper.c0: 209.4-209.50: @ensures annotation failed"));
  int _c0t__tmp_65 = _c0_get_footer_pos(_c0t__result, c0_string_fromliteral("make_full_block (mm_helper.c0: 210.12-210.35)"));
  cc0_assert((_c0t__tmp_65 == ((_c0v_header_pos + _c0v_size) + 1)), c0_string_fromliteral("mm_helper.c0: 210.4-210.61: @ensures annotation failed"));
  return _c0t__result;
}

_c0_heap_t* _c0_heap_init(int _c0v_size, c0_string _c0t__caller) {
  _c0_heap_t* _c0t__result;
  cc0_assert((_c0v_size > 0), c0_string_join(c0_string_fromliteral("mm_helper.c0: 222.4-222.22: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_66 = _c0_max_payload_size(c0_string_fromliteral("heap_init (mm_helper.c0: 223.21-223.39)"));
  cc0_assert((_c0v_size <= _c0t__tmp_66), c0_string_join(c0_string_fromliteral("mm_helper.c0: 223.4-223.40: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  struct _c0_heap* _c0t__tmp_67 = cc0_alloc(_c0_heap_t);
  _c0_heap_t* _c0v_heap = _c0t__tmp_67;
  cc0_array(int) _c0t__tmp_68 = cc0_alloc_array(int,_c0v_size);
  cc0_array(int) _c0v_heap_mem = _c0t__tmp_68;
  int* _c0t__tmp_69;
  _c0t__tmp_69 = &((cc0_deref(struct _c0_heap, _c0v_heap))._c0_size);
  cc0_deref(int, _c0t__tmp_69) = _c0v_size;
  cc0_array(int)* _c0t__tmp_70;
  _c0t__tmp_70 = &((cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem);
  cc0_deref(cc0_array(int), _c0t__tmp_70) = _c0v_heap_mem;
  int _c0t__tmp_71 = _c0_make_full_block(_c0v_heap, 0, (_c0v_size - 2), false, true, true, c0_string_fromliteral("heap_init (mm_helper.c0: 234.15-234.66)"));
  _c0_obj_t _c0v_b = _c0t__tmp_71;
  _c0t__result = _c0v_heap;
  cc0_array(int) _c0t__tmp_72 = (cc0_deref(struct _c0_heap, _c0t__result))._c0_heap_mem;
  cc0_assert((c0_array_length(_c0t__tmp_72) == _c0v_size), c0_string_fromliteral("mm_helper.c0: 224.4-224.47: @ensures annotation failed"));
  return _c0t__result;
}

void _c0_free_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, c0_string _c0t__caller) {
  cc0_array(int) _c0t__tmp_73 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int _c0t__tmp_74 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("free_obj (mm_helper.c0: 242.29-242.48)"));
  int _c0t__tmp_75 = cc0_array_sub(int,_c0t__tmp_73,_c0t__tmp_74);
  _c0_set_free(_c0t__tmp_75, c0_string_fromliteral("free_obj (mm_helper.c0: 242.5-242.50)"));
  cc0_array(int) _c0t__tmp_76 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int _c0t__tmp_77 = _c0_get_footer_pos(_c0v_obj, c0_string_fromliteral("free_obj (mm_helper.c0: 243.29-243.48)"));
  int _c0t__tmp_78 = cc0_array_sub(int,_c0t__tmp_76,_c0t__tmp_77);
  _c0_set_free(_c0t__tmp_78, c0_string_fromliteral("free_obj (mm_helper.c0: 243.5-243.50)"));
}

int _c0_read_from_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, int _c0v_index, c0_string _c0t__caller) {
  int _c0t__result;
  bool _c0t__tmp_80;
  if ((0 <= _c0v_index)) {
    int _c0t__tmp_79 = _c0_get_obj_size(_c0v_obj, c0_string_fromliteral("read_from_obj (mm_rw.c0: 9.35-9.52)"));
    _c0t__tmp_80 = (_c0v_index < _c0t__tmp_79);
  } else {
    _c0t__tmp_80 = false;
  }
  cc0_assert(_c0t__tmp_80, c0_string_join(c0_string_fromliteral("mm_rw.c0: 9.4-9.53: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_81 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("read_from_obj (mm_rw.c0: 11.22-11.41)"));
  int _c0v_real_index = ((_c0t__tmp_81 + _c0v_index) + 1);
  cc0_array(int) _c0t__tmp_82 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int _c0t__tmp_83 = cc0_array_sub(int,_c0t__tmp_82,_c0v_real_index);
  _c0t__result = _c0t__tmp_83;
  return _c0t__result;
}

void _c0_write_to_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, int _c0v_data, int _c0v_index, c0_string _c0t__caller) {
  bool _c0t__tmp_85;
  if ((0 <= _c0v_index)) {
    int _c0t__tmp_84 = _c0_get_obj_size(_c0v_obj, c0_string_fromliteral("write_to_obj (mm_rw.c0: 17.35-17.52)"));
    _c0t__tmp_85 = (_c0v_index < _c0t__tmp_84);
  } else {
    _c0t__tmp_85 = false;
  }
  cc0_assert(_c0t__tmp_85, c0_string_join(c0_string_fromliteral("mm_rw.c0: 17.4-17.53: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  {
    int _c0t__tmp_86 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("write_to_obj (mm_rw.c0: 20.22-20.41)"));
    int _c0v_real_index = ((_c0t__tmp_86 + _c0v_index) + 1);
    cc0_array(int) _c0t__tmp_87 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
    int* _c0t__tmp_88;
    _c0t__tmp_88 = &(cc0_array_sub(int,_c0t__tmp_87,_c0v_real_index));
    cc0_deref(int, _c0t__tmp_88) = _c0v_data;
  }
  int _c0t__tmp_89 = _c0_read_from_obj(_c0v_heap, _c0v_obj, _c0v_index, c0_string_fromliteral("write_to_obj (mm_rw.c0: 18.20-18.51)"));
  cc0_assert((_c0v_data == _c0t__tmp_89), c0_string_fromliteral("mm_rw.c0: 18.4-18.52: @ensures annotation failed"));
}

int _c0_read_byte_from_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, int _c0v_index, int _c0v_byte_num, c0_string _c0t__caller) {
  int _c0t__result;
  bool _c0t__tmp_91;
  if ((0 <= _c0v_index)) {
    int _c0t__tmp_90 = _c0_get_obj_size(_c0v_obj, c0_string_fromliteral("read_byte_from_obj (mm_rw.c0: 29.35-29.52)"));
    _c0t__tmp_91 = (_c0v_index < _c0t__tmp_90);
  } else {
    _c0t__tmp_91 = false;
  }
  cc0_assert(_c0t__tmp_91, c0_string_join(c0_string_fromliteral("mm_rw.c0: 29.4-29.53: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  cc0_assert(((0 <= _c0v_byte_num) && (_c0v_byte_num <= 3)), c0_string_join(c0_string_fromliteral("mm_rw.c0: 30.4-30.44: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_93 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("read_byte_from_obj (mm_rw.c0: 33.20-33.39)"));
  int _c0v_real_index = ((_c0t__tmp_93 + _c0v_index) + 1);
  cc0_array(int) _c0t__tmp_94 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int _c0t__tmp_95 = cc0_array_sub(int,_c0t__tmp_94,_c0v_real_index);
  int _c0v_data = _c0t__tmp_95;
  int _c0v_shift = ((3 - _c0v_byte_num) * 8);
  int _c0t__tmp_96 = c0_sar(_c0v_data,_c0v_shift);
  _c0v_data = _c0t__tmp_96;
  _c0t__result = (_c0v_data & 255);
  cc0_assert(((0 <= _c0t__result) && (_c0t__result <= 255)), c0_string_fromliteral("mm_rw.c0: 31.4-31.43: @ensures annotation failed"));
  return _c0t__result;
}

void _c0_write_byte_to_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, int _c0v_data, int _c0v_index, int _c0v_byte_num, c0_string _c0t__caller) {
  bool _c0t__tmp_99;
  if ((0 <= _c0v_index)) {
    int _c0t__tmp_98 = _c0_get_obj_size(_c0v_obj, c0_string_fromliteral("write_byte_to_obj (mm_rw.c0: 42.35-42.52)"));
    _c0t__tmp_99 = (_c0v_index < _c0t__tmp_98);
  } else {
    _c0t__tmp_99 = false;
  }
  cc0_assert(_c0t__tmp_99, c0_string_join(c0_string_fromliteral("mm_rw.c0: 42.4-42.53: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  cc0_assert(((0 <= _c0v_data) && (_c0v_data <= 255)), c0_string_join(c0_string_fromliteral("mm_rw.c0: 43.4-43.38: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  cc0_assert(((0 <= _c0v_byte_num) && (_c0v_byte_num <= 3)), c0_string_join(c0_string_fromliteral("mm_rw.c0: 44.4-44.44: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  {
    int _c0t__tmp_102 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("write_byte_to_obj (mm_rw.c0: 47.22-47.41)"));
    int _c0v_real_index = ((_c0t__tmp_102 + _c0v_index) + 1);
    int _c0v_shift = ((3 - _c0v_byte_num) * 8);
    cc0_array(int) _c0t__tmp_103 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
    int* _c0t__tmp_104;
    _c0t__tmp_104 = &(cc0_array_sub(int,_c0t__tmp_103,_c0v_real_index));
    int _c0t__tmp_105 = c0_sal(_c0v_data,_c0v_shift);
    cc0_deref(int, _c0t__tmp_104) = _c0t__tmp_105;
  }
  int _c0t__tmp_106 = _c0_read_byte_from_obj(_c0v_heap, _c0v_obj, _c0v_index, _c0v_byte_num, c0_string_fromliteral("write_byte_to_obj (mm_rw.c0: 45.20-45.66)"));
  cc0_assert((_c0v_data == _c0t__tmp_106), c0_string_fromliteral("mm_rw.c0: 45.4-45.67: @ensures annotation failed"));
}

//#use <string>
extern int string_length(c0_string _c0v_s);

int _c0t_string_length__1(c0_string _c0v_s, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_107 = string_length(_c0v_s);
  _c0t__result = _c0t__tmp_107;
  return _c0t__result;
}
extern char string_charat(c0_string _c0v_s, int _c0v_idx);

char _c0t_string_charat__1(c0_string _c0v_s, int _c0v_idx, c0_string _c0t__caller) {
  char _c0t__result;
  bool _c0t__tmp_109;
  if ((0 <= _c0v_idx)) {
    int _c0t__tmp_108 = _c0t_string_length__1(_c0v_s, c0_string_fromliteral("string_charat__1 (/afs/andrew/course/15/122/lib/string.h0: 19.33-19.49)"));
    _c0t__tmp_109 = (_c0v_idx < _c0t__tmp_108);
  } else {
    _c0t__tmp_109 = false;
  }
  cc0_assert(_c0t__tmp_109, c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 19.6-19.50: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  char _c0t__tmp_110 = string_charat(_c0v_s, _c0v_idx);
  _c0t__result = _c0t__tmp_110;
  return _c0t__result;
}
extern c0_string string_join(c0_string _c0v_a, c0_string _c0v_b);

c0_string _c0t_string_join__1(c0_string _c0v_a, c0_string _c0v_b, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_111 = string_join(_c0v_a, _c0v_b);
  _c0t__result = _c0t__tmp_111;
  int _c0t__tmp_112 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_join__1 (/afs/andrew/course/15/122/lib/string.h0: 23.14-23.36)"));
  int _c0t__tmp_113 = _c0t_string_length__1(_c0v_a, c0_string_fromliteral("string_join__1 (/afs/andrew/course/15/122/lib/string.h0: 24.19-24.35)"));
  int _c0t__tmp_114 = _c0t_string_length__1(_c0v_b, c0_string_fromliteral("string_join__1 (/afs/andrew/course/15/122/lib/string.h0: 24.38-24.54)"));
  cc0_assert((_c0t__tmp_112 == (_c0t__tmp_113 + _c0t__tmp_114)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 23.6-24.55: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_sub(c0_string _c0v_a, int _c0v_start, int _c0v_end);

c0_string _c0t_string_sub__1(c0_string _c0v_a, int _c0v_start, int _c0v_end, c0_string _c0t__caller) {
  c0_string _c0t__result;
  bool _c0t__tmp_117;
  if (((0 <= _c0v_start) && (_c0v_start <= _c0v_end))) {
    int _c0t__tmp_116 = _c0t_string_length__1(_c0v_a, c0_string_fromliteral("string_sub__1 (/afs/andrew/course/15/122/lib/string.h0: 31.52-31.68)"));
    _c0t__tmp_117 = (_c0v_end <= _c0t__tmp_116);
  } else {
    _c0t__tmp_117 = false;
  }
  cc0_assert(_c0t__tmp_117, c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 31.6-31.69: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  c0_string _c0t__tmp_118 = string_sub(_c0v_a, _c0v_start, _c0v_end);
  _c0t__result = _c0t__tmp_118;
  int _c0t__tmp_119 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_sub__1 (/afs/andrew/course/15/122/lib/string.h0: 32.14-32.36)"));
  cc0_assert((_c0t__tmp_119 == (_c0v_end - _c0v_start)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 32.6-32.52: @ensures annotation failed"));
  return _c0t__result;
}
extern bool string_equal(c0_string _c0v_a, c0_string _c0v_b);

bool _c0t_string_equal__1(c0_string _c0v_a, c0_string _c0v_b, c0_string _c0t__caller) {
  bool _c0t__result;
  bool _c0t__tmp_120 = string_equal(_c0v_a, _c0v_b);
  _c0t__result = _c0t__tmp_120;
  return _c0t__result;
}
extern int string_compare(c0_string _c0v_a, c0_string _c0v_b);

int _c0t_string_compare__1(c0_string _c0v_a, c0_string _c0v_b, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_121 = string_compare(_c0v_a, _c0v_b);
  _c0t__result = _c0t__tmp_121;
  cc0_assert(((-(1) <= _c0t__result) && (_c0t__result <= 1)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 37.6-37.44: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_fromint(int _c0v_i);

c0_string _c0t_string_fromint__1(int _c0v_i, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_123 = string_fromint(_c0v_i);
  _c0t__result = _c0t__tmp_123;
  return _c0t__result;
}
extern c0_string string_frombool(bool _c0v_b);

c0_string _c0t_string_frombool__1(bool _c0v_b, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_124 = string_frombool(_c0v_b);
  _c0t__result = _c0t__tmp_124;
  return _c0t__result;
}
extern c0_string string_fromchar(char _c0v_c);

c0_string _c0t_string_fromchar__1(char _c0v_c, c0_string _c0t__caller) {
  c0_string _c0t__result;
  cc0_assert((_c0v_c != '\000'), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 43.6-43.25: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  c0_string _c0t__tmp_125 = string_fromchar(_c0v_c);
  _c0t__result = _c0t__tmp_125;
  int _c0t__tmp_126 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_fromchar__1 (/afs/andrew/course/15/122/lib/string.h0: 44.14-44.36)"));
  cc0_assert((_c0t__tmp_126 == 1), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 44.6-44.42: @ensures annotation failed"));
  char _c0t__tmp_127 = _c0t_string_charat__1(_c0t__result, 0, c0_string_fromliteral("string_fromchar__1 (/afs/andrew/course/15/122/lib/string.h0: 45.14-45.39)"));
  cc0_assert((_c0t__tmp_127 == _c0v_c), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 45.6-45.45: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_tolower(c0_string _c0v_s);

c0_string _c0t_string_tolower__1(c0_string _c0v_s, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_128 = string_tolower(_c0v_s);
  _c0t__result = _c0t__tmp_128;
  return _c0t__result;
}
extern bool string_terminated(cc0_array(char) _c0v_A, int _c0v_n);

bool _c0t_string_terminated__1(cc0_array(char) _c0v_A, int _c0v_n, c0_string _c0t__caller) {
  bool _c0t__result;
  cc0_assert(((0 <= _c0v_n) && (_c0v_n <= c0_array_length(_c0v_A))), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 52.6-52.41: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  bool _c0t__tmp_130 = string_terminated(_c0v_A, _c0v_n);
  _c0t__result = _c0t__tmp_130;
  return _c0t__result;
}
extern cc0_array(char) string_to_chararray(c0_string _c0v_s);

cc0_array(char) _c0t_string_to_chararray__1(c0_string _c0v_s, c0_string _c0t__caller) {
  cc0_array(char) _c0t__result;
  cc0_array(char) _c0t__tmp_131 = string_to_chararray(_c0v_s);
  _c0t__result = _c0t__tmp_131;
  int _c0t__tmp_132 = _c0t_string_length__1(_c0v_s, c0_string_fromliteral("string_to_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 56.34-56.50)"));
  cc0_assert((c0_array_length(_c0t__result) >= (_c0t__tmp_132 + 1)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 56.6-56.55: @ensures annotation failed"));
  int _c0t__tmp_133 = _c0t_string_length__1(_c0v_s, c0_string_fromliteral("string_to_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 57.41-57.57)"));
  bool _c0t__tmp_134 = _c0t_string_terminated__1(_c0t__result, (_c0t__tmp_133 + 1), c0_string_fromliteral("string_to_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 57.14-57.62)"));
  cc0_assert(_c0t__tmp_134, c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 57.6-57.63: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_from_chararray(cc0_array(char) _c0v_A);

c0_string _c0t_string_from_chararray__1(cc0_array(char) _c0v_A, c0_string _c0t__caller) {
  c0_string _c0t__result;
  bool _c0t__tmp_135 = _c0t_string_terminated__1(_c0v_A, c0_array_length(_c0v_A), c0_string_fromliteral("string_from_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 62.15-62.47)"));
  cc0_assert(_c0t__tmp_135, c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 62.6-62.48: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  c0_string _c0t__tmp_136 = string_from_chararray(_c0v_A);
  _c0t__result = _c0t__tmp_136;
  int _c0t__tmp_137 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_from_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 63.14-63.36)"));
  cc0_assert(((_c0t__tmp_137 + 1) <= c0_array_length(_c0v_A)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 63.6-63.55: @ensures annotation failed"));
  return _c0t__result;
}
extern int char_ord(char _c0v_c);

int _c0t_char_ord__1(char _c0v_c, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_138 = char_ord(_c0v_c);
  _c0t__result = _c0t__tmp_138;
  cc0_assert(((0 <= _c0t__result) && (_c0t__result <= 127)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 67.6-67.45: @ensures annotation failed"));
  return _c0t__result;
}
extern char char_chr(int _c0v_n);

char _c0t_char_chr__1(int _c0v_n, c0_string _c0t__caller) {
  char _c0t__result;
  cc0_assert(((0 <= _c0v_n) && (_c0v_n <= 127)), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 69.6-69.34: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  char _c0t__tmp_141 = char_chr(_c0v_n);
  _c0t__result = _c0t__tmp_141;
  return _c0t__result;
}
// end <string>

//#use <conio>
// end <conio>

int _c0_main() {
  c0_string _c0t__caller = c0_string_fromliteral("(program start)");
  int _c0t__result;
  struct _c0_heap* _c0t__tmp_142 = _c0_heap_init(1024, c0_string_fromliteral("main (mm_helper_test.c0: 8.17-8.32)"));
  _c0_heap_t* _c0v_h = _c0t__tmp_142;
  int _c0t__tmp_143 = _c0_make_full_block(_c0v_h, 2, 4, true, false, false, c0_string_fromliteral("main (mm_helper_test.c0: 9.15-9.59)"));
  _c0_obj_t _c0v_o = _c0t__tmp_143;
  _c0_write_to_obj(_c0v_h, _c0v_o, 10, 0, c0_string_fromliteral("main (mm_helper_test.c0: 10.5-10.30)"));
  cc0_array(int) _c0t__tmp_144 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_145 = cc0_array_sub(int,_c0t__tmp_144,3);
  cc0_assert((_c0t__tmp_145 == 10), c0_string_fromliteral("mm_helper_test.c0: 11.5-11.34: assert failed"));
  _c0_write_to_obj(_c0v_h, _c0v_o, 11, 1, c0_string_fromliteral("main (mm_helper_test.c0: 12.5-12.30)"));
  cc0_array(int) _c0t__tmp_146 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_147 = cc0_array_sub(int,_c0t__tmp_146,4);
  cc0_assert((_c0t__tmp_147 == 11), c0_string_fromliteral("mm_helper_test.c0: 13.5-13.34: assert failed"));
  _c0_write_byte_to_obj(_c0v_h, _c0v_o, 1, 2, 1, c0_string_fromliteral("main (mm_helper_test.c0: 14.5-14.39)"));
  {
    _c0t_print__1(c0_string_fromliteral(""), c0_string_fromliteral("main (mm_helper_test.c0: 16.5-16.33)"));
    cc0_array(int) _c0t__tmp_148 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
    int _c0t__tmp_149 = cc0_array_sub(int,_c0t__tmp_148,5);
    _c0t_printint__1(_c0t__tmp_149, c0_string_fromliteral("main (mm_helper_test.c0: 16.5-16.33)"));
    _c0t_print__1(c0_string_fromliteral(""), c0_string_fromliteral("main (mm_helper_test.c0: 16.5-16.33)"));
  }
  cc0_array(int) _c0t__tmp_150 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_151 = cc0_array_sub(int,_c0t__tmp_150,5);
  cc0_assert((_c0t__tmp_151 == 65536), c0_string_fromliteral("mm_helper_test.c0: 17.5-17.39: assert failed"));
  {
    _c0t_print__1(c0_string_fromliteral("All tests passed. \n"), c0_string_fromliteral("main (mm_helper_test.c0: 18.5-18.35)"));
  }
  _c0t__result = 0;
  return _c0t__result;
}
long map_length = 666;
const char* source_map[666] = {
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
  [71] = "mm_helper.c0: 23.12-23.27",
  [79] = "mm_helper.c0: 28.4-28.25",
  [80] = "mm_helper.c0: 29.23-29.38",
  [81] = "mm_helper.c0: 29.4-29.39",
  [103] = "mm_helper.c0: 53.9-53.20",
  [108] = "mm_helper.c0: 51.13-51.30",
  [109] = "mm_helper.c0: 51.4-51.31",
  [116] = "mm_helper.c0: 60.12-60.29",
  [117] = "mm_helper.c0: 60.4-60.30",
  [124] = "mm_helper.c0: 69.16-69.28",
  [126] = "mm_helper.c0: 66.12-66.29",
  [127] = "mm_helper.c0: 66.4-66.44",
  [130] = "mm_helper.c0: 71.16-71.27",
  [132] = "mm_helper.c0: 66.12-66.29",
  [133] = "mm_helper.c0: 66.4-66.44",
  [157] = "mm_helper.c0: 91.12-91.34",
  [158] = "mm_helper.c0: 91.4-91.35",
  [164] = "mm_helper.c0: 99.9-99.25",
  [169] = "mm_helper.c0: 97.13-97.35",
  [170] = "mm_helper.c0: 97.4-97.36",
  [177] = "mm_helper.c0: 106.12-106.34",
  [178] = "mm_helper.c0: 106.4-106.35",
  [184] = "mm_helper.c0: 114.9-114.25",
  [189] = "mm_helper.c0: 112.13-112.35",
  [190] = "mm_helper.c0: 112.4-112.36",
  [197] = "mm_helper.c0: 124.16-124.33",
  [199] = "mm_helper.c0: 121.12-121.34",
  [200] = "mm_helper.c0: 121.4-121.49",
  [203] = "mm_helper.c0: 126.16-126.32",
  [205] = "mm_helper.c0: 121.12-121.34",
  [206] = "mm_helper.c0: 121.4-121.49",
  [214] = "mm_helper.c0: 134.16-134.33",
  [216] = "mm_helper.c0: 131.12-131.34",
  [217] = "mm_helper.c0: 131.4-131.49",
  [220] = "mm_helper.c0: 136.16-136.32",
  [222] = "mm_helper.c0: 131.12-131.34",
  [223] = "mm_helper.c0: 131.4-131.49",
  [230] = "mm_helper.c0: 141.21-141.36",
  [231] = "mm_helper.c0: 141.4-141.37",
  [233] = "mm_helper.c0: 149.9-149.37",
  [235] = "mm_helper.c0: 150.9-150.32",
  [237] = "mm_helper.c0: 151.9-151.32",
  [240] = "mm_helper.c0: 142.12-142.35",
  [241] = "mm_helper.c0: 142.4-142.44",
  [242] = "mm_helper.c0: 143.12-143.30",
  [243] = "mm_helper.c0: 143.4-143.31",
  [244] = "mm_helper.c0: 144.12-144.29",
  [245] = "mm_helper.c0: 144.4-144.44",
  [246] = "mm_helper.c0: 145.12-145.34",
  [247] = "mm_helper.c0: 145.4-145.49",
  [248] = "mm_helper.c0: 146.12-146.34",
  [249] = "mm_helper.c0: 146.4-146.49",
  [255] = "mm_helper.c0: 156.21-156.36",
  [256] = "mm_helper.c0: 156.4-156.37",
  [258] = "mm_helper.c0: 164.9-164.37",
  [260] = "mm_helper.c0: 165.9-165.32",
  [262] = "mm_helper.c0: 166.9-166.32",
  [265] = "mm_helper.c0: 157.12-157.35",
  [266] = "mm_helper.c0: 157.4-157.44",
  [267] = "mm_helper.c0: 158.13-158.31",
  [268] = "mm_helper.c0: 158.4-158.32",
  [269] = "mm_helper.c0: 159.12-159.29",
  [270] = "mm_helper.c0: 159.4-159.44",
  [271] = "mm_helper.c0: 160.12-160.34",
  [272] = "mm_helper.c0: 160.4-160.49",
  [273] = "mm_helper.c0: 161.12-161.34",
  [274] = "mm_helper.c0: 161.4-161.49",
  [298] = "mm_helper.c0: 192.12-192.29",
  [299] = "mm_helper.c0: 192.32-192.49",
  [301] = "mm_helper.c0: 190.23-190.41",
  [302] = "mm_helper.c0: 190.4-190.42",
  [308] = "mm_helper.c0: 196.27-196.42",
  [309] = "mm_helper.c0: 196.4-196.47",
  [310] = "mm_helper.c0: 197.27-197.42",
  [311] = "mm_helper.c0: 197.4-197.43",
  [312] = "mm_helper.c0: 198.4-198.41",
  [314] = "mm_helper.c0: 199.12-199.35",
  [315] = "mm_helper.c0: 199.4-199.50",
  [316] = "mm_helper.c0: 200.12-200.35",
  [317] = "mm_helper.c0: 200.4-200.50",
  [323] = "mm_helper.c0: 208.26-208.36",
  [324] = "mm_helper.c0: 208.4-208.37",
  [326] = "mm_helper.c0: 214.5-214.19",
  [328] = "mm_helper.c0: 214.5-214.31",
  [329] = "mm_helper.c0: 214.34-214.93",
  [330] = "mm_helper.c0: 214.5-214.93",
  [331] = "mm_helper.c0: 215.5-215.19",
  [333] = "mm_helper.c0: 215.5-215.31",
  [334] = "mm_helper.c0: 215.34-215.93",
  [335] = "mm_helper.c0: 215.5-215.93",
  [336] = "mm_helper.c0: 217.12-217.44",
  [338] = "mm_helper.c0: 209.12-209.35",
  [339] = "mm_helper.c0: 209.4-209.50",
  [340] = "mm_helper.c0: 210.12-210.35",
  [341] = "mm_helper.c0: 210.4-210.61",
  [347] = "mm_helper.c0: 222.4-222.22",
  [348] = "mm_helper.c0: 223.21-223.39",
  [349] = "mm_helper.c0: 223.4-223.40",
  [355] = "mm_helper.c0: 230.5-230.15",
  [356] = "mm_helper.c0: 230.5-230.22",
  [358] = "mm_helper.c0: 231.5-231.19",
  [359] = "mm_helper.c0: 231.5-231.30",
  [360] = "mm_helper.c0: 234.15-234.66",
  [363] = "mm_helper.c0: 224.20-224.37",
  [364] = "mm_helper.c0: 224.4-224.47",
  [369] = "mm_helper.c0: 242.14-242.28",
  [370] = "mm_helper.c0: 242.29-242.48",
  [371] = "mm_helper.c0: 242.14-242.49",
  [372] = "mm_helper.c0: 242.5-242.50",
  [373] = "mm_helper.c0: 243.14-243.28",
  [374] = "mm_helper.c0: 243.29-243.48",
  [375] = "mm_helper.c0: 243.14-243.49",
  [376] = "mm_helper.c0: 243.5-243.50",
  [383] = "mm_rw.c0: 9.35-9.52",
  [388] = "mm_rw.c0: 9.4-9.53",
  [389] = "mm_rw.c0: 11.22-11.41",
  [391] = "mm_rw.c0: 12.12-12.26",
  [392] = "mm_rw.c0: 12.12-12.38",
  [400] = "mm_rw.c0: 17.35-17.52",
  [405] = "mm_rw.c0: 17.4-17.53",
  [407] = "mm_rw.c0: 20.22-20.41",
  [409] = "mm_rw.c0: 21.5-21.19",
  [411] = "mm_rw.c0: 21.5-21.31",
  [412] = "mm_rw.c0: 21.5-21.38",
  [414] = "mm_rw.c0: 18.20-18.51",
  [415] = "mm_rw.c0: 18.4-18.52",
  [422] = "mm_rw.c0: 29.35-29.52",
  [427] = "mm_rw.c0: 29.4-29.53",
  [428] = "mm_rw.c0: 30.4-30.44",
  [429] = "mm_rw.c0: 33.20-33.39",
  [431] = "mm_rw.c0: 34.14-34.28",
  [432] = "mm_rw.c0: 34.14-34.40",
  [435] = "mm_rw.c0: 36.10-36.23",
  [438] = "mm_rw.c0: 31.4-31.43",
  [445] = "mm_rw.c0: 42.35-42.52",
  [450] = "mm_rw.c0: 42.4-42.53",
  [451] = "mm_rw.c0: 43.4-43.38",
  [452] = "mm_rw.c0: 44.4-44.44",
  [454] = "mm_rw.c0: 47.22-47.41",
  [457] = "mm_rw.c0: 49.5-49.19",
  [459] = "mm_rw.c0: 49.5-49.31",
  [460] = "mm_rw.c0: 49.35-49.48",
  [461] = "mm_rw.c0: 49.5-49.49",
  [463] = "mm_rw.c0: 45.20-45.66",
  [464] = "mm_rw.c0: 45.4-45.67",
  [472] = "<unknown location>",
  [482] = "/afs/andrew/course/15/122/lib/string.h0: 19.33-19.49",
  [487] = "/afs/andrew/course/15/122/lib/string.h0: 19.6-19.50",
  [488] = "<unknown location>",
  [496] = "<unknown location>",
  [498] = "/afs/andrew/course/15/122/lib/string.h0: 23.14-23.36",
  [499] = "/afs/andrew/course/15/122/lib/string.h0: 24.19-24.35",
  [500] = "/afs/andrew/course/15/122/lib/string.h0: 24.38-24.54",
  [501] = "/afs/andrew/course/15/122/lib/string.h0: 23.6-24.55",
  [510] = "/afs/andrew/course/15/122/lib/string.h0: 31.52-31.68",
  [515] = "/afs/andrew/course/15/122/lib/string.h0: 31.6-31.69",
  [516] = "<unknown location>",
  [518] = "/afs/andrew/course/15/122/lib/string.h0: 32.14-32.36",
  [519] = "/afs/andrew/course/15/122/lib/string.h0: 32.6-32.52",
  [526] = "<unknown location>",
  [534] = "<unknown location>",
  [536] = "/afs/andrew/course/15/122/lib/string.h0: 37.6-37.44",
  [543] = "<unknown location>",
  [551] = "<unknown location>",
  [559] = "/afs/andrew/course/15/122/lib/string.h0: 43.6-43.25",
  [560] = "<unknown location>",
  [562] = "/afs/andrew/course/15/122/lib/string.h0: 44.14-44.36",
  [563] = "/afs/andrew/course/15/122/lib/string.h0: 44.6-44.42",
  [564] = "/afs/andrew/course/15/122/lib/string.h0: 45.14-45.39",
  [565] = "/afs/andrew/course/15/122/lib/string.h0: 45.6-45.45",
  [572] = "<unknown location>",
  [580] = "/afs/andrew/course/15/122/lib/string.h0: 52.6-52.41",
  [581] = "<unknown location>",
  [589] = "<unknown location>",
  [591] = "/afs/andrew/course/15/122/lib/string.h0: 56.34-56.50",
  [592] = "/afs/andrew/course/15/122/lib/string.h0: 56.6-56.55",
  [593] = "/afs/andrew/course/15/122/lib/string.h0: 57.41-57.57",
  [594] = "/afs/andrew/course/15/122/lib/string.h0: 57.14-57.62",
  [595] = "/afs/andrew/course/15/122/lib/string.h0: 57.6-57.63",
  [602] = "/afs/andrew/course/15/122/lib/string.h0: 62.15-62.47",
  [603] = "/afs/andrew/course/15/122/lib/string.h0: 62.6-62.48",
  [604] = "<unknown location>",
  [606] = "/afs/andrew/course/15/122/lib/string.h0: 63.14-63.36",
  [607] = "/afs/andrew/course/15/122/lib/string.h0: 63.6-63.55",
  [614] = "<unknown location>",
  [616] = "/afs/andrew/course/15/122/lib/string.h0: 67.6-67.45",
  [623] = "/afs/andrew/course/15/122/lib/string.h0: 69.6-69.34",
  [624] = "<unknown location>",
  [636] = "mm_helper_test.c0: 8.17-8.32",
  [638] = "mm_helper_test.c0: 9.15-9.59",
  [640] = "mm_helper_test.c0: 10.5-10.30",
  [641] = "mm_helper_test.c0: 11.12-11.23",
  [642] = "mm_helper_test.c0: 11.12-11.26",
  [643] = "mm_helper_test.c0: 11.5-11.34",
  [644] = "mm_helper_test.c0: 12.5-12.30",
  [645] = "mm_helper_test.c0: 13.12-13.23",
  [646] = "mm_helper_test.c0: 13.12-13.26",
  [647] = "mm_helper_test.c0: 13.5-13.34",
  [648] = "mm_helper_test.c0: 14.5-14.39",
  [650] = "mm_helper_test.c0: 16.5-16.33",
  [651] = "mm_helper_test.c0: 16.18-16.29",
  [652] = "mm_helper_test.c0: 16.18-16.32",
  [653] = "mm_helper_test.c0: 16.5-16.33",
  [654] = "mm_helper_test.c0: 16.5-16.33",
  [656] = "mm_helper_test.c0: 17.12-17.23",
  [657] = "mm_helper_test.c0: 17.12-17.26",
  [658] = "mm_helper_test.c0: 17.5-17.39",
  [660] = "mm_helper_test.c0: 18.5-18.35"
};
