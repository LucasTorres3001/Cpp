#include <iostream>
#include <algorithm>
#include <vector>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    vector<int>num={1,2,4,8,16,32,64};
    auto it=find(num.begin(),num.end(),35);

    if(it!=num.end())
    {
        cout << "\nNumeral encontrado: " << *it << "\n";
    }
    else
    {
        cout << "\nNumeral NÃO encontrado!\n\n";
    }


    return 0;
}
