CPPFLAGS=
CFLAGS=
CC=g++
paging: main.o paging.o
	$(CC) -o paging main.o paging.o
%.o : %.cpp
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@	
clean:
	rm -rf *.o *~ paging