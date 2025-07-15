#include <iostream>
using namespace std;

int main() {
	const int cursos=5;
	const int max_cupo=20;
	int incriptos[cursos]={0};
	
	for(int i=0; i<cursos; i++){
		incriptos[i]=15;
	}
	
	cout << "Cantidad de incriptos por curso: " << endl;
	for (int i=0; i<cursos; i++){
		cout << "Curso " << (i+1) <<": " << incriptos[i] << " incriptos." << endl;
	}
	
	return 0;
}
