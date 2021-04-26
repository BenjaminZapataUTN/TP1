#include <iostream>
#include <float.h>

using namespace std;

int main()
{
    float m1, m2, b1, b2, y, x;
    cout << "Ingrese el valor de la pendiente de la primera recta= ";
    cin >> m1;
    cout << "Ingrese el valor de la ordenada al origen de la primera recta= ";
    cin >> b1;
    cout << "Ingrese el valor de la pendiente de la segunda recta= ";
    cin >> m2;
    cout << "Ingrese el valor de la ordenada al origen de la segunda recta= ";
    cin >> b2;

    if (m1==m2 && b1==b2)
    {
        cout << "Las rectas con las caracteristicas ingresadas son rectas paralelas coincidentes (son la misma recta).";
    }
    else if (m1==m2)
    {
        cout << "Las rectas con las caracteristicas ingresadas son rectas paralelas no secantes (no poseen interseccion).";
    }
    else
    {
        x = (b2-b1)/(m1-m2);
        y = (m1*x)+b1;

    cout << "La recta se intersecta en x = ";
    cout << x;
    cout << " e y = ";
    cout << y;
    }
    return 0;
}
