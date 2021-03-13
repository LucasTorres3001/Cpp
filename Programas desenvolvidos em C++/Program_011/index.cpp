#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    short t;
    float So,Vo,a;
    double S;
    So=225.5;
    Vo=14.4;
    t=49;
    a=1.5;
    S=So+((Vo*t)+((a*t*t)/2));

    auto sorvetao=[=]()->double
    {
        return S;
    };

    cout << "\n\n   A posição final desse objeto é de " << sorvetao() << " m.\n\n";

    return 0;
}
