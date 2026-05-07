#include <stdio.h>
#include <string.h>

int main() {
    int casos;
    char A[1001], B[1001];

    if (scanf("%d", &casos));

    for (int i = 0; i < casos; i++) {
        scanf("%s %s", A, B);

        int tamanhoA = strlen(A);
        int tamanhoB = strlen(B);

        if (tamanhoB > tamanhoA) {
            printf("nao encaixa\n");
        } 
        else {
            if (strcmp(&A[tamanhoA - tamanhoB], B) == 0) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }

    return 0;
}
