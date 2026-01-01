#include "cc0lib.h"
#include "c0rt.h"
#include "mm_helper_test.c0.h"
typedef int _c0_block_t;

int _c0_max_heap_size(c0_string _c0t__caller) {
  int _c0t__result;
  _c0t__result = 65535;
  return _c0t__result;
}

int _c0_max_payload_size(c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_1 = _c0_max_heap_size(c0_string_fromliteral("max_payload_size (mm_helper.c0: 21.12-21.27)"));
  _c0t__result = (_c0t__tmp_1 - 2);
  return _c0t__result;
}

int _c0_get_block_size(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  int _c0t__result;
  _c0t__result = (_c0v_b & 65535);
  cc0_assert((_c0t__result >= 0), c0_string_fromliteral("mm_helper.c0: 26.4-26.25: @ensures annotation failed"));
  int _c0t__tmp_2 = _c0_max_heap_size(c0_string_fromliteral("get_block_size (mm_helper.c0: 27.23-27.38)"));
  cc0_assert((_c0t__result <= _c0t__tmp_2), c0_string_fromliteral("mm_helper.c0: 27.4-27.39: @ensures annotation failed"));
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
  bool _c0t__tmp_5 = _c0_is_alloc(_c0v_b, c0_string_fromliteral("set_free (mm_helper.c0: 51.9-51.20)"));
  if (_c0t__tmp_5) {
    _c0v_b = (_c0v_b ^ 65536);
  }
  _c0t__result = _c0v_b;
  bool _c0t__tmp_6 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("set_free (mm_helper.c0: 49.13-49.30)"));
  cc0_assert(!(_c0t__tmp_6), c0_string_fromliteral("mm_helper.c0: 49.4-49.31: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_alloc(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  _c0t__result = (_c0v_b | 65536);
  bool _c0t__tmp_7 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("set_alloc (mm_helper.c0: 58.12-58.29)"));
  cc0_assert(_c0t__tmp_7, c0_string_fromliteral("mm_helper.c0: 58.4-58.30: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_alloc_bit(_c0_block_t _c0v_b, bool _c0v_is_alloced, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  if (_c0v_is_alloced) {
    int _c0t__tmp_8 = _c0_set_alloc(_c0v_b, c0_string_fromliteral("set_alloc_bit (mm_helper.c0: 67.16-67.28)"));
    _c0t__result = _c0t__tmp_8;
    bool _c0t__tmp_9 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("set_alloc_bit (mm_helper.c0: 64.12-64.29)"));
    cc0_assert((_c0t__tmp_9 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 64.4-64.44: @ensures annotation failed"));
    return _c0t__result;
  } else {
    int _c0t__tmp_10 = _c0_set_free(_c0v_b, c0_string_fromliteral("set_alloc_bit (mm_helper.c0: 69.16-69.27)"));
    _c0t__result = _c0t__tmp_10;
    bool _c0t__tmp_11 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("set_alloc_bit (mm_helper.c0: 64.12-64.29)"));
    cc0_assert((_c0t__tmp_11 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 64.4-64.44: @ensures annotation failed"));
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
  bool _c0t__tmp_14 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("set_prev_alloc (mm_helper.c0: 89.12-89.34)"));
  cc0_assert(_c0t__tmp_14, c0_string_fromliteral("mm_helper.c0: 89.4-89.35: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_prev_free(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  bool _c0t__tmp_15 = _c0_is_prev_alloc(_c0v_b, c0_string_fromliteral("set_prev_free (mm_helper.c0: 97.9-97.25)"));
  if (_c0t__tmp_15) {
    _c0v_b = (_c0v_b ^ 262144);
  }
  _c0t__result = _c0v_b;
  bool _c0t__tmp_16 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("set_prev_free (mm_helper.c0: 95.13-95.35)"));
  cc0_assert(!(_c0t__tmp_16), c0_string_fromliteral("mm_helper.c0: 95.4-95.36: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_next_alloc(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  _c0t__result = (_c0v_b | 524288);
  bool _c0t__tmp_17 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("set_next_alloc (mm_helper.c0: 104.12-104.34)"));
  cc0_assert(_c0t__tmp_17, c0_string_fromliteral("mm_helper.c0: 104.4-104.35: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_next_free(_c0_block_t _c0v_b, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  bool _c0t__tmp_18 = _c0_is_next_alloc(_c0v_b, c0_string_fromliteral("set_next_free (mm_helper.c0: 112.9-112.25)"));
  if (_c0t__tmp_18) {
    _c0v_b = (_c0v_b ^ 524288);
  }
  _c0t__result = _c0v_b;
  bool _c0t__tmp_19 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("set_next_free (mm_helper.c0: 110.13-110.35)"));
  cc0_assert(!(_c0t__tmp_19), c0_string_fromliteral("mm_helper.c0: 110.4-110.36: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_set_prev(_c0_block_t _c0v_b, bool _c0v_is_alloced, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  if (_c0v_is_alloced) {
    int _c0t__tmp_20 = _c0_set_prev_alloc(_c0v_b, c0_string_fromliteral("set_prev (mm_helper.c0: 122.16-122.33)"));
    _c0t__result = _c0t__tmp_20;
    bool _c0t__tmp_21 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("set_prev (mm_helper.c0: 119.12-119.34)"));
    cc0_assert((_c0t__tmp_21 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 119.4-119.49: @ensures annotation failed"));
    return _c0t__result;
  } else {
    int _c0t__tmp_22 = _c0_set_prev_free(_c0v_b, c0_string_fromliteral("set_prev (mm_helper.c0: 124.16-124.32)"));
    _c0t__result = _c0t__tmp_22;
    bool _c0t__tmp_23 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("set_prev (mm_helper.c0: 119.12-119.34)"));
    cc0_assert((_c0t__tmp_23 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 119.4-119.49: @ensures annotation failed"));
    return _c0t__result;
  }
}

_c0_block_t _c0_set_next(_c0_block_t _c0v_b, bool _c0v_is_alloced, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  if (_c0v_is_alloced) {
    int _c0t__tmp_24 = _c0_set_next_alloc(_c0v_b, c0_string_fromliteral("set_next (mm_helper.c0: 132.16-132.33)"));
    _c0t__result = _c0t__tmp_24;
    bool _c0t__tmp_25 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("set_next (mm_helper.c0: 129.12-129.34)"));
    cc0_assert((_c0t__tmp_25 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 129.4-129.49: @ensures annotation failed"));
    return _c0t__result;
  } else {
    int _c0t__tmp_26 = _c0_set_next_free(_c0v_b, c0_string_fromliteral("set_next (mm_helper.c0: 134.16-134.32)"));
    _c0t__result = _c0t__tmp_26;
    bool _c0t__tmp_27 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("set_next (mm_helper.c0: 129.12-129.34)"));
    cc0_assert((_c0t__tmp_27 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 129.4-129.49: @ensures annotation failed"));
    return _c0t__result;
  }
}

_c0_block_t _c0_make_block_header(int _c0v_size, bool _c0v_is_alloced, bool _c0v_prev_alloc, bool _c0v_next_alloc, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  int _c0t__tmp_28 = _c0_max_heap_size(c0_string_fromliteral("make_block_header (mm_helper.c0: 139.21-139.36)"));
  cc0_assert((_c0v_size <= _c0t__tmp_28), c0_string_join(c0_string_fromliteral("mm_helper.c0: 139.4-139.37: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  _c0_block_t _c0v_b = (_c0v_size | 131072);
  int _c0t__tmp_29 = _c0_set_alloc_bit(_c0v_b, _c0v_is_alloced, c0_string_fromliteral("make_block_header (mm_helper.c0: 147.9-147.37)"));
  _c0v_b = _c0t__tmp_29;
  int _c0t__tmp_30 = _c0_set_prev(_c0v_b, _c0v_prev_alloc, c0_string_fromliteral("make_block_header (mm_helper.c0: 148.9-148.32)"));
  _c0v_b = _c0t__tmp_30;
  int _c0t__tmp_31 = _c0_set_next(_c0v_b, _c0v_next_alloc, c0_string_fromliteral("make_block_header (mm_helper.c0: 149.9-149.32)"));
  _c0v_b = _c0t__tmp_31;
  _c0t__result = _c0v_b;
  int _c0t__tmp_32 = _c0_get_block_size(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 140.12-140.35)"));
  cc0_assert((_c0t__tmp_32 == _c0v_size), c0_string_fromliteral("mm_helper.c0: 140.4-140.44: @ensures annotation failed"));
  bool _c0t__tmp_33 = _c0_is_header(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 141.12-141.30)"));
  cc0_assert(_c0t__tmp_33, c0_string_fromliteral("mm_helper.c0: 141.4-141.31: @ensures annotation failed"));
  bool _c0t__tmp_34 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 142.12-142.29)"));
  cc0_assert((_c0t__tmp_34 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 142.4-142.44: @ensures annotation failed"));
  bool _c0t__tmp_35 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 143.12-143.34)"));
  cc0_assert((_c0t__tmp_35 == _c0v_prev_alloc), c0_string_fromliteral("mm_helper.c0: 143.4-143.49: @ensures annotation failed"));
  bool _c0t__tmp_36 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("make_block_header (mm_helper.c0: 144.12-144.34)"));
  cc0_assert((_c0t__tmp_36 == _c0v_next_alloc), c0_string_fromliteral("mm_helper.c0: 144.4-144.49: @ensures annotation failed"));
  return _c0t__result;
}

_c0_block_t _c0_make_block_footer(int _c0v_size, bool _c0v_is_alloced, bool _c0v_prev_alloc, bool _c0v_next_alloc, c0_string _c0t__caller) {
  _c0_block_t _c0t__result;
  int _c0t__tmp_37 = _c0_max_heap_size(c0_string_fromliteral("make_block_footer (mm_helper.c0: 154.21-154.36)"));
  cc0_assert((_c0v_size <= _c0t__tmp_37), c0_string_join(c0_string_fromliteral("mm_helper.c0: 154.4-154.37: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  _c0_block_t _c0v_b = _c0v_size;
  int _c0t__tmp_38 = _c0_set_alloc_bit(_c0v_b, _c0v_is_alloced, c0_string_fromliteral("make_block_footer (mm_helper.c0: 162.9-162.37)"));
  _c0v_b = _c0t__tmp_38;
  int _c0t__tmp_39 = _c0_set_prev(_c0v_b, _c0v_prev_alloc, c0_string_fromliteral("make_block_footer (mm_helper.c0: 163.9-163.32)"));
  _c0v_b = _c0t__tmp_39;
  int _c0t__tmp_40 = _c0_set_next(_c0v_b, _c0v_next_alloc, c0_string_fromliteral("make_block_footer (mm_helper.c0: 164.9-164.32)"));
  _c0v_b = _c0t__tmp_40;
  _c0t__result = _c0v_b;
  int _c0t__tmp_41 = _c0_get_block_size(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 155.12-155.35)"));
  cc0_assert((_c0t__tmp_41 == _c0v_size), c0_string_fromliteral("mm_helper.c0: 155.4-155.44: @ensures annotation failed"));
  bool _c0t__tmp_42 = _c0_is_header(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 156.13-156.31)"));
  cc0_assert(!(_c0t__tmp_42), c0_string_fromliteral("mm_helper.c0: 156.4-156.32: @ensures annotation failed"));
  bool _c0t__tmp_43 = _c0_is_alloc(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 157.12-157.29)"));
  cc0_assert((_c0t__tmp_43 == _c0v_is_alloced), c0_string_fromliteral("mm_helper.c0: 157.4-157.44: @ensures annotation failed"));
  bool _c0t__tmp_44 = _c0_is_prev_alloc(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 158.12-158.34)"));
  cc0_assert((_c0t__tmp_44 == _c0v_prev_alloc), c0_string_fromliteral("mm_helper.c0: 158.4-158.49: @ensures annotation failed"));
  bool _c0t__tmp_45 = _c0_is_next_alloc(_c0t__result, c0_string_fromliteral("make_block_footer (mm_helper.c0: 159.12-159.34)"));
  cc0_assert((_c0t__tmp_45 == _c0v_next_alloc), c0_string_fromliteral("mm_helper.c0: 159.4-159.49: @ensures annotation failed"));
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
  int _c0t__tmp_46 = _c0_get_footer_pos(_c0v_o, c0_string_fromliteral("get_obj_size (mm_helper.c0: 190.12-190.29)"));
  int _c0t__tmp_47 = _c0_get_header_pos(_c0v_o, c0_string_fromliteral("get_obj_size (mm_helper.c0: 190.32-190.49)"));
  _c0t__result = ((_c0t__tmp_46 - _c0t__tmp_47) - 1);
  int _c0t__tmp_48 = _c0_max_payload_size(c0_string_fromliteral("get_obj_size (mm_helper.c0: 188.23-188.41)"));
  cc0_assert((_c0t__result <= _c0t__tmp_48), c0_string_fromliteral("mm_helper.c0: 188.4-188.42: @ensures annotation failed"));
  return _c0t__result;
}

_c0_obj_t _c0_make_obj(int _c0v_header_pos, int _c0v_footer_pos, c0_string _c0t__caller) {
  _c0_obj_t _c0t__result;
  int _c0t__tmp_49 = _c0_max_heap_size(c0_string_fromliteral("make_obj (mm_helper.c0: 194.27-194.42)"));
  cc0_assert((_c0v_header_pos <= (_c0t__tmp_49 - 2)), c0_string_join(c0_string_fromliteral("mm_helper.c0: 194.4-194.47: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_50 = _c0_max_heap_size(c0_string_fromliteral("make_obj (mm_helper.c0: 195.27-195.42)"));
  cc0_assert((_c0v_footer_pos <= _c0t__tmp_50), c0_string_join(c0_string_fromliteral("mm_helper.c0: 195.4-195.43: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  cc0_assert((_c0v_header_pos < (_c0v_footer_pos + 1)), c0_string_join(c0_string_fromliteral("mm_helper.c0: 196.4-196.41: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  _c0t__result = ((_c0v_footer_pos << 16) | _c0v_header_pos);
  int _c0t__tmp_51 = _c0_get_header_pos(_c0t__result, c0_string_fromliteral("make_obj (mm_helper.c0: 197.12-197.35)"));
  cc0_assert((_c0t__tmp_51 == _c0v_header_pos), c0_string_fromliteral("mm_helper.c0: 197.4-197.50: @ensures annotation failed"));
  int _c0t__tmp_52 = _c0_get_footer_pos(_c0t__result, c0_string_fromliteral("make_obj (mm_helper.c0: 198.12-198.35)"));
  cc0_assert((_c0t__tmp_52 == _c0v_footer_pos), c0_string_fromliteral("mm_helper.c0: 198.4-198.50: @ensures annotation failed"));
  return _c0t__result;
}

_c0_obj_t _c0_make_full_block(_c0_heap_t* _c0v_heap, int _c0v_header_pos, int _c0v_size, bool _c0v_is_alloced, bool _c0v_prev_alloc, bool _c0v_next_alloc, c0_string _c0t__caller) {
  _c0_obj_t _c0t__result;
  int _c0t__tmp_53 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_size;
  cc0_assert((_c0v_header_pos < _c0t__tmp_53), c0_string_join(c0_string_fromliteral("mm_helper.c0: 206.4-206.37: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0v_footer_pos = ((_c0v_header_pos + _c0v_size) + 1);
  cc0_array(int) _c0t__tmp_54 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int* _c0t__tmp_55;
  _c0t__tmp_55 = &(cc0_array_sub(int,_c0t__tmp_54,_c0v_header_pos));
  int _c0t__tmp_56 = _c0_make_block_header(_c0v_size, _c0v_is_alloced, _c0v_prev_alloc, _c0v_next_alloc, c0_string_fromliteral("make_full_block (mm_helper.c0: 212.34-212.93)"));
  cc0_deref(int, _c0t__tmp_55) = _c0t__tmp_56;
  cc0_array(int) _c0t__tmp_57 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int* _c0t__tmp_58;
  _c0t__tmp_58 = &(cc0_array_sub(int,_c0t__tmp_57,_c0v_footer_pos));
  int _c0t__tmp_59 = _c0_make_block_footer(_c0v_size, _c0v_is_alloced, _c0v_prev_alloc, _c0v_next_alloc, c0_string_fromliteral("make_full_block (mm_helper.c0: 213.34-213.93)"));
  cc0_deref(int, _c0t__tmp_58) = _c0t__tmp_59;
  int _c0t__tmp_60 = _c0_make_obj(_c0v_header_pos, _c0v_footer_pos, c0_string_fromliteral("make_full_block (mm_helper.c0: 215.12-215.44)"));
  _c0t__result = _c0t__tmp_60;
  int _c0t__tmp_61 = _c0_get_header_pos(_c0t__result, c0_string_fromliteral("make_full_block (mm_helper.c0: 207.12-207.35)"));
  cc0_assert((_c0t__tmp_61 == _c0v_header_pos), c0_string_fromliteral("mm_helper.c0: 207.4-207.50: @ensures annotation failed"));
  int _c0t__tmp_62 = _c0_get_footer_pos(_c0t__result, c0_string_fromliteral("make_full_block (mm_helper.c0: 208.12-208.35)"));
  cc0_assert((_c0t__tmp_62 == ((_c0v_header_pos + _c0v_size) + 1)), c0_string_fromliteral("mm_helper.c0: 208.4-208.61: @ensures annotation failed"));
  return _c0t__result;
}

_c0_heap_t* _c0_heap_init(int _c0v_size, c0_string _c0t__caller) {
  _c0_heap_t* _c0t__result;
  cc0_assert((_c0v_size > 0), c0_string_join(c0_string_fromliteral("mm_helper.c0: 220.4-220.22: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_63 = _c0_max_payload_size(c0_string_fromliteral("heap_init (mm_helper.c0: 221.21-221.39)"));
  cc0_assert((_c0v_size <= _c0t__tmp_63), c0_string_join(c0_string_fromliteral("mm_helper.c0: 221.4-221.40: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  struct _c0_heap* _c0t__tmp_64 = cc0_alloc(_c0_heap_t);
  _c0_heap_t* _c0v_heap = _c0t__tmp_64;
  cc0_array(int) _c0t__tmp_65 = cc0_alloc_array(int,_c0v_size);
  cc0_array(int) _c0v_heap_mem = _c0t__tmp_65;
  int* _c0t__tmp_66;
  _c0t__tmp_66 = &((cc0_deref(struct _c0_heap, _c0v_heap))._c0_size);
  cc0_deref(int, _c0t__tmp_66) = _c0v_size;
  cc0_array(int)* _c0t__tmp_67;
  _c0t__tmp_67 = &((cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem);
  cc0_deref(cc0_array(int), _c0t__tmp_67) = _c0v_heap_mem;
  int _c0t__tmp_68 = _c0_make_full_block(_c0v_heap, 0, (_c0v_size - 2), false, true, true, c0_string_fromliteral("heap_init (mm_helper.c0: 232.15-232.66)"));
  _c0_obj_t _c0v_b = _c0t__tmp_68;
  _c0t__result = _c0v_heap;
  cc0_array(int) _c0t__tmp_69 = (cc0_deref(struct _c0_heap, _c0t__result))._c0_heap_mem;
  cc0_assert((c0_array_length(_c0t__tmp_69) == _c0v_size), c0_string_fromliteral("mm_helper.c0: 222.4-222.47: @ensures annotation failed"));
  return _c0t__result;
}

void _c0_free_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, c0_string _c0t__caller) {
  cc0_array(int) _c0t__tmp_70 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int _c0t__tmp_71 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("free_obj (mm_helper.c0: 240.29-240.48)"));
  int _c0t__tmp_72 = cc0_array_sub(int,_c0t__tmp_70,_c0t__tmp_71);
  _c0_set_free(_c0t__tmp_72, c0_string_fromliteral("free_obj (mm_helper.c0: 240.5-240.50)"));
  cc0_array(int) _c0t__tmp_73 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int _c0t__tmp_74 = _c0_get_footer_pos(_c0v_obj, c0_string_fromliteral("free_obj (mm_helper.c0: 241.29-241.48)"));
  int _c0t__tmp_75 = cc0_array_sub(int,_c0t__tmp_73,_c0t__tmp_74);
  _c0_set_free(_c0t__tmp_75, c0_string_fromliteral("free_obj (mm_helper.c0: 241.5-241.50)"));
}

int _c0_read_from_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, int _c0v_index, c0_string _c0t__caller) {
  int _c0t__result;
  bool _c0t__tmp_77;
  if ((0 <= _c0v_index)) {
    int _c0t__tmp_76 = _c0_get_block_size(_c0v_obj, c0_string_fromliteral("read_from_obj (mm_rw.c0: 9.35-9.54)"));
    _c0t__tmp_77 = (_c0v_index < _c0t__tmp_76);
  } else {
    _c0t__tmp_77 = false;
  }
  cc0_assert(_c0t__tmp_77, c0_string_join(c0_string_fromliteral("mm_rw.c0: 9.4-9.55: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_78 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("read_from_obj (mm_rw.c0: 11.22-11.41)"));
  int _c0v_real_index = ((_c0t__tmp_78 + _c0v_index) + 1);
  cc0_array(int) _c0t__tmp_79 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int _c0t__tmp_80 = cc0_array_sub(int,_c0t__tmp_79,_c0v_real_index);
  _c0t__result = _c0t__tmp_80;
  return _c0t__result;
}

void _c0_write_to_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, int _c0v_data, int _c0v_index, c0_string _c0t__caller) {
  bool _c0t__tmp_82;
  if ((0 <= _c0v_index)) {
    int _c0t__tmp_81 = _c0_get_block_size(_c0v_obj, c0_string_fromliteral("write_to_obj (mm_rw.c0: 17.35-17.54)"));
    _c0t__tmp_82 = (_c0v_index < _c0t__tmp_81);
  } else {
    _c0t__tmp_82 = false;
  }
  cc0_assert(_c0t__tmp_82, c0_string_join(c0_string_fromliteral("mm_rw.c0: 17.4-17.55: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  {
    int _c0t__tmp_83 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("write_to_obj (mm_rw.c0: 20.22-20.41)"));
    int _c0v_real_index = ((_c0t__tmp_83 + _c0v_index) + 1);
    cc0_array(int) _c0t__tmp_84 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
    int* _c0t__tmp_85;
    _c0t__tmp_85 = &(cc0_array_sub(int,_c0t__tmp_84,_c0v_real_index));
    cc0_deref(int, _c0t__tmp_85) = _c0v_data;
  }
  int _c0t__tmp_86 = _c0_read_from_obj(_c0v_heap, _c0v_obj, _c0v_index, c0_string_fromliteral("write_to_obj (mm_rw.c0: 18.20-18.51)"));
  cc0_assert((_c0v_data == _c0t__tmp_86), c0_string_fromliteral("mm_rw.c0: 18.4-18.52: @ensures annotation failed"));
}

int _c0_read_byte_from_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, int _c0v_index, int _c0v_byte_num, c0_string _c0t__caller) {
  int _c0t__result;
  bool _c0t__tmp_88;
  if ((0 <= _c0v_index)) {
    int _c0t__tmp_87 = _c0_get_block_size(_c0v_obj, c0_string_fromliteral("read_byte_from_obj (mm_rw.c0: 29.35-29.54)"));
    _c0t__tmp_88 = (_c0v_index < _c0t__tmp_87);
  } else {
    _c0t__tmp_88 = false;
  }
  cc0_assert(_c0t__tmp_88, c0_string_join(c0_string_fromliteral("mm_rw.c0: 29.4-29.55: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  cc0_assert(((0 <= _c0v_byte_num) && (_c0v_byte_num <= 3)), c0_string_join(c0_string_fromliteral("mm_rw.c0: 30.4-30.44: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  int _c0t__tmp_90 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("read_byte_from_obj (mm_rw.c0: 33.20-33.39)"));
  int _c0v_real_index = ((_c0t__tmp_90 + _c0v_index) + 1);
  cc0_array(int) _c0t__tmp_91 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
  int _c0t__tmp_92 = cc0_array_sub(int,_c0t__tmp_91,_c0v_real_index);
  int _c0v_data = _c0t__tmp_92;
  int _c0t__tmp_93 = c0_sar(_c0v_data,(3 - _c0v_byte_num));
  _c0v_data = _c0t__tmp_93;
  _c0t__result = (_c0v_data & 255);
  cc0_assert(((0 <= _c0t__result) && (_c0t__result <= 255)), c0_string_fromliteral("mm_rw.c0: 31.4-31.43: @ensures annotation failed"));
  return _c0t__result;
}

void _c0_write_byte_to_obj(_c0_heap_t* _c0v_heap, _c0_obj_t _c0v_obj, int _c0v_data, int _c0v_index, int _c0v_byte_num, c0_string _c0t__caller) {
  bool _c0t__tmp_96;
  if ((0 <= _c0v_index)) {
    int _c0t__tmp_95 = _c0_get_block_size(_c0v_obj, c0_string_fromliteral("write_byte_to_obj (mm_rw.c0: 41.35-41.54)"));
    _c0t__tmp_96 = (_c0v_index < _c0t__tmp_95);
  } else {
    _c0t__tmp_96 = false;
  }
  cc0_assert(_c0t__tmp_96, c0_string_join(c0_string_fromliteral("mm_rw.c0: 41.4-41.55: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  cc0_assert(((0 <= _c0v_data) && (_c0v_data <= 255)), c0_string_join(c0_string_fromliteral("mm_rw.c0: 42.4-42.38: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  cc0_assert(((0 <= _c0v_byte_num) && (_c0v_byte_num <= 3)), c0_string_join(c0_string_fromliteral("mm_rw.c0: 43.4-43.44: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  {
    int _c0t__tmp_99 = _c0_get_header_pos(_c0v_obj, c0_string_fromliteral("write_byte_to_obj (mm_rw.c0: 46.22-46.41)"));
    int _c0v_real_index = ((_c0t__tmp_99 + _c0v_index) + 1);
    cc0_array(int) _c0t__tmp_100 = (cc0_deref(struct _c0_heap, _c0v_heap))._c0_heap_mem;
    int* _c0t__tmp_101;
    _c0t__tmp_101 = &(cc0_array_sub(int,_c0t__tmp_100,_c0v_real_index));
    int _c0t__tmp_102 = c0_sal(_c0v_data,(3 - _c0v_byte_num));
    cc0_deref(int, _c0t__tmp_101) = _c0t__tmp_102;
  }
  int _c0t__tmp_103 = _c0_read_byte_from_obj(_c0v_heap, _c0v_obj, _c0v_index, _c0v_byte_num, c0_string_fromliteral("write_byte_to_obj (mm_rw.c0: 44.20-44.66)"));
  cc0_assert((_c0v_data == _c0t__tmp_103), c0_string_fromliteral("mm_rw.c0: 44.4-44.67: @ensures annotation failed"));
}

//#use <string>
extern int string_length(c0_string _c0v_s);

int _c0t_string_length__1(c0_string _c0v_s, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_104 = string_length(_c0v_s);
  _c0t__result = _c0t__tmp_104;
  return _c0t__result;
}
extern char string_charat(c0_string _c0v_s, int _c0v_idx);

char _c0t_string_charat__1(c0_string _c0v_s, int _c0v_idx, c0_string _c0t__caller) {
  char _c0t__result;
  bool _c0t__tmp_106;
  if ((0 <= _c0v_idx)) {
    int _c0t__tmp_105 = _c0t_string_length__1(_c0v_s, c0_string_fromliteral("string_charat__1 (/afs/andrew/course/15/122/lib/string.h0: 19.33-19.49)"));
    _c0t__tmp_106 = (_c0v_idx < _c0t__tmp_105);
  } else {
    _c0t__tmp_106 = false;
  }
  cc0_assert(_c0t__tmp_106, c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 19.6-19.50: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  char _c0t__tmp_107 = string_charat(_c0v_s, _c0v_idx);
  _c0t__result = _c0t__tmp_107;
  return _c0t__result;
}
extern c0_string string_join(c0_string _c0v_a, c0_string _c0v_b);

c0_string _c0t_string_join__1(c0_string _c0v_a, c0_string _c0v_b, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_108 = string_join(_c0v_a, _c0v_b);
  _c0t__result = _c0t__tmp_108;
  int _c0t__tmp_109 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_join__1 (/afs/andrew/course/15/122/lib/string.h0: 23.14-23.36)"));
  int _c0t__tmp_110 = _c0t_string_length__1(_c0v_a, c0_string_fromliteral("string_join__1 (/afs/andrew/course/15/122/lib/string.h0: 24.19-24.35)"));
  int _c0t__tmp_111 = _c0t_string_length__1(_c0v_b, c0_string_fromliteral("string_join__1 (/afs/andrew/course/15/122/lib/string.h0: 24.38-24.54)"));
  cc0_assert((_c0t__tmp_109 == (_c0t__tmp_110 + _c0t__tmp_111)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 23.6-24.55: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_sub(c0_string _c0v_a, int _c0v_start, int _c0v_end);

c0_string _c0t_string_sub__1(c0_string _c0v_a, int _c0v_start, int _c0v_end, c0_string _c0t__caller) {
  c0_string _c0t__result;
  bool _c0t__tmp_114;
  if (((0 <= _c0v_start) && (_c0v_start <= _c0v_end))) {
    int _c0t__tmp_113 = _c0t_string_length__1(_c0v_a, c0_string_fromliteral("string_sub__1 (/afs/andrew/course/15/122/lib/string.h0: 31.52-31.68)"));
    _c0t__tmp_114 = (_c0v_end <= _c0t__tmp_113);
  } else {
    _c0t__tmp_114 = false;
  }
  cc0_assert(_c0t__tmp_114, c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 31.6-31.69: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  c0_string _c0t__tmp_115 = string_sub(_c0v_a, _c0v_start, _c0v_end);
  _c0t__result = _c0t__tmp_115;
  int _c0t__tmp_116 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_sub__1 (/afs/andrew/course/15/122/lib/string.h0: 32.14-32.36)"));
  cc0_assert((_c0t__tmp_116 == (_c0v_end - _c0v_start)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 32.6-32.52: @ensures annotation failed"));
  return _c0t__result;
}
extern bool string_equal(c0_string _c0v_a, c0_string _c0v_b);

bool _c0t_string_equal__1(c0_string _c0v_a, c0_string _c0v_b, c0_string _c0t__caller) {
  bool _c0t__result;
  bool _c0t__tmp_117 = string_equal(_c0v_a, _c0v_b);
  _c0t__result = _c0t__tmp_117;
  return _c0t__result;
}
extern int string_compare(c0_string _c0v_a, c0_string _c0v_b);

int _c0t_string_compare__1(c0_string _c0v_a, c0_string _c0v_b, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_118 = string_compare(_c0v_a, _c0v_b);
  _c0t__result = _c0t__tmp_118;
  cc0_assert(((-(1) <= _c0t__result) && (_c0t__result <= 1)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 37.6-37.44: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_fromint(int _c0v_i);

c0_string _c0t_string_fromint__1(int _c0v_i, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_120 = string_fromint(_c0v_i);
  _c0t__result = _c0t__tmp_120;
  return _c0t__result;
}
extern c0_string string_frombool(bool _c0v_b);

c0_string _c0t_string_frombool__1(bool _c0v_b, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_121 = string_frombool(_c0v_b);
  _c0t__result = _c0t__tmp_121;
  return _c0t__result;
}
extern c0_string string_fromchar(char _c0v_c);

c0_string _c0t_string_fromchar__1(char _c0v_c, c0_string _c0t__caller) {
  c0_string _c0t__result;
  cc0_assert((_c0v_c != '\000'), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 43.6-43.25: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  c0_string _c0t__tmp_122 = string_fromchar(_c0v_c);
  _c0t__result = _c0t__tmp_122;
  int _c0t__tmp_123 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_fromchar__1 (/afs/andrew/course/15/122/lib/string.h0: 44.14-44.36)"));
  cc0_assert((_c0t__tmp_123 == 1), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 44.6-44.42: @ensures annotation failed"));
  char _c0t__tmp_124 = _c0t_string_charat__1(_c0t__result, 0, c0_string_fromliteral("string_fromchar__1 (/afs/andrew/course/15/122/lib/string.h0: 45.14-45.39)"));
  cc0_assert((_c0t__tmp_124 == _c0v_c), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 45.6-45.45: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_tolower(c0_string _c0v_s);

c0_string _c0t_string_tolower__1(c0_string _c0v_s, c0_string _c0t__caller) {
  c0_string _c0t__result;
  c0_string _c0t__tmp_125 = string_tolower(_c0v_s);
  _c0t__result = _c0t__tmp_125;
  return _c0t__result;
}
extern bool string_terminated(cc0_array(char) _c0v_A, int _c0v_n);

bool _c0t_string_terminated__1(cc0_array(char) _c0v_A, int _c0v_n, c0_string _c0t__caller) {
  bool _c0t__result;
  cc0_assert(((0 <= _c0v_n) && (_c0v_n <= c0_array_length(_c0v_A))), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 52.6-52.41: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  bool _c0t__tmp_127 = string_terminated(_c0v_A, _c0v_n);
  _c0t__result = _c0t__tmp_127;
  return _c0t__result;
}
extern cc0_array(char) string_to_chararray(c0_string _c0v_s);

cc0_array(char) _c0t_string_to_chararray__1(c0_string _c0v_s, c0_string _c0t__caller) {
  cc0_array(char) _c0t__result;
  cc0_array(char) _c0t__tmp_128 = string_to_chararray(_c0v_s);
  _c0t__result = _c0t__tmp_128;
  int _c0t__tmp_129 = _c0t_string_length__1(_c0v_s, c0_string_fromliteral("string_to_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 56.34-56.50)"));
  cc0_assert((c0_array_length(_c0t__result) >= (_c0t__tmp_129 + 1)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 56.6-56.55: @ensures annotation failed"));
  int _c0t__tmp_130 = _c0t_string_length__1(_c0v_s, c0_string_fromliteral("string_to_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 57.41-57.57)"));
  bool _c0t__tmp_131 = _c0t_string_terminated__1(_c0t__result, (_c0t__tmp_130 + 1), c0_string_fromliteral("string_to_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 57.14-57.62)"));
  cc0_assert(_c0t__tmp_131, c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 57.6-57.63: @ensures annotation failed"));
  return _c0t__result;
}
extern c0_string string_from_chararray(cc0_array(char) _c0v_A);

c0_string _c0t_string_from_chararray__1(cc0_array(char) _c0v_A, c0_string _c0t__caller) {
  c0_string _c0t__result;
  bool _c0t__tmp_132 = _c0t_string_terminated__1(_c0v_A, c0_array_length(_c0v_A), c0_string_fromliteral("string_from_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 62.15-62.47)"));
  cc0_assert(_c0t__tmp_132, c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 62.6-62.48: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  c0_string _c0t__tmp_133 = string_from_chararray(_c0v_A);
  _c0t__result = _c0t__tmp_133;
  int _c0t__tmp_134 = _c0t_string_length__1(_c0t__result, c0_string_fromliteral("string_from_chararray__1 (/afs/andrew/course/15/122/lib/string.h0: 63.14-63.36)"));
  cc0_assert(((_c0t__tmp_134 + 1) <= c0_array_length(_c0v_A)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 63.6-63.55: @ensures annotation failed"));
  return _c0t__result;
}
extern int char_ord(char _c0v_c);

int _c0t_char_ord__1(char _c0v_c, c0_string _c0t__caller) {
  int _c0t__result;
  int _c0t__tmp_135 = char_ord(_c0v_c);
  _c0t__result = _c0t__tmp_135;
  cc0_assert(((0 <= _c0t__result) && (_c0t__result <= 127)), c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 67.6-67.45: @ensures annotation failed"));
  return _c0t__result;
}
extern char char_chr(int _c0v_n);

char _c0t_char_chr__1(int _c0v_n, c0_string _c0t__caller) {
  char _c0t__result;
  cc0_assert(((0 <= _c0v_n) && (_c0v_n <= 127)), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/string.h0: 69.6-69.34: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  char _c0t__tmp_138 = char_chr(_c0v_n);
  _c0t__result = _c0t__tmp_138;
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
  bool _c0t__tmp_139 = eof();
  _c0t__result = _c0t__tmp_139;
  return _c0t__result;
}
extern c0_string readline();

c0_string _c0t_readline__1(c0_string _c0t__caller) {
  c0_string _c0t__result;
  bool _c0t__tmp_140 = _c0t_eof__1(c0_string_fromliteral("readline__1 (/afs/andrew/course/15/122/lib/conio.h0: 14.16-14.21)"));
  cc0_assert(!(_c0t__tmp_140), c0_string_join(c0_string_fromliteral("/afs/andrew/course/15/122/lib/conio.h0: 14.6-14.22: @requires annotation failed\n"), c0_string_join(_c0t__caller, c0_string_fromliteral(": caller location"))));
  c0_string _c0t__tmp_141 = readline();
  _c0t__result = _c0t__tmp_141;
  return _c0t__result;
}
// end <conio>

int _c0_main() {
  c0_string _c0t__caller = c0_string_fromliteral("(program start)");
  int _c0t__result;
  struct _c0_heap* _c0t__tmp_142 = _c0_heap_init(1024, c0_string_fromliteral("main (mm_helper_test.c0: 8.17-8.32)"));
  _c0_heap_t* _c0v_h = _c0t__tmp_142;
  int _c0t__tmp_143 = _c0_make_full_block(_c0v_h, 2, 3, true, false, false, c0_string_fromliteral("main (mm_helper_test.c0: 9.15-9.59)"));
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
  cc0_array(int) _c0t__tmp_148 = (cc0_deref(struct _c0_heap, _c0v_h))._c0_heap_mem;
  int _c0t__tmp_149 = cc0_array_sub(int,_c0t__tmp_148,5);
  cc0_assert((_c0t__tmp_149 == 65536), c0_string_fromliteral("mm_helper_test.c0: 16.5-16.39: assert failed"));
  {
    _c0t_print__1(c0_string_fromliteral("All tests passed. \n"), c0_string_fromliteral("main (mm_helper_test.c0: 17.5-17.35)"));
  }
  _c0t__result = 0;
  return _c0t__result;
}
long map_length = 654;
const char* source_map[654] = {
  [14] = "mm_helper.c0: 21.12-21.27",
  [22] = "mm_helper.c0: 26.4-26.25",
  [23] = "mm_helper.c0: 27.23-27.38",
  [24] = "mm_helper.c0: 27.4-27.39",
  [46] = "mm_helper.c0: 51.9-51.20",
  [51] = "mm_helper.c0: 49.13-49.30",
  [52] = "mm_helper.c0: 49.4-49.31",
  [59] = "mm_helper.c0: 58.12-58.29",
  [60] = "mm_helper.c0: 58.4-58.30",
  [67] = "mm_helper.c0: 67.16-67.28",
  [69] = "mm_helper.c0: 64.12-64.29",
  [70] = "mm_helper.c0: 64.4-64.44",
  [73] = "mm_helper.c0: 69.16-69.27",
  [75] = "mm_helper.c0: 64.12-64.29",
  [76] = "mm_helper.c0: 64.4-64.44",
  [100] = "mm_helper.c0: 89.12-89.34",
  [101] = "mm_helper.c0: 89.4-89.35",
  [107] = "mm_helper.c0: 97.9-97.25",
  [112] = "mm_helper.c0: 95.13-95.35",
  [113] = "mm_helper.c0: 95.4-95.36",
  [120] = "mm_helper.c0: 104.12-104.34",
  [121] = "mm_helper.c0: 104.4-104.35",
  [127] = "mm_helper.c0: 112.9-112.25",
  [132] = "mm_helper.c0: 110.13-110.35",
  [133] = "mm_helper.c0: 110.4-110.36",
  [140] = "mm_helper.c0: 122.16-122.33",
  [142] = "mm_helper.c0: 119.12-119.34",
  [143] = "mm_helper.c0: 119.4-119.49",
  [146] = "mm_helper.c0: 124.16-124.32",
  [148] = "mm_helper.c0: 119.12-119.34",
  [149] = "mm_helper.c0: 119.4-119.49",
  [157] = "mm_helper.c0: 132.16-132.33",
  [159] = "mm_helper.c0: 129.12-129.34",
  [160] = "mm_helper.c0: 129.4-129.49",
  [163] = "mm_helper.c0: 134.16-134.32",
  [165] = "mm_helper.c0: 129.12-129.34",
  [166] = "mm_helper.c0: 129.4-129.49",
  [173] = "mm_helper.c0: 139.21-139.36",
  [174] = "mm_helper.c0: 139.4-139.37",
  [176] = "mm_helper.c0: 147.9-147.37",
  [178] = "mm_helper.c0: 148.9-148.32",
  [180] = "mm_helper.c0: 149.9-149.32",
  [183] = "mm_helper.c0: 140.12-140.35",
  [184] = "mm_helper.c0: 140.4-140.44",
  [185] = "mm_helper.c0: 141.12-141.30",
  [186] = "mm_helper.c0: 141.4-141.31",
  [187] = "mm_helper.c0: 142.12-142.29",
  [188] = "mm_helper.c0: 142.4-142.44",
  [189] = "mm_helper.c0: 143.12-143.34",
  [190] = "mm_helper.c0: 143.4-143.49",
  [191] = "mm_helper.c0: 144.12-144.34",
  [192] = "mm_helper.c0: 144.4-144.49",
  [198] = "mm_helper.c0: 154.21-154.36",
  [199] = "mm_helper.c0: 154.4-154.37",
  [201] = "mm_helper.c0: 162.9-162.37",
  [203] = "mm_helper.c0: 163.9-163.32",
  [205] = "mm_helper.c0: 164.9-164.32",
  [208] = "mm_helper.c0: 155.12-155.35",
  [209] = "mm_helper.c0: 155.4-155.44",
  [210] = "mm_helper.c0: 156.13-156.31",
  [211] = "mm_helper.c0: 156.4-156.32",
  [212] = "mm_helper.c0: 157.12-157.29",
  [213] = "mm_helper.c0: 157.4-157.44",
  [214] = "mm_helper.c0: 158.12-158.34",
  [215] = "mm_helper.c0: 158.4-158.49",
  [216] = "mm_helper.c0: 159.12-159.34",
  [217] = "mm_helper.c0: 159.4-159.49",
  [241] = "mm_helper.c0: 190.12-190.29",
  [242] = "mm_helper.c0: 190.32-190.49",
  [244] = "mm_helper.c0: 188.23-188.41",
  [245] = "mm_helper.c0: 188.4-188.42",
  [251] = "mm_helper.c0: 194.27-194.42",
  [252] = "mm_helper.c0: 194.4-194.47",
  [253] = "mm_helper.c0: 195.27-195.42",
  [254] = "mm_helper.c0: 195.4-195.43",
  [255] = "mm_helper.c0: 196.4-196.41",
  [257] = "mm_helper.c0: 197.12-197.35",
  [258] = "mm_helper.c0: 197.4-197.50",
  [259] = "mm_helper.c0: 198.12-198.35",
  [260] = "mm_helper.c0: 198.4-198.50",
  [266] = "mm_helper.c0: 206.26-206.36",
  [267] = "mm_helper.c0: 206.4-206.37",
  [269] = "mm_helper.c0: 212.5-212.19",
  [271] = "mm_helper.c0: 212.5-212.31",
  [272] = "mm_helper.c0: 212.34-212.93",
  [273] = "mm_helper.c0: 212.5-212.93",
  [274] = "mm_helper.c0: 213.5-213.19",
  [276] = "mm_helper.c0: 213.5-213.31",
  [277] = "mm_helper.c0: 213.34-213.93",
  [278] = "mm_helper.c0: 213.5-213.93",
  [279] = "mm_helper.c0: 215.12-215.44",
  [281] = "mm_helper.c0: 207.12-207.35",
  [282] = "mm_helper.c0: 207.4-207.50",
  [283] = "mm_helper.c0: 208.12-208.35",
  [284] = "mm_helper.c0: 208.4-208.61",
  [290] = "mm_helper.c0: 220.4-220.22",
  [291] = "mm_helper.c0: 221.21-221.39",
  [292] = "mm_helper.c0: 221.4-221.40",
  [298] = "mm_helper.c0: 228.5-228.15",
  [299] = "mm_helper.c0: 228.5-228.22",
  [301] = "mm_helper.c0: 229.5-229.19",
  [302] = "mm_helper.c0: 229.5-229.30",
  [303] = "mm_helper.c0: 232.15-232.66",
  [306] = "mm_helper.c0: 222.20-222.37",
  [307] = "mm_helper.c0: 222.4-222.47",
  [312] = "mm_helper.c0: 240.14-240.28",
  [313] = "mm_helper.c0: 240.29-240.48",
  [314] = "mm_helper.c0: 240.14-240.49",
  [315] = "mm_helper.c0: 240.5-240.50",
  [316] = "mm_helper.c0: 241.14-241.28",
  [317] = "mm_helper.c0: 241.29-241.48",
  [318] = "mm_helper.c0: 241.14-241.49",
  [319] = "mm_helper.c0: 241.5-241.50",
  [326] = "mm_rw.c0: 9.35-9.54",
  [331] = "mm_rw.c0: 9.4-9.55",
  [332] = "mm_rw.c0: 11.22-11.41",
  [334] = "mm_rw.c0: 12.12-12.26",
  [335] = "mm_rw.c0: 12.12-12.38",
  [343] = "mm_rw.c0: 17.35-17.54",
  [348] = "mm_rw.c0: 17.4-17.55",
  [350] = "mm_rw.c0: 20.22-20.41",
  [352] = "mm_rw.c0: 21.5-21.19",
  [354] = "mm_rw.c0: 21.5-21.31",
  [355] = "mm_rw.c0: 21.5-21.38",
  [357] = "mm_rw.c0: 18.20-18.51",
  [358] = "mm_rw.c0: 18.4-18.52",
  [365] = "mm_rw.c0: 29.35-29.54",
  [370] = "mm_rw.c0: 29.4-29.55",
  [371] = "mm_rw.c0: 30.4-30.44",
  [372] = "mm_rw.c0: 33.20-33.39",
  [374] = "mm_rw.c0: 34.14-34.28",
  [375] = "mm_rw.c0: 34.14-34.40",
  [377] = "mm_rw.c0: 35.10-35.32",
  [380] = "mm_rw.c0: 31.4-31.43",
  [387] = "mm_rw.c0: 41.35-41.54",
  [392] = "mm_rw.c0: 41.4-41.55",
  [393] = "mm_rw.c0: 42.4-42.38",
  [394] = "mm_rw.c0: 43.4-43.44",
  [396] = "mm_rw.c0: 46.22-46.41",
  [398] = "mm_rw.c0: 47.5-47.19",
  [400] = "mm_rw.c0: 47.5-47.31",
  [401] = "mm_rw.c0: 47.35-47.57",
  [402] = "mm_rw.c0: 47.5-47.58",
  [404] = "mm_rw.c0: 44.20-44.66",
  [405] = "mm_rw.c0: 44.4-44.67",
  [413] = "<unknown location>",
  [423] = "/afs/andrew/course/15/122/lib/string.h0: 19.33-19.49",
  [428] = "/afs/andrew/course/15/122/lib/string.h0: 19.6-19.50",
  [429] = "<unknown location>",
  [437] = "<unknown location>",
  [439] = "/afs/andrew/course/15/122/lib/string.h0: 23.14-23.36",
  [440] = "/afs/andrew/course/15/122/lib/string.h0: 24.19-24.35",
  [441] = "/afs/andrew/course/15/122/lib/string.h0: 24.38-24.54",
  [442] = "/afs/andrew/course/15/122/lib/string.h0: 23.6-24.55",
  [451] = "/afs/andrew/course/15/122/lib/string.h0: 31.52-31.68",
  [456] = "/afs/andrew/course/15/122/lib/string.h0: 31.6-31.69",
  [457] = "<unknown location>",
  [459] = "/afs/andrew/course/15/122/lib/string.h0: 32.14-32.36",
  [460] = "/afs/andrew/course/15/122/lib/string.h0: 32.6-32.52",
  [467] = "<unknown location>",
  [475] = "<unknown location>",
  [477] = "/afs/andrew/course/15/122/lib/string.h0: 37.6-37.44",
  [484] = "<unknown location>",
  [492] = "<unknown location>",
  [500] = "/afs/andrew/course/15/122/lib/string.h0: 43.6-43.25",
  [501] = "<unknown location>",
  [503] = "/afs/andrew/course/15/122/lib/string.h0: 44.14-44.36",
  [504] = "/afs/andrew/course/15/122/lib/string.h0: 44.6-44.42",
  [505] = "/afs/andrew/course/15/122/lib/string.h0: 45.14-45.39",
  [506] = "/afs/andrew/course/15/122/lib/string.h0: 45.6-45.45",
  [513] = "<unknown location>",
  [521] = "/afs/andrew/course/15/122/lib/string.h0: 52.6-52.41",
  [522] = "<unknown location>",
  [530] = "<unknown location>",
  [532] = "/afs/andrew/course/15/122/lib/string.h0: 56.34-56.50",
  [533] = "/afs/andrew/course/15/122/lib/string.h0: 56.6-56.55",
  [534] = "/afs/andrew/course/15/122/lib/string.h0: 57.41-57.57",
  [535] = "/afs/andrew/course/15/122/lib/string.h0: 57.14-57.62",
  [536] = "/afs/andrew/course/15/122/lib/string.h0: 57.6-57.63",
  [543] = "/afs/andrew/course/15/122/lib/string.h0: 62.15-62.47",
  [544] = "/afs/andrew/course/15/122/lib/string.h0: 62.6-62.48",
  [545] = "<unknown location>",
  [547] = "/afs/andrew/course/15/122/lib/string.h0: 63.14-63.36",
  [548] = "/afs/andrew/course/15/122/lib/string.h0: 63.6-63.55",
  [555] = "<unknown location>",
  [557] = "/afs/andrew/course/15/122/lib/string.h0: 67.6-67.45",
  [564] = "/afs/andrew/course/15/122/lib/string.h0: 69.6-69.34",
  [565] = "<unknown location>",
  [575] = "<unknown location>",
  [581] = "<unknown location>",
  [587] = "<unknown location>",
  [593] = "<unknown location>",
  [599] = "<unknown location>",
  [605] = "<unknown location>",
  [612] = "<unknown location>",
  [620] = "/afs/andrew/course/15/122/lib/conio.h0: 14.16-14.21",
  [621] = "/afs/andrew/course/15/122/lib/conio.h0: 14.6-14.22",
  [622] = "<unknown location>",
  [631] = "mm_helper_test.c0: 8.17-8.32",
  [633] = "mm_helper_test.c0: 9.15-9.59",
  [635] = "mm_helper_test.c0: 10.5-10.30",
  [636] = "mm_helper_test.c0: 11.12-11.23",
  [637] = "mm_helper_test.c0: 11.12-11.26",
  [638] = "mm_helper_test.c0: 11.5-11.34",
  [639] = "mm_helper_test.c0: 12.5-12.30",
  [640] = "mm_helper_test.c0: 13.12-13.23",
  [641] = "mm_helper_test.c0: 13.12-13.26",
  [642] = "mm_helper_test.c0: 13.5-13.34",
  [643] = "mm_helper_test.c0: 14.5-14.39",
  [644] = "mm_helper_test.c0: 16.12-16.23",
  [645] = "mm_helper_test.c0: 16.12-16.26",
  [646] = "mm_helper_test.c0: 16.5-16.39",
  [648] = "mm_helper_test.c0: 17.5-17.35"
};
