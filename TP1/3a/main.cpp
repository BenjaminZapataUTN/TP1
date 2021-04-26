#include <iostream>
#include <float.h>

using namespace std;

int main()
{
    float kmh,mts;
    cout << "Ingrese una velocidad (km/h)= ";
    cin >> kmh;
    mts = (kmh)/3.6;
    cout << mts;
    return 0;
}
