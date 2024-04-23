#include<stdio.h>
#include<stdlib.h>

void main(){
	int numero1;
	int numero2;
	int resultado;
	printf("Digite um numero:\n");
	scanf("%d",&numero1);
	printf("Digite outro numero:");
	scanf("%d",&numero2);
	resultado=numero1*numero2;
	printf("\na multiplicação de %d e %d,resulta em:%d\n",numero1,numero2,resultado);
}
