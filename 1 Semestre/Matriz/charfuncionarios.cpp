#include<stdio.h>
//Programa que l� o nome de 4 funcionarios em vetor, e
//recebe 16 sal�rios em matriz, sendo 4 o de cada funcion�rio.
//E depois imprime os nomes e os respectivos sal�rios.


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
	

