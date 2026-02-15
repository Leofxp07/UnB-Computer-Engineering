/*
 * Beecrowd - Problema 1188 - Area Inferior
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1188
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
	for(int i=7; i<12; i++){
		for(int j=12-i; j!=i; j++){
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
