/*
 * Beecrowd - Problema 1022 - TDA Racional
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1022
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
#include <utility>
#include <cmath>
using namespace std;

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

pair<int, int> simplificar(int num, int den){
	int mdc = gcd(abs(num), abs(den));
	return make_pair(num/mdc, den/mdc);
}

int main(){
	int n1,d1,n2,d2,t,num,den;
	cin >> t;
	while(t--){
		char c1,c2,c3;
		cin >> n1 >> c1 >> d1 >> c2 >> n2 >> c3 >> d2;
		if(c2 == '+'){
			num = (n1*d2+n2*d1);
			den = d1*d2;
		}else if(c2 == '-'){
			num = (n1*d2-n2*d1);
			den = d1*d2;
		}else if(c2 == '*'){
			num = n1*n2;
			den = d1*d2;
		}else{
			num = n1*d2;
			den = n2*d1;
		}
		pair <int, int> resultado = simplificar(num,den);		//vou usar o pair pra minha funcao retornar dois valores
		cout << num << "/" << den << " = " << resultado.first << "/" << resultado.second << endl;
	}
	return 0;
}
