#include <stdio.h>

/*
Autor: Renan Hideki Sugiura
EX - 1

Saída: imprimir o quadrado dos 10 elementos da array
Entrada: 10 numeros reais em uma array
Processo: armazenar os 10 numeros antes e depois em duas arrays
*/
#define tam 10


int main(){
	
	int i; 
	float lst1[tam], lst2[tam];
	for(i = 0; i<tam; i++){
		printf("V[%d]: ", i+1);
		scanf("%f", &lst1[i]);
		lst2[i] = lst1[i]*lst1[i];
	}
	
	printf("Resultados\n");
	
	for(i=0; i<10; i++){
		printf("%.2f**2: %.2f\n", lst1[i], lst2[i]);
	}
	
	return 0;
}




#include <stdio.h>

/*
Autor: Renan Hideki Sugiura
EX - 2

Saída: soma de x e y, numeros obtidos a partir de uma array de 8 numeros reais, definidos por dois index
Entrada: 8 numeros reais para array e dois inteiros para os index

processo: criar array, receber dados, escolher e validar os inteiros, imprimir a soma
*/
#define tam 8

int valid(char txt[]);

int main(){
	int x, y, i, check=1;
	float lst[tam];
	
	for(i=0; i<tam; i++){
		printf("V[%d]: ", i+1);
		scanf("%f", &lst[i]);
	}
	
	x = valid("Insira uma posicao(1 - %d): ");
	y = valid("Insira outra posicao(1 - %d): ");
	
	printf("\nV[%d] + V[%d] = %.2f", x, y, lst[x-1] + lst[y-1]);
	return 0;
	
}

int valid(char txt[]){
	int num, check=1;
	printf(txt, tam);scanf("%d", &num);
	while(check){
		if(num<1 || num>tam){
			printf("Valor incorreto\nInsira novamente: ");
			scanf("%d", &num);
		}
		else
			break;
	}
	return num;
}

#include <stdio.h>

/*
Autor: Renan Hideki Sugiura
EX - 3

Saída: Quantidade de pares, quais são eles
Entrada: Uma array com 10 posições(int)

processo: Receber 10 inteiros, rodar eles e ir salvando nele mesmo, em ordem crescente os numeros pares
*/
#define tam 10

int main(){
	
	int lst[tam], i, count=0;
	
	for(i=0; i<tam; i++){
		//recebe dado
		printf("V[%d]: ", i+1);
		scanf("%d", &lst[i]);
		//caso o dado recebido seja par, ele altera o inicio da array para este valor, salvando os numeros pares
		if(lst[i]%2==0){
			lst[count] = lst[i];
			count++;
		}
	}
	
	
	printf("A array possui %d numeros pares, sendo eles: ", count);
	
	for(i=0; i<count; i++){
		if(i==count-1)
			printf("%d", lst[i]);
		else
			printf("%d, ", lst[i]);
	}
	return 0;
}


#include <stdio.h>

/*
Autor: Renan Hideki Sugiura
EX - 4

Saída: O maior número e sua posicao de um array de 10 elementos
Entrada: 10 numeros para uma array

processamento: receber os dados e validar o maior e sua posicao, printar o maior e sua posicao
*/
#define tam 10

int main(){
	
	int lst[tam], maior, pos, i;
	
	for(i=0; i<tam; i++){
		printf("V[%d]: ", i+1);scanf("%d", &lst[i]);
		if(i==0){
			maior = lst[i];pos = i+1;	
		}
		else{
			if(lst[i] > maior){
				maior = lst[i];pos = i+1;
			}	
		}
	}
	
	printf("\nMaior valor: V[%d] = %d", pos, maior);
	
	return 0;
}



//EX - 5
/*
Saída: seis números inteiros que entraram
Entrada: seis números inteiros
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tam=6, lst[tam], i, j=1;
	for(i=0; i<(tam*2); i++){
		if(i<tam){
			printf("Digite um número: ");
			scanf("%d", &lst[i]);
		}
		else{
			if(i==tam){
				printf("\nResultados: \n");
			}
			printf("V[%d]=%d \n", i-j, lst[i-j]);
			j+=2;
		}
	}
	return 0;
}


#include <stdio.h>

/*
Autor: Renan Hideki Sugiura
EX - 6

Entrada: nota de 15 alunos
Saida: Media dessas notas
Processo: usar array para armazenar as 15 notas
*/

int main(){
	int i, alunos[15], total = 0;
	for(i = 0; i<15; i++){
		printf("Insira a nota do aluno %d: ", i+1); scanf("%d", &alunos[i]);
		while(alunos[i]<0 || alunos[i]>10){
			printf("Nota invalida, insira novamente: "); scanf("%d", &alunos[i]);
		}
		total+=alunos[i];
	}
	printf("Media: %.2f", (total*1.0)/15);
	return 0;
}

#include <stdio.h>
#define tam 10

/*
Autor: Renan Hideki Sugiura
EX - 7

Entrada: 10 numeros reais
Saida: total de numeros negativos e soma dos positivos
Processo: armazenar os numeros em uma array 
*/

int main(){
	float lst[tam],  soma = 0;
	int  i, negativos = 0;
	for(i = 0; i< tam; i++){
		printf("V[%d]: ", i); scanf("%f", &lst[i]);
		if(lst[i]<0)
			negativos++;
		else
			soma+=lst[i];
	}
	
	printf("Soma dos positivos: %f\nNumero de negativos: %d", soma, negativos);
	
	return 0;
}

#include <stdio.h>
#define tam 10

/*
Autor: Renan Hideki Sugiura
EX - 8

Entrada: 10 inteiros
Saida: Numeros repetidos
Proceso: Aramazenar valores em uma array, pegar um valor dentro dela
e compará-la com as demais
*/

int main(){
	
	int lst[tam] = {0,0,0,0,0,0,0,0,0,0}, i, j;
	for(i=0; i<tam; i++){
		printf("V[%d]: ", i); scanf("%d", &lst[i]);
	}	
	
	for(i=0; i<tam; i++){
		for(j=i+1; j<tam; j++){
			if(lst[i] == lst[j]){
				printf("O numero %d se repete\n", lst[i]);
			}
		}
	}
	
}


#include <stdio.h>
#define tam 10

/*
Autor: Renan Hideki Sugiura
EX - 9

Entrada: 10 inteiros
Saida: 10 inteiros
Processo: Armazenas os valores dentro de uma array e, caso algum deles
seja negativos, alterar o seu valor para 0
*/

int main(){
	int lst[tam], i;
	for(i=0; i<tam; i++){
		printf("V[%d]: ", i); scanf("%d", &lst[i]);
		if(lst[i]<0)
			lst[i] = 0;
	}
	
	for(i=0; i<tam; i++)
		printf("  %d  ", lst[i]);
		
	return 0;
}
