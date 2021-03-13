#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t t;
    struct tm * Silver;

    time(&t);
    Silver=localtime(&t);

    cout << "\n" << asctime(Silver);

    cout << "\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n";

    time_t a;
    struct tm * Gold;
    char nome[40];
    char table[30];

    time(&a);
    Gold=localtime(&a);

    strftime(nome,40," %Ih %Mmin. %Sseg.",Gold);
    strftime(table,30,"%d/%m/%y -",Gold);

    cout << table << nome << "\n";

    return 0;
}
