#ifndef DyV_H
#define DyV_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int BusquedaBinaria(int X, const vector<short> &V, int ini, int fin) {
    if (ini > fin) {
        cout << "No se encuentra en el array" << endl;
        return -1;
    }

    int medio = (ini + fin) / 2;

    if (V[medio] == X) {
        return medio;
    } else if (V[medio] > X) {
        return BusquedaBinaria(X, V, ini, medio - 1);
    } else {
        return BusquedaBinaria(X, V, medio + 1, fin);
    }
}

int BusquedaBinaria_INV(int X, const vector<short> &V, int ini, int fin){
	if (ini > fin) {
        cout << "No se encuentra en el array" << endl;
        return -1;
    }
    
    int medio = (ini + fin) / 2;
    
    if (V[medio] == X){
    	return medio;
    } else if (V[medio] < X){
    	return BusquedaBinaria(X, V, ini, medio - 1);
    } else {
        return BusquedaBinaria(X, V, medio + 1, fin);
    }
     
}


int Partition(vector<short> &V, int ini, int fin){
	int x = V[fin];
	int i = ini;
	for(int j = i; j <= fin - 1; j++){
		if(V[j] <= x){
			swap(V[i], V[j]);
			i = i + 1;
		}
	}
	swap(V[i], V[fin]);
	return i;
}

void QuickSort (vector<short> &V, int ini, int fin){
	if (ini < fin){
		int pivot = Partition(V, ini, fin);
		QuickSort(V, ini, pivot - 1);
		QuickSort(V, pivot + 1, fin);
	}
}


#endif

