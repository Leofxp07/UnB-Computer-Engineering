/*
 * Beecrowd - Problema 1914 - De Quem e a Vez?
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1914
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int qt,i;
	cin >> qt;
	for(i=0; i<qt; i++){
		string one,two,three,four;
		cin >> one >> two >> three >> four;
		
		int first, second;
		cin >> first >> second;
		
		int total = first + second;
		if(total%2==0){
			if(two == "PAR"){
				cout << one << endl;
			}else{
				cout << three << endl;
			}
		}else{
			if(two == "IMPAR"){
				cout << one << endl;
			}else{
				cout << three << endl;
			}
		}
	}
	return 0;
}

