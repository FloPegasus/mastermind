CFLAGS = -g -pedantic -Wall -Wextra

mastermind : mastermind.o fonctions.o 
	g++ -g -o mastermind mastermind.o fonctions.o 

mastermind.o : mastermind.cpp
	g++ -c $(CFLAGS) mastermind.cpp

fonctions.o : fonctions.cpp
	g++ -c $(CFLAGS) fonctions.cpp

clean:
	rm *.o mastermind