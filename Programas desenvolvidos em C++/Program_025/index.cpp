#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;


int teste()
{
    string RespOfUser;
    short Ganhou,Numero,Numero2,NumeroAleatorio,NumeroDePartidasJogadas,Perdeu;
    NumeroDePartidasJogadas=0;


    do
    {
        system("cls");

        NumeroDePartidasJogadas++;

        cout << "\n                                                             PROGRAMA: Ímpar ou Par\n";

        do
        {
            cout << "\nDigite o número 0 para ÍMPAR ou 1 para PAR: ";
            cin >> Numero;

            if(Numero < 0 || Numero > 1)
            {
                cout << "\n     [ERROR] Number invalid! :(\n";
            }
        }
        while(Numero < 0 || Numero > 1);

        do
        {
            cout << "\nDigite um número de forma aleatória: ";
            cin >> Numero2;

            if(Numero2 < 0 || Numero2 > 1000)
            {
                cout << "\n     Error 404 :(\n";
            }
        }
        while(Numero2 < 0 || Numero2 > 1000);

        srand(time(NULL));
        NumeroAleatorio = rand() % 1000;

        if(Numero == 0)
        { //---------------------------------------------------------------------- * ÍMPAR * ----------------------------------------------------------------------
            if((Numero2+NumeroAleatorio) % 2 == 0)
            {
                cout << "\n\nO resultado deu PAR!\n\n   - O usuário jogou o número " << Numero2 << " e o P.C. jogou o número " << NumeroAleatorio << "\n\n O usuário PERDEU! :(\n";
                Perdeu++;
            }
            else
            {
                if((Numero2+NumeroAleatorio) % 2 != 0)
                {
                    cout << "\n\nO resultado deu ÍMPAR!\n\n   - O usuário jogou o número " << Numero2 << " e o P.C. jogou o número " << NumeroAleatorio << "\n\n PARABÉNS! ... O usuário GANHOU! ;)\n";
                    Ganhou++;
                }
            }
        }
        else
        {
            if(Numero == 1)
            { //--------------------------------------------------------------------- * PAR * ---------------------------------------------------------------------
                if((Numero2+NumeroAleatorio) % 2 == 0)
                {
                    cout << "\n\nO resultado deu PAR!\n\n   - O usuário jogou o número " << Numero2 << " e o P.C. jogou o número " << NumeroAleatorio << "\n\n PARABÉNS! ... O usuário GANHOU! ;)\n";
                    Ganhou++;
                }
                else
                {
                    if((Numero2+NumeroAleatorio) % 2 != 0)
                    {
                        cout << "\n\nO resultado deu ÍMPAR!\n\n   - O usuário jogou o número " << Numero2 << " e o P.C. jogou o número " << NumeroAleatorio << "\n\n O usuário PERDEU! :(\n";
                        Perdeu++;
                    }
                }
            }
        }
        cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n";
        do
        {
            cout << "\nDeseja continuar ? ";
            cin >> RespOfUser;

            if(((RespOfUser!="s" && RespOfUser!="S") && (RespOfUser!="sim" && RespOfUser!="SIM" && RespOfUser!="Sim")) && ((RespOfUser!="n" && RespOfUser!="N") && (RespOfUser!="nao" && RespOfUser!="NAO" && RespOfUser!="Nao")))
            {
                cout << "\n     Answer invalid!\n";
            }
        }
        while(((RespOfUser!="s" && RespOfUser!="S") && (RespOfUser!="sim" && RespOfUser!="SIM" && RespOfUser!="Sim")) && ((RespOfUser!="n" && RespOfUser!="N") && (RespOfUser!="nao" && RespOfUser!="NAO" && RespOfUser!="Nao")));

        if((RespOfUser=="n" || RespOfUser=="N") || (RespOfUser=="nao" || RespOfUser=="NAO" || RespOfUser=="Nao"))
        {
            break;
        }
    }
    while((RespOfUser=="s" || RespOfUser=="S") || (RespOfUser=="sim" || RespOfUser=="SIM" || RespOfUser=="Sim"));


    cout << "\n\n   - O usuário jogou ao todo: " << NumeroDePartidasJogadas << " partida(s), com " << Ganhou << " vitória(s) e " << Perdeu << " derrota(s).";
    cout << "\n\n - Cada vitória valia 3 pontos e derrata 0 pontos. Portanto, o usuário fez no total: " << (Ganhou*3) << " pontos.\n\n\n\n";

    time_t kc;
    struct tm * localization;
    char data[22],horario[22];

    time(&kc);
    localization=localtime(&kc);

    strftime(horario,22,"%H h %M min %S seg",localization);
    strftime(data,22,"%d/%m/%y",localization);

    cout << horario << " - " << data<< "\n\n";
}



int main()
{
    setlocale(LC_ALL,"Portuguese");

    teste();


    return 0;
}

