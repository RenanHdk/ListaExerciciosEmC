#include <stdio.h>

/*
Autor: Renan Hideki Sugiura

 Entrada: nome e nota dos alunos
 Saida: media geral das notas
 Processamento: funcoes especificas para entrada de dados e calculo da media
 criacao de struct para os alunos
 arrar da struct
*/

typedef struct{
	char nome[20];
	float nota;
} ALUNO;


void entradaDdos(ALUNO *v, int qntd){
	int i;
	for(i=0; i<qntd; i++){
		printf("\nNome do Aluno: "); scanf("%s", v[i].nome);
		printf("Nota do aluno: "); scanf("%f", &v[i].nota);
		while(v[i].nota<0 || v[i].nota>10){
			printf("Nota invalida, insira novamente: "); scanf("%f", &v[i].nota);
		}
	}
}

void print(ALUNO *v, int qntd){
	int i;
	for(i=0; i<qntd;i++)
		printf("\nNome: %s\nNota: %.2f\n", v[i].nome, v[i].nota);
}

float media(ALUNO *v, int qntd){
	float media = 0; 
	int i;
	for(i=0; i<qntd; i++){
		media+=v[i].nota;
	}
	return media/qntd;
}

int main(){
	int qntd;
	printf("Insira a quantidade de alunos: "); scanf("%d", &qntd);
	while(qntd<0){
		printf("Quantidade invalida, insira novamente: "); scanf("%d", qntd);
	}
	float mediaAlunos;
	ALUNO v[qntd];
	entradaDdos(v, qntd);
	print(v, qntd);
	mediaAlunos = media(v, qntd);
	printf("\n\nMedia aproximada da nota dos alunos: %.2f", mediaAlunos);
}
