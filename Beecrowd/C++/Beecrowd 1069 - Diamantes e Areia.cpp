/*
 * Beecrowd - Problema 1069 - Diamantes e Areia
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1069
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
#include <string.h>
#include <stack>
using namespace std;

int main(){
	int n;
	cin >> n;
	string expressao;
	for(int i=0; i<n; i++){
		cin >> expressao;
		stack <char> pilha;
		int diamantes = 0;
		for(char c : expressao){
			if(c == '<'){
				pilha.push(c);
			}else if(c == '>'){
				if(!pilha.empty()){
					diamantes++;
					pilha.pop();
				}
			}
		}
		cout << diamantes << endl;
	}
	return 0;
}

