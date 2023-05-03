/*
2–
Autor: Renan Hideki Sugiura
Saida: A divisao entre os dois inteiros fornecidos pelo usuario
Entrada: Dois inteiros
Processo: 
-Criar funcao para dividir um inteiro pelo outro, sendo que ele ira barrar o divisor caso 
ele seja igual a 0 e ira pedir por outro ate ele ser diferente de 0
-No main ele recebe os dois inteiros e chama a funcao com os dois inteiros como parametros 
*/
#include <stdio.h>

float div(int dividendo, int divisor){
	while(divisor==0){
		printf("O divisor nao pode ser igual a zero\nInsira outro divisor: ");
		scanf("%d", &divisor);
	}
	printf("%d/%d = %.2f", dividendo, divisor, (dividendo*1.0)/(divisor*1.0));
	return ((dividendo*1.0)/(divisor*1.0));
}

int main(){
	int dividendo, divisor;
	printf("Insira o dividendo: "); scanf("%d", &dividendo);
	printf("Insira o divisor: "); scanf("%d", &divisor);
	float resultado = div(dividendo, divisor);
	
	return 0;
}
