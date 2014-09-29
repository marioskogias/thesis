test: test.c $(DLIBFRONT).so
		gcc test.c -o test -g -I. -L. -lblkin-front

libblkin-front.so: blkin-front.o
		gcc -shared -g -o $@ $< -ldl

blkin-front.o: blkin-front.c
		gcc -I. -g -Wall -fpic -c -o $@ $<

libzipkin-c.so: zipkin_c.o tp.o
		gcc -shared -o $@ $^ $(LIBS)

zipkin_c.o: zipkin_c.c zipkin_c.h zipkin_trace.h
		gcc -I. -Wall -fpic -g -c -o $@ $<

tp.o: tp.c zipkin_trace.h
		gcc -I. -fpic -g -c -o $@ $<
