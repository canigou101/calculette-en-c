ma_calculatrice :main.o 
		gcc -o ma_calculatrice main.o

main.o: main.c
		gcc -c main.c 

clean:
	  	del /f /q *.o
run :
		./ma_calculatrice.exe
all :
		make ma_calculatrice
		make clean
