#include <stdio.h>
#include <math.h>
//3. Faça um algoritmo que calcule e escreva o somatório dos valores armazenados numa variável
//composta unidimensional, chamada dados, de até 100 elementos numéricos a serem lidos.

int main(){
	
	int i,quant;
	float dados[100];
	float somatorio = 0;
	
	printf("Defina a quantidade de dados a serem lidos:\n");
	scanf("%d", &quant);
	
	for(i=0; i<quant; i++){
		printf("Escreva os dados a serem somados:\n");
		scanf("%f",&dados[i]);
		somatorio = somatorio + dados[i];
	}
	printf("A soma dos dados foi: %.2f", somatorio);
}


