#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int num[10];
    int i;
    int x=0;
    
    printf("Digite 10 números inteiros e maiores que 0: \n");
    
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
        
        if(num[i] > x)
        {
            x = num[i];
        }
    }
    
    printf("O maior número entre os escolhidos foi: \n %d", x);
    
    return 0;
}
