/*
 * Beecrowd - Problema 1864 - Nossos Dias Nunca Voltarao
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1864
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	char palavra[50] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	char adivinha[50];
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		adivinha[i] = palavra[i];
	}
	adivinha[n] = '\0';
	cout << adivinha << endl;
	return 0;
}

