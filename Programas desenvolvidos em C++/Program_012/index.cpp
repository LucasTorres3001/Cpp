#include <iostream>

using namespace std;

int main()
{
	enum estados{SP=1, PR=2, MS=3, MT=4};
	estados estadoEst;

	estadoEst= MT;

	cout << estadoEst << "\n";

	cout << "\nPrograma executado com sucesso! ;)\n";

	return 0;
}
