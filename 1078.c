#include <stdio.h>

int main()
{
    int numero, resultado;
    
    scanf("%d", &numero);
    
    for(int i = 1; i<11; i++){
        resultado = numero*i;
        printf("%d x %d = %d\n", i, numero, resultado);
    }
    return 0;
}
