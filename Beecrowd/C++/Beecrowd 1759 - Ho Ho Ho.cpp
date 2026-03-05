/*
 * Beecrowd - Problema 1759 - Ho Ho Ho
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1759
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		if(i==n-1){
			cout << "Ho!\n";
		}else{
			cout << "Ho ";
		}
	}

	return 0;
}

