/*
 * Beecrowd - Problema 2460 - Fila
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/2460
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
#include <queue>
using namespace std;

bool saiu[100005]; //vou marcar a posicao de quem saiu

int main(){
	int n,m,x;
	cin >> n;
	int vetor[n];
	for(int i=0; i<n; i++){
		cin >> vetor[i];
		saiu[vetor[i]] = false;     //vou comecar dizendo que ninguem saiu
	}
	cin >> m;
	for(int i=0; i<m; i++){
		cin >> x;
		saiu[x] = true;
	}
	queue <int> fila;
	for(int i=0; i<n; i++){
		if(!saiu[vetor[i]]){
			fila.push(vetor[i]);
		}
	}
	for(int i=0; i<n-m; i++){
		if(i == n-m-1){
			cout << fila.front() << endl;
		}else{
			cout << fila.front() << " ";
			fila.pop();
		}
	}
	return 0;
}

