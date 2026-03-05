/*
 * Beecrowd - Problema 1866 - Conta
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1866
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int c,i,n;
	cin >> c;
	for(i=0; i<c; i++){
		cin >> n;
		if(n%2==0){
			cout << "0\n";
		}else{
			cout << "1\n";
		}
	}

	return 0;
}

