/* TEATRO
Progamado por: Fernando Carreira dos Santos e Cesar Augusto de Almeida
data: 27/11/2019
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL,"");
	char teatro[20][25],nometeatro[3000]="Nome do Teatro";
	int certo=1,opc=0,ingresso=0,fileiras=0,colunas=0,reserva=0;
	for(int x=0;x<20;x++){
		for(int y=0;y<25;y++){
			teatro[x][y]=' ';
		}
	}
	while(certo!=0){
	printf("		+----------------------------------------------------+\n");
	printf("		|               Escolha a opção desejada             |\n");
	printf("		+----------------------------------------------------+\n");
	printf("		| [1] Informar o valor do ingresso e tamanho da sala |\n");
	printf("		+----------------------------------------------------+\n");
	printf("		| [2] Abrir um espetáculo                            |\n");
	printf("		+----------------------------------------------------+\n");	
	printf("		| [3] Reservar ou cancelar a reserva de um lugar     |\n");
	printf("		+----------------------------------------------------+\n");	
	printf("		| [4] Vender um lugar (Inteira)                      |\n");
	printf("		+----------------------------------------------------+\n");	
	printf("		| [5] Vender um lugar (Meia)                         |\n");
	printf("		+----------------------------------------------------+\n");	
	printf("		| [6] Verificar Mapa                                 |\n");
	printf("		+----------------------------------------------------+\n");	
	printf("		| [7] Encerrar o espetáculo                          |\n");
	printf("		+----------------------------------------------------+\n");
	printf("		| [8] Verificar parciais                             |\n");
	printf("		+-------------------------|  |-----------------------+\n");
	printf("                                           ");
	scanf("%i",&opc);
	if(opc!=1 and opc!=2 and opc!=3 and opc!=4 and opc!=5 and opc!=6 and opc!=7 and opc!=8){
		system("cls");
		printf("Selecione um dos números na tabela!");
		Sleep(2000);
		system("cls");
	}else{
	switch(opc){
	 case 1:
	 	printf("Informe o valor do ingresso:\n");
	 	scanf("%i",&ingresso);
	 	printf("Informe agora o tamanho da sala nas fileiras(maximo de 20):\n");
	 	scanf("%i",&fileiras);
	 	printf("Informe agora o tamanho da sala nas colunas(maximo de 25):\n");
	 	printf("(Lotação maxima de 500 pessoas)\n");
	 	scanf("%i",&colunas);
	 	for(int x=0;x<fileiras;x++){
	 		for(int y=0;y<colunas;y++){
	 			teatro[x][y]='L';
			 }
		 }
		 printf("  	                                         %s                                                  \n",nometeatro);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[0][0],teatro[0][1],teatro[0][2],teatro[0][3],teatro[0][4],teatro[0][5],teatro[0][6],teatro[0][7],teatro[0][8],teatro[0][9],teatro[0][10],teatro[0][11],teatro[0][12],teatro[0][13],teatro[0][14],teatro[0][15],teatro[0][16],teatro[0][17],teatro[0][18],teatro[0][19],teatro[0][20],teatro[0][21],teatro[0][22],teatro[0][23],teatro[0][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[1][0],teatro[1][1],teatro[1][2],teatro[1][3],teatro[1][4],teatro[1][5],teatro[1][6],teatro[1][7],teatro[1][8],teatro[1][9],teatro[1][10],teatro[1][11],teatro[1][12],teatro[1][13],teatro[1][14],teatro[1][15],teatro[1][16],teatro[1][17],teatro[1][18],teatro[1][19],teatro[1][20],teatro[1][21],teatro[1][22],teatro[1][23],teatro[1][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[2][0],teatro[2][1],teatro[2][2],teatro[2][3],teatro[2][4],teatro[2][5],teatro[2][6],teatro[2][7],teatro[2][8],teatro[2][9],teatro[2][10],teatro[2][11],teatro[2][12],teatro[2][13],teatro[2][14],teatro[2][15],teatro[2][16],teatro[2][17],teatro[2][18],teatro[2][19],teatro[2][20],teatro[2][21],teatro[2][22],teatro[2][23],teatro[2][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[3][0],teatro[3][1],teatro[3][2],teatro[3][3],teatro[3][4],teatro[3][5],teatro[3][6],teatro[3][7],teatro[3][8],teatro[3][9],teatro[3][10],teatro[3][11],teatro[3][12],teatro[3][13],teatro[3][14],teatro[3][15],teatro[3][16],teatro[3][17],teatro[3][18],teatro[3][19],teatro[3][20],teatro[3][21],teatro[3][22],teatro[3][23],teatro[3][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[4][0],teatro[4][1],teatro[4][2],teatro[4][3],teatro[4][4],teatro[4][5],teatro[4][6],teatro[4][7],teatro[4][8],teatro[4][9],teatro[4][10],teatro[4][11],teatro[4][12],teatro[4][13],teatro[4][14],teatro[4][15],teatro[4][16],teatro[4][17],teatro[4][18],teatro[4][19],teatro[4][20],teatro[4][21],teatro[4][22],teatro[4][23],teatro[4][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[5][0],teatro[5][1],teatro[5][2],teatro[5][3],teatro[5][4],teatro[5][5],teatro[5][6],teatro[5][7],teatro[5][8],teatro[5][9],teatro[5][10],teatro[5][11],teatro[5][12],teatro[5][13],teatro[5][14],teatro[5][15],teatro[5][16],teatro[5][17],teatro[5][18],teatro[5][19],teatro[5][20],teatro[5][21],teatro[5][22],teatro[5][23],teatro[5][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[6][0],teatro[6][1],teatro[6][2],teatro[6][3],teatro[6][4],teatro[6][5],teatro[6][6],teatro[6][7],teatro[6][8],teatro[6][9],teatro[6][10],teatro[6][11],teatro[6][12],teatro[6][13],teatro[6][14],teatro[6][15],teatro[6][16],teatro[6][17],teatro[6][18],teatro[6][19],teatro[6][20],teatro[6][21],teatro[6][22],teatro[6][23],teatro[6][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[7][0],teatro[7][1],teatro[7][2],teatro[7][3],teatro[7][4],teatro[7][5],teatro[7][6],teatro[7][7],teatro[7][8],teatro[7][9],teatro[7][10],teatro[7][11],teatro[7][12],teatro[7][13],teatro[7][14],teatro[7][15],teatro[7][16],teatro[7][17],teatro[7][18],teatro[7][19],teatro[7][20],teatro[7][21],teatro[7][22],teatro[7][23],teatro[7][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[8][0],teatro[8][1],teatro[8][2],teatro[8][3],teatro[8][4],teatro[8][5],teatro[8][6],teatro[8][7],teatro[8][8],teatro[8][9],teatro[8][10],teatro[8][11],teatro[8][12],teatro[8][13],teatro[8][14],teatro[8][15],teatro[8][16],teatro[8][17],teatro[8][18],teatro[8][19],teatro[8][20],teatro[8][21],teatro[8][22],teatro[8][23],teatro[8][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[9][0],teatro[9][1],teatro[9][2],teatro[9][3],teatro[9][4],teatro[9][5],teatro[9][6],teatro[9][7],teatro[9][8],teatro[9][9],teatro[9][10],teatro[9][11],teatro[9][12],teatro[9][13],teatro[9][14],teatro[9][15],teatro[9][16],teatro[9][17],teatro[9][18],teatro[9][19],teatro[9][20],teatro[9][21],teatro[9][22],teatro[9][23],teatro[9][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[10][0],teatro[10][1],teatro[10][2],teatro[10][3],teatro[10][4],teatro[10][5],teatro[10][6],teatro[10][7],teatro[10][8],teatro[10][9],teatro[10][10],teatro[10][11],teatro[10][12],teatro[10][13],teatro[10][14],teatro[10][15],teatro[10][16],teatro[10][17],teatro[10][18],teatro[10][19],teatro[10][20],teatro[10][21],teatro[10][22],teatro[10][23],teatro[10][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[11][0],teatro[11][1],teatro[11][2],teatro[11][3],teatro[11][4],teatro[11][5],teatro[11][6],teatro[11][7],teatro[11][8],teatro[11][9],teatro[11][10],teatro[11][11],teatro[11][12],teatro[11][13],teatro[11][14],teatro[11][15],teatro[11][16],teatro[11][17],teatro[11][18],teatro[11][19],teatro[11][20],teatro[11][21],teatro[11][22],teatro[11][23],teatro[11][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[12][0],teatro[12][1],teatro[12][2],teatro[12][3],teatro[12][4],teatro[12][5],teatro[12][6],teatro[12][7],teatro[12][8],teatro[12][9],teatro[12][10],teatro[12][11],teatro[12][12],teatro[12][13],teatro[12][14],teatro[12][15],teatro[12][16],teatro[12][17],teatro[12][18],teatro[12][19],teatro[12][20],teatro[12][21],teatro[12][22],teatro[12][23],teatro[12][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[13][0],teatro[13][1],teatro[13][2],teatro[13][3],teatro[13][4],teatro[13][5],teatro[13][6],teatro[13][7],teatro[13][8],teatro[13][9],teatro[13][10],teatro[13][11],teatro[13][12],teatro[13][13],teatro[13][14],teatro[13][15],teatro[13][16],teatro[13][17],teatro[13][18],teatro[13][19],teatro[13][20],teatro[13][21],teatro[13][22],teatro[13][23],teatro[13][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[14][0],teatro[14][1],teatro[14][2],teatro[14][3],teatro[14][4],teatro[14][5],teatro[14][6],teatro[14][7],teatro[14][8],teatro[14][9],teatro[14][10],teatro[14][11],teatro[14][12],teatro[14][13],teatro[14][14],teatro[14][15],teatro[14][16],teatro[14][17],teatro[14][18],teatro[14][19],teatro[14][20],teatro[14][21],teatro[14][22],teatro[14][23],teatro[14][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[15][0],teatro[15][1],teatro[15][2],teatro[15][3],teatro[15][4],teatro[15][5],teatro[15][6],teatro[15][7],teatro[15][8],teatro[15][9],teatro[15][10],teatro[15][11],teatro[15][12],teatro[15][13],teatro[15][14],teatro[15][15],teatro[15][16],teatro[15][17],teatro[15][18],teatro[15][19],teatro[15][20],teatro[15][21],teatro[15][22],teatro[15][23],teatro[15][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[16][0],teatro[16][1],teatro[16][2],teatro[16][3],teatro[16][4],teatro[16][5],teatro[16][6],teatro[16][7],teatro[16][8],teatro[16][9],teatro[16][10],teatro[16][11],teatro[16][12],teatro[16][13],teatro[16][14],teatro[16][15],teatro[16][16],teatro[16][17],teatro[16][18],teatro[16][19],teatro[16][20],teatro[16][21],teatro[16][22],teatro[16][23],teatro[16][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[17][0],teatro[17][1],teatro[17][2],teatro[17][3],teatro[17][4],teatro[17][5],teatro[17][6],teatro[17][7],teatro[17][8],teatro[17][9],teatro[17][10],teatro[17][11],teatro[17][12],teatro[17][13],teatro[17][14],teatro[17][15],teatro[17][16],teatro[17][17],teatro[17][18],teatro[17][19],teatro[17][20],teatro[17][21],teatro[17][22],teatro[17][23],teatro[17][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[18][0],teatro[18][1],teatro[18][2],teatro[18][3],teatro[18][4],teatro[18][5],teatro[18][6],teatro[18][7],teatro[18][8],teatro[18][9],teatro[18][10],teatro[18][11],teatro[18][12],teatro[18][13],teatro[18][14],teatro[18][15],teatro[18][16],teatro[18][17],teatro[18][18],teatro[18][19],teatro[18][20],teatro[18][21],teatro[18][22],teatro[18][23],teatro[18][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[19][0],teatro[19][1],teatro[19][2],teatro[19][3],teatro[19][4],teatro[19][5],teatro[19][6],teatro[19][7],teatro[19][8],teatro[19][9],teatro[19][10],teatro[19][11],teatro[19][12],teatro[19][13],teatro[19][14],teatro[19][15],teatro[19][16],teatro[19][17],teatro[19][18],teatro[19][19],teatro[19][20],teatro[19][21],teatro[19][22],teatro[19][23],teatro[19][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		break;
	 	
	 case 2:
	 	 	printf("Qual será o nome do espetaculo?\n");
	 	 	fflush(stdin);
	 	 	gets(nometeatro);
		break;
	 case 3:
			printf("Informe um número para reservar ou cancelar uma reserva (1 para reservar ou 0 para cancelar reserva)\n");
			scanf("%i",&reserva);
		if(reserva==1){
			certo=0;
			while(certo==0){
				printf("Processando mapa, aguarde...\n");
				Sleep(3000);
		printf("  	                                         %s                                                  \n",nometeatro);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[0][0],teatro[0][1],teatro[0][2],teatro[0][3],teatro[0][4],teatro[0][5],teatro[0][6],teatro[0][7],teatro[0][8],teatro[0][9],teatro[0][10],teatro[0][11],teatro[0][12],teatro[0][13],teatro[0][14],teatro[0][15],teatro[0][16],teatro[0][17],teatro[0][18],teatro[0][19],teatro[0][20],teatro[0][21],teatro[0][22],teatro[0][23],teatro[0][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[1][0],teatro[1][1],teatro[1][2],teatro[1][3],teatro[1][4],teatro[1][5],teatro[1][6],teatro[1][7],teatro[1][8],teatro[1][9],teatro[1][10],teatro[1][11],teatro[1][12],teatro[1][13],teatro[1][14],teatro[1][15],teatro[1][16],teatro[1][17],teatro[1][18],teatro[1][19],teatro[1][20],teatro[1][21],teatro[1][22],teatro[1][23],teatro[1][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[2][0],teatro[2][1],teatro[2][2],teatro[2][3],teatro[2][4],teatro[2][5],teatro[2][6],teatro[2][7],teatro[2][8],teatro[2][9],teatro[2][10],teatro[2][11],teatro[2][12],teatro[2][13],teatro[2][14],teatro[2][15],teatro[2][16],teatro[2][17],teatro[2][18],teatro[2][19],teatro[2][20],teatro[2][21],teatro[2][22],teatro[2][23],teatro[2][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[3][0],teatro[3][1],teatro[3][2],teatro[3][3],teatro[3][4],teatro[3][5],teatro[3][6],teatro[3][7],teatro[3][8],teatro[3][9],teatro[3][10],teatro[3][11],teatro[3][12],teatro[3][13],teatro[3][14],teatro[3][15],teatro[3][16],teatro[3][17],teatro[3][18],teatro[3][19],teatro[3][20],teatro[3][21],teatro[3][22],teatro[3][23],teatro[3][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[4][0],teatro[4][1],teatro[4][2],teatro[4][3],teatro[4][4],teatro[4][5],teatro[4][6],teatro[4][7],teatro[4][8],teatro[4][9],teatro[4][10],teatro[4][11],teatro[4][12],teatro[4][13],teatro[4][14],teatro[4][15],teatro[4][16],teatro[4][17],teatro[4][18],teatro[4][19],teatro[4][20],teatro[4][21],teatro[4][22],teatro[4][23],teatro[4][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[5][0],teatro[5][1],teatro[5][2],teatro[5][3],teatro[5][4],teatro[5][5],teatro[5][6],teatro[5][7],teatro[5][8],teatro[5][9],teatro[5][10],teatro[5][11],teatro[5][12],teatro[5][13],teatro[5][14],teatro[5][15],teatro[5][16],teatro[5][17],teatro[5][18],teatro[5][19],teatro[5][20],teatro[5][21],teatro[5][22],teatro[5][23],teatro[5][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[6][0],teatro[6][1],teatro[6][2],teatro[6][3],teatro[6][4],teatro[6][5],teatro[6][6],teatro[6][7],teatro[6][8],teatro[6][9],teatro[6][10],teatro[6][11],teatro[6][12],teatro[6][13],teatro[6][14],teatro[6][15],teatro[6][16],teatro[6][17],teatro[6][18],teatro[6][19],teatro[6][20],teatro[6][21],teatro[6][22],teatro[6][23],teatro[6][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[7][0],teatro[7][1],teatro[7][2],teatro[7][3],teatro[7][4],teatro[7][5],teatro[7][6],teatro[7][7],teatro[7][8],teatro[7][9],teatro[7][10],teatro[7][11],teatro[7][12],teatro[7][13],teatro[7][14],teatro[7][15],teatro[7][16],teatro[7][17],teatro[7][18],teatro[7][19],teatro[7][20],teatro[7][21],teatro[7][22],teatro[7][23],teatro[7][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[8][0],teatro[8][1],teatro[8][2],teatro[8][3],teatro[8][4],teatro[8][5],teatro[8][6],teatro[8][7],teatro[8][8],teatro[8][9],teatro[8][10],teatro[8][11],teatro[8][12],teatro[8][13],teatro[8][14],teatro[8][15],teatro[8][16],teatro[8][17],teatro[8][18],teatro[8][19],teatro[8][20],teatro[8][21],teatro[8][22],teatro[8][23],teatro[8][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[9][0],teatro[9][1],teatro[9][2],teatro[9][3],teatro[9][4],teatro[9][5],teatro[9][6],teatro[9][7],teatro[9][8],teatro[9][9],teatro[9][10],teatro[9][11],teatro[9][12],teatro[9][13],teatro[9][14],teatro[9][15],teatro[9][16],teatro[9][17],teatro[9][18],teatro[9][19],teatro[9][20],teatro[9][21],teatro[9][22],teatro[9][23],teatro[9][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[10][0],teatro[10][1],teatro[10][2],teatro[10][3],teatro[10][4],teatro[10][5],teatro[10][6],teatro[10][7],teatro[10][8],teatro[10][9],teatro[10][10],teatro[10][11],teatro[10][12],teatro[10][13],teatro[10][14],teatro[10][15],teatro[10][16],teatro[10][17],teatro[10][18],teatro[10][19],teatro[10][20],teatro[10][21],teatro[10][22],teatro[10][23],teatro[10][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[11][0],teatro[11][1],teatro[11][2],teatro[11][3],teatro[11][4],teatro[11][5],teatro[11][6],teatro[11][7],teatro[11][8],teatro[11][9],teatro[11][10],teatro[11][11],teatro[11][12],teatro[11][13],teatro[11][14],teatro[11][15],teatro[11][16],teatro[11][17],teatro[11][18],teatro[11][19],teatro[11][20],teatro[11][21],teatro[11][22],teatro[11][23],teatro[11][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[12][0],teatro[12][1],teatro[12][2],teatro[12][3],teatro[12][4],teatro[12][5],teatro[12][6],teatro[12][7],teatro[12][8],teatro[12][9],teatro[12][10],teatro[12][11],teatro[12][12],teatro[12][13],teatro[12][14],teatro[12][15],teatro[12][16],teatro[12][17],teatro[12][18],teatro[12][19],teatro[12][20],teatro[12][21],teatro[12][22],teatro[12][23],teatro[12][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[13][0],teatro[13][1],teatro[13][2],teatro[13][3],teatro[13][4],teatro[13][5],teatro[13][6],teatro[13][7],teatro[13][8],teatro[13][9],teatro[13][10],teatro[13][11],teatro[13][12],teatro[13][13],teatro[13][14],teatro[13][15],teatro[13][16],teatro[13][17],teatro[13][18],teatro[13][19],teatro[13][20],teatro[13][21],teatro[13][22],teatro[13][23],teatro[13][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[14][0],teatro[14][1],teatro[14][2],teatro[14][3],teatro[14][4],teatro[14][5],teatro[14][6],teatro[14][7],teatro[14][8],teatro[14][9],teatro[14][10],teatro[14][11],teatro[14][12],teatro[14][13],teatro[14][14],teatro[14][15],teatro[14][16],teatro[14][17],teatro[14][18],teatro[14][19],teatro[14][20],teatro[14][21],teatro[14][22],teatro[14][23],teatro[14][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[15][0],teatro[15][1],teatro[15][2],teatro[15][3],teatro[15][4],teatro[15][5],teatro[15][6],teatro[15][7],teatro[15][8],teatro[15][9],teatro[15][10],teatro[15][11],teatro[15][12],teatro[15][13],teatro[15][14],teatro[15][15],teatro[15][16],teatro[15][17],teatro[15][18],teatro[15][19],teatro[15][20],teatro[15][21],teatro[15][22],teatro[15][23],teatro[15][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[16][0],teatro[16][1],teatro[16][2],teatro[16][3],teatro[16][4],teatro[16][5],teatro[16][6],teatro[16][7],teatro[16][8],teatro[16][9],teatro[16][10],teatro[16][11],teatro[16][12],teatro[16][13],teatro[16][14],teatro[16][15],teatro[16][16],teatro[16][17],teatro[16][18],teatro[16][19],teatro[16][20],teatro[16][21],teatro[16][22],teatro[16][23],teatro[16][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[17][0],teatro[17][1],teatro[17][2],teatro[17][3],teatro[17][4],teatro[17][5],teatro[17][6],teatro[17][7],teatro[17][8],teatro[17][9],teatro[17][10],teatro[17][11],teatro[17][12],teatro[17][13],teatro[17][14],teatro[17][15],teatro[17][16],teatro[17][17],teatro[17][18],teatro[17][19],teatro[17][20],teatro[17][21],teatro[17][22],teatro[17][23],teatro[17][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[18][0],teatro[18][1],teatro[18][2],teatro[18][3],teatro[18][4],teatro[18][5],teatro[18][6],teatro[18][7],teatro[18][8],teatro[18][9],teatro[18][10],teatro[18][11],teatro[18][12],teatro[18][13],teatro[18][14],teatro[18][15],teatro[18][16],teatro[18][17],teatro[18][18],teatro[18][19],teatro[18][20],teatro[18][21],teatro[18][22],teatro[18][23],teatro[18][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[19][0],teatro[19][1],teatro[19][2],teatro[19][3],teatro[19][4],teatro[19][5],teatro[19][6],teatro[19][7],teatro[19][8],teatro[19][9],teatro[19][10],teatro[19][11],teatro[19][12],teatro[19][13],teatro[19][14],teatro[19][15],teatro[19][16],teatro[19][17],teatro[19][18],teatro[19][19],teatro[19][20],teatro[19][21],teatro[19][22],teatro[19][23],teatro[19][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
				printf("Indique a coluna do assento que quer reservar: ");
				scanf("%i",&fileiras);
				printf("Indique a fileira deste assento:\n");
				scanf("%i",&colunas);
				if(teatro[fileiras-1][colunas-1]=='L'){
				teatro[fileiras-1][colunas-1]='R';
				certo++;
				}else{
					printf("Esta cadeira não está válida, selecione outra cadeira!\n");
					system("pause");
				}
			}
		}
		if(reserva==0){
			certo=0;
			while(certo==0){
				printf("Processando mapa, aguarde...\n");
				Sleep(3000);
		printf("  	                                         %s                                                  \n",nometeatro);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[0][0],teatro[0][1],teatro[0][2],teatro[0][3],teatro[0][4],teatro[0][5],teatro[0][6],teatro[0][7],teatro[0][8],teatro[0][9],teatro[0][10],teatro[0][11],teatro[0][12],teatro[0][13],teatro[0][14],teatro[0][15],teatro[0][16],teatro[0][17],teatro[0][18],teatro[0][19],teatro[0][20],teatro[0][21],teatro[0][22],teatro[0][23],teatro[0][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[1][0],teatro[1][1],teatro[1][2],teatro[1][3],teatro[1][4],teatro[1][5],teatro[1][6],teatro[1][7],teatro[1][8],teatro[1][9],teatro[1][10],teatro[1][11],teatro[1][12],teatro[1][13],teatro[1][14],teatro[1][15],teatro[1][16],teatro[1][17],teatro[1][18],teatro[1][19],teatro[1][20],teatro[1][21],teatro[1][22],teatro[1][23],teatro[1][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[2][0],teatro[2][1],teatro[2][2],teatro[2][3],teatro[2][4],teatro[2][5],teatro[2][6],teatro[2][7],teatro[2][8],teatro[2][9],teatro[2][10],teatro[2][11],teatro[2][12],teatro[2][13],teatro[2][14],teatro[2][15],teatro[2][16],teatro[2][17],teatro[2][18],teatro[2][19],teatro[2][20],teatro[2][21],teatro[2][22],teatro[2][23],teatro[2][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[3][0],teatro[3][1],teatro[3][2],teatro[3][3],teatro[3][4],teatro[3][5],teatro[3][6],teatro[3][7],teatro[3][8],teatro[3][9],teatro[3][10],teatro[3][11],teatro[3][12],teatro[3][13],teatro[3][14],teatro[3][15],teatro[3][16],teatro[3][17],teatro[3][18],teatro[3][19],teatro[3][20],teatro[3][21],teatro[3][22],teatro[3][23],teatro[3][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[4][0],teatro[4][1],teatro[4][2],teatro[4][3],teatro[4][4],teatro[4][5],teatro[4][6],teatro[4][7],teatro[4][8],teatro[4][9],teatro[4][10],teatro[4][11],teatro[4][12],teatro[4][13],teatro[4][14],teatro[4][15],teatro[4][16],teatro[4][17],teatro[4][18],teatro[4][19],teatro[4][20],teatro[4][21],teatro[4][22],teatro[4][23],teatro[4][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[5][0],teatro[5][1],teatro[5][2],teatro[5][3],teatro[5][4],teatro[5][5],teatro[5][6],teatro[5][7],teatro[5][8],teatro[5][9],teatro[5][10],teatro[5][11],teatro[5][12],teatro[5][13],teatro[5][14],teatro[5][15],teatro[5][16],teatro[5][17],teatro[5][18],teatro[5][19],teatro[5][20],teatro[5][21],teatro[5][22],teatro[5][23],teatro[5][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[6][0],teatro[6][1],teatro[6][2],teatro[6][3],teatro[6][4],teatro[6][5],teatro[6][6],teatro[6][7],teatro[6][8],teatro[6][9],teatro[6][10],teatro[6][11],teatro[6][12],teatro[6][13],teatro[6][14],teatro[6][15],teatro[6][16],teatro[6][17],teatro[6][18],teatro[6][19],teatro[6][20],teatro[6][21],teatro[6][22],teatro[6][23],teatro[6][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[7][0],teatro[7][1],teatro[7][2],teatro[7][3],teatro[7][4],teatro[7][5],teatro[7][6],teatro[7][7],teatro[7][8],teatro[7][9],teatro[7][10],teatro[7][11],teatro[7][12],teatro[7][13],teatro[7][14],teatro[7][15],teatro[7][16],teatro[7][17],teatro[7][18],teatro[7][19],teatro[7][20],teatro[7][21],teatro[7][22],teatro[7][23],teatro[7][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[8][0],teatro[8][1],teatro[8][2],teatro[8][3],teatro[8][4],teatro[8][5],teatro[8][6],teatro[8][7],teatro[8][8],teatro[8][9],teatro[8][10],teatro[8][11],teatro[8][12],teatro[8][13],teatro[8][14],teatro[8][15],teatro[8][16],teatro[8][17],teatro[8][18],teatro[8][19],teatro[8][20],teatro[8][21],teatro[8][22],teatro[8][23],teatro[8][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[9][0],teatro[9][1],teatro[9][2],teatro[9][3],teatro[9][4],teatro[9][5],teatro[9][6],teatro[9][7],teatro[9][8],teatro[9][9],teatro[9][10],teatro[9][11],teatro[9][12],teatro[9][13],teatro[9][14],teatro[9][15],teatro[9][16],teatro[9][17],teatro[9][18],teatro[9][19],teatro[9][20],teatro[9][21],teatro[9][22],teatro[9][23],teatro[9][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[10][0],teatro[10][1],teatro[10][2],teatro[10][3],teatro[10][4],teatro[10][5],teatro[10][6],teatro[10][7],teatro[10][8],teatro[10][9],teatro[10][10],teatro[10][11],teatro[10][12],teatro[10][13],teatro[10][14],teatro[10][15],teatro[10][16],teatro[10][17],teatro[10][18],teatro[10][19],teatro[10][20],teatro[10][21],teatro[10][22],teatro[10][23],teatro[10][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[11][0],teatro[11][1],teatro[11][2],teatro[11][3],teatro[11][4],teatro[11][5],teatro[11][6],teatro[11][7],teatro[11][8],teatro[11][9],teatro[11][10],teatro[11][11],teatro[11][12],teatro[11][13],teatro[11][14],teatro[11][15],teatro[11][16],teatro[11][17],teatro[11][18],teatro[11][19],teatro[11][20],teatro[11][21],teatro[11][22],teatro[11][23],teatro[11][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[12][0],teatro[12][1],teatro[12][2],teatro[12][3],teatro[12][4],teatro[12][5],teatro[12][6],teatro[12][7],teatro[12][8],teatro[12][9],teatro[12][10],teatro[12][11],teatro[12][12],teatro[12][13],teatro[12][14],teatro[12][15],teatro[12][16],teatro[12][17],teatro[12][18],teatro[12][19],teatro[12][20],teatro[12][21],teatro[12][22],teatro[12][23],teatro[12][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[13][0],teatro[13][1],teatro[13][2],teatro[13][3],teatro[13][4],teatro[13][5],teatro[13][6],teatro[13][7],teatro[13][8],teatro[13][9],teatro[13][10],teatro[13][11],teatro[13][12],teatro[13][13],teatro[13][14],teatro[13][15],teatro[13][16],teatro[13][17],teatro[13][18],teatro[13][19],teatro[13][20],teatro[13][21],teatro[13][22],teatro[13][23],teatro[13][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[14][0],teatro[14][1],teatro[14][2],teatro[14][3],teatro[14][4],teatro[14][5],teatro[14][6],teatro[14][7],teatro[14][8],teatro[14][9],teatro[14][10],teatro[14][11],teatro[14][12],teatro[14][13],teatro[14][14],teatro[14][15],teatro[14][16],teatro[14][17],teatro[14][18],teatro[14][19],teatro[14][20],teatro[14][21],teatro[14][22],teatro[14][23],teatro[14][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[15][0],teatro[15][1],teatro[15][2],teatro[15][3],teatro[15][4],teatro[15][5],teatro[15][6],teatro[15][7],teatro[15][8],teatro[15][9],teatro[15][10],teatro[15][11],teatro[15][12],teatro[15][13],teatro[15][14],teatro[15][15],teatro[15][16],teatro[15][17],teatro[15][18],teatro[15][19],teatro[15][20],teatro[15][21],teatro[15][22],teatro[15][23],teatro[15][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[16][0],teatro[16][1],teatro[16][2],teatro[16][3],teatro[16][4],teatro[16][5],teatro[16][6],teatro[16][7],teatro[16][8],teatro[16][9],teatro[16][10],teatro[16][11],teatro[16][12],teatro[16][13],teatro[16][14],teatro[16][15],teatro[16][16],teatro[16][17],teatro[16][18],teatro[16][19],teatro[16][20],teatro[16][21],teatro[16][22],teatro[16][23],teatro[16][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[17][0],teatro[17][1],teatro[17][2],teatro[17][3],teatro[17][4],teatro[17][5],teatro[17][6],teatro[17][7],teatro[17][8],teatro[17][9],teatro[17][10],teatro[17][11],teatro[17][12],teatro[17][13],teatro[17][14],teatro[17][15],teatro[17][16],teatro[17][17],teatro[17][18],teatro[17][19],teatro[17][20],teatro[17][21],teatro[17][22],teatro[17][23],teatro[17][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[18][0],teatro[18][1],teatro[18][2],teatro[18][3],teatro[18][4],teatro[18][5],teatro[18][6],teatro[18][7],teatro[18][8],teatro[18][9],teatro[18][10],teatro[18][11],teatro[18][12],teatro[18][13],teatro[18][14],teatro[18][15],teatro[18][16],teatro[18][17],teatro[18][18],teatro[18][19],teatro[18][20],teatro[18][21],teatro[18][22],teatro[18][23],teatro[18][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[19][0],teatro[19][1],teatro[19][2],teatro[19][3],teatro[19][4],teatro[19][5],teatro[19][6],teatro[19][7],teatro[19][8],teatro[19][9],teatro[19][10],teatro[19][11],teatro[19][12],teatro[19][13],teatro[19][14],teatro[19][15],teatro[19][16],teatro[19][17],teatro[19][18],teatro[19][19],teatro[19][20],teatro[19][21],teatro[19][22],teatro[19][23],teatro[19][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
				printf("Indique a coluna do assento que quer reservar: ");
				scanf("%i",&fileiras);
				printf("Indique a fileira deste assento:\n");
				scanf("%i",&colunas);
				if(teatro[fileiras-1][colunas-1]=='R'){
				teatro[fileiras-1][colunas-1]='L';
				certo++;
				}else{
					printf("Escolha uma cadeira válida!\n");
					system("pause");
				}
		}
	}
		break;
		
		case 6:
			printf("Verificar Mapa, processando...\n");
			Sleep(3000);
		printf("  	                                         %s                                                  \n",nometeatro);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[0][0],teatro[0][1],teatro[0][2],teatro[0][3],teatro[0][4],teatro[0][5],teatro[0][6],teatro[0][7],teatro[0][8],teatro[0][9],teatro[0][10],teatro[0][11],teatro[0][12],teatro[0][13],teatro[0][14],teatro[0][15],teatro[0][16],teatro[0][17],teatro[0][18],teatro[0][19],teatro[0][20],teatro[0][21],teatro[0][22],teatro[0][23],teatro[0][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[1][0],teatro[1][1],teatro[1][2],teatro[1][3],teatro[1][4],teatro[1][5],teatro[1][6],teatro[1][7],teatro[1][8],teatro[1][9],teatro[1][10],teatro[1][11],teatro[1][12],teatro[1][13],teatro[1][14],teatro[1][15],teatro[1][16],teatro[1][17],teatro[1][18],teatro[1][19],teatro[1][20],teatro[1][21],teatro[1][22],teatro[1][23],teatro[1][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[2][0],teatro[2][1],teatro[2][2],teatro[2][3],teatro[2][4],teatro[2][5],teatro[2][6],teatro[2][7],teatro[2][8],teatro[2][9],teatro[2][10],teatro[2][11],teatro[2][12],teatro[2][13],teatro[2][14],teatro[2][15],teatro[2][16],teatro[2][17],teatro[2][18],teatro[2][19],teatro[2][20],teatro[2][21],teatro[2][22],teatro[2][23],teatro[2][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[3][0],teatro[3][1],teatro[3][2],teatro[3][3],teatro[3][4],teatro[3][5],teatro[3][6],teatro[3][7],teatro[3][8],teatro[3][9],teatro[3][10],teatro[3][11],teatro[3][12],teatro[3][13],teatro[3][14],teatro[3][15],teatro[3][16],teatro[3][17],teatro[3][18],teatro[3][19],teatro[3][20],teatro[3][21],teatro[3][22],teatro[3][23],teatro[3][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[4][0],teatro[4][1],teatro[4][2],teatro[4][3],teatro[4][4],teatro[4][5],teatro[4][6],teatro[4][7],teatro[4][8],teatro[4][9],teatro[4][10],teatro[4][11],teatro[4][12],teatro[4][13],teatro[4][14],teatro[4][15],teatro[4][16],teatro[4][17],teatro[4][18],teatro[4][19],teatro[4][20],teatro[4][21],teatro[4][22],teatro[4][23],teatro[4][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[5][0],teatro[5][1],teatro[5][2],teatro[5][3],teatro[5][4],teatro[5][5],teatro[5][6],teatro[5][7],teatro[5][8],teatro[5][9],teatro[5][10],teatro[5][11],teatro[5][12],teatro[5][13],teatro[5][14],teatro[5][15],teatro[5][16],teatro[5][17],teatro[5][18],teatro[5][19],teatro[5][20],teatro[5][21],teatro[5][22],teatro[5][23],teatro[5][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[6][0],teatro[6][1],teatro[6][2],teatro[6][3],teatro[6][4],teatro[6][5],teatro[6][6],teatro[6][7],teatro[6][8],teatro[6][9],teatro[6][10],teatro[6][11],teatro[6][12],teatro[6][13],teatro[6][14],teatro[6][15],teatro[6][16],teatro[6][17],teatro[6][18],teatro[6][19],teatro[6][20],teatro[6][21],teatro[6][22],teatro[6][23],teatro[6][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[7][0],teatro[7][1],teatro[7][2],teatro[7][3],teatro[7][4],teatro[7][5],teatro[7][6],teatro[7][7],teatro[7][8],teatro[7][9],teatro[7][10],teatro[7][11],teatro[7][12],teatro[7][13],teatro[7][14],teatro[7][15],teatro[7][16],teatro[7][17],teatro[7][18],teatro[7][19],teatro[7][20],teatro[7][21],teatro[7][22],teatro[7][23],teatro[7][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[8][0],teatro[8][1],teatro[8][2],teatro[8][3],teatro[8][4],teatro[8][5],teatro[8][6],teatro[8][7],teatro[8][8],teatro[8][9],teatro[8][10],teatro[8][11],teatro[8][12],teatro[8][13],teatro[8][14],teatro[8][15],teatro[8][16],teatro[8][17],teatro[8][18],teatro[8][19],teatro[8][20],teatro[8][21],teatro[8][22],teatro[8][23],teatro[8][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[9][0],teatro[9][1],teatro[9][2],teatro[9][3],teatro[9][4],teatro[9][5],teatro[9][6],teatro[9][7],teatro[9][8],teatro[9][9],teatro[9][10],teatro[9][11],teatro[9][12],teatro[9][13],teatro[9][14],teatro[9][15],teatro[9][16],teatro[9][17],teatro[9][18],teatro[9][19],teatro[9][20],teatro[9][21],teatro[9][22],teatro[9][23],teatro[9][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[10][0],teatro[10][1],teatro[10][2],teatro[10][3],teatro[10][4],teatro[10][5],teatro[10][6],teatro[10][7],teatro[10][8],teatro[10][9],teatro[10][10],teatro[10][11],teatro[10][12],teatro[10][13],teatro[10][14],teatro[10][15],teatro[10][16],teatro[10][17],teatro[10][18],teatro[10][19],teatro[10][20],teatro[10][21],teatro[10][22],teatro[10][23],teatro[10][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[11][0],teatro[11][1],teatro[11][2],teatro[11][3],teatro[11][4],teatro[11][5],teatro[11][6],teatro[11][7],teatro[11][8],teatro[11][9],teatro[11][10],teatro[11][11],teatro[11][12],teatro[11][13],teatro[11][14],teatro[11][15],teatro[11][16],teatro[11][17],teatro[11][18],teatro[11][19],teatro[11][20],teatro[11][21],teatro[11][22],teatro[11][23],teatro[11][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[12][0],teatro[12][1],teatro[12][2],teatro[12][3],teatro[12][4],teatro[12][5],teatro[12][6],teatro[12][7],teatro[12][8],teatro[12][9],teatro[12][10],teatro[12][11],teatro[12][12],teatro[12][13],teatro[12][14],teatro[12][15],teatro[12][16],teatro[12][17],teatro[12][18],teatro[12][19],teatro[12][20],teatro[12][21],teatro[12][22],teatro[12][23],teatro[12][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[13][0],teatro[13][1],teatro[13][2],teatro[13][3],teatro[13][4],teatro[13][5],teatro[13][6],teatro[13][7],teatro[13][8],teatro[13][9],teatro[13][10],teatro[13][11],teatro[13][12],teatro[13][13],teatro[13][14],teatro[13][15],teatro[13][16],teatro[13][17],teatro[13][18],teatro[13][19],teatro[13][20],teatro[13][21],teatro[13][22],teatro[13][23],teatro[13][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[14][0],teatro[14][1],teatro[14][2],teatro[14][3],teatro[14][4],teatro[14][5],teatro[14][6],teatro[14][7],teatro[14][8],teatro[14][9],teatro[14][10],teatro[14][11],teatro[14][12],teatro[14][13],teatro[14][14],teatro[14][15],teatro[14][16],teatro[14][17],teatro[14][18],teatro[14][19],teatro[14][20],teatro[14][21],teatro[14][22],teatro[14][23],teatro[14][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[15][0],teatro[15][1],teatro[15][2],teatro[15][3],teatro[15][4],teatro[15][5],teatro[15][6],teatro[15][7],teatro[15][8],teatro[15][9],teatro[15][10],teatro[15][11],teatro[15][12],teatro[15][13],teatro[15][14],teatro[15][15],teatro[15][16],teatro[15][17],teatro[15][18],teatro[15][19],teatro[15][20],teatro[15][21],teatro[15][22],teatro[15][23],teatro[15][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[16][0],teatro[16][1],teatro[16][2],teatro[16][3],teatro[16][4],teatro[16][5],teatro[16][6],teatro[16][7],teatro[16][8],teatro[16][9],teatro[16][10],teatro[16][11],teatro[16][12],teatro[16][13],teatro[16][14],teatro[16][15],teatro[16][16],teatro[16][17],teatro[16][18],teatro[16][19],teatro[16][20],teatro[16][21],teatro[16][22],teatro[16][23],teatro[16][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[17][0],teatro[17][1],teatro[17][2],teatro[17][3],teatro[17][4],teatro[17][5],teatro[17][6],teatro[17][7],teatro[17][8],teatro[17][9],teatro[17][10],teatro[17][11],teatro[17][12],teatro[17][13],teatro[17][14],teatro[17][15],teatro[17][16],teatro[17][17],teatro[17][18],teatro[17][19],teatro[17][20],teatro[17][21],teatro[17][22],teatro[17][23],teatro[17][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[18][0],teatro[18][1],teatro[18][2],teatro[18][3],teatro[18][4],teatro[18][5],teatro[18][6],teatro[18][7],teatro[18][8],teatro[18][9],teatro[18][10],teatro[18][11],teatro[18][12],teatro[18][13],teatro[18][14],teatro[18][15],teatro[18][16],teatro[18][17],teatro[18][18],teatro[18][19],teatro[18][20],teatro[18][21],teatro[18][22],teatro[18][23],teatro[18][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
		printf("	| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n",teatro[19][0],teatro[19][1],teatro[19][2],teatro[19][3],teatro[19][4],teatro[19][5],teatro[19][6],teatro[19][7],teatro[19][8],teatro[19][9],teatro[19][10],teatro[19][11],teatro[19][12],teatro[19][13],teatro[19][14],teatro[19][15],teatro[19][16],teatro[19][17],teatro[19][18],teatro[19][19],teatro[19][20],teatro[19][21],teatro[19][22],teatro[19][23],teatro[19][24]);
		printf("	+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
			system("pause");
			system("cls");
			break;
		
	 case 7:
	 	printf("Espetáculo encerrado!");
	 	certo--;
		break;
}
	}
}
}
