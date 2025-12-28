malloc: mm.c0 mm_helper.c0
	cc0 mm_helper.c0 mm.c0 -o malloc

malloc-debug: mm.c0 mm_helper.c0
	cc0 -d mm_helper.c0 mm.c0 -o malloc-debug

helper-debug: mm_helper.c0 mm_rw.c0 mm_helper_test.c0
	cc0 -d -s mm_helper.c0 mm_rw.c0 mm_helper_test.c0 -o helper-debug
	mv mm_helper_test.c0.c compiled/mm_helper_test.c0.c
	mv mm_helper_test.c0.h compiled/mm_helper_test.c0.h

.PHONY: clean
clean:
	rm -f *.o
	rm -f malloc
	rm -f malloc-debug
	rm -f helper-debug
	rm -f compiled/*.c0*
