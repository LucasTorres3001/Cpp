#include <iostream>
#include "Aviao.h"
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    Aviao *voar1=new Aviao(1);
    Aviao *voar2=new Aviao(2);
    Aviao *voar3=new Aviao(3);

    voar1->imprimir();
    voar2->imprimir();
    voar3->imprimir();

    return 0;
}
