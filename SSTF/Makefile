CPPFLAGS=
CFLAGS=
CC=g++
sstf : main.o sstf.o
	$(CC) -m64 -o sstf main.o sstf.o
%.o : %.cpp
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@	
clean:
	rm -rf *.o *~ sstf
	
