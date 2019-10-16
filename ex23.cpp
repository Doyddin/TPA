/*
teste: comentando...
função: Um programa que permita o usuário escolher um mês do ano
autores: Fernando Carreira e Cesar Augusto
data de criação: 16/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"");
 int cod=0;
 float c=0,d=0,adi=0,sub=0,mul=0,div=0;
 printf("Informe o primeiro valor:\n");
 scanf("%f",&c);
 print("Informe o segundo valor:\n");
 scanf("%f",&d);
 printf("Introduza um número referente a operação desejada:\n");
 printf("1- Adição\n");
 printf("2- Subtração\n");
 printf("3- Divisão\n");
 printf("4- Multiplicação\n");
 scanf("%i",cod);
 switch(cod){
 	case 1:
 		adi= c+d;
 		printf("%.1f + %.1f=%.1f",c,d,adi);
 		break;
 	case 2:
 		sub=c-d;
 		printf("%.1f - %.1f=%.1f",c,d,sub);
 		break;
	 case 3:
	 	div=c/d;
	 	printf("")
 		break;
 }
}
