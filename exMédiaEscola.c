/*
Autor: Renan Hideki Sugiura

Saída: Média de todas as turmas; Media geral das turmas
Entrada: Número de turmas e notas/qntd de alunos de cada turma
processo:
mediaTurma: Gera uma array bidimensional(turma[qntd de turmas][2], onde turmas[][0] = numero da turma e turmas[][1] = media da turma)
mediaEscola: Recebe o array bidimensional e printa as medias
*/

#include <stdio.h>
#include <stdlib.h>
int input(int);
float media(int);
float **mediaTurma(int, int);
void clear(float **, int);
void mediaEscola(float **, int);

int main(){
	printf("\nInsira a quantidade de turmas: ");
	int qntd = input(0), i, j;
	float **turmas = mediaTurma(qntd, 2);
	mediaEscola(turmas, qntd);
	clear(turmas, qntd);
}

int input(int num){
	int n;
	while(1){
		scanf("%d", &n);
		if(n>num)
			break;
		else
			printf("\nValor invalido, insira novamente: ");
	}
	return n;
}

float media(int qntdAlunos){
	int i;
	float soma=0, temp;
	for(i=0; i<qntdAlunos; i++){
		printf("Insira a nota do aluno %d: ", i+1);
		while(1){
			scanf("%f", &temp);
			if(temp>=0 &&temp<=10)
				break;
			else
				printf("Valor invalido, insira novamente: ");
		}
		soma+=temp;
	}
	return soma/qntdAlunos;
}



float **mediaTurma(int qntd, int r){
	
	int i, qntdAlunos;
	float **turmas; 
	turmas = (float **)malloc( qntd * sizeof(float *));
	if(turmas!=NULL){
		
		for(i=0; i<qntd; i++){
			turmas[i] = (float *)malloc(r * sizeof(float));
			
			if(turmas[i]==NULL){
				break;
			}
		}
		
		for(i=0; i<qntd; i++){
			turmas[i][0] = i+1;
			printf("\n\n");
			printf("\nQual a quantidade de alunos da turma %d: ", i+1);
			qntdAlunos = input(0);
			turmas[i][1] = media(qntdAlunos);
		}
		
		return turmas;
	}
	
}

void clear(float **p, int r){
	int i;
	for(i=0; i<r; i++){
		free(p[i]);
	}
	free(p);
}

void mediaEscola(float **turmas, int qntd){
	int i;
	float soma=0;
	printf("\n\n\n");
	for(i=0; i<qntd; i++){
		printf("Media da turma %.0f: %.2f\n", turmas[i][0], turmas[i][1]);
		soma+=turmas[i][1];
	}
	printf("Media geral da escola: %.2f", soma/qntd);
}
