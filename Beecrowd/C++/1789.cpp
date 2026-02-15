/*
 * Beecrowd - Problema 1789 - A Corrida de Lesmas
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1789
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int l,v,i;
	while(cin >> l){
		int maior = 0;
		for(i=0; i<l; i++){
			cin >> v;
			if(v > maior){
				maior = v;
			}
		}
		if(maior < 10){
			cout << "1\n";
		}else if(maior > 10 && maior < 20){
			cout << "2\n";
		}else{
			cout << "3\n";
		}
	}

	return 0;
}

