/*
7–
Autor: Renan Hideki Sugiura
Saida: O cubo no numero que foi fornecido pelo usuario
Entrada: qualquer numero
Processo:
-Criar funcao que recebe o numero como parametro e retornar uma multiplicacao
numer*numero*numero
-No main receber o numero e chamar a funcao passando ele como parametro, depois 
printar o return que esta funcao da
*/
#include <stdio.h>

float cubo(float num){
	return num*num*num;
}

int main(){
	float num;
	printf("Insira um numero: "); scanf("%f", &num);
	printf("%.2f ao cubo e igual a %.2f", num, cubo(num));
	
	return 0;
}
