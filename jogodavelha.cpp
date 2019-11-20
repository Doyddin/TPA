/*
função: ser um jogo da velha
autores: Fernando Carreira e Cesar Augusto
data da criação:13/11/2019
data do update:
*/
#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL,"");
	char velha[3][3],nome1[10],xablau2[10],forma1c[2],nomef2[2];
	int x=0,y=0,batata1,nome2form,jogao=1;
	for(y;y<3;y++){
		for(x;x<3;x++){
		velha[x][y]= ' ';
		}
	}
	x=
	y=
	printf("Qual o nome do primeiro jogador?\n");
	scanf("%s",&nome1);
	printf("Qual o nome do segundo jogador?\n");
	scanf("%s",&xablau2);
	printf("+---------------------+\n");
	printf("|1- Para X |2- Para O |\n");
	printf("+---------------------+\n");
	printf("%s, informe a forma, de acordo com a tabela acima, que quer usar:\n",nome1);
	scanf("%i",&batata1);
	if(batata1!= 1 and batata1!=2){
		while(batata1!= '1' and batata1!='2'){
			printf("+---------------------+\n");
			printf("|1- Para X |2- Para O |\n");
			printf("+---------------------+\n");
			printf("Informe um número na tabela para prosseguir:\n");
			scanf("%i",&batata1);
		}
	}else{
	if(batata1=1){
		printf("|-------------------------|\n");
		printf("  %s usando X\n",nome1);
		printf("|-------------------------|\n");
		printf("  %s usando O\n",xablau2);
		printf("|-------------------------|\n");
		strcpy(forma1c, "X");
		//forma1c[0]="X";
		strcpy(nomef2, "O");
		//nomef2[0]="O";
		nome2form=2;
	}
	else{
		printf("|-------------------------|\n");
		printf("  %s usando O\n",nome1);
		printf("|-------------------------|\n");
		printf("  %s usando X\n",xablau2);
		printf("|-------------------------|\n");
		strcpy(forma1c, "O");
		strcpy(nomef2, "X");
	}
	while(jogao=1){
		for(int posic=0;posic<10;posic++){
			if(posic - posic/2*2==0){
				printf("+----+----+----+\n");
				printf("| %c  | %c  | %c  |\n",velha[0][0],velha[0][1],velha[0][2]);
				printf("+----+----+----+\n");
				printf("| %c  | %c  | %c  |\n",velha[1][0],velha[1][1],velha[1][2]);
				printf("+----+----+----+\n");
				printf("| %c  | %c  | %c  |\n",velha[2][0],velha[2][1],velha[2][2]);
				printf("+----+----+----+\n");
				printf("Informe a linha desejada %s\n",nome1);
				scanf("%i",&x);
				while(x!=1 and x!=2 and x!=3){
					printf("Informe um número entre 3,2 ou 1:\n");
					scanf("%i",&x);
				}
			}else{
				printf("+----+----+----+\n");
				printf("| %c  | %c  | %c  |\n",velha[0][0],velha[0][1],velha[0][2]);
				printf("+----+----+----+\n");
				printf("| %c  | %c  | %c  |\n",velha[1][0],velha[1][1],velha[1][2]);
				printf("+----+----+----+\n");
				printf("| %c  | %c  | %c  |\n",velha[2][0],velha[2][1],velha[2][2]);
				printf("+----+----+----+\n");
			}
		}
		jogao=2;
	}
}
return(0);
}
	
