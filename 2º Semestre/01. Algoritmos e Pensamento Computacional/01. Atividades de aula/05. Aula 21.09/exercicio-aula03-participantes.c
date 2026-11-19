#include <stdio.h>

int main() {
    int participantes;
    
    do{
        printf("Digite o números de participantes do grupo: \n");
        scanf("%d", &participantes);    
    }while(participantes<1 || participantes>3);
    
    printf("Número de participantes registrado! \n");

    return 0;
}