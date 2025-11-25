#include <iostream>
using namespace std;

int main(){
    int tipo, edad, educ;
    int mayores18=0;
    int ficcion=0, noFiccion=0;
    int niveles[6]={0};

    for(int i=1; i<=50; i++){
        cout<< "Encuestado " <<i<<endl;
        cout<< "Tipo de libro (1 ficcion, 2 no ficcion): ";
        cin>>tipo;
        cout<< "Edad: ";
        cin>>edad;
        cout<< "Educacion (1:primaria - 2:secundaria incompleta – 3:secundaria completa – 4:terciaria – 5:universitaria): ";
        cin>>educ;
        
        if(edad>18)
            mayores18++;

        if(tipo==1) ficcion++;
        else noFiccion++;

        niveles[educ]++;
    }

    cout<< "A) Mayores de 18: " <<mayores18;
    cout<< "B) Porcentaje ficcion: " <<ficcion*100.0/50;
    cout<< "   Porcentaje no ficcion: " <<noFiccion*100.0/50;

    cout << "C) Cantidad por nivel educativo:";
    for(int i=1; i<=5; i++)
        cout<< "Nivel " <<i<< ": " <<niveles[i]<<endl;
        return 0;
}
