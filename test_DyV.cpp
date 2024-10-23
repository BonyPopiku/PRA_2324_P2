#include <iostream>
#include "DyV.h"
#include <vector>
#include<chrono>

using namespace std;

int main(){
	
	vector<short> V1 {1, 5, 8, 9, 11, 32};
	vector<short> V2 {1, 23, 2, 14, 34, 3};

	int pos = BusquedaBinaria(1, V1, 0, V1.size() - 1);
	int pos1 = BusquedaBinaria(8, V1, 0, V1.size() - 1);
	
	cout << "Posición: " << pos << endl;
	cout << "Posición: " << pos1 << endl;
	
	// Medir el tiempo de ejecución de QuickSort
    	auto start = chrono::system_clock::now();

    	QuickSort(V2, 0, V2.size() - 1);  // Llamada a QuickSort

    	auto end = chrono::system_clock::now();

    	// Cálculo de la duración
    	chrono::duration<float, milli> duration = end - start;

    	// Mostrar el tiempo de ejecución
    	cout << "Time: " << duration.count() << " ms" << endl;

    	for (int i = 0; i < V2.size();i++) {
        	cout << V2[i] << " ";  // Muestra el vector ordenado
    	}
    	cout << endl;
	
	return 0;
}
