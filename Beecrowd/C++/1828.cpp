/*
 * Beecrowd - Problema 1828 - Bazinga!
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1828
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int t;
	cin >> t;
	string sheldon,raj;
	int teste = 1;
	for(int i=0; i<t; i++){
		cin >> sheldon >> raj;
		if(sheldon == raj){
			cout << "Caso #" << teste << ": De novo!\n";
		}else if(sheldon == "tesoura" && (raj == "papel" || raj == "lagarto") ||
				 sheldon == "papel" && (raj == "pedra" || raj == "Spock") ||
				 sheldon == "pedra" && (raj == "lagarto" || raj == "tesoura") ||
				 sheldon == "lagarto" && (raj == "Spock" || raj == "papel") ||
				 sheldon == "Spock" && (raj == "tesoura" || raj == "pedra")){
				 cout << "Caso #" << teste << ": Bazinga!\n";
		}else{
			cout << "Caso #" << teste << ": Raj trapaceou!\n";
		}
		teste++;
	}
	return 0;
}

