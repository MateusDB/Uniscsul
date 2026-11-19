#include <stdio.h>

int main(){
    float n1, n2, media, frequencia;
    
    printf("Digite a nota da sua a1: \n");
    scanf("%f", &n1);
    
    printf("Digite a nota da sua a2: \n");
    scanf("%f", &n2);
    
    printf("Digite a sua freqência: \n");
    scanf("%f", &frequencia);
    
    media=(n1+n2)/2;
    
    if(frequencia>=75){
        if(media>=6){
            printf("Paranbéns aprovado!! \n");
        }else{
            printf("Reprovado por média insuficiente!! \n");
        }
    }else{
        printf("Reprovado por falta");
    }

    return 0;
}