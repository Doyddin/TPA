/*
fun��o: Um programa que permite que o usu�rio escolha um lanche.
autores: Fernando Carreira e Cesar Augusto
data de cria��o: 16/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int cod=0;
printf	("+---------------------------+\n");
printf	("�Produtos          � Pre�o  �\n");
printf	("+------------------+--------�\n");
printf	("�1:Por��o Batata   � R$     �\n");
printf	("�Frita M�dia       � 7,50   �\n");
printf	("+------------------+--------�\n");
printf	("�6:X-Camar�o Bacon � R$     �\n");
printf	("�Catupiry Premium  � 30,00  �\n");
printf	("�X-TRA LARGE       �        �\n");
printf	("+------------------+--------�\n");
printf	("�7:Salada De Alface�R$      �\n");
printf	("�com Cebola        �  3,50  �\n");
printf	("+------------------+--------�\n");
printf	("�29:Especial do    � $ 45,25�\n");
printf	("�Luigi             �        �\n");
printf	("+---------------------------+\n");
	printf("Escolha o seu pedido o utlizando o seu c�digo: ");
	scanf("%i", &cod);
	switch(cod){
		case 1:
			printf("Por��o Batata Frita M�dia (R$ 7,50), pedindo saindo!");
			break;
		case 6:
			printf("X-Camar�o Bacon Catupiry Premium X-TRA LARGE (R$ 30,00), pedindo saindo!");
			break;
		case 7:
			printf("Salada De Alface com Cebola (R$ 3,50), pedindo saindo!");
			break;
		case 29:
			printf("Especial do luigi (R$ 45,25), pedindo saindo!");
			break;
		default:
			printf("N�o cadastrado");
			break;
	}
}

