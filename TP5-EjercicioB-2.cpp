#include <iostream>
using namespace std;

int main() {
	const int producto=5;
	int codigo[producto]={271, 272, 273, 274, 275};
	int stock[producto]={21, 34, 9, 58, 10};
	
	int codBuscar;
    cout << "Ingresar codigo de producto que desea consultar: ";
    cin >> codBuscar;
    
    bool encontrado = false;
    for(int i=0; i<producto; i++){
        if(codigo[i] == codBuscar){
            cout << "Stock actual de producto " << codBuscar << ": " << stock[i] << endl;
            stock[i]--;
            cout << "Stock actualizado: " << stock[i] << endl;
            encontrado = true;
            break;
        }
    }
	
	if(!encontrado){
        cout << "El producto no fue encontrado." << endl;
    }
    
    cout << "Lista completa de los productos y su stock: " << endl;
    for(int i=0; i<producto; i++){
        cout << "Codigo: " << codigo[i] << " | Stock: " << stock[i] << endl;
    }
	
	return 0;
}
