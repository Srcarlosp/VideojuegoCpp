/*fase de prueba para un codigo de generacion de escenarios 2D aleatorios, evitando colisiones 
entre objetos, sabiendo su tamaño. Version para una matriz de diez elementos. al final está 
pensado generar las coordenadas de cada objeto de forma aleatoria, pero para provar fallos, se meten a mano ahora.
Los objetos colocados en esta version son de 2x2 elementos.*/

#include <stdio.h>
#include <stdlib.h>



void pobjeto(int matriz[][10]){
		int x,y;
	while(true)
	{
		int ref=0;
	printf("Introduzca las coordenadas del objeto:");
	scanf("%d",&x);
	scanf("%d",&y);
	for(int i=x;i<x+2;i++)
	{
		for(int j=y;j<y+2;j++)
		{
			if(matriz[i][j]==1)
				ref++;

		}
	}
	if (ref!=0){
		printf("Posicion no valida");
	}


	else
	{

	for(int i=x;i<x+2;i++)
		{
		for(int j=y;j<y+2;j++)
			matriz[i][j]=1;
		}
	for( int i=0;i<10;i++)
	{
		printf("\n");
		for( int j=0;j<10;j++)
			printf("%d",matriz[i][j]);
	}
	}


	}
}
 int main( ){
	const int a=10,b=10;
	
	int i=0,j=0;
	int matriz[10][10];
	for( i=0;i<a;i++)
	{
		for( j=0;j<b;j++)
		matriz[i][j]=0;
		
	}
	for( i=0;i<a;i++)
	{
		printf("\n");
		for( j=0;j<b;j++)
		printf("%d",matriz[i][j]);
	}
	printf("\n");
	pobjeto(matriz);
	system("PAUSE");
}







