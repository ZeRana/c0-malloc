malloc: mm.c1 mm_helper.c1
	cc0 mm_helper.c1 mm.c1 -o malloc

malloc-debug: mm.c1 mm_helper.c1
	cc0 -d mm_helper.c1 mm.c1 -o malloc-debug

helper-debug: mm_helper.c1 mm_helper_test.c1
	cc0 -d -s mm_helper.c1 mm_helper_test.c1 -o helper-debug
	mv mm_helper_test.c1.c compiled/mm_helper_test.c
	mv mm_helper_test.c1.h compiled/mm_helper_test.h

.PHONY: clean
clean:
	rm -f *.o
	rm -f malloc
	rm -f malloc-debug
	rm -f helper-debug
	rm -f compiled/*.c
	rm -f compiled/*.h
