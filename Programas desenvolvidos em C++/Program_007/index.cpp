#include <iostream>
#include "Clube2.h"
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	clube *clu1=new clube(1);
	clube *clu2=new clube(2);
	clube *clu3=new clube(3);
	clube *clu4=new clube(4);

	clu1->imprimir();
	clu2->imprimir();
	clu3->imprimir();
	clu4->imprimir();

	return 0;
}
