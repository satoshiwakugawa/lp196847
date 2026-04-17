#include <stdio.h>

int main()
{
    int V[100];
    int maximo = 0;
    int n;
    int posicao = 0;
    
    for (int i = 0; i <= 99; i++){
        scanf("%d", &n);
        V[i] = n;
    }
    
    maximo = V[0];
    posicao = 1;
    
    for (int i = 0; i <= 99; i++){
        if (V[i] > maximo){
            maximo = V[i];
            posicao = i + 1;
        }
    }
    printf("%d\n%d\n", maximo, posicao);
}
