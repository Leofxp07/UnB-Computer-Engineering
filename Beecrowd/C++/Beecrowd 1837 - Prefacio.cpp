/*
 * Beecrowd - Problema 1837 - Prefacio
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1837
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a,b,q,r;
	cin >> a >> b;
	r = a%b;
	if(r < 0){     		//na divisao euclidiana o r nao pode ser negativo
		if(b > 0){		//precisamos manter o 0 <= r < |b|
			r += b;		
		}else{
			r -= b;
		}
	}
	q = (a-r)/b;
	cout << q << " " << r << endl;
	return 0;
}

