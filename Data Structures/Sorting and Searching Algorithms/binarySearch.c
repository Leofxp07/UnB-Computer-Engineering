#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int v[7], int inicio, int fim, int x){
	int meio;
	if(inicio > fim) return 0;
	meio = (inicio+fim)/2;
	if(v[meio] == x) return 1;
	if(v[meio] > x) return buscaBinaria(v,inicio,meio-1,x);
	return buscaBinaria(v,meio+1,fim,x);
}

int main(){
	int v[8] = {0,5,9,10,89,100,555,1000};
	int x;
	printf("Escolha um numero e eu te direi se ele esta presente nomeu vetor\n");
	scanf("%d",&x);
	
	if(buscaBinaria(v,0,7,x)) printf("O elemento existe\n");
	else printf("O elemento nao existe\n");
	return 0;
}

