#include <iostream>
#include <locale.h>

using namespace std;

int main()
{

    setlocale(LC_ALL,"Portuguese");


    auto numero=[](int t,int v)->int
    {
        if(t > v){
            return t;
        }
        else{
            return v;
        }
    };

    cout << "\nO maior número é " << numero(841,900) << "\n";

    return 0;
}
