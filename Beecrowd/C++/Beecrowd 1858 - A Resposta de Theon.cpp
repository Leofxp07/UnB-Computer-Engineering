/*
 * Beecrowd - Problema 1858 - A Resposta de Theon
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1858
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n,t,i;
	cin >> n;
	int menor = 21;
	int posicao = 21;
	for(i=1; i<=n; i++){
		cin >> t;
		if(t < menor){
			menor = t;
			posicao = i;
		}
	}
	cout << posicao << endl;
	return 0;
}

