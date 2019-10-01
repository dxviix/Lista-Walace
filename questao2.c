#include <locale.h>
#include <stdio.h>
int main()
{  
    setlocale(LC_ALL, "Portuguese");
    
    int num[10];
    int i;
    int cont3;
    
    printf("Digite 10 números positivos e diferente de zero: \n");
    
    for(i=0; i < 10 ; i++)
    {
        scanf("%d", &num[i]);
        
        if(num[i] == 3) {
            cont3++;   
        }
    }
    
    printf("O número 3 foi digitado %d vez(es).", cont3++);

    
    
    return 0;
} 
