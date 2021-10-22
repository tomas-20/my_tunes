all: test.o song_list.o
	gcc -o test test.o song_list.o
test.o: test.c song_list.h
	gcc -c test.c
pokemon.o: song_list.c
	gcc -c song_list.c
clean:
	rm *.o
