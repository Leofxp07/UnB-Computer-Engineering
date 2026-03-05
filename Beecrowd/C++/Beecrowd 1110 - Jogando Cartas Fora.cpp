/*
 * Beecrowd - Problema 1110 - Jogando Cartas Fora
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1110
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
#include <queue>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n==0) break;
		queue <int> cartas;
		for(int i=1; i<=n; i++){
			cartas.push(i);
		}
		int vetor[n-1];
		int back;
		for(int i=0; i<n-1; i++){
			back = cartas.front();
			vetor[i] = back;
			cartas.pop();
			back = cartas.front();
			cartas.pop();
			cartas.push(back);
		}
		cout << "Discarded cards: ";
		for(int i=0; i<n-1; i++){
			if(i == n-2){
				cout << vetor[i] << endl;
			}else{
				cout << vetor[i] << ", ";
			}
		}
		cout << "Remaining card: " << cartas.front() << endl;
	}
	return 0;
}

