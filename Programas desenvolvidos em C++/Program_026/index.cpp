#include <iostream>
#include "Time.h"
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    equipe *equi1=new equipe(1);
    equipe *equi2=new equipe(2);

    equi1->imprimir();
    equi2->imprimir();

    return 0;
}
