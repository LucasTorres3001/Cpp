#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    auto menor=[](int a,int b)->int
    {
        if(a < b)
        {
        	return a;
		}
		else
		{
			return b;
		}
    };

    cout << " O menor número é " << menor(676,729) << "\n";

    return 0;
}
