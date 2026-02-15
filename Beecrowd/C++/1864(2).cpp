/*
 * Beecrowd - Problema 1864 - Nossos Dias Nunca Voltarao
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1864
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	string palavra = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cout << palavra[i];
	}
	cout << endl;
	return 0;
}

