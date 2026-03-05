/*
 * Beecrowd - Problema 1962 - Ha Muito, Muito Tempo Atras
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1962
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(n > 2014){
			cout << n - 2014 << " A.C\n";
		}else{
			cout << 2015 - n << " D.C\n";
		}
	}
	return 0;
}

