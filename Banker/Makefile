CPPFLAGS=
CFLAGS=
CC=g++
banker: main.o banker.o
	$(CC) -o banker main.o banker.o
%.o : %.cpp
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@	
clean:
	rm -rf *.o *~ banker