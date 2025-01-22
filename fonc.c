#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonc.h"


int verif(char c){
    if (c=='a'){
        return 1;
    }
    else if (c=='s'){
        return 2;
    }
    else if (c=='m'){
        return 3;
    }
    else if (c=='d'){
        return 4;
    }
    return 0;
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