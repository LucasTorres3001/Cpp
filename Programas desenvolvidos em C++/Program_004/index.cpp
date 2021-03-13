#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
#include <locale.h>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    /*
    int p;
    float a;
    double c;
    p=38;
    a=57.4;
    c=(a*p)/100;

    auto ciclovia=[=]()->double{
        return c;
    };

    cout << "\nA extensão da ciclovia é " << ciclovia() << " km\n";
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
    */

    cout << "\n                                                             GAME: Pedra, Papel e Tesoura\n";

    srand(time(NULL));

    int PersonalComputer,OptionOfThePlayer;
    PersonalComputer=rand() % 3;

    vector<string>Option;
    Option.push_back("Papel\n");
    Option.push_back("Pedra\n");
    Option.push_back("Tesoura\n");

    cout << "Opções de Jogadas\n\n 0) Papel    1) Pedra    2) Tesoura\n\nEscolha uma opção de jogo: ";
    cin >> OptionOfThePlayer;

    cout << "\n____________________________________________________________________________________________________________________________________________________________\n";
    cout << "\nJO\n\nKEN\n\nPO!!!\n";
    cout << "____________________________________________________________________________________________________________________________________________________________\n";
    cout << "\n - O PC escolheu " << Option[PersonalComputer] << " e você escolheu " << Option[OptionOfThePlayer] << "\n";

    if(PersonalComputer == 0)
    { //----------------------------------------------------------------------- * PAPEL * -----------------------------------------------------------------------
        if(OptionOfThePlayer == 0)
        { //Empatou
            cout << "\n     EMPATOU!\n";
        }
        else if(OptionOfThePlayer == 1)
        { //Perdeu
            cout << "\n     GANHEI! ;)... Infelizmente não foi dessa vez!\n";
        }
        else if(OptionOfThePlayer == 2)
        { //Venceu
            cout << "\n     PARABÉNS! ;)... O usuário GANHOU!\n";
        }
        else
        {
            cout << "\n Opção de jogada inválida!\n";
        }
    }
    else if(PersonalComputer == 1)
    { //----------------------------------------------------------------------- * PEDRA * -----------------------------------------------------------------------
        if(OptionOfThePlayer == 0)
        { //Venceu
            cout << "\n     PARABÉNS! ;)... O usuário GANHOU!\n";
        }
        else if(OptionOfThePlayer == 1)
        { //Empatou
            cout << "\n     EMPATOU!\n";
        }
        else if(OptionOfThePlayer == 2)
        { //Perdeu
            cout << "\n     GANHEI! ;)... Infelizmente não foi dessa vez!\n";
        }
        else
        {
            cout << "\n Opção de jogada inválida!\n";
        }
    }
    else if(PersonalComputer == 2)
    { //----------------------------------------------------------------------- * TESOURA * -----------------------------------------------------------------------
        if(OptionOfThePlayer == 0)
        { //Perdeu
            cout << "\n     GANHEI! ;)... Infelizmente não foi dessa vez!\n";
        }
        else if(OptionOfThePlayer == 1)
        { //Venceu
            cout << "\n     PARABÉNS! ;)... O usuário GANHOU!\n";
        }
        else if(OptionOfThePlayer == 2)
        { //Empatou
            cout << "\n     EMPATOU!\n";
        }
        else
        {
            cout << "\n Opção de jogada inválida!\n";
        }
    }
    else
    {
        cout << "\nJogada inválida!\n";
    }

    return 0;
}
