CPPFLAGS=
CFLAGS=
CC=g++
lru: main.o lru.o
	$(CC) -o lru main.o lru.o
%.o : %.cpp
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@	
clean:
	rm -rf *.o *~ lru