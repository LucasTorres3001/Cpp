#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    short g;
    float Po,d,h;
    double P;
    Po = 2;
    d = 1.6;
    g = 10;
    h = 6.2;
    P = Po+(d*g*h);

    auto stevin=[=]()->double
    {
        return P;
    };

    cout << "\n A pressão final é de " << stevin() << " Pa\n";

    return 0;
}
