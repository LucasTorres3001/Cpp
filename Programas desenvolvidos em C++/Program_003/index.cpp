#include <iostream>
#include <locale.h>
#include <ctime>

using namespace std;

void pais(short js);

int main()
{
    setlocale(LC_ALL,"Portuguese");

    pais(4);

    cout << "\n\n\n\n Programa executa com sucesso! ;)\n";


    time_t t;
    struct tm *Temp;

    time(&t);
    Temp=localtime(&t);

    cout << "\n\n\n\n\n " << asctime(Temp) << "\n";

    return 0;
}

    void pais(short js)
    {
        cout << "\n                                     ESCOLHA APENAS UM DOS SEGUINTES PAISES\n";
        cout << "\n Selecione um pais.\n";
        cout << "\n A) Argentina  B)Brasil  C) Colombia  D) Uruguai  E) Portugal  F) Fran�a  G) It�lia  H) Alemanha\n";

        switch(js)
        {
            case 1:
            case 2:
            case 3:
            case 4:
                cout << "\n\n Am�rica do Sul\n";
                switch(js)
                {
                    case 1:
                        cout << "\n\n\n Voc� selecionou a Argentina!\n";
                    break;
                    case 2:
                        cout << "\n\n\n Voc� selecionou o Brasil!\n";
                    break;
                    case 3:
                        cout << "\n\n\n Voc� selecionou a Colombia!\n";
                    break;
                    case 4:
                        cout << "\n\n\n Voc� selecionou o Uruguai!\n";
                    break;
                }
                break;
            case 5:
            case 6:
            case 7:
            case 8:
                cout << "\n\n Europa\n";
                switch(js)
                {
                    case 5:
                        cout << "\n\n\n Voc� selecionou Portugal!\n";
                    break;
                    case 6:
                        cout << "\n\n\n Voc� selecionou a Fran�a!\n";
                    break;
                    case 7:
                        cout << "\n\n\n Voc� selecionou a It�lia!\n";
                    break;
                    case 8:
                        cout << "\n\n\n Voc� selecionou a Alemanha!\n";
                    break;
                }
                break;
            default:
                cout << "\n\n\n Alternativa inv�lida\n";
            break;
        }
    }
