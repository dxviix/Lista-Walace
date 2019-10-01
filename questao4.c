#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Porguese");
    
    char nome[50];
    int i;
    int cont=0;
    
    printf("Digite seu nome: ");
    gets(nome);
    
    printf("Seu nome é: %s\n", nome);
    
    printf("Os caracteres ordem crescente são: \n");
    
    for(i=0; nome[i] != '\0' && i < 50; i++) {
       printf("%c\n", nome[i]);
       cont++;
    }

    printf("Os caracteres ordem decrescente são: \n");

    for(i = cont; i >= 0 ; i--) {
       printf("%c\n", nome[i]);
    }

    
    return 0;
}
