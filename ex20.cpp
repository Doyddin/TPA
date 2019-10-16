/*
função: Um programa que permite que o usuário escolha um lanche.
autores: Fernando Carreira e Cesar Augusto
data de criação: 16/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int cod=0;
printf	("+---------------------------+\n");
printf	("¦Produtos          ¦ Preço  ¦\n");
printf	("+------------------+--------¦\n");
printf	("¦1:Porção Batata   ¦ R$     ¦\n");
printf	("¦Frita Média       ¦ 7,50   ¦\n");
printf	("+------------------+--------¦\n");
printf	("¦6:X-Camarão Bacon ¦ R$     ¦\n");
printf	("¦Catupiry Premium  ¦ 30,00  ¦\n");
printf	("¦X-TRA LARGE       ¦        ¦\n");
printf	("+------------------+--------¦\n");
printf	("¦7:Salada De Alface¦R$      ¦\n");
printf	("¦com Cebola        ¦  3,50  ¦\n");
printf	("+------------------+--------¦\n");
printf	("¦29:Especial do    ¦ $ 45,25¦\n");
printf	("¦Luigi             ¦        ¦\n");
printf	("+---------------------------+\n");
	printf("Escolha o seu pedido o utlizando o seu código: ");
	scanf("%i", &cod);
	switch(cod){
		case 1:
			printf("Porção Batata Frita Média (R$ 7,50), pedindo saindo!");
			break;
		case 6:
			printf("X-Camarão Bacon Catupiry Premium X-TRA LARGE (R$ 30,00), pedindo saindo!");
			break;
		case 7:
			printf("Salada De Alface com Cebola (R$ 3,50), pedindo saindo!");
			break;
		case 29:
			printf("Especial do luigi (R$ 45,25), pedindo saindo!");
			break;
		default:
			printf("Não cadastrado");
			break;
	}
}

