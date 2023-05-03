/*
3–
Autor: Renan Hideki Sugiura
Saida: A area do circulo que apresenta o raio fornecido pelo usuario
Entrada: O valor do raio
Processo:
-Criar funcao que recebe o raio como parametro e, a partir dele utiliza a
formula e retorna o valor da area
-No main recebe o valor do raio, garantindo que ele nao sera 0 ou negativo e printa o valor da area
*/
#include <stdio.h>

float area(float raio){
	return 3.14*raio*raio;
}

int main(){
	float raio;
	printf("Insira o raio: "); scanf("%f", &raio);
	while(raio<=0){
		printf("Valor invalido\nInsira outro: ");
		scanf("%f", &raio);
	}
	printf("Raio = %.2f\nArea do circulo = %.2f", raio, area(raio));
}
