#include <iostream>
#include <ctime>

using namespace std;

int main() {
	clock_t start = clock();

#pragma omp parallel for num_threads(1)
	for (int i = 0; i < 10000; i++) {
		for (int j = 0; j < 100000; j++) {
			int i = 10;
			i++;
		}
	}
	clock_t end = clock();
	cout << "time: " << end - start << " ms" << endl;
}