#include <stdio.h>
#include <stdlib.h>

class mundo
{
	public:
		int matriz[72][72];
		void iniciarMatriz(int matriz[][72]);
		void pintarMatriz(int matriz[][72]);
		void introducirObjeto(int matriz[][72]);	
};

void mundo::iniciarMatriz(int matriz[][72]){
		int x=72,y=72;
		for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		matriz[i][j]=0;
		
	}

}
void mundo::pintarMatriz(int matriz[][72])
{
		int x=72,y=72;
		
	for( int i=0;i<x;i++)
	{
		printf("\n");
		for( int j=0;j<y;j++)
		{
			if (matriz[i][j] == 1)
				printf("%c", 178);
			else
				printf("%c", 176);
		}
	}
}
void mundo::introducirObjeto(int matriz[][72])
{
	int x,y;
	int ref=0;
	printf("\nIntroduzca las coordenadas del objeto:");
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
	if (ref!=0)
	{
		printf("Posicion no valida");
	}
	else
	{
		for(int i=x;i<x+2;i++)
		{
			for(int j=y;j<y+2;j++)
				matriz[i][j]=1;
		}
		
	}

}
void motorGrafico(){ //Iniciamos el entorno gráfico fuera del main
	mundo m;
	m.iniciarMatriz(m.matriz);
	m.pintarMatriz(m.matriz);
	m.introducirObjeto(m.matriz);
	m.pintarMatriz(m.matriz);
}

 int main()
{
	while(1)
		motorGrafico();
	
}


 
