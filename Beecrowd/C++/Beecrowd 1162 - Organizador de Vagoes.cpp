/*
 * Beecrowd - Problema 1162 - Organizador de Vagoes
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1162
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <iomanip>
#include <list>
using namespace std;

int bubbleSort(int n, int trem[100]){
	int i,j,backup;
	int swaps = 0;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1-i; j++){
			if(trem[j] > trem[j+1]){
				backup = trem[j];
				trem[j] = trem[j+1];
				trem[j+1] = backup;
				swaps++;
			}
		}
	}
	return swaps;
}

int main(){
	int n,l,i,j;
	cin >> n;
	for(i=0; i<n; i++){
		cin >> l;
		int trem[l];
		for(j=0; j<l; j++){
			cin >> trem[j];
		}
		cout << "Optimal train swapping takes " << bubbleSort(l,trem) << " swaps.\n";
	}

	return 0;
}

