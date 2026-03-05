/*
 * Beecrowd - Problema 1068 - Balanco de Parenteses I
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1068
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
#include <stack>
#include <string.h>
using namespace std;

int main(){
	string expressao;
	while(cin >> expressao){
		stack <char> letra;
		bool certo = true;
		for(char c : expressao){
			if(c == '('){        //se houver um ( eu coloco na minha pilha
				letra.push(c);
			}else if(c == ')'){	 //se houver ) vou verificar se tem ( pra fechar
				if(letra.empty()){
					certo = false;
					break;
				}else{
					letra.pop();
				}
			}
		}
		if(certo && letra.empty()){
			cout << "correct\n";
		}else{
			cout << "incorrect\n";
		}
	}
	return 0;
}

