#include <iostream>

using namespace std;

int main()
{
     float m1,b1,m2,b2,x,y;
    cout<<"Ingrese el valor de la pendiente de la primera recta"<<endl;
    cin>>m1;
    cout<<"Ingrese el valor de la ordenada al origen de la primera recta"<<endl;
    cin>>b1;
    cout<<"Ingrese el valor de la pendiente de la segunda recta"<<endl;
    cin>>m2;
    cout<<"Ingrese el valor de la ordenada al origen de la segunda recta"<<endl;
    cin>>b2;
    if (m1==m2)
    {
        if (b1==b2)
        {
            cout<<"Las rectas se intersectan en todos los puntos"<<endl;
        }
        else
        {
            cout<<"Las rectas son paralelas, por lo tanto no se intersectan"<<endl;

        }

    }
    else
    {   if(m1!=0 && m2!=0)
           {
               x=(b2-b1)/(m1-m2);
               y=m1*x+b1;
               cout<<"El valor que toma el eje de abscisas cuando las rectas se intersectan es el "<< x <<endl;
               cout<<"El valor que toma el eje de ordenadas cuando las rectas se intersectan es el "<<y<<endl;

           }
        else
        {
            cout<<"Valor/es de recta/s invalido/s"<<endl;
        }

        }



    return 0;
}
