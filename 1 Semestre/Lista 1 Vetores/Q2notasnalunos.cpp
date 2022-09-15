#include <stdio.h>
#include <math.h>
//2. Altere o algoritmo anterior considerando que não se conhece quantos alunos esta turma tem
//(menos que 50). O número de aluno será informado pelo usuário.
int main (){
	
	int i, aluno;
	int nota[50];
	
	printf("Defina a quantidade de alunos\n");
	scanf("%d",&aluno);
	
	
	for(i=0;i<aluno;i++){
		printf("Digite a nota do aluno\n");
		scanf("%d", &nota[i]);
		
	}
	for(i=0;i<aluno;i++){
	printf("A nota foi: %d\n", nota[i]);
	}
}
