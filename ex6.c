/*
6–
Autor: Renan Hideki Sugiura
Saida: n * que foram solicitados pelo usuario
Entrada: Quantidade de * a serem printadas
Processo: 
-Criar funcao que recebe a qntd como parametro e criar um loop em seu inteior para printar os *
-No main receber a qntd e chamar a funcao, passando a qntd como parametro
*/
#include <stdio.h>

void draw(int qntd){
	int i;
	for(i=0; i<qntd; i++){
		printf(" * ");
	}
}

int main(){
	int qntd;
	printf("Insira a quantidade dev * a ser desenhado: "); scanf("%d", &qntd);
	draw(qntd);
	return 0;
}
