#include <stdio.h>
#include <math.h>

int main (){
	
	int i,soma,dado;
	int dados[100];
	
	printf("Defina a quantidade de dados\n");
	scanf("%d",&dado);
	
	for(i=0;i<dado;i++){
		printf("Digite o dado a ser somado:\n");
		scanf("%d", &dados[i]);
		printf("O dado foi: %d\n", dados[i]);
	
		soma=dados[i]+dados[i];
		printf("A soma dos dados foi: %d\n", soma);
	}
}
