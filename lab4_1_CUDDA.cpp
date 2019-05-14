#include "pch.h"
#include <iostream>
#include <string>
#include <omp.h>
#include <time.h>
using namespace std;


int main() {
	int N = 1000;
	int M = 1000;

	// Define matrix
	int *matrice;
	matrice = new int[N*M];
	// Define vector
	int *vector;
	vector = new int[N];
	// Result
	int *result;
	result = new int[N];
	// Initialise
	for (int i = 0; i < N; ++i)
	{
		vector[i] = rand() % 100;
		for (int j = 0; j < N; ++j)
		{
			matrice[i*N + j] = rand() % 100;
		}
	}
	cout << "Inmultire..\n";
	// Inmultire
	for (int i = 0; i < N; ++i)
	{
		vector[i] = rand() % 100;
		for (int j = 0; j < N; ++j)
		{
			result[i] += matrice[i*N + j] * vector[j];
		}
		cout << result[i] << "\n";
	}

	return 0;
}
