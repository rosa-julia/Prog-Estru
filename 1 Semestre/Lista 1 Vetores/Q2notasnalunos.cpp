#include <stdio.h>
#include <math.h>

int main (){
	
	int i, aluno;
	int nota[50];
	
	printf("Defina a quantidade de alunos\n");
	scanf("%d",&aluno);
	
	
	for(i=0;i<aluno;i++){
		printf("Digite a nota do aluno\n");
		scanf("%d", &nota[i]);
		printf("A nota foi: %d\n", nota[i]);
	}
		
}
