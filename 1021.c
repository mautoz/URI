#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double N, moedas;
    int notas, temp, resto, intMoedas;

    scanf("%lf", &N);

    notas = (int)N;
    printf("NOTAS:\n");

    temp = 0;
    printf("%d nota(s) de R$ 100.00\n", notas/100);
    temp+=(notas/100)*100;
    printf("%d nota(s) de R$ 50.00\n", (notas%100)/50);
    temp+=((notas%100)/50)*50;
    printf("%d nota(s) de R$ 20.00\n", ((notas%100)%50)/20);
    temp+=(((notas%100)%50)/20)*20;
    printf("%d nota(s) de R$ 10.00\n", (((notas%100)%50)%20)/10);
    temp+=((((notas%100)%50)%20)/10)*10;
    printf("%d nota(s) de R$ 5.00\n", ((((notas%100)%50)%20)%10)/5);
    temp+=(((((notas%100)%50)%20)%10)/5)*5;
    printf("%d nota(s) de R$ 2.00\n", (((((notas%100)%50)%20)%10)%5)/2);
    temp+=((((((notas%100)%50)%20)%10)%5)/2)*2;

    moedas = N - temp;
    resto = (int)(moedas*100);
    if ((moedas*100)-(int)(moedas*100) > 0.01)
        resto+=1;

    printf("MOEDAS:\n");

    intMoedas = resto/100;
    printf("%d moeda(s) de R$ 1.00\n", intMoedas);
    intMoedas = (resto%100)/50;
    printf("%d moeda(s) de R$ 0.50\n", intMoedas);
    intMoedas = ((resto%100)%50)/25;
    printf("%d moeda(s) de R$ 0.25\n", intMoedas);
    intMoedas = (((resto%100)%50)%25)/10;
    printf("%d moeda(s) de R$ 0.10\n", intMoedas);
    intMoedas = ((((resto%100)%50)%25)%10)/5;
    printf("%d moeda(s) de R$ 0.05\n", intMoedas);
    intMoedas = ((((resto%100)%50)%25)%10)%5;
    printf("%d moeda(s) de R$ 0.01\n", intMoedas);

    return 0;
}
