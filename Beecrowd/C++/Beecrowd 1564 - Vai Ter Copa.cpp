/*
 * Beecrowd - Problema 1564 - Vai Ter Copa?
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1564
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0){
			cout << "vai ter copa!\n";
		}else{
			cout << "vai ter duas!\n";
		}
	}
	return 0;
}

