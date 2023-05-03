/*
5–
Autor: Renan Hideki Sugiura
Saida: Se o caractere recebido pelo usuario esta ou nao entre 'a' e 'z'
Entrada: Um caractere
Processo: 
-Criar uma funcao que verifica se o codigo ASCII do caracter esta entre 
os codigos de 'a' e 'z', retornando 1 se sim e 0 se nao
-No main recebe o caracter e criar uma condicionar, que caso a funcao retorne 1
ela printa que esta entre 'a' e 'z', caso contrario ela printa que esta fora
*/
#include <stdio.h>

int alpha(char letra){
	return (letra>96 && letra<123);
}

int main(){
	char letra;
	printf("Insira um caractere: "); scanf("%c", &letra);
	if(alpha(letra))
		printf("%c esta no alfabeto(letras minusculas)", letra);
	else	
		printf("%c esta fora do alfabeto(letras minusculas)", letra);
	return 0;
}
