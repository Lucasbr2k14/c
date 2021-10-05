#include <stdio.h>
//Scanf pergunta ao usuario


int main(){

    int a;

    printf("Digite um numero de 0-9 --> ");
    scanf("%d", &a);
    
    if(a >= -1 & a != ""){
        printf("você digitou: %d \n",a);
    }else{
        printf("Você não digitou nada.\n");
    }

    return 0;
}
