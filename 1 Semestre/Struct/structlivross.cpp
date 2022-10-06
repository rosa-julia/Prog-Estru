#include<stdio.h>
struct livro {      //criei um novo tipo de dado, chamado de tipo de dado complexo
	char nome[30], editora [30];
	float valor;
	int volume;
	};
int main(){
	struct livro livros[3];
	int i;
	
	for (i=0; i<3; i++){
		printf("Digite os dados do livro: \n");
		scanf("%s", &livros[i].nome);
		scanf("%s", &livros[i].editora);
		scanf("%f", &livros[i].valor);
		scanf("%d", &livros[i].volume);
	}
	printf("Lista de livros \n");
	printf("Nome\tEditora\tValor\tVolume\n");
	for(i=0; i<3; i++)
		printf("%s\t%s\t%.2f\t%d\n", livros[i].nome, livros[i].editora, livros[i].valor, livros[i].volume);
	
	
}
