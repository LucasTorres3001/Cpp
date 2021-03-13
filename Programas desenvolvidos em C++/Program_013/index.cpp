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
		cout << "\n     Um automóvel está estacionado em cima de uma plataforma cuja a área é de " << A << " m². Sabendo que este veiculo exerce uma força de " << F << " N sobre a plataforma, calcule a pressão dessa simulação?\n\n" << P << " Pa\n";

		if(P <= 1200)
        {
			cout << "\n     Pressão de " << P << " Pa cosiderada baixa!\n";
		}
		else if(P <= 2500)
		{
			cout << "\n     Pressão de " << P << " Pa considerada moderada!\n";
		}
		else
		{
			cout << "\n     Pressão de " << P << " Pa cosiderada alta!\n";
		}
	}
