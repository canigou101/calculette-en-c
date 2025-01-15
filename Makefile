ma_calculatrice :main.o  verif_saisie.o
		gcc -o ma_calculatrice main.o verif_saisie.o

main.o: main.c
		gcc -c main.c 
verif_saisie.o : verif_saisie.c
		gcc -c verif_saisie.c
clean:
	  	del /f /q *.o
run :
		./ma_calculatrice.exe
all :
		make ma_calculatrice
		make clean
