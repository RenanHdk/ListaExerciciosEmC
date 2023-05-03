#include <stdio.h>

/*
Autor: Renan Hideki Sugiura
Ex-1
Entrada: três inteiros
Saida: Posicao do maior numero
*/
int main(){
	int a, b, c
	printf("Insira o primeiro numero: "); scanf("%d", &a);
	printf("Insira o segundo numero: "); scanf("%d", &b);
	printf("Insira o terceiro numero: "); scanf("%d", &c);
	if(a > b && a > c)
		printf("Posicao 1");
	else if(b > a && b > c)
		printf("Posicao 2");
	else
		printf("Posicao 3");
}


#include <stdio.h>
#include <locale.h>
#include <string.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	/*EX -2 
	OBS: Para 'passar' um int para float, multiplique o int por 1.0
	*/
	int valido, branco, nulo, total=0;
	
	printf("insira os votos válidos: ");
	scanf("%d", &valido);
	printf("insira os votos brancos: ");
	scanf("%d", &branco);
	printf("insira os votos nulos: ");
	scanf("%d", &nulo);
	total+=valido;total+=branco;total+=nulo;
	
	printf("Total: %d votos\n", total);
	printf("Porcentagem dos votos válidos: %.2f%%\n", (valido*1.0) / total*100);
	printf("Porcentagem dos votos brancos: %.2f%%\n", (branco*1.0) / total*100);
	printf("Porcentagems dos votos nulos: %.2f%%\n", (nulo*1.0) / total*100);	
}


#include <stdio.h>

int main(){
	//EX - 3		
	/*
	Saída: salário final(salário fixo + comissão fixa por carro vendido + 5% dos valores das vendas)
	Entrada: número de carros vendidos, valor total das vendas, salário fixo, comissão por carro
	*/
	float salFixo, comissao, carVendido, vendaTotal, salarioFinal;
	printf("Insira o salário fixo: ");
	scanf("%f", &salFixo);
	printf("Insira o valor da comissão por venda: ");
	scanf("%f", &comissao);
	printf("Insira o total de carros vendidos: ");
	scanf("%f", &carVendido);
	printf("Insira o valor total obtido pelas vendas: ");
	scanf("%f", &vendaTotal);
	
	comissao = comissao*carVendido;
	vendaTotal = (vendaTotal*5) / 100;
	
	salarioFinal+=salFixo;  salarioFinal+=comissao;  salarioFinal+=vendaTotal;
	
	printf("\n\nSalário fixo: %.2f\n", salFixo);
	printf("Comissão total dos carros vendidos: %.2f\n", comissao);
	printf("5%% do valor total das vendas efetuadas: %.2f\n", vendaTotal);
	printf("Salário total: %.2f", salarioFinal);
}

#include <stdio.h>

int main(){
	//EX - 4
	/*
	Saída: valor da compra de maçãs
	Entrada: número de maçãs a serem compradas
	processamento: caso sejam compradas menos de 12 maçãs, o valor individual é de 1.30, caso contrário o valor e de 1.00
	 */
	int macas;
	printf("Insira o número de maçãs compradas: ");
	scanf("%d", &macas);
	
	if(macas>=12){
		printf("O valor total das maçãs é de: %d", macas);
	}
	else{
		printf("O valor total das maçãs é de: %.2f", macas*1.30);
	}
}

#include <stdio.h>

int main(){
	//EX - 5
	/*
	Saída: Salário final( salário fixo + comissôes da venda total)
	Entrada: salário fixo, valor da venda total
	Processamento: vendaTotal > 1500: 3%(1500) + 5%(vendaTotal-1500)
				   vendaTotal < 1500: 3%(1500)
	*/
	
	float salarioFixo, vendaTotal, comissao=0;
	printf("Insira o valor do salário fixo: ");
	scanf("%f", &salarioFixo);
	printf("Insira o valor total obtido das vendas:");
	scanf("%f", &vendaTotal);
	
	if(vendaTotal>1500){
		comissao+=1500*3/100; comissao+=(vendaTotal-1500)*5/100;
		salarioFixo+=comissao;
	}
	else{
		comissao+=vendaTotal*3/100;
		salarioFixo+=comissao;
	}
	
	printf("\n\nValor da comissão obtida pela venda total: %.2f\n", comissao);
	printf("Valor total do salário: %.2f", salarioFixo);
}

#include <stdio.h>

int main(){
	//EX - 6
	/*
	Saída: Dois inteiros, Z e Resposta
	Entrada: Dois inteiros, X e Y
	x=3 // y=2 // z=11 // resposta=B
	x=150 // y=3 // z=455 // resposta=C
	x=7 // y=-1 // z=-2 // resposta=A
	x=-2 // y=5 // z=-5 // resposta=A
	x=50 // y=3 // z=155 // resposta=C
	*/
	
	int x, y, z; 
	char resposta;
	printf("Insira um inteiro: "); scanf("%d", &x);
	printf("Insira outro inteiro: "); scanf("%d", &y);
	
	z = (x*y)+5;
	if(z<=0){
		resposta = 'A';
	}
	else{
		if(z<=100){
			resposta = 'B';
		}
		else{
			resposta = 'C';
		}
	}
	printf("Z: %d\nResposta: %c", z, resposta);
}

#include <stdio.h>

int main(){
	//EX - 7
	/*
	Saída: Divisão entre o primeiro termo pelo segundo
	Entrada: Dois números, contando que o denominador não seja = 0
	Processamento: Criar loop while para que o segundo termo não seja 0
	*/
	float a, b;
	printf("Insira um valor: "); scanf("%f", &a);
	printf("Insira outro valor(diferente de 0): "); scanf("%f", &b);
	while(b==0){
		printf("O valor 0 não pode ser aceito, por favor insira outro: ");
		scanf("%f", &b);
	}
	
	printf("%.2f // %.2f = %.2f", a, b, a/b);

}

#include <stdio.h>

int main(){
	//EX - 8
	/*
	Saída: Dois inteiros
	Entrada: A soma de todos termos existentes entre os dois inteiros(incluindo eles)
	Processamento: Criar um loop for, incluindo ambos inteiros	
	*/
	int total=0, inicio, final, i;
	printf("Insira o termo inicial: "); 
	scanf("%d", &inicio);
	printf("Insira o termo final: "); 
	scanf("%d", &final);
	
	for(i=inicio; i<final+1; i++){
		total+=i;
		if(i==final){
			printf("%d = ", i);
		}
		else{
			printf("%d + ", i);
		}
	}
	printf("%d", total);
}

#include <stdio.h>

int main(){
	//EX - 9
	/*
	Saída: sequência de números 1, 1 2...10 / 2, 1 2...10 / 3, 1 2...10 etc
	Entrada: Nenhum input
	Processamento: Criar um loop for dentro de outro loop for
	*/
	int i, j;
	
	for(i=1; i<11; i++){
		printf("%d, ", i);
		for(j=1; j<11; j++){
			if(j==10){
				printf("%d\n", j);
			}
			else{
				printf("%d ", j);
			}
		}
	}
}

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	//EX - 10
	setlocale(LC_ALL, "Portuguese");
	
	/*
	Saída: Quantidade de vezes que os dois números de 15 casas possuem os mesmos elementos nas mesmas posições
	Entrada: Duas strings de números com 15 casas
	*/
	
	int check=1, i, counter=0;
	char num1[20], num2[20];
	
	printf("Insira dois números com 15 casas: \n");
	
	scanf("%s", &num1); 
	while(strlen(num1)!=15){
		printf("Ambos os números precisam ter 15 casas\n"); scanf("%s", &num1);
	}
	
	scanf("%s", &num2);
	while(strlen(num2)!=15){
		printf("Ambos os números precisam ter 15 casas\n"); scanf("%s", &num2);
	}
	
	
	for(i=0; i<15; i++){
		if(num1[i] == num2[i]){
			counter++;
		}
	}
	printf("\nO número de elementos repetidos que possuem a mesma posição foi de %d\n", counter);
}

//EX = 11
#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
Saída: verificar se ambas as três cargas foram passadas para o lado direit0(1)
Entrada: Caso o humano esteja em 0(esquerda), verificar quem também está na esquerda e requisitar se o user quer mandar algm para direita(1)
OBS: cachorro -> galinha X
	 galinha -> milho X
	 cachorro -> milho V
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cachorro=0, galinha=0, milho=0, humano=0, check=1, resposta;
	while(check=1){
		if(humano==0){
			if(cachorro==1 && galinha==1 || galinha==1 && milho==1){
				printf("Você perdeu alguma carga\n");
				break;
			}
			
			printf("Escolha uma opção de quem você quer mandar para direita\n");
			printf("0 - Nada\n");
			if(cachorro==0)
				printf("1 - Cachorro\n");
			if(galinha==0)
				printf("2 - Galinha\n");
			if(milho==0)
				printf("3 - Milho\n");
			scanf("%d", &resposta);
			
			
			if(resposta==0){
				humano++;
				continue;
			}
			else if(resposta==1 && cachorro==0)
				cachorro=1;
			else if(resposta==2 && galinha==0)
				galinha=1;
			else if(resposta==3 && milho==0)
				milho=1;
			humano++;
		}
		
		
		else if(humano==1){
			if(cachorro==0 && galinha==0 || galinha==0 && milho==0){
				printf("Você perdeu alguma carga\n");
				break;
			}
			else if(cachorro==1 && milho==1 && galinha==1){
				printf("Você transportou as cargas com sucesso\n");
				break;
			}
			
			printf("Escolha uma opção de quem você quer mandar para esquerda\n");
			printf("0 - Nada\n");
			if(cachorro==1)
				printf("1 - Cachorro\n");
			if(galinha==1)
				printf("2 - Galinha\n");
			if(milho==1)
				printf("3 - Milho\n");
			scanf("%d", &resposta);
			
			
			if(resposta==0){
				humano--;
				continue;
			}
			else if(resposta==1 && cachorro==1)
				cachorro=0;
			else if(resposta==2 && galinha==1)
				galinha=0;
			else if(resposta==3 && milho==1)
				milho=0;
			humano--;
		}
	}
} 
