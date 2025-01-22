ma_calculatrice :main.o  fonc.o
		gcc -o ma_calculatrice main.o fonc.o

main.o: main.c
		gcc -c main.c 
fonc.o : fonc.c
		gcc -c fonc.c
clean:
	  	del /f /q *.o
run :
		./ma_calculatrice.exe
all :
		make ma_calculatrice
		make clean
