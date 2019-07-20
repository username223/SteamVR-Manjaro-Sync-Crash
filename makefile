CC=gcc

INC=-Iinclude
LIB=-L. -l:lib/libopenvr_api.so
LDFLAGS='-Wl,-rpath=$$ORIGIN/lib'

main.o: main.cpp
	$(CC) -o main main.cpp $(INC) $(LIB) $(LDFLAGS)
	./main

run:
	./main

clean:
	rm main
