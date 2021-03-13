#include <iostream>
#include "Clube3.h"
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");

    time *tim1=new time(1);
    time *tim2=new time(2);

    tim1->imprimir();
    tim2->imprimir();


    return 0;
}
