CPPFLAGS=
CFLAGS=
CC=g++
linkedlist: main.o C7LinkedList.o
	$(CC) -m64 -o linkedlist main.o C7LinkedList.o
%.o : %.cpp
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@	
clean:
	rm -rf *.o *~ linkedlist
	
