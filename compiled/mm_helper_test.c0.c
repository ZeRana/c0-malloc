#include "cc0lib.h"
#include "c0rt.h"
#include "mm_helper_test.c0.h"

//#use "mm_helper.h0"
typedef int _c0_block_t;
int _c0_max_blocksize(c0_string _c0t__caller);
// end "mm_helper.h0"

int _c0_max_blocksize(c0_string _c0t__caller) {
  int _c0t__result;
  _c0t__result = 65535;
  return _c0t__result;
}

int _c0_get_block_size(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  int _c0t__result;
  _c0t__result = (_c0v_b & 65535);
  cc0_assert((_c0t__result >= 0), c0_string_fromliteral("mm_helper.c0: 8.4-8.25: @ensures annotation failed"));
  int _c0t__tmp_1 = _c0_max_blocksize(c0_string_fromliteral("get_block_size (mm_helper.c0: 9.23-9.38)"));
  cc0_assert((_c0t__result <= _c0t__tmp_1), c0_string_fromliteral("mm_helper.c0: 9.4-9.39: @ensures annotation failed"));
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
  bool _c0t__tmp_4 = _c0_is_alloc(_c0v_b, c0_string_fromliteral("set_free (mm_helper.c0: 33.9-33.20)"));
  if (_c0t__tmp_4) {
    _c0v_b = (_c0v_b ^ 65536);
  }
  _c0t__result = _c0v_b;
  bool _c0t__tmp_5 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("set_free (mm_helper.c0: 31.13-31.30)"));
  cc0_assert(!(_c0t__tmp_5), c0_string_fromliteral("mm_helper.c0: 31.4-31.31: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_alloc(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  _c0t__result = (_c0v_b | 65536);
  bool _c0t__tmp_6 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("set_alloc (mm_helper.c0: 40.12-40.29)"));
  cc0_assert(_c0t__tmp_6, c0_string_fromliteral("mm_helper.c0: 40.4-40.30: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_make_block_header(int _c0v_size, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  int _c0t__tmp_7 = _c0_max_blocksize(c0_string_fromliteral("make_block_header (mm_helper.c0: 46.21-46.36)"));
  cc0_assert((_c0v_size <= _c0t__tmp_7), c0_string_join(c0_string_fromliteral("mm_helper.c0: 46.4-46.37: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  _c0t__result = (_c0v_size | 131072);
  int _c0t__tmp_8 = _c0_get_block_size(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 47.12-47.35)"));
  cc0_assert((_c0t__tmp_8 == _c0v_size), c0_string_fromliteral("mm_helper.c0: 47.4-47.44: @ensures annotation failed"));
  bool _c0t__tmp_9 = _c0_is_header(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 48.12-48.30)"));
  cc0_assert(_c0t__tmp_9, c0_string_fromliteral("mm_helper.c0: 48.4-48.31: @ensures annotation failed"));
  bool _c0t__tmp_10 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 49.13-49.30)"));
  cc0_assert(!(_c0t__tmp_10), c0_string_fromliteral("mm_helper.c0: 49.4-49.31: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_make_block_footer(int _c0v_size, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  int _c0t__tmp_11 = _c0_max_blocksize(c0_string_fromliteral("make_block_footer (mm_helper.c0: 55.21-55.36)"));
  cc0_assert((_c0v_size <= _c0t__tmp_11), c0_string_join(c0_string_fromliteral("mm_helper.c0: 55.4-55.37: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  _c0t__result = _c0v_size;
  int _c0t__tmp_12 = _c0_get_block_size(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 56.12-56.35)"));
  cc0_assert((_c0t__tmp_12 == _c0v_size), c0_string_fromliteral("mm_helper.c0: 56.4-56.44: @ensures annotation failed"));
  bool _c0t__tmp_13 = _c0_is_header(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 57.13-57.31)"));
  cc0_assert(!(_c0t__tmp_13), c0_string_fromliteral("mm_helper.c0: 57.4-57.32: @ensures annotation failed"));
  bool _c0t__tmp_14 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 58.13-58.30)"));
  cc0_assert(!(_c0t__tmp_14), c0_string_fromliteral("mm_helper.c0: 58.4-58.31: @ensures annotation failed"));
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
  int _c0t__tmp_15 = _c0_get_footer_pos(_c0v_o, c0_string_fromliteral("get_obj_size (mm_helper.c0: 84.12-84.29)"));
  int _c0t__tmp_16 = _c0_get_header_pos(_c0v_o, c0_string_fromliteral("get_obj_size (mm_helper.c0: 84.32-84.49)"));
  _c0t__result = ((_c0t__tmp_15 - _c0t__tmp_16) - 1);
  int _c0t__tmp_17 = _c0_max_blocksize(c0_string_fromliteral("get_obj_size (mm_helper.c0: 82.23-82.38)"));
  cc0_assert((_c0t__result <= (_c0t__tmp_17 - 2)), c0_string_fromliteral("mm_helper.c0: 82.4-82.43: @ensures annotation failed"));
  return _c0t__result;
}

_c0_obj_t _c0_make_obj(int _c0v_header_pos, int _c0v_footer_pos, c0_string _c0t__caller) {
  _c0_obj_t _c0t__result;
  int _c0t__tmp_18 = _c0_max_blocksize(c0_string_fromliteral("make_obj (mm_helper.c0: 88.26-88.41)"));
  cc0_assert((_c0v_header_pos < (_c0t__tmp_18 - 1)), c0_string_join(c0_string_fromliteral("mm_helper.c0: 88.4-88.46: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_19 = _c0_max_blocksize(c0_string_fromliteral("make_obj (mm_helper.c0: 89.27-89.42)"));
  cc0_assert((_c0v_footer_pos <= _c0t__tmp_19), c0_string_join(c0_string_fromliteral("mm_helper.c0: 89.4-89.43: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  cc0_assert((_c0v_header_pos < (_c0v_footer_pos + 1)), c0_string_join(c0_string_fromliteral("mm_helper.c0: 90.4-90.41: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  _c0t__result = ((_c0v_footer_pos << 16) | _c0v_header_pos);
  int _c0t__tmp_20 = _c0_get_header_pos(_c0t__result, c0_string_fromliteral("make_obj (mm_helper.c0: 91.12-91.35)"));
  cc0_assert((_c0t__tmp_20 == _c0v_header_pos), c0_string_fromliteral("mm_helper.c0: 91.4-91.50: @ensures annotation failed"));
  int _c0t__tmp_21 = _c0_get_footer_pos(_c0t__result, c0_string_fromliteral("make_obj (mm_helper.c0: 92.12-92.35)"));
  cc0_assert((_c0t__tmp_21 == _c0v_footer_pos), c0_string_fromliteral("mm_helper.c0: 92.4-92.50: @ensures annotation failed"));
  return _c0t__result;
}

_c0_obj_t _c0_make_full_block(_c0_heap_t* _c0v_heap, int _c0v_header_pos, int _c0v_size, bool _c0v_is_alloc, c0_string _c0t__caller) {
  _c0_obj_t _c0t__result;
  int _c0t__tmp_22 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_size;
  cc0_assert((_c0v_header_pos < _c0t__tmp_22), c0_string_join(c0_string_fromliteral("mm_helper.c0: 100.4-100.37: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0v_footer_pos = ((_c0v_header_pos + _c0v_size) + 1);
  cc0_array(int) _c0t__tmp_23 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int* _c0t__tmp_24;
  _c0t__tmp_24 = &(cc0_array_sub(int,_c0t__tmp_23,_c0v_header_pos));
  int _c0t__tmp_25 = _c0_make_block_header(_c0v_size, c0_string_fromliteral("make_full_block (mm_helper.c0: 105.34-105.57)"));
  cc0_deref(int, _c0t__tmp_24) = _c0t__tmp_25;
  cc0_array(int) _c0t__tmp_26 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int* _c0t__tmp_27;
  _c0t__tmp_27 = &(cc0_array_sub(int,_c0t__tmp_26,_c0v_footer_pos));
  int _c0t__tmp_28 = _c0_make_block_footer(_c0v_size, c0_string_fromliteral("make_full_block (mm_helper.c0: 106.34-106.57)"));
  cc0_deref(int, _c0t__tmp_27) = _c0t__tmp_28;
  if (_c0v_is_alloc) {
    cc0_array(int) _c0t__tmp_29 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
    int _c0t__tmp_30 = cc0_array_sub(int,_c0t__tmp_29,_c0v_header_pos);
    _c0_set_alloc(_c0t__tmp_30, c0_string_fromliteral("make_full_block (mm_helper.c0: 111.9-111.46)"));
    cc0_array(int) _c0t__tmp_31 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
    int _c0t__tmp_32 = cc0_array_sub(int,_c0t__tmp_31,_c0v_footer_pos);
    _c0_set_alloc(_c0t__tmp_32, c0_string_fromliteral("make_full_block (mm_helper.c0: 112.9-112.46)"));
  }
  int _c0t__tmp_33 = _c0_make_obj(_c0v_header_pos, _c0v_footer_pos, c0_string_fromliteral("make_full_block (mm_helper.c0: 115.12-115.44)"));
  _c0t__result = _c0t__tmp_33;
  int _c0t__tmp_34 = _c0_get_header_pos(_c0t__result, c0_string_fromliteral("make_full_block (mm_helper.c0: 101.12-101.35)"));
  cc0_assert((_c0t__tmp_34 == _c0v_header_pos), c0_string_fromliteral("mm_helper.c0: 101.4-101.50: @ensures annotation failed"));
  int _c0t__tmp_35 = _c0_get_footer_pos(_c0t__result, c0_string_fromliteral("make_full_block (mm_helper.c0: 102.12-102.35)"));
  cc0_assert((_c0t__tmp_35 == ((_c0v_header_pos + _c0v_size) + 1)), c0_string_fromliteral("mm_helper.c0: 102.4-102.61: @ensures annotation failed"));
  return _c0t__result;
}

_c0_heap_t* _c0_heap_init(int _c0v_size, c0_string _c0t__caller) {
  _c0_heap_t* _c0t__result;
  cc0_assert((_c0v_size > 0), c0_string_join(c0_string_fromliteral("mm_helper.c0: 120.4-120.22: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_36 = _c0_max_blocksize(c0_string_fromliteral("heap_init (mm_helper.c0: 121.21-121.36)"));
  cc0_assert((_c0v_size <= (_c0t__tmp_36 - 2)), c0_string_join(c0_string_fromliteral("mm_helper.c0: 121.4-121.41: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  struct _c0_heap* _c0t__tmp_37 = cc0_alloc(_c0_heap_t);
  _c0_heap_t* _c0v_heap = _c0t__tmp_37;
  cc0_array(int) _c0t__tmp_38 = cc0_alloc_array(int,_c0v_size);
  cc0_array(int) _c0v_heap_mem = _c0t__tmp_38;
  int* _c0t__tmp_39;
  _c0t__tmp_39 = &((cc0_deref(struct _c0_heap, _c0v_heap))._c0_size);
  cc0_deref(int, _c0t__tmp_39) = _c0v_size;
  cc0_array(int)* _c0t__tmp_40;
  _c0t__tmp_40 = &((cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem);
  cc0_deref(cc0_array(int), _c0t__tmp_40) = _c0v_heap_mem;
  int _c0t__tmp_41 = _c0_make_full_block(_c0v_heap, 0, (_c0v_size - 2), false, c0_string_fromliteral("heap_init (mm_helper.c0: 132.15-132.54)"));
  _c0_obj_t _c0v_b = _c0t__tmp_41;
  _c0t__result = _c0v_heap;
  cc0_array(int) _c0t__tmp_42 = (cc0_deref(struct _c0_heap, _c0t__result))._c0_heap_mem;
  cc0_assert((c0_array_length(_c0t__tmp_42) == _c0v_size), c0_string_fromliteral("mm_helper.c0: 122.4-122.47: @ensures annotation failed"));
  return _c0t__result;
}

int _c0_read_from_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, int _c0v_index, c0_string _c0t__caller) {
  int _c0t__result;
  bool _c0t__tmp_44;
  if ((0 <= _c0v_index)) {
    int _c0t__tmp_43 = _c0_get_block_size(_c0v_obj, c0_string_fromliteral("read_from_obj (mm_helper.c0: 143.35-143.54)"));
    _c0t__tmp_44 = (_c0v_index < _c0t__tmp_43);
  } else {
    _c0t__tmp_44 = false;
  }
  cc0_assert(_c0t__tmp_44, c0_string_join(c0_string_fromliteral("mm_helper.c0: 143.4-143.55: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_45 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("read_from_obj (mm_helper.c0: 145.22-145.41)"));
  int _c0v_real_index = ((_c0t__tmp_45 + _c0v_index) + 1);
  cc0_array(int) _c0t__tmp_46 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int _c0t__tmp_47 = cc0_array_sub(int,_c0t__tmp_46,_c0v_real_index);
  _c0t__result = _c0t__tmp_47;
  return _c0t__result;
}

void _c0_write_to_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, int _c0v_data, int _c0v_index, c0_string _c0t__caller) {
  bool _c0t__tmp_49;
  if ((0 <= _c0v_index)) {
    int _c0t__tmp_48 = _c0_get_block_size(_c0v_obj, c0_string_fromliteral("write_to_obj (mm_helper.c0: 151.35-151.54)"));
    _c0t__tmp_49 = (_c0v_index < _c0t__tmp_48);
  } else {
    _c0t__tmp_49 = false;
  }
  cc0_assert(_c0t__tmp_49, c0_string_join(c0_string_fromliteral("mm_helper.c0: 151.4-151.55: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  {
    int _c0t__tmp_50 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("write_to_obj (mm_helper.c0: 154.22-154.41)"));
    int _c0v_real_index = ((_c0t__tmp_50 + _c0v_index) + 1);
    cc0_array(int) _c0t__tmp_51 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
    int* _c0t__tmp_52;
    _c0t__tmp_52 = &(cc0_array_sub(int,_c0t__tmp_51,_c0v_real_index));
    cc0_deref(int, _c0t__tmp_52) = _c0v_data;
  }
  int _c0t__tmp_53 = _c0_read_from_obj(_c0v_heap, _c0v_obj, _c0v_index, c0_string_fromliteral("write_to_obj (mm_helper.c0: 152.20-152.51)"));
  cc0_assert((_c0v_data == _c0t__tmp_53), c0_string_fromliteral("mm_helper.c0: 152.4-152.52: @ensures annotation failed"));
}

void _c0_free_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, c0_string _c0t__caller) {
  cc0_array(int) _c0t__tmp_54 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int _c0t__tmp_55 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("free_obj (mm_helper.c0: 161.29-161.48)"));
  int _c0t__tmp_56 = cc0_array_sub(int,_c0t__tmp_54,_c0t__tmp_55);
  _c0_set_free(_c0t__tmp_56, c0_string_fromliteral("free_obj (mm_helper.c0: 161.5-161.50)"));
  cc0_array(int) _c0t__tmp_57 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int _c0t__tmp_58 = _c0_get_footer_pos(_c0v_obj, c0_string_fromliteral("free_obj (mm_helper.c0: 162.29-162.48)"));
  int _c0t__tmp_59 = cc0_array_sub(int,_c0t__tmp_57,_c0t__tmp_58);
  _c0_set_free(_c0t__tmp_59, c0_string_fromliteral("free_obj (mm_helper.c0: 162.5-162.50)"));
}

//#use <string>
extern int string_length(c0_string _c0v_s);

int _c0t_string_length__1(c0_string _c0v_s, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_60 = string_length(_c0v_s);
  _c0t__result = _c0t__tmp_60;
  return _c0t__result;
}
extern char string_charat(c0_string _c0v_s, int _c0v_idx);

char _c0t_string_charat__1(c0_string _c0v_s, int _c0v_idx, c0_string _c0t__caller) {
  char _c0t__result;
  bool _c0t__tmp_62;
  if ((0 <= _c0v_idx)) {
    int _c0t__tmp_61 = _c0t_string_length__1(_c0v_s, c0_string_fromliteral("string_charat__1 (/afs/andrew/course/15/122/lib/string.h0: 19.33-19.49)"));
    _c0t__tmp_62 = (_c0v_idx < _c0t__tmp_61);
  } else {
    _c0t__tmp_62 = false;
  }
  cc0_assert(_c0t__tmp_62, c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 19.6-19.50: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  char _c0t__tmp_63 = string_charat(_c0v_s, _c0v_idx);
  _c0t__result = _c0t__tmp_63;
  return _c0t__result;
}
extern c0_string string_join(c0_string _c0v_a, c0_string _c0v_b);

c0_string _c0t_string_join__1(c0_string _c0v_a, c0_string _c0v_b, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_64 = string_join(_c0v_a, _c0v_b);
  _c0t__result = _c0t__tmp_64;
  int _c0t__tmp_65 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_join__1 (/afs/andrew/course/15/122/lib/string.h0: 23.14-23.36)"));
  int _c0t__tmp_66 = _c0t_string_length__1(_c0v_a, c0_string_fromliteral("string_join__1 (/afs/andrew/course/15/122/lib/string.h0: 24.19-24.35)"));
  int _c0t__tmp_67 = _c0t_string_length__1(_c0v_b, c0_string_fromliteral("string_join__1 (/afs/andrew/course/15/122/lib/string.h0: 24.38-24.54)"));
  cc0_assert((_c0t__tmp_65 == (_c0t__tmp_66 + _c0t__tmp_67)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 23.6-24.55: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_sub(c0_string _c0v_a, int _c0v_start, int _c0v_end);

c0_string _c0t_string_sub__1(c0_string _c0v_a, int _c0v_start, int _c0v_end, c0_string _c0t__caller) {
  c0_string _c0t__result;
  bool _c0t__tmp_70;
  if (((0 <= _c0v_start) && (_c0v_start <= _c0v_end))) {
    int _c0t__tmp_69 = _c0t_string_length__1(_c0v_a, c0_string_fromliteral("string_sub__1 (/afs/andrew/course/15/122/lib/string.h0: 31.52-31.68)"));
    _c0t__tmp_70 = (_c0v_end <= _c0t__tmp_69);
  } else {
    _c0t__tmp_70 = false;
  }
  cc0_assert(_c0t__tmp_70, c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 31.6-31.69: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  c0_string _c0t__tmp_71 = string_sub(_c0v_a, _c0v_start, _c0v_end);
  _c0t__result = _c0t__tmp_71;
  int _c0t__tmp_72 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_sub__1 (/afs/andrew/course/15/122/lib/string.h0: 32.14-32.36)"));
  cc0_assert((_c0t__tmp_72 == (_c0v_end - _c0v_start)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 32.6-32.52: @ensures annotation failed"));
  return _c0t__result;
}
extern bool string_equal(c0_string _c0v_a, c0_string _c0v_b);

bool _c0t_string_equal__1(c0_string _c0v_a, c0_string _c0v_b, c0_string _c0t__caller) {
  bool _c0t__result;
  bool _c0t__tmp_73 = string_equal(_c0v_a, _c0v_b);
  _c0t__result = _c0t__tmp_73;
  return _c0t__result;
}
extern int string_compare(c0_string _c0v_a, c0_string _c0v_b);

int _c0t_string_compare__1(c0_string _c0v_a, c0_string _c0v_b, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_74 = string_compare(_c0v_a, _c0v_b);
  _c0t__result = _c0t__tmp_74;
  cc0_assert(((-(1) <= _c0t__result) && (_c0t__result <= 1)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 37.6-37.44: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_fromint(int _c0v_i);

c0_string _c0t_string_fromint__1(int _c0v_i, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_76 = string_fromint(_c0v_i);
  _c0t__result = _c0t__tmp_76;
  return _c0t__result;
}
extern c0_string string_frombool(bool _c0v_b);

c0_string _c0t_string_frombool__1(bool _c0v_b, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_77 = string_frombool(_c0v_b);
  _c0t__result = _c0t__tmp_77;
  return _c0t__result;
}
extern c0_string string_fromchar(char _c0v_c);

c0_string _c0t_string_fromchar__1(char _c0v_c, c0_string _c0t__caller) {
  c0_string _c0t__result;
  cc0_assert((_c0v_c != '\000'), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 43.6-43.25: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  c0_string _c0t__tmp_78 = string_fromchar(_c0v_c);
  _c0t__result = _c0t__tmp_78;
  int _c0t__tmp_79 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_fromchar__1 (/afs/andrew/course/15/122/lib/string.h0: 44.14-44.36)"));
  cc0_assert((_c0t__tmp_79 == 1), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 44.6-44.42: @ensures annotation failed"));
  char _c0t__tmp_80 = _c0t_string_charat__1(_c0t__result, 0, c0_string_fromliteral("string_fromchar__1 (/afs/andrew/course/15/122/lib/string.h0: 45.14-45.39)"));
  cc0_assert((_c0t__tmp_80 == _c0v_c), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 45.6-45.45: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_tolower(c0_string _c0v_s);

c0_string _c0t_string_tolower__1(c0_string _c0v_s, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_81 = string_tolower(_c0v_s);
  _c0t__result = _c0t__tmp_81;
  return _c0t__result;
}
extern bool string_terminated(cc0_array(char) _c0v_A, int _c0v_n);

bool _c0t_string_terminated__1(cc0_array(char) _c0v_A, int _c0v_n, c0_string _c0t__caller) {
  bool _c0t__result;
  cc0_assert(((0 <= _c0v_n) && (_c0v_n <= c0_array_length(_c0v_A))), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 52.6-52.41: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  bool _c0t__tmp_83 = string_terminated(_c0v_A, _c0v_n);
  _c0t__result = _c0t__tmp_83;
  return _c0t__result;
}
extern cc0_array(char) string_to_chararray(c0_string _c0v_s);

cc0_array(char) _c0t_string_to_chararray__1(c0_string _c0v_s, c0_string _c0t__caller) {
  cc0_array(char) _c0t__result;
  cc0_array(char) _c0t__tmp_84 = string_to_chararray(_c0v_s);
  _c0t__result = _c0t__tmp_84;
  int _c0t__tmp_85 = _c0t_string_length__1(_c0v_s, c0_string_fromliteral("string_to_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 56.34-56.50)"));
  cc0_assert((c0_array_length(_c0t__result) >= (_c0t__tmp_85 + 1)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 56.6-56.55: @ensures annotation failed"));
  int _c0t__tmp_86 = _c0t_string_length__1(_c0v_s, c0_string_fromliteral("string_to_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 57.41-57.57)"));
  bool _c0t__tmp_87 = _c0t_string_terminated__1(_c0t__result, (_c0t__tmp_86 + 1), c0_string_fromliteral("string_to_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 57.14-57.62)"));
  cc0_assert(_c0t__tmp_87, c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 57.6-57.63: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_from_chararray(cc0_array(char) _c0v_A);

c0_string _c0t_string_from_chararray__1(cc0_array(char) _c0v_A, c0_string _c0t__caller) {
  c0_string _c0t__result;
  bool _c0t__tmp_88 = _c0t_string_terminated__1(_c0v_A, c0_array_length(_c0v_A), c0_string_fromliteral("string_from_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 62.15-62.47)"));
  cc0_assert(_c0t__tmp_88, c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 62.6-62.48: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  c0_string _c0t__tmp_89 = string_from_chararray(_c0v_A);
  _c0t__result = _c0t__tmp_89;
  int _c0t__tmp_90 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_from_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 63.14-63.36)"));
  cc0_assert(((_c0t__tmp_90 + 1) <= c0_array_length(_c0v_A)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 63.6-63.55: @ensures annotation failed"));
  return _c0t__result;
}
extern int char_ord(char _c0v_c);

int _c0t_char_ord__1(char _c0v_c, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_91 = char_ord(_c0v_c);
  _c0t__result = _c0t__tmp_91;
  cc0_assert(((0 <= _c0t__result) && (_c0t__result <= 127)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 67.6-67.45: @ensures annotation failed"));
  return _c0t__result;
}
extern char char_chr(int _c0v_n);

char _c0t_char_chr__1(int _c0v_n, c0_string _c0t__caller) {
  char _c0t__result;
  cc0_assert(((0 <= _c0v_n) && (_c0v_n <= 127)), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 69.6-69.34: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  char _c0t__tmp_94 = char_chr(_c0v_n);
  _c0t__result = _c0t__tmp_94;
  return _c0t__result;
}
// end <string>

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
  bool _c0t__tmp_95 = eof();
  _c0t__result = _c0t__tmp_95;
  return _c0t__result;
}
extern c0_string readline();

c0_string _c0t_readline__1(c0_string _c0t__caller) {
  c0_string _c0t__result;
  bool _c0t__tmp_96 = _c0t_eof__1(c0_string_fromliteral("readline__1 (/afs/andrew/course/15/122/lib/conio.h0: 14.16-14.21)"));
  cc0_assert(!(_c0t__tmp_96), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/conio.h0: 14.6-14.22: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  c0_string _c0t__tmp_97 = readline();
  _c0t__result = _c0t__tmp_97;
  return _c0t__result;
}
// end <conio>

int _c0_main() {
  c0_string _c0t__caller = c0_string_fromliteral("(program start)");
  int _c0t__result;
  struct _c0_heap* _c0t__tmp_98 = _c0_heap_init(1024, c0_string_fromliteral("main (mm_helper_test.c0: 8.17-8.32)"));
  _c0_heap_t* _c0v_h = _c0t__tmp_98;
  int _c0t__tmp_99 = _c0_make_full_block(_c0v_h, 2, 3, true, c0_string_fromliteral("main (mm_helper_test.c0: 9.15-9.45)"));
  _c0_obj_t _c0v_o = _c0t__tmp_99;
  _c0_write_to_obj(_c0v_h, _c0v_o, 10, 0, c0_string_fromliteral("main (mm_helper_test.c0: 10.5-10.30)"));
  cc0_array(int) _c0t__tmp_100 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_101 = cc0_array_sub(int,_c0t__tmp_100,3);
  cc0_assert((_c0t__tmp_101 == 10), c0_string_fromliteral("mm_helper_test.c0: 11.5-11.34: assert failed"));
  _c0_write_to_obj(_c0v_h, _c0v_o, 11, 1, c0_string_fromliteral("main (mm_helper_test.c0: 12.5-12.30)"));
  cc0_array(int) _c0t__tmp_102 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_103 = cc0_array_sub(int,_c0t__tmp_102,4);
  cc0_assert((_c0t__tmp_103 == 11), c0_string_fromliteral("mm_helper_test.c0: 13.5-13.34: assert failed"));
  {
    _c0t_print__1(c0_string_fromliteral("All tests passed. \n"), c0_string_fromliteral("main (mm_helper_test.c0: 14.5-14.35)"));
  }
  _c0t__result = 0;
  return _c0t__result;
}
long map_length = 479;
const char* source_map[479] = {
  [19] = "mm_helper.c0: 8.4-8.25",
  [20] = "mm_helper.c0: 9.23-9.38",
  [21] = "mm_helper.c0: 9.4-9.39",
  [43] = "mm_helper.c0: 33.9-33.20",
  [48] = "mm_helper.c0: 31.13-31.30",
  [49] = "mm_helper.c0: 31.4-31.31",
  [56] = "mm_helper.c0: 40.12-40.29",
  [57] = "mm_helper.c0: 40.4-40.30",
  [63] = "mm_helper.c0: 46.21-46.36",
  [64] = "mm_helper.c0: 46.4-46.37",
  [66] = "mm_helper.c0: 47.12-47.35",
  [67] = "mm_helper.c0: 47.4-47.44",
  [68] = "mm_helper.c0: 48.12-48.30",
  [69] = "mm_helper.c0: 48.4-48.31",
  [70] = "mm_helper.c0: 49.13-49.30",
  [71] = "mm_helper.c0: 49.4-49.31",
  [77] = "mm_helper.c0: 55.21-55.36",
  [78] = "mm_helper.c0: 55.4-55.37",
  [80] = "mm_helper.c0: 56.12-56.35",
  [81] = "mm_helper.c0: 56.4-56.44",
  [82] = "mm_helper.c0: 57.13-57.31",
  [83] = "mm_helper.c0: 57.4-57.32",
  [84] = "mm_helper.c0: 58.13-58.30",
  [85] = "mm_helper.c0: 58.4-58.31",
  [109] = "mm_helper.c0: 84.12-84.29",
  [110] = "mm_helper.c0: 84.32-84.49",
  [112] = "mm_helper.c0: 82.23-82.38",
  [113] = "mm_helper.c0: 82.4-82.43",
  [119] = "mm_helper.c0: 88.26-88.41",
  [120] = "mm_helper.c0: 88.4-88.46",
  [121] = "mm_helper.c0: 89.27-89.42",
  [122] = "mm_helper.c0: 89.4-89.43",
  [123] = "mm_helper.c0: 90.4-90.41",
  [125] = "mm_helper.c0: 91.12-91.35",
  [126] = "mm_helper.c0: 91.4-91.50",
  [127] = "mm_helper.c0: 92.12-92.35",
  [128] = "mm_helper.c0: 92.4-92.50",
  [134] = "mm_helper.c0: 100.26-100.36",
  [135] = "mm_helper.c0: 100.4-100.37",
  [137] = "mm_helper.c0: 105.5-105.19",
  [139] = "mm_helper.c0: 105.5-105.31",
  [140] = "mm_helper.c0: 105.34-105.57",
  [141] = "mm_helper.c0: 105.5-105.57",
  [142] = "mm_helper.c0: 106.5-106.19",
  [144] = "mm_helper.c0: 106.5-106.31",
  [145] = "mm_helper.c0: 106.34-106.57",
  [146] = "mm_helper.c0: 106.5-106.57",
  [148] = "mm_helper.c0: 111.19-111.33",
  [149] = "mm_helper.c0: 111.19-111.45",
  [150] = "mm_helper.c0: 111.9-111.46",
  [151] = "mm_helper.c0: 112.19-112.33",
  [152] = "mm_helper.c0: 112.19-112.45",
  [153] = "mm_helper.c0: 112.9-112.46",
  [155] = "mm_helper.c0: 115.12-115.44",
  [157] = "mm_helper.c0: 101.12-101.35",
  [158] = "mm_helper.c0: 101.4-101.50",
  [159] = "mm_helper.c0: 102.12-102.35",
  [160] = "mm_helper.c0: 102.4-102.61",
  [166] = "mm_helper.c0: 120.4-120.22",
  [167] = "mm_helper.c0: 121.21-121.36",
  [168] = "mm_helper.c0: 121.4-121.41",
  [174] = "mm_helper.c0: 128.5-128.15",
  [175] = "mm_helper.c0: 128.5-128.22",
  [177] = "mm_helper.c0: 129.5-129.19",
  [178] = "mm_helper.c0: 129.5-129.30",
  [179] = "mm_helper.c0: 132.15-132.54",
  [182] = "mm_helper.c0: 122.20-122.37",
  [183] = "mm_helper.c0: 122.4-122.47",
  [191] = "mm_helper.c0: 143.35-143.54",
  [196] = "mm_helper.c0: 143.4-143.55",
  [197] = "mm_helper.c0: 145.22-145.41",
  [199] = "mm_helper.c0: 146.12-146.26",
  [200] = "mm_helper.c0: 146.12-146.38",
  [208] = "mm_helper.c0: 151.35-151.54",
  [213] = "mm_helper.c0: 151.4-151.55",
  [215] = "mm_helper.c0: 154.22-154.41",
  [217] = "mm_helper.c0: 155.5-155.19",
  [219] = "mm_helper.c0: 155.5-155.31",
  [220] = "mm_helper.c0: 155.5-155.38",
  [222] = "mm_helper.c0: 152.20-152.51",
  [223] = "mm_helper.c0: 152.4-152.52",
  [227] = "mm_helper.c0: 161.14-161.28",
  [228] = "mm_helper.c0: 161.29-161.48",
  [229] = "mm_helper.c0: 161.14-161.49",
  [230] = "mm_helper.c0: 161.5-161.50",
  [231] = "mm_helper.c0: 162.14-162.28",
  [232] = "mm_helper.c0: 162.29-162.48",
  [233] = "mm_helper.c0: 162.14-162.49",
  [234] = "mm_helper.c0: 162.5-162.50",
  [242] = "<unknown location>",
  [252] = "/afs/andrew/course/15/122/lib/string.h0: 19.33-19.49",
  [257] = "/afs/andrew/course/15/122/lib/string.h0: 19.6-19.50",
  [258] = "<unknown location>",
  [266] = "<unknown location>",
  [268] = "/afs/andrew/course/15/122/lib/string.h0: 23.14-23.36",
  [269] = "/afs/andrew/course/15/122/lib/string.h0: 24.19-24.35",
  [270] = "/afs/andrew/course/15/122/lib/string.h0: 24.38-24.54",
  [271] = "/afs/andrew/course/15/122/lib/string.h0: 23.6-24.55",
  [280] = "/afs/andrew/course/15/122/lib/string.h0: 31.52-31.68",
  [285] = "/afs/andrew/course/15/122/lib/string.h0: 31.6-31.69",
  [286] = "<unknown location>",
  [288] = "/afs/andrew/course/15/122/lib/string.h0: 32.14-32.36",
  [289] = "/afs/andrew/course/15/122/lib/string.h0: 32.6-32.52",
  [296] = "<unknown location>",
  [304] = "<unknown location>",
  [306] = "/afs/andrew/course/15/122/lib/string.h0: 37.6-37.44",
  [313] = "<unknown location>",
  [321] = "<unknown location>",
  [329] = "/afs/andrew/course/15/122/lib/string.h0: 43.6-43.25",
  [330] = "<unknown location>",
  [332] = "/afs/andrew/course/15/122/lib/string.h0: 44.14-44.36",
  [333] = "/afs/andrew/course/15/122/lib/string.h0: 44.6-44.42",
  [334] = "/afs/andrew/course/15/122/lib/string.h0: 45.14-45.39",
  [335] = "/afs/andrew/course/15/122/lib/string.h0: 45.6-45.45",
  [342] = "<unknown location>",
  [350] = "/afs/andrew/course/15/122/lib/string.h0: 52.6-52.41",
  [351] = "<unknown location>",
  [359] = "<unknown location>",
  [361] = "/afs/andrew/course/15/122/lib/string.h0: 56.34-56.50",
  [362] = "/afs/andrew/course/15/122/lib/string.h0: 56.6-56.55",
  [363] = "/afs/andrew/course/15/122/lib/string.h0: 57.41-57.57",
  [364] = "/afs/andrew/course/15/122/lib/string.h0: 57.14-57.62",
  [365] = "/afs/andrew/course/15/122/lib/string.h0: 57.6-57.63",
  [372] = "/afs/andrew/course/15/122/lib/string.h0: 62.15-62.47",
  [373] = "/afs/andrew/course/15/122/lib/string.h0: 62.6-62.48",
  [374] = "<unknown location>",
  [376] = "/afs/andrew/course/15/122/lib/string.h0: 63.14-63.36",
  [377] = "/afs/andrew/course/15/122/lib/string.h0: 63.6-63.55",
  [384] = "<unknown location>",
  [386] = "/afs/andrew/course/15/122/lib/string.h0: 67.6-67.45",
  [393] = "/afs/andrew/course/15/122/lib/string.h0: 69.6-69.34",
  [394] = "<unknown location>",
  [404] = "<unknown location>",
  [410] = "<unknown location>",
  [416] = "<unknown location>",
  [422] = "<unknown location>",
  [428] = "<unknown location>",
  [434] = "<unknown location>",
  [441] = "<unknown location>",
  [449] = "/afs/andrew/course/15/122/lib/conio.h0: 14.16-14.21",
  [450] = "/afs/andrew/course/15/122/lib/conio.h0: 14.6-14.22",
  [451] = "<unknown location>",
  [460] = "mm_helper_test.c0: 8.17-8.32",
  [462] = "mm_helper_test.c0: 9.15-9.45",
  [464] = "mm_helper_test.c0: 10.5-10.30",
  [465] = "mm_helper_test.c0: 11.12-11.23",
  [466] = "mm_helper_test.c0: 11.12-11.26",
  [467] = "mm_helper_test.c0: 11.5-11.34",
  [468] = "mm_helper_test.c0: 12.5-12.30",
  [469] = "mm_helper_test.c0: 13.12-13.23",
  [470] = "mm_helper_test.c0: 13.12-13.26",
  [471] = "mm_helper_test.c0: 13.5-13.34",
  [473] = "mm_helper_test.c0: 14.5-14.35"
};
