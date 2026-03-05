/*
 * Beecrowd - Problema 1189 - Area Esquerda
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1189
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double matriz[12][12];
	char t;
	cin >> t;
	for(int i=0; i<12; i++){
		for(int j=0; j<12; j++){
			cin >> matriz[i][j];
		}
	}
	
	double soma = 0.0;
	int fim = 0;  			//um auxiliar que vai me ajudar a contar a partir de i=6
	for(int i=1; i<11; i++){
		if(i <= 5) fim = i;
		else fim = 11-i;
		
		for(int j=0; j<fim; j++){
			soma += matriz[i][j];
		}
	}
	
	cout << fixed << setprecision(1);
	if(t == 'S'){
		cout << soma << endl;
	}else{
		cout << soma/30.0 << endl;
	}

	return 0;
}

