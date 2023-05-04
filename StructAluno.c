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
	int nota;
} ALUNO;

int valid(char *txt, int opcao, int a, int b){
	int tmp;
	if(opcao==1){
		printf(txt); scanf("%d", &tmp);
		while(tmp<=a){
			printf("Invalido, insira novamente: "); scanf("%d", &tmp);
		}
	}
	else if(opcao==2){
		printf(txt); scanf("%d", &tmp);
		while(tmp<a || tmp>b){
			printf("Invalido, insira novamente: "); scanf("%d", &tmp);
		}
	}
	return tmp;
}


void entradaDdos(ALUNO *v, int qntd){
	int i;
	for(i=0; i<qntd; i++){
		printf("\nNome do Aluno: "); scanf("%s", v[i].nome);
		v[i].nota = valid("Nota do Aluno: ", 2, 0, 10);
	}
}

void print(ALUNO *v, int qntd){
	int i;
	for(i=0; i<qntd;i++)
		printf("\nNome: %s\nNota: %d\n", v[i].nome, v[i].nota);
}

int media(ALUNO *v, int qntd){
	int media = 0, i;
	for(i=0; i<qntd; i++){
		media+=v[i].nota;
	}
	return media/qntd;
}

int main(){
	int qntd = valid("Insira a quantidade de alunos: ", 1, 0, 0);
	int mediaAlunos;
	ALUNO v[qntd];
	entradaDdos(v, qntd);
	print(v, qntd);
	mediaAlunos = media(v, qntd);
	printf("\n\nMedia aproximada da nota dos alunos: %d", mediaAlunos);
}
