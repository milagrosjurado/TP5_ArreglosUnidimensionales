#include <iostream>
using namespace std;

int main() {
	const int dias = 30;
    int temp[dias] = {12,15,8,10,14,18,21,19,9,6,
                              13,17,11,7,16,20,14,13,9,10,
                              15,12,8,11,13,18,17,16,12,10};
                              
    int tempMax = temp[0];
    int tempMin = temp[0];
    int suma = 0;
    int menos10 = 0;

    for(int i=0; i<dias; i++){
        if(temp[i] > tempMax)
            tempMax = temp[i];
        if(temp[i] < tempMin)
            tempMin = temp[i];
        suma += temp[i];
        if(temp[i] < 10)
            menos10++;
    }
    
    float prom=(float)suma/dias;

    cout << "Temperatura más alta: " << tempMax << "°C" << endl;
    cout << "Temperatura más baja: " << tempMin << "°C" << endl;
    cout << "Temperatura promedio: " << prom << "°C" << endl;
    cout << "Dias con menos de 10°C: " << menos10 << endl;
    
	return 0;
}
