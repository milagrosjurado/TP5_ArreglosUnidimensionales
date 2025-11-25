#include <iostream>
using namespace std;

int main() {
    int seguir, voto;
    int V[4]={0};

    do{
        cout<< "ACCESO A ENCUESTA" <<endl;
        cout<< "Desea realizar encuesta? 1:si, 2:no: ";
        cin>>seguir;

        if(seguir==1){
            cout<< "PRODUCTOS PARTICIPANTES:";
            cout<< "1- PRODUCTO A";
            cout<< "2- PRODUCTO B";
            cout<< "3- PRODUCTO C";

            cout<< "Ingrese numero de producto favorito: ";
            cin>>voto;

            if(voto>=1 && voto<=3)
                V[voto]++;
        }

    } while(seguir==1);

    int total=V[1]+V[2]+V[3];

    cout<< "Votos Producto A: " <<V[1];
    cout<< "Votos Producto B: " <<V[2];
    cout<< "Votos Producto C: " <<V[3];

    cout<< "Total de votos: " <<total;

    int mayor=1;
    if (V[2]>V[mayor]) mayor=2;
    if (V[3]>V[mayor]) mayor=3;

    cout<< "Producto con mas votos: " <<mayor<<endl;
    return 0;
}
