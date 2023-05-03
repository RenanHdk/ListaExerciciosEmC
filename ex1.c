/*
1--
Autor: Renan Hideki Sugiura
Saida: Diferenca entre os dois inteiros que foram obtidos pelo usuario
Entrada: Dois inteiros
Processo:
-Criar funcao que calcula e retorna a diferenca entre os dois inteiros, retornando sempre um valor positivo
-No main pegar os dois inteiros, chamar a funcao com os parametros para saber a diferenca e printar ela
*/
#include <stdio.h>

int diff(int a, int b){
	if(a>b)
		return (a-b);
	return (b-a);
}

int main(){
	int a, b;
	printf("Insira o primeiro numero: "); scanf("%d", &a);
	printf("Insira o segundo numero: "); scanf("%d", &b);
	printf("Diferenca: %d", diff(a, b));
	return 0;
}
