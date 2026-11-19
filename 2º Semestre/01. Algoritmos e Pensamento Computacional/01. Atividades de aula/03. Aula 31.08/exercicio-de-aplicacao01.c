#include <stdio.h>
#include <math.h>

int main() {
    int m1, m2, total;
    
    printf("Digite a quantidade de produtos recebida no turno da manhã \n");
    scanf("%d", &m1);
    
    printf("Digite a quantidade de produtos recebida no turno da tarde \n");
    scanf("%d", &m2);
    
    total = m1 + m2;
    
    printf("O total de produtos recebido no dia foi de: %d", total);
    
    return 0;
}