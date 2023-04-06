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






/*
4–
Autor: Renan Hideki Sugiura 

Saida: Opçoes de acao do programa(saldo, deposito, saque, encerrar programa), valor do saldo, informante de termino do programa
Entrada: Qual acao sera efetuada, valor de deposito, valor de saque
Processo:
-Saldo: mostra o valor do saldo, sem retornar nada
-Deposito: Pede ao usuario o valor a ser depositado e caso seja negativo ele repetira o input ate ser um valor valido, retornando esse valor
-Saque: Pede o valor a ser retirado, sendo necessario que ele seja positivo, diferente de 0 e menor igual ao saldo disponivel, retornando esse valor

-No main ele estara em um loop infito que pode ser encerrado pelo input do usuario, apresentando em seu inteior um switch que alterna qual acao fazer
-caso seja deposito, ele recebe o valor da funcao pelo return e soma a variavel conta(representa o saldo disponivel)
-caso seja saque, ele recebe o valor da funcao pelo return e subtrai da conta
-caso seja saldo, ele passa a conta como parametro e printa ela pela funcao
-caso ele queira encerrar o programa ele quebra o loop infinito e a execucao se encerra
*/
#include <stdio.h>

float deposito(){
	float num;
	printf("Insira o valor para o deposito: "); scanf("%f", &num);
	while(num<=0){
		printf("Valor invalido\nInsira o valor novamente: "); scanf("%f", &num);
	}
	return num;
}

float saque(float conta){
	float num;
	printf("Insira o valor de saque: "); scanf("%f", &num);
	while(num<=0 || num>conta){
		printf("Valor invalido\nInsira o valor novamente: "); scanf("%f", &num);
	}
	return num;
}

void saldo(float conta){
	printf("O saldo da sua conta e de %.4f reais\n", conta);
}

int main(){
	float conta=0;
	int check=1, option;
	printf("\nBem-Vindo ao caixa eletronico, selecione uma das opcoes disponiveis:\n");
	while(check){
		printf("\n1 - Saldo\n2 - Deposito\n3 - Saque\n4 - Encerrar programa\n->"); scanf("%d", &option);
		switch(option){
			case 1: saldo(conta); break;
			case 2: conta+=deposito(); printf("Acao realizada com sucesso\n\n"); break;
			case 3: conta-=saque(conta); printf("Acao realizada com sucesso\n\n"); break;
			case 4: check=0; break;
			default: printf("\n	Opcao inexistente\n");
		}
	}
	printf("\nObrigado por utilizar o caixa\n");
	return 0;
}




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
}

