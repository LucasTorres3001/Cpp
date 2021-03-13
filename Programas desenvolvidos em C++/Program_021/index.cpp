#include <iostream>
#include <cstdlib>
#include <vector>
#include <locale.h>
#include <ctime>

using namespace std;

int test()
{
    string AnswerOfUser,MesDeNasc,RespostadoUsuario,SignoDoUsuario;
    short a,AnoAtual,AnoDeNascDoUsuario,Contador,ContadorDeNumerosImpares,ContadorDeNumerosPares,ContadorDosMaioresDeIdade,ContadorDosMenoresDeIdade,DiaDoNasc,i;
    int Factorial;
    short IdadeDosUsuarios,MaiorIdade,MenorIdade,NumeroAleatorio,OpcaoDoJogador,OpcaoDoUsuario,SomaDeNumerosImpares,SomaDeNumerosPares,SomadorDeDados,NumeroEscolhidoPeloUsuario;
    AnoAtual = 2021;

    do
    {
        a=0;

        cout << "\n                                                         PROGRAMA\n";

        while(a <= 3)
        {

            cout << "\n\nDigite um n�mero qualquer: ";
            cin >> OpcaoDoUsuario;

            system("cls");

            if(OpcaoDoUsuario == 1)
            {
                cout << "\n                                     GAME: Pedra, Papel e Tesoura\n";

                srand(time(NULL));
                NumeroAleatorio=rand() % 3;

                vector<string>Opcao;
                Opcao.push_back("Papel");
                Opcao.push_back("Pedra");
                Opcao.push_back("Tesoura");

                cout << "\nOp��es de jogadas\n\n 0) Papel   1) Pedra    2) Tesoura\n\n Selecione apenas uma op��o: ";
                cin >> OpcaoDoJogador;

                cout << "\n___________________________________________________________________________________________________________________________________________\n";
                cout << "\n JO\n\n KEN\n\n PO!!!\n";
                cout << "\n___________________________________________________________________________________________________________________________________________\n";


                if(NumeroAleatorio == 0)
                { //------------------------------------------------------------------ * PAPEL * ------------------------------------------------------------------
                    if(OpcaoDoJogador == 0)
                    { //Papel
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e voc� jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n EMPATOU!\n";
                    }
                    else if(OpcaoDoJogador == 1)
                    { //Pedra
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e voc� jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n EU GANHEI!\n";
                    }
                    else if(OpcaoDoJogador == 2)
                    { //Tesoura
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e voc� jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n PARAB�NS, VOC� GANHOU!\n";
                    }
                    else
                    {
                        cout << "\n Op��o de jogo, inv�lida!\n";
                    }
                }
                else if(NumeroAleatorio == 1)
                { //------------------------------------------------------------------ * PEDRA * ------------------------------------------------------------------
                    if(OpcaoDoJogador == 0)
                    { //Papel
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e voc� jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n PARAB�NS, VOCE GANHOU!\n";
                    }
                    else if(OpcaoDoJogador == 1)
                    {//Pedra
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e voc� jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n EMPATOU!\n";
                    }
                    else if(OpcaoDoJogador == 2)
                    {//Tesoura
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e voc� jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n EU GANHEI!\n";
                    }
                    else
                    {
                        cout << "\n Op��o de jogo, inv�lida!\n";
                    }
                }
                else if(NumeroAleatorio == 2)
                { //----------------------------------------------------------------- * TESOURA * -----------------------------------------------------------------
                    if(OpcaoDoJogador == 0)
                    { //Papel
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e voc� jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n EU GANHEI!\n";
                    }
                    else if(OpcaoDoJogador == 1)
                    { //Pedra
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e voc� jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n PARAB�NS, VOC� GANHOU!\n";
                    }
                    else if(OpcaoDoJogador == 2)
                    { //Tesoura
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e voc� jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n EMPATOU!\n";
                    }
                    else
                    {
                        cout << "\n Op��o de jogo, inv�lida!\n";
                    }
                }
                else
                {
                    cout << "\n Op��o de jogo, inv�lida!\n";
                }

                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 2)
            {
                cout << "\n                                                          QUANTIDADE DE N�MEROS PARES & �MPARES E SOMA\n";

                ContadorDeNumerosPares=0;
                ContadorDeNumerosImpares=0;
                SomaDeNumerosPares=0;
                SomaDeNumerosImpares=0;

                for(i=1; i <= 6; i++)
                {
                    cout << "\n Digite o " << i << "� n�mero: ";
                    cin >>NumeroEscolhidoPeloUsuario;

                    if(NumeroEscolhidoPeloUsuario < 0)
                    {
                        cout << "\n   - [Error] Tente novamente! :(\n";
                    }
                    else
                    {
                        if(NumeroEscolhidoPeloUsuario % 2 == 0)
                        {
                            SomaDeNumerosPares+=NumeroEscolhidoPeloUsuario;
                            ContadorDeNumerosPares++;
                        }
                        else
                        {
                            if(NumeroEscolhidoPeloUsuario % 2 != 0)
                            {
                                SomaDeNumerosImpares+=NumeroEscolhidoPeloUsuario;
                                ContadorDeNumerosImpares++;
                            }
                        }
                    }
                }

                cout << "\n  - O usu�rio digitou ao todo " << ContadorDeNumerosPares << " n�mero(s) PAR(ES) e a soma foi igual a " << SomaDeNumerosPares << "\n";
                cout << "\n  - O us�rio digitou " << ContadorDeNumerosImpares << " n�mero(s) �MPAR(ES) e a soma foi igual a " << SomaDeNumerosImpares << "\n";

                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 3)
            {
                cout << "\n                                                     MAIORIDADE E MENORIDADE DOS USU�RIOS\n";

                ContadorDosMenoresDeIdade=0;
                ContadorDosMaioresDeIdade=0;

                for(i=1; i <= 6; i++)
                {
                    cout << "\n Digite o ano de nascimento do " << i << "� usu�rio: ";
                    cin >> AnoDeNascDoUsuario;

                    if(AnoDeNascDoUsuario < (AnoAtual - 125) || AnoDeNascDoUsuario > AnoAtual)
                    {
                        cout << "\n\n  - [Error] Tente novamente! :(\n";
                        break;
                    }
                    else
                    {
                        if((AnoAtual - AnoDeNascDoUsuario) < 19)
                        {
                            ContadorDosMenoresDeIdade++;
                        }
                        else
                        {
                            if((AnoAtual - AnoDeNascDoUsuario) >= 19)
                            {
                                ContadorDosMaioresDeIdade++;
                            }
                        }
                    }
                }

                cout << "\n\n  - Tivemos em nosso cadastro " << ContadorDosMenoresDeIdade << " usu�rio(s) menor(es) de idade e " << ContadorDosMaioresDeIdade << " usu�rio(s) j� maiores de idade!\n";

                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 4)
            {
                cout << "\n                                                         VALIDA��O DE DADOS\n";

                while((RespostadoUsuario!="M" && RespostadoUsuario!="m" && RespostadoUsuario!="Masculino" && RespostadoUsuario!="masculino" && RespostadoUsuario!="MASCULINO") && (RespostadoUsuario!="F" && RespostadoUsuario!="f" && RespostadoUsuario!="Feminino" && RespostadoUsuario!="feminino" && RespostadoUsuario!="FEMININO"))
                {
                    cout << "\n\n Digite o seu g�nero[Fem./Masc.]: ";
                    cin >> RespostadoUsuario;

                    if((RespostadoUsuario!="M" && RespostadoUsuario!="m" && RespostadoUsuario!="Masculino" && RespostadoUsuario!="masculino" && RespostadoUsuario!="MASCULINO") && (RespostadoUsuario!="F" && RespostadoUsuario!="f" && RespostadoUsuario!="Feminino" && RespostadoUsuario!="feminino" && RespostadoUsuario!="FEMININO"))
                    {
                        cout << "\n       Answer invalid! :|\n";
                    }
                }
                cout << "\n\n -    Obrigado!\n\n   - Agora o sistema conseguiu indentificar o seu g�nero! ;)\n";
                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 5)
            {
                cout << "\n                                                                 JOGO DA ADIVINHA��O\n";

                srand(time(NULL));
                NumeroAleatorio=rand() % 11;

                Contador=0;

                cout << "\nOl�, eu sou o seu computador!\n\n Eu estou pensando em um n�mero entre 0 a 10!\n";

                while(NumeroEscolhidoPeloUsuario != NumeroAleatorio)
                {
                    cout << "\n Em qual n�mero voc� acha que eu estou pensando ? ";
                    cin >> NumeroEscolhidoPeloUsuario;

                    if(NumeroEscolhidoPeloUsuario < 0)
                    {
                        cout << "\n -   Number negative invalid! :(\n\n\n";
                    }
                    else
                    {
                        if(NumeroEscolhidoPeloUsuario < NumeroAleatorio)
                        {
                            cout << "\n -   VOC� ERROU ... O n�mero que estou pensando � maior!\n\n\n";
                        }
                        else{
                            if(NumeroEscolhidoPeloUsuario > NumeroAleatorio)
                            {
                                cout << "\n -   VOC� ERROU ... O n�mero que estou pensando � menor!\n\n\n";
                            }
                        }
                    }
                    Contador+=1;
                }
                cout << "\n\n\n\n     - PARAB�NS, VOC� ACERTOU! ;)... Voc� precisou de " << Contador << " tentativas!\n";
                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 6)
            {
                cout << "\n                                                         CRIANDO UM MENU DE OP��ES\n";

                while(NumeroEscolhidoPeloUsuario != 5)
                {
                    cout << "\n Digite um n�mero: ";
                    cin >> NumeroAleatorio;
                    cout << "\n Digite outro n�mero: ";
                    cin >> OpcaoDoJogador;

                    while(NumeroEscolhidoPeloUsuario != 5)
                    {

                        cout << "\n\n Selecione apenas uma op��o entre as 5:\n\n 1) Somar    2) Multiplcar    3) Maior    4) Novos n�meros    5) Sair do programa\n\n   ";
                        cin >> NumeroEscolhidoPeloUsuario;

                        if(NumeroEscolhidoPeloUsuario < 0)
                        {
                            cout << "\n   [Error] Tente novamente! :(\n";
                        }
                        else
                        {
                            if(NumeroEscolhidoPeloUsuario == 1)
                            {
                                cout << "\n - A soma de " << NumeroAleatorio << " + " << OpcaoDoJogador << " � igual a " << NumeroAleatorio+OpcaoDoJogador << "\n";
                                cout << "\n___________________________________________________________________________________________________________________________________________\n";
                            }
                            else if(NumeroEscolhidoPeloUsuario == 2)
                            {
                                cout << "\n - A multiplica��o de " << NumeroAleatorio << " x " << OpcaoDoJogador << " � igual a " << NumeroAleatorio*OpcaoDoJogador << "\n";
                                cout << "\n___________________________________________________________________________________________________________________________________________\n";
                            }
                            else if(NumeroEscolhidoPeloUsuario == 3)
                            {
                                if(NumeroAleatorio > OpcaoDoJogador)
                                {
                                    cout << "\n - O maior n�mero � o " << NumeroAleatorio << "\n";
                                    cout << "\n___________________________________________________________________________________________________________________________________________\n";
                                }
                                else if(NumeroAleatorio == OpcaoDoJogador)
                                {
                                    cout << "\n - Os dois n�meros s�o iguais a " << OpcaoDoJogador << "\n";
                                    cout << "\n___________________________________________________________________________________________________________________________________________\n";
                                }
                                else
                                {
                                    cout << "\n - O maior n�mero � o " << OpcaoDoJogador << "\n";
                                    cout << "\n___________________________________________________________________________________________________________________________________________\n";
                                }
                            }
                            else if(NumeroEscolhidoPeloUsuario == 4)
                            {
                                cout << "\n___________________________________________________________________________________________________________________________________________\n";
                                cout << "\n Digite um novo n�mero: ";
                                cin >> NumeroAleatorio;
                                cout << "\n Digite novo n�mero: ";
                                cin >> OpcaoDoJogador;
                            }
                            else
                            {
                                if(NumeroEscolhidoPeloUsuario > 5)
                                {
                                    cout << "\n N�mero inv�lido!\n";
                                    cout << "\n___________________________________________________________________________________________________________________________________________\n";
                                }
                            }
                        }
                    }
                }
                cout << "\n   - Saindo ...\n";
                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 7)
            {
                cout << "\n                                                                 FATORIAL\n";

                cout << "\n Digite um n�mero: ";
                cin >> NumeroEscolhidoPeloUsuario;

                i=1;
                Factorial=1;

                if(NumeroEscolhidoPeloUsuario < 0)
                {
                    cout << "\n - N�o exste fatorial com n�meros negativos!\n";
                }
                else
                {
                    while(i <= NumeroEscolhidoPeloUsuario)
                    {
                        Factorial*=i;
                        ++i;
                    }
                    cout << "\n " << NumeroEscolhidoPeloUsuario << "! = " << Factorial;
                }
                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 8)
            {
                cout << "\n                                                         TRATANDO V�RIOS VALORES\n";

                SomadorDeDados=0;
                Contador=0;

                while(NumeroEscolhidoPeloUsuario != 999)
                {

                    cout << "\n Digite um n�mero: ";
                    cin >> NumeroEscolhidoPeloUsuario;

                    if(NumeroEscolhidoPeloUsuario != 999)
                    {
                        SomadorDeDados+=NumeroEscolhidoPeloUsuario;
                        Contador+=1;
                    }
                }
                cout << "\n     - O la�o se repetiu " << Contador << " vez(es) e ao todo a soma deu " << SomadorDeDados << "\n";
                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }

            else if(OpcaoDoUsuario == 9)
            {
                cout << "\n                                                               SIGNO DO USU�RIO\n";

                cout << "\nDigite o dia do nascimento do usu�rio: ";
                cin >> DiaDoNasc;
                cout << "\nDigite o m�s de nascimento do usu�rio: ";
                cin >> MesDeNasc;

                if(DiaDoNasc > 31)
                {
                    cout << "\n\n      [Error] Date invalid!\n";
                }
                else if((DiaDoNasc > 20 && (MesDeNasc == "Marco" || MesDeNasc == "marco" || MesDeNasc == "MARCO")) || (DiaDoNasc <= 20 && (MesDeNasc == "Abril" || MesDeNasc == "abril" || MesDeNasc == "ABRIL")))
                {
                    SignoDoUsuario="�ries";
                }
                else if((DiaDoNasc > 20 && (MesDeNasc == "Abril" || MesDeNasc == "abril" || MesDeNasc == "ABRIL")) || (DiaDoNasc <= 20 && (MesDeNasc == "Maio" || MesDeNasc == "maio" || MesDeNasc == "MAIO")))
                {
                    SignoDoUsuario="Touro";
                }
                else if((DiaDoNasc > 20 && (MesDeNasc == "Maio" || MesDeNasc == "maio" || MesDeNasc == "MAIO")) || (DiaDoNasc <= 20 && (MesDeNasc == "Junho" || MesDeNasc == "junho" || MesDeNasc == "JUNHO")))
                {
                    SignoDoUsuario="G�meos";
                }
                else if((DiaDoNasc > 20 && (MesDeNasc == "Junho" || MesDeNasc == "junho" || MesDeNasc == "JUNHO")) || (DiaDoNasc <= 22 && (MesDeNasc == "Julho" || MesDeNasc == "julho" || MesDeNasc == "JULHO")))
                {
                    SignoDoUsuario="C�ncer";
                }
                else if((DiaDoNasc > 22 && (MesDeNasc == "Julho" || MesDeNasc == "julho" || MesDeNasc == "JULHO")) || (DiaDoNasc <= 22 && (MesDeNasc == "Agosto" || MesDeNasc == "agosto" || MesDeNasc == "AGOSTO")))
                {
                    SignoDoUsuario="Le�o";
                }
                else if((DiaDoNasc > 22 && (MesDeNasc == "Agosto" || MesDeNasc == "agosto" || MesDeNasc == "AGOSTO")) || (DiaDoNasc <= 22 && (MesDeNasc == "Setembro" || MesDeNasc == "setembro" || MesDeNasc == "SETEMBRO")))
                {
                    SignoDoUsuario="Virgem";
                }
                else if((DiaDoNasc > 22 && (MesDeNasc == "Setembro" || MesDeNasc == "setembro" || MesDeNasc == "SETEMBRO")) || (DiaDoNasc <= 22 && (MesDeNasc == "Outubro" || MesDeNasc == "outubro" || MesDeNasc == "OUTUBRO")))
                {
                    SignoDoUsuario="Libra";
                }
                else if((DiaDoNasc > 22 && (MesDeNasc == "Outubro" || MesDeNasc == "outubro" || MesDeNasc == "OUTUBRO")) || (DiaDoNasc <= 22 && (MesDeNasc == "Novembro" || MesDeNasc == "novembro" || MesDeNasc == "NOVEMBRO")))
                {
                    SignoDoUsuario="Escorpi�o";
                }
                else if((DiaDoNasc > 22 && (MesDeNasc == "Novembro" || MesDeNasc == "novembro" || MesDeNasc == "NOVEMBRO")) || (DiaDoNasc <= 21 && (MesDeNasc == "Dezembro" || MesDeNasc == "dezembro" || MesDeNasc == "DEZEMBRO")))
                {
                    SignoDoUsuario="Sagit�rio";
                }
                else if((DiaDoNasc > 21 && (MesDeNasc == "Dezembro" || MesDeNasc == "dezembro" || MesDeNasc == "DEZEMBRO")) || (DiaDoNasc <= 20 && (MesDeNasc == "Janeiro" || MesDeNasc == "janeiro" || MesDeNasc == "JANEIRO")))
                {
                    SignoDoUsuario="Capric�rnio";
                }
                else if((DiaDoNasc > 20 && (MesDeNasc == "Janeiro" || MesDeNasc == "janeiro" || MesDeNasc == "JANEIRO")) || (DiaDoNasc <= 18 && (MesDeNasc == "Fevereiro" || MesDeNasc == "fevereiro" || MesDeNasc == "FEVEREIRO")))
                {
                    SignoDoUsuario="Aqu�rio";
                }
                else
                {
                    if((DiaDoNasc > 18 && (MesDeNasc == "Fevereiro" || MesDeNasc == "fevereiro" || MesDeNasc == "FEVEREIRO")) || (DiaDoNasc <= 20 && (MesDeNasc == "Marco" || MesDeNasc == "marco" || MesDeNasc == "MARCO")))
                    {
                        SignoDoUsuario="Peixes";
                    }
                }

                cout << "\n\n -   Esse(a) usu�rio(a) faz anivers�rio em " << DiaDoNasc << " de " << MesDeNasc << ". Portanto, ele(a) � do signo de " << SignoDoUsuario << ".\n";
                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 10)
            {
                cout << "\n                                                        AS IDADES DOS USU�RIOS(O usu�rio mais velho & usu�rio mais novo)\n";

                MaiorIdade=0;
                MenorIdade=0;

                for(i=1; i <= 5; i++)
                {
                    cout << "\nDigite a idade do " << i << "� usu�rio: ";
                    cin >> IdadeDosUsuarios;

                    if(IdadeDosUsuarios < 0)
                    {
                        cout << "\n\n     [Error] Tente novamente! :(\n";
                        break;
                    }
                    else
                    {
                        if(i == 1)
                        {
                            MaiorIdade=IdadeDosUsuarios;
                            MenorIdade=IdadeDosUsuarios;
                        }
                        else
                        {
                            if(IdadeDosUsuarios > MaiorIdade)
                            {
                                MaiorIdade=IdadeDosUsuarios;
                            }
                            else
                            {
                                if(IdadeDosUsuarios < MenorIdade)
                                {
                                    MenorIdade=IdadeDosUsuarios;
                                }
                            }
                        }
                    }
                }

                cout << "\n\n -   O usu�rio mais velho tem " << MaiorIdade << " anos e o usu�rio mais novo tem " << MenorIdade << " anos!\n";
                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }
            else
            {
                cout << "\n Option invalid!\n";

                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }

            a++;
        }

        while((AnswerOfUser!="nao" && AnswerOfUser!="Nao" && AnswerOfUser!="NAO" && AnswerOfUser!="n" && AnswerOfUser!="N") && (AnswerOfUser!="sim" && AnswerOfUser!="Sim" && AnswerOfUser!="SIM" && AnswerOfUser!="s" && AnswerOfUser!="S"))
        {
            cout << "\n\n\nDeseja continuar ? ";
            cin >> AnswerOfUser;

            if((AnswerOfUser!="nao" && AnswerOfUser!="Nao" && AnswerOfUser!="NAO" && AnswerOfUser!="n" && AnswerOfUser!="N") && (AnswerOfUser!="sim" && AnswerOfUser!="Sim" && AnswerOfUser!="SIM" && AnswerOfUser!="s" && AnswerOfUser!="S"))
            {
                cout << "\n     [Error] Answer invalid! :(\n";
            }
        }
        if((AnswerOfUser=="n" || AnswerOfUser=="N") || (AnswerOfUser=="nao" || AnswerOfUser=="NAO" || AnswerOfUser=="Nao"))
        {
            break;
        }
        system("cls");
    }
    while((AnswerOfUser=="sim" || AnswerOfUser=="Sim" || AnswerOfUser=="SIM") || (AnswerOfUser=="s" || AnswerOfUser=="S"));

    cout << "\n\n Programa executado com sucesso! ;)\n\n";


    time_t(Data);
    struct tm * local;
    char Year[20], Hours[20];

    time(&Data);
    local=localtime(&Data);

    strftime(Hours,20,"%H h %M min %S seg.",local);
    strftime(Year,20,"%d/%m/%y",local);

    cout << "\n " << Hours << " - " << Year << "\n";
}

int main()
{
	setlocale(LC_ALL,"Portuguese");

	test();

	return 0;
}
