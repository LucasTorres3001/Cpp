#include <iostream>
#include <locale.h>

using namespace std;

struct Veiculo
{
	string nome,cor,lay;
	short ncil,diam;
	float ccil;
	double dmo;
	short pot,pot2;
	double rpm;
	short torq;
	double rpm2;
	short velMax;
	double acel,acel2,acel3;
	short vol,cap,tanq;

	void insere(string $nome, string $cor, string $lay, short $ncil, short $diam, float $ccil, double $dmo, short $pot, short $pot2, double $rpm, short $torq, double $rpm2, short $velMax, double $acel, double $acel2, double $acel3, short $vol, short $cap, short $tanq)
	{
		nome=$nome;
		cor=$cor;
		lay=$lay;
		ncil=$ncil;
		diam=$diam;
		ccil=$ccil;
		dmo=$dmo;
		pot=$pot;
		pot2=$pot2;
		rpm=$rpm;
		torq=$torq;
		rpm2=$rpm2;
		velMax=$velMax;
		acel=$acel;
		acel2=$acel2;
		acel3=$acel3;
		vol=$vol;
		cap=$cap;
		tanq=$tanq;
	}

	void mostrar()
	{
		cout << "\n Nome do veiculo___________________: " << nome << "\n";
		cout << " Cor_______________________________: " << cor << "\n\n\n";
		cout << " MOTOR\n";
		cout << " Layout do motor___________________: " << lay << "\n";
		cout << " N� de cilindros___________________: " << ncil << "\n";
		cout << " Di�metro__________________________: " << diam << " mm\n";
		cout << " Curso do cilindro_________________: " << ccil << " mm\n";
		cout << " Deslocamento do motor_____________: " << dmo << " cm�\n";
		cout << " Pot�ncia[kW]______________________: " << pot << " kW\n";
		cout << " Pot�ncia[cv]______________________: " << pot2 << " cv\n";
		cout << " RPM pot�ncia m�xima_______________: " << rpm << " r/min\n";
		cout << " Torque Mas._______________________: " << torq << " Nm\n";
		cout << " @rpm______________________________: " << rpm2 << " r/min\n\n\n";
		cout << " PERFORMANCE\n";
		cout << " Velocidade m�xima_________________: " << velMax << " km/h\n";
		cout << " Acelera��o de 0-100 km/h__________: " << acel << " s\n";
		cout << " Acelera��o de 0-160 km/h__________: " << acel2 << " s\n";
		cout << " Acelera��o em marcha (80-120 km/h): " << acel3 << " s\n\n\n";
		cout << " CAPACIDADES\n";
		cout << " Volume do porta-mala______________: " << vol << " l\n";
		cout << " Capacidade do porta-mala__________: " << cap << " l\n";
		cout << " Tanque de combustivel_____________: " << tanq << " l\n\n\n";
	}
};

int main()
{
	setlocale(LC_ALL,"Portuguese");

	Veiculo vei;

	vei.insere("Porsche 718 Boxter GTS", "Preto", "Motor central", 4, 102,76.4,2487,269,365,6500,430,3300,290,4.1,9.3,2.7,150,125,64);
	vei.mostrar();

	cout << "\nPrograma executado com sucesso! ;)\n";

	return 0;
}
