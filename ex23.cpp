/*
fun��o: Um programa que permita o usu�rio escolher uma opera��o.
autores: Fernando Carreira e Cesar Augusto
data de cria��o: 16/10/2019
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
 printf("Introduza um n�mero referente a opera��o desejada:\n");
 printf("1- Adi��o\n");
 printf("2- Subtra��o\n");
 printf("3- Divis�o\n");
 printf("4- Multiplica��o\n");
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
		printf("N�o � uma opera��o da lista '-'");
 }
}
