#include <stdio.h>
#include <math.h>

int main() {
    float largura, comprimento, valorCaixa, area, valorTotal;
    int qtdCaixas;
    
    printf("Digite a largura da área à ser revestida em metros: \n");
    scanf("%f", &largura);
    printf("Digite o comprimento da área à ser revestida em metros: \n");
    scanf("%f", &comprimento);
    printf("Digite o valor de uma caixa de piso: \n");
    scanf("%f", &valorCaixa);
    
    area = largura * comprimento;
    qtdCaixas = (int) ceil(area / 2.5);
    valorTotal =qtdCaixas * valorCaixa;
    
    printf("A área total à ser revestida é de: %.2f m² \n", area);
    printf("A quantidade de caixas necessárias é de %d caixas \n", qtdCaixas); 
    printf("O custo total da compra é de: R$%.2f", valorTotal);
   
    return 0;
}