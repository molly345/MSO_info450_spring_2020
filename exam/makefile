CC = g++
CFLAGS = -g -Wall

default: account

account: account.o checking.o savings.o creditcard.o main.o

savings.o : savings.cpp savings.h
	$(CC) $(CFLAGS) -c savings.cpp

creditcard.o : creditcard.cpp creditcard.h
	$(CC) $(CFLAGS) -c creditcard.cpp

account.o : account.cpp account.h
	$(CC) $(CFLAGS) -c account.cpp

checking.o : checking.cpp checking.h
	$(CC) $(CFLAGS) -c checking.cpp

main.o : main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean :
	$(RM) account *.o *~



