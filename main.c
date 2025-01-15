#include <stdio.h>
#include <stdlib.h>
#include "verif_saisie.h"

float addition(float a,float b);
float multiplication(float a ,float b);
float division(float a, float b);


int main(){
    char exitC='N';
    char choix[25];
    float premierChiffre=0.0,deuxiemeChiffre =0.0,temp=0.0;
    int opC=0;
    
    do{
        printf("voullez vous quitter [Y][N] \n");
        scanf("%c" , &exitC);
    }
    while (exitC!='Y');
    {
        printf("que voulez-vous faire ?\n addition, soustraction , multiplication , division , par defaut vous pourrez quitter \n ");
        scanf("%s" , &choix);

        switch (opC)
        {
        case (1) :
            printf("donnez le premier chiffre");
            scanf("%f", &premierChiffre);
            printf("donnez le deuxième chiffre");
            scanf("%f", &deuxiemeChiffre);
            temp=addition(premierChiffre,deuxiemeChiffre);
            printf("%f", temp);
            break;
        case (2) :
            break;
        case (3):
            break;
        case (4):
            break;
        default:
            printf("voullez vous quitter [Y][N] \n");
            scanf("%c", &exitC);
            break;
        }
        
    }
    
}
float addition(float a,float b){
    float res= a+b;
    return res;
}
float multiplication(float a ,float b){
    float res=a*b;
    return res ;
}
float division(float a, float b){
    float res =a/b;
    return res ;
}