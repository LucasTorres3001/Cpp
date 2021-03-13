#include <iostream>

using namespace std;

class Automovel
{
    public:
        short vel=0;
        short velMax;
        string model;
        void info(short opcao);

    private:
};

void Automovel::info(short opcao)
{
	if(opcao == 1)
    {
		this->velMax=360;
		this->model="Lamborghini";
	}
	else if(opcao == 2)
    {
		this->velMax=340;
		this->model="Porsche";
	}
	else if(opcao == 3)
	{
		this->velMax=120;
		this->model="Fusca";
	}
	else
    {
        if(opcao < 1 || opcao > 3)
        {
            cout << "\n     Error 404 :(\n\n";
        }
    }
}

int main(){

	Automovel *Auto = new Automovel();

	Auto->info(3);

	cout << "\n\n" << Auto->velMax << " km/h\n";

	return 0;
}
