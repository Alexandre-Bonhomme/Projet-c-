.PHONY: all, clean

CC = g++
CFLAGS = -g -Wall -Werror

LIBS += -lpthread

PROGS = exe


ll: $(PROGS)	

Trajet.o: Trajet.cpp 
	$(CC) $(CFLAGS) -c -o $@ $<

TSimple.o: TSimple.cpp 
	$(CC) $(CFLAGS) -c -o $@ $<	

TCompose.o: TCompose.cpp 
	$(CC) $(CFLAGS) -c -o $@ $<	

main.o: main.cpp 
	$(CC) $(CFLAGS) -c -o $@ $<	

exe: main.o Trajet.o TSimple.o TCompose.o
	$(CC) -o $@ $^ $(LIBS)
clean:
	rm -f $(PROGS) *.o
