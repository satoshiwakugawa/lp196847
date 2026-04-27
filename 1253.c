#include <stdio.h>

int main()
{
    int quantia, passo, indice_atual, indice_novo;
    
    char letras[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char texto[60];
    char texto_final[60];
    
    scanf("%d", &quantia);
    for(int i = 0; i < quantia; i++){
        scanf("%s\n%d", &texto, &passo);
        
        int j = 0;
        while(texto[j] != '\0'){
            for(indice_atual=0; indice_atual<26; indice_atual++){
                if (texto[j] == letras[indice_atual]){
                    indice_novo = indice_atual - passo;
                    break;
                }
            }
            
            if(indice_novo<0){
                indice_novo=indice_novo + 26;
            }
            
            texto_final[j] = letras[indice_novo];
            j++;
        }
        texto_final[j] = '\0';
        printf("%s\n", texto_final);
        
    }
    return 0;
}
