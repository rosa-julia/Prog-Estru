#include <stdio.h>
//Matriz com char de nomes

int main(){
	char matrizNomes[2][2][50];
	int i, j;
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			
			printf("Digite os nomes: ", i, j);
			scanf("%s", &matrizNomes[i] [j]);
		
		}
	}
	
	
		
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			
			printf("%s \t", matrizNomes[i] [j]);
	
		}
	}
	
}
