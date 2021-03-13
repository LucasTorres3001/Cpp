#include <iostream>
#include "Clube1.h"
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	clube *club1=new clube(1);
	clube *club2=new clube(2);
	clube *club3=new clube(3);
	clube *club4=new clube(4);

	club1->imprimir();
	club2->imprimir();
	club3->imprimir();
	club4->imprimir();

	return 0;
}
