#include <stdio.h>
#include <stdlib.h> // biblioteca usada para o uso do valor absoluto

int main()
{
    // Entrada
    int maior, a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    maior = (a+b+abs(a-b))/2;
    maior = (maior+c+abs(maior-c))/2;
    
    // Saída
    printf("%d eh o maior\n", maior);
}
