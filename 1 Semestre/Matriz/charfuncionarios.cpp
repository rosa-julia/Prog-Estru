#include<stdio.h>
//Programa que lê o nome de 4 funcionarios em vetor, e
//recebe 16 salários em matriz, sendo 4 o de cada funcionário.
//E depois imprime os nomes e os respectivos salários.


int main(){
	char nomes[4][50];
	float matriz[4][4];
	int i, j;
	
	for(i=0; i<4; i++){

			printf("Digite os nomes: ", i);
			scanf("%s", &nomes[i]);
		
		}
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("Digite os salarios:", i ,j);
			scanf("%f", &matriz [i] [j]);
			
		}
	}
	printf("Os funcionarios sao:\n");
	for(i=0; i<4; i++){
		printf("%s\t", nomes [i] );
	}
	
	printf("\n Os salarios foram: \n\t");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
		printf("%.2f\t", matriz [i] [j]);	
	}
}
			
			
}
	

