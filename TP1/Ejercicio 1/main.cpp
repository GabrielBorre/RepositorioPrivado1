#include <iostream>

using namespace std;

int main()
{

  float a,b;
    cout<<"Ingrese un valor.Dicho valor se va a leer en km/hr"<<endl;
    cin>>a;
    b= (1000 *a)/3600;
    cout<<"El valor transofrmado a mts/s es "<< b <<endl;
    return 0;
}
