malloc: mm.c1 mm_helper.c1
	cc0 mm_helper.c1 mm.c1 -o malloc

malloc-debug: mm.c1 mm_helper.c1
	cc0 -d mm_helper.c1 mm.c1 -o malloc-debug

helper-debug: mm_helper.c1 mm_helper_test.c1
	cc0 -d mm_helper.c1 mm_helper_test.c1 -o helper-debug