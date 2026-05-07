#include <stdio.h>
#include <string.h>

int main() {
    int N, j;
    char linha[1005];

    if (scanf("%d", &N) != 1) return 0;
    getchar();

    for (j = 0; j < N; j++) {
        if (fgets(linha, sizeof(linha), stdin)) {
            int i, k, tam;
            tam = strlen(linha);
            
            if (tam > 0 && linha[tam - 1] == '\n') {
                linha[tam - 1] = '\0';
                tam--;
            }

            for (i = 0; i < tam; i++) {
                if ((linha[i] >= 'a' && linha[i] <= 'z') || (linha[i] >= 'A' && linha[i] <= 'Z')) {
                    linha[i] = linha[i] + 3;
                }
            }

            for (i = 0, k = tam - 1; i < k; i++, k--) {
                char temp = linha[i];
                linha[i] = linha[k];
                linha[k] = temp;
            }

            for (i = tam / 2; i < tam; i++) {
                linha[i] = linha[i] - 1;
            }

            printf("%s\n", linha);
        }
    }

    return 0;
}
