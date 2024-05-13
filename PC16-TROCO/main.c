#include <stdio.h>
#include <stdlib.h>

/*  ESCREVA UM ALGORITMO EM C QUE CALCULE O NÚMERO DE NOTAS E DE MOEDAS QUE DEVE SER DADO DE TROCO PARA UM PAGAMENTO EFETUADO.
    O ALGORITMO DEVE LER O VALOR A SER PAGO E O VALOR EFETIVAMENTE PAGO.
    FAÇA ENTÃO O CÁLCULO DO TROCO, SUPONDO QUE QUE O TROCO SEJA DADO EM NOTAS DE 50, 20, 10, 5, 2 E 1 REAL E MOEDAS DE 50, 25, 10, 5 E 1 CENTAVOS DE REAL.
    APRESENTAR QUAIS NOTAS E QUAIS MOEDAS SERÃO DADAS DE TROCO E A QUANTIDADE DE CADA UM. Considerando a melhor hipótese de troco, do maior para o menor.*/


int main()
{

    float valor, valorPago,troco;
    int n50,n20,n10,n5,n2;
    int m1,m50,m25,m10,m05,m01;



    printf("Digite o valor do produto: ");
    scanf("%f",&valor);
    printf("Digite o valor que foi pago: ");
    scanf("%f",&valorPago);
    troco = valorPago - valor;
    troco = round(troco * 100) / 100;



    if(troco == 0){
        printf("Voce nao teve troco");

        return 0;
    }

    printf("Seu troco e de :R$ %f",troco);

    if(troco >= 50){
        n50 = (int)troco/50;
        troco  = troco - (n50*50);
        printf("\n %d nota(s) de R$50.00", n50);

    }

    if(troco >= 20){
        n20 = (int)troco/20;
        troco  = troco - (n20*20);
        printf("\n %d nota(s) de R$20.00", n20);

    }
    if(troco >= 10){
        n10 = (int)troco/10;
        troco  = troco - (n10*10);
        printf("\n %d nota(s) de R$10.00", n10);
    }
    if(troco >= 5){
        n5 = (int)troco/5;
        troco  = troco - (n5*5);
        printf("\n %d nota(s) de R$5.00", n5);
    }
    if(troco >= 2){
        n2 = (int)troco/2;
        troco  = troco - (n2*2);
        printf("\n %d nota(s) de R$2.00", n2);
    }
    if(troco >= 1){
        m1 = (int)troco/1;
        troco  = troco - (m1*1);
        printf("\n %d moeda(s) de R$1.00", m1);
    }

    if(troco >= 0.50){
        m50 = troco/0.50;
        troco  = troco -(m50*0.50);
        printf("\n %d moeda(s) de R$0.50", m50);
    }
    if(troco >= 0.25){
        m25 = troco/0.25;
        troco  = troco -(m25*0.25);
        printf("\n %d moeda(s) de R$0.25", m25);
    }
    if(troco >= 0.10){
        m10 = troco/0.10;
        troco  = troco -(m10*0.10);
        printf("\n %d moeda(s) de R$0.10", m10);
    }
    if(troco >= 0.05){
        m05 = troco/0.05;
        troco  = troco -(m05*0.05);
        printf("\n %d moeda(s) de R$0.05", m05);
    }
    if(troco >= 0.01){
        m01 = troco/0.01;
        troco  = troco -(m01*0.01);
        printf("\n %d moeda(s) de R$0.01", m01);
    }



    return 0;
}
