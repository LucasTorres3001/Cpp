#include <iostream>
#include <locale.h>

using namespace std;

void kkk(float *y, float z);

int main()
{
	setlocale(LC_ALL,"Portuguese");

	float y=0;

	kkk(&y,784);

	cout << "\n\n   Y � igual a Z, ent�o Y � "<< y << "\n\n";

	return 0;
}

	void kkk(float *y, float z)
	{
		*y=z;
	}
