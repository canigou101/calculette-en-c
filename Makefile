ma_calculatrice :main.o 
	gcc -o ma_calculatrice.exe main.o

main.o: main.c
	gcc - main.c 

run : ma_calculatrice.exe