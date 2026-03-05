/*
 * Beecrowd - Problema 1190 - Area Direita
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1190
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
	int fim = 0;  			
	for(int i=1; i<11; i++){
		if(i <= 5) fim = 12-i;
		else fim = i+1;;
		
		for(int j=fim; j<12; j++){
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


