#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    
	char nome1[50];
    char nome2[50];
    int valor1, valor2;
    int compara;
	
	printf("Digite o primeiro nome: ");
	gets(nome1);
	
	printf("\nDigite o segundo nome: ");
	gets(nome2);
	
	valor1= strlen(nome1);
	valor2= strlen(nome2);

	printf("O primeiro nome possui %d de caracteres;\n"
	"O segundo nome possui %d de caracteres.\n", valor1, valor2);
	
	compara = strcmp(nome1, nome2);
	    if(compara > 0) {
	        printf("O nome %s é maior.\n", nome1);
	    }else if(compara < 0) {
	        printf("O nome %s é menor.\n", nome1);
	    }else {
	        printf("Nomes de mesmo tamanho.");
	    }
	
	return 0;
}
