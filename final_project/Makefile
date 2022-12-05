CC =g++ -std=c++14 -c

CFLAGS=-g -I/usr/include/jsoncpp

LDFLAGS =-ljsoncpp

# rules.
all:	main

#
#

Place.o:	Place.cpp Place.h
	$(CC) -c $(CFLAGS) Place.cpp

Time.o:	Time.cpp Time.h
	$(CC) -c $(CFLAGS) Time.cpp

Person.o:	Person.cpp Person.h
	$(CC) -c $(CFLAGS) Person.cpp

Thing.o:	Thing.cpp Thing.h
	$(CC) -c $(CFLAGS) Thing.cpp

Record.o:	Record.cpp Place.h Thing.h Person.h Time.h Record.h
	$(CC) -c $(CFLAGS) Record.cpp

main.o:	main.cpp Place.h Thing.h Person.h Time.h Record.h
	$(CC) -c $(CFLAGS) main.cpp

main:	Place.o main.o Thing.o Person.o Time.o Record.o
	g++ -std=c++14 main.o Place.o Thing.o Person.o Time.o Record.o -o main $(LDFLAGS)

clean:
	rm -f *.o *~ core main