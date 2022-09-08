#include <stdio.h>
#include <stdlib.h>

//algoritmo que recebe o valor da hora e calcula quantos minutos
//e quantos segundos ha no valor de horas informadas

int main(){
	int hora[10],minuto[10],segundo[10];
	int i;
	char nomeUsuario[50]; //%s scanf("%s", &nomeUsuario)
	
	printf("Digite o nome de usuario\n");
	scanf("%s", &nomeUsuario);
	
	for (i=0;i<10;i++){
		printf("Digite o valor da hora:\n");
		scanf("%i", &hora[i]);

	minuto[i] = hora[i] * 60;
	segundo[i] = minuto[i] * 60;
	
	printf("Horas: %d\n", hora[i]);
	printf("Minutos: %d\n", minuto[i]);
	printf("Segundos: %d\n", segundo[i]);
}
}


