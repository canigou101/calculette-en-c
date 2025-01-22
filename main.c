#include <stdio.h>
#include <stdlib.h>
#include "fonc.h"



int main(){
    char exitC='y';
    char choix='z';
    float premierChiffre=0.0,deuxiemeChiffre =0.0,temp=0.0;
    int opC=0;
    
    while (exitC!='y');
    {
        printf("que voulez-vous faire ?\n addition [a], soustraction [s] , multiplication [m] , division [d] , par defaut vous pourrez quitter \n ");
        scanf("%c" , &choix);
        opC= verif(choix);
        switch (opC)
        {
        case (1) :
            printf("donnez le premier chiffre: ");
            scanf("%f", &premierChiffre);
            printf("donnez le deuxième chiffre: ");
            scanf("%f", &deuxiemeChiffre);
            temp=addition(premierChiffre,deuxiemeChiffre);
            printf("%f", temp);
            break;
        case (2) :
            printf("donnez le premier chiffre: ");
            scanf("%f", &premierChiffre);
            printf("donnez le deuxième chiffre: ");
            scanf("%f", &deuxiemeChiffre);
            deuxiemeChiffre=-deuxiemeChiffre;
            temp=addition(premierChiffre,deuxiemeChiffre);
            printf("%f", temp);
            break;
        case (3):
            printf("donnez le premier chiffre: ");
            scanf("%f", &premierChiffre);
            printf("donnez le deuxième chiffre: ");
            scanf("%f", &deuxiemeChiffre);
            temp=multiplication(premierChiffre,deuxiemeChiffre);
            printf("%f", temp);
            break;
        case (4):
            printf("donnez le premier chiffre: ");
            scanf("%f", &premierChiffre);
            printf("donnez le deuxième chiffre: ");
            scanf("%f", &deuxiemeChiffre);
            temp=division(premierChiffre,deuxiemeChiffre);
            printf("%f", temp);
            break;
        default:
        
            break;
        }
        
    }
    return 0;
}
