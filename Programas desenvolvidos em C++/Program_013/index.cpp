#include <iostream>
#include <locale.h>

using namespace std;

void fisica(int F, double A);

int main()
{
	setlocale(LC_ALL,"Portuguese");

	fisica(15000,1.15);

	cout << "\n\nPrograma executado com sucesso! ;)...\n\n\n";

	return 0;
}

	void fisica(int F, double A)
	{
		double P;
		P=F/A;
		cout << "\n     Um autom�vel est� estacionado em cima de uma plataforma cuja a �rea � de " << A << " m�. Sabendo que este veiculo exerce uma for�a de " << F << " N sobre a plataforma, calcule a press�o dessa simula��o?\n\n" << P << " Pa\n";

		if(P <= 1200)
        {
			cout << "\n     Press�o de " << P << " Pa cosiderada baixa!\n";
		}
		else if(P <= 2500)
		{
			cout << "\n     Press�o de " << P << " Pa considerada moderada!\n";
		}
		else
		{
			cout << "\n     Press�o de " << P << " Pa cosiderada alta!\n";
		}
	}
