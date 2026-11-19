#include <stdio.h>
#include <math.h>

int main() {
    int hora, minuto, total;
    
    printf("Digite a hora: \n");
    scanf("%d", &hora);
    
    printf("Digite o minuto: \n");
    scanf("%d", &minuto);
    
    total = 60 * hora + minuto;
    
    printf("Já se passaram %d minutos desde o início do dia!", total);
    
    return 0;
}