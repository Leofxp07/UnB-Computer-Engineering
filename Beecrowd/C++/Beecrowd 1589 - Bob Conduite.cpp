/*
 * Beecrowd - Problema 1589 - Bob Conduite
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1589
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int t,r1,r2;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> r1 >> r2;
		cout << r1+r2 << endl;
	}
	return 0;
}

