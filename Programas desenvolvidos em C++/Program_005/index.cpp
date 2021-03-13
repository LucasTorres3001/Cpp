#include <iostream>
#include "Carro.h"
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	automovel *aut1=new automovel(1);
	automovel *aut2=new automovel(2);
	automovel *aut3=new automovel(3);

	aut1->imprimir();
	aut2->imprimir();
	aut3->imprimir();

	return 0;
}
