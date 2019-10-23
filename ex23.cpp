/*
função: Um programa que permita o usuário escolher uma operação.
autores: Fernando Carreira e Cesar Augusto
data de criação: 16/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"");
 int cod=0;
 float c=0,d=0,op=0;
 printf("Informe o primeiro valor:\n");
 scanf("%f",&c);
 printf("Informe o segundo valor:\n");
 scanf("%f",&d);
 printf("Introduza um número referente a operação desejada:\n");
 printf("1- Adição\n");
 printf("2- Subtração\n");
 printf("3- Divisão\n");
 printf("4- Multiplicação\n");
 scanf("%i",&cod);
 switch(cod){
 	case 1:
 		op= c+d;
 		printf("%.1f + %.1f=%.1f",c,d,op);
 		op=0;
 		break;
 	case 2:
 		op=c-d;
 		printf("%.1f - %.1f=%.1f",c,d,op);
 		op=0;
		break;
	case 3:
	 	op=c/d;
	 	printf("%.1 / %.1f=%.1f",c,d,op); 
 		op=0;
		break;
	case 4:
		op=c*d;
		printf("%.1f * %.1f=%.1f",c,d,op);
		op=0;
		break;
	default:
		printf("Não é uma operação da lista '-'");
 }
}
