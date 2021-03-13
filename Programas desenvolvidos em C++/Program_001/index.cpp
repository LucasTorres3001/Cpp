#include <iostream>
#include <locale.h>

using namespace std;

struct Dados
{
    string nome,mes,sexo,localNasc,estado,nacionalidade,cor;
    short dia,ano;
    float peso;
    double altura;

    void insere(string $nome,string $mes, string $sexo, string $localNasc, string $estado, string $nacionalidade, string $cor, short $dia, short $ano, float $peso, double $altura)
    {
        nome=$nome;
        mes=$mes;
        sexo=$sexo;
        localNasc=$localNasc;
        estado=$estado;
        nacionalidade=$nacionalidade;
        cor=$cor;
        dia=$dia;
        ano=$ano;
        peso=$peso;
        altura=$altura;
    }

    void imprimir()
    {
        cout << "\n Nome_______________: " << nome << "\n";
        cout << "\n Data de nascimento_: " << dia << " de " << mes << " de " << ano << "\n";
        cout << "\n Local de nascimento: " << localNasc << " - " << estado << "\n";
        cout << "\n Nacionalidade______: " << nacionalidade << "\n";
        cout << "\n Etnia______________: " << cor << "\n";
        cout << "\n Sexo_______________: " << sexo << "\n";
        cout << "\n Peso_______________: " << peso << " kg\n";
        cout << "\n Altura_____________: " << altura << " m\n";
        cout << "\n--------------------------------------------\n";
    }
};

int main()
{
    setlocale(LC_ALL,"Portuguese");

    Dados pessoa;

    pessoa.insere("Romoaldo Bronha Pinto da Costa","dezembro","Masculino","Romildópolis","SP","brasileiro","Caboclo",24,1925,128.2,1.88);

    pessoa.imprimir();

    return 0;
}
