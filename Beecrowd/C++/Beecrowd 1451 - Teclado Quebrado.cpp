/*
 * Beecrowd - Problema 1451 - Teclado Quebrado
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1451
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
#include <list>
using namespace std;

int main(){
	string texto;
	while(cin >> texto){
		list <char> caractere;
		list <char> :: iterator it;
		it = caractere.begin();		//ele vai indicar se devo mover o cursor pro inicio ou pro fim
		for(char c : texto){
			if(c == '['){
				it = caractere.begin();
			}else if(c == ']'){
				it = caractere.end();
			}else{
				caractere.insert(it, c);
			}
		}
		for(char c : caractere) cout << c;
		cout << endl;
	}

	return 0;
}

