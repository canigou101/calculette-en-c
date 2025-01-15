#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float addition(float a,float b);
float multiplication(float a ,float b);
float division(float a, float b);


int main(){
    char exitC='N';
    char choix[25];
    float premierChiffre=0.0;
    float deuxiemeChiffre =0.0;
    float temp=0.0;

    enum operation op {
        addition,soustraction,multiplication,division
    };
    
    do{
        printf("voullez vous quitter [Y][N] \n");
        scanf("%c" , &exitC);
    }
    while (exitC!='Y');
    {
        printf("que voulez-vous faire ?\n addition, soustraction , multiplication , division , par defaut vous pourrez quitter \n ");
        scanf("%s" , &choix);
        switch (choix)
        {
        case (choix==operation[0]) :
            printf("donnez le premier chiffre");
            scanf("%f", &premierChiffre);
            printf("donnez le deuxième chiffre");
            scanf("%f", &deuxiemeChiffre);
            temp=addition(premierChiffre,deuxiemeChiffre);
            printf("%f", temp);
            break;
        case (choix==operation[1]) :
            break;
        case (choix==operation[2]):
            break;
        case (choix==operation[3]):
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