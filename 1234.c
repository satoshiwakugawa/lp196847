#include <stdio.h>
#include <ctype.h>

int main()
{
    char letras[60];
    
    while (fgets(letras, 60, stdin) != NULL){
        
        int proxima_letra = 1;
    
        for(int i = 0; letras[i] != '\0'; i++){
            if ((letras[i] >= 'a' && letras[i] <= 'z') || (letras[i] >= 'A' && letras[i] <= 'Z')){
                if (proxima_letra == 1){
                    letras[i] = toupper(letras[i]);
                    proxima_letra = 0;
                }
                else{
                    letras[i] = tolower(letras[i]);
                    proxima_letra = 1;
                }
            }
        }
        
        printf("%s", letras);
    }

    return 0;
}
