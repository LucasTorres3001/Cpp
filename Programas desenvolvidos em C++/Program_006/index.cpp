#include <iostream>
#include <locale.h>

using namespace std;

struct Clube
{
	string nome;
	short dia,ano;
	string cores;
	short cmfifa,ci,cla,csa,rsa,sl,cc,cb,ccm,total;

	void insere(string $nome, short $dia, short $ano, string $cores, short $cmfifa, short $ci, short $cla, short $csa, short $rsa, short $sl, short $cc, short $cb, short $ccm, short $total)
	{
		nome=$nome;
		dia=$dia;
		ano=$ano;
		cores=$cores;
		cmfifa=$cmfifa;
		ci=$ci;
		cla=$cla;
		csa=$csa;
		rsa=$rsa;
		sl=$sl;
		cc=$cc;
		cb=$cb;
		ccm=$ccm;
		total=$total;
	}

	void mostrar()
	{
		cout << "\nNome do clube______: " << nome << "\n";
		cout << "Fundação do clube__: " << dia << " de Janeiro de " << ano << "\n";
		cout << "Cores de clube_____: " << cores << "\n\n";
		cout << " TÍTULOS INTERNACIONAIS\n";
		cout << "___________________: " << cmfifa << " Copas do Mundo de Clubes da FIFA\n";
		cout << "___________________: " << ci << " Copas Intercontinentais\n";
		cout << "___________________: " << cla << " Copas Libertadores da América\n";
		cout << "___________________: " << csa << " Copa Sul-americana\n";
		cout << "___________________: " << rsa << " Recopas Sul-americana\n";
		cout << "___________________: " << sl << " Supercopa Libertadores\n";
		cout << "___________________: " << cc << " Copa CONMEBOL\n\n";
		cout << " TÍTULOS NACIONAIS\n";
		cout << "___________________: " << cb << " campeonatos brasileiros\n";
		cout << "___________________: " << ccm << " Copas dos Campeões Mundiais\n\n";
		cout << " Nº TOTAL DE TÍTULOS: " << total << " titulos\n";
	}
};

int main()
{
	setlocale(LC_ALL,"Portuguese");

	Clube sp;

	sp.insere("São Paulo F.C.",25,1930,"Preto, Branco e Vermelho",1,2,3,1,2,1,1,6,2,18);
	sp.mostrar();


	return 0;
}
