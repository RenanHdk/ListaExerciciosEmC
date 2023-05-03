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
