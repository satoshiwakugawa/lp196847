#include <stdio.h>

int main()
{
    int x, y, maior, menor, soma;
    
    soma = 0;
    
    scanf("%d\n%d", &x, &y);
    
    if (x >= y){
        maior = x;
        menor = y;
    }
    else{
        maior = y;
        menor = x;
    }
    for (int i = menor + 1; i < maior; i++){
        if(i % 2 != 0)
            soma = soma + i;
    }
    printf("%d\n", soma);

    return 0;
}
