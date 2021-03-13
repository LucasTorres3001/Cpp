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

            cout << "\n\nDigite um número qualquer: ";
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

                cout << "\nOpções de jogadas\n\n 0) Papel   1) Pedra    2) Tesoura\n\n Selecione apenas uma opção: ";
                cin >> OpcaoDoJogador;

                cout << "\n___________________________________________________________________________________________________________________________________________\n";
                cout << "\n JO\n\n KEN\n\n PO!!!\n";
                cout << "\n___________________________________________________________________________________________________________________________________________\n";


                if(NumeroAleatorio == 0)
                { //------------------------------------------------------------------ * PAPEL * ------------------------------------------------------------------
                    if(OpcaoDoJogador == 0)
                    { //Papel
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e você jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n EMPATOU!\n";
                    }
                    else if(OpcaoDoJogador == 1)
                    { //Pedra
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e você jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n EU GANHEI!\n";
                    }
                    else if(OpcaoDoJogador == 2)
                    { //Tesoura
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e você jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n PARABÉNS, VOCÊ GANHOU!\n";
                    }
                    else
                    {
                        cout << "\n Opção de jogo, inválida!\n";
                    }
                }
                else if(NumeroAleatorio == 1)
                { //------------------------------------------------------------------ * PEDRA * ------------------------------------------------------------------
                    if(OpcaoDoJogador == 0)
                    { //Papel
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e você jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n PARABÉNS, VOCE GANHOU!\n";
                    }
                    else if(OpcaoDoJogador == 1)
                    {//Pedra
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e você jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n EMPATOU!\n";
                    }
                    else if(OpcaoDoJogador == 2)
                    {//Tesoura
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e você jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n EU GANHEI!\n";
                    }
                    else
                    {
                        cout << "\n Opção de jogo, inválida!\n";
                    }
                }
                else if(NumeroAleatorio == 2)
                { //----------------------------------------------------------------- * TESOURA * -----------------------------------------------------------------
                    if(OpcaoDoJogador == 0)
                    { //Papel
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e você jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n EU GANHEI!\n";
                    }
                    else if(OpcaoDoJogador == 1)
                    { //Pedra
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e você jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n PARABÉNS, VOCÊ GANHOU!\n";
                    }
                    else if(OpcaoDoJogador == 2)
                    { //Tesoura
                        cout << "\n   -   O P.C. jogou " << Opcao[NumeroAleatorio] << " e você jogou " << Opcao[OpcaoDoJogador] << "\n";
                        cout << "\n EMPATOU!\n";
                    }
                    else
                    {
                        cout << "\n Opção de jogo, inválida!\n";
                    }
                }
                else
                {
                    cout << "\n Opção de jogo, inválida!\n";
                }

                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 2)
            {
                cout << "\n                                                          QUANTIDADE DE NÚMEROS PARES & ÍMPARES E SOMA\n";

                ContadorDeNumerosPares=0;
                ContadorDeNumerosImpares=0;
                SomaDeNumerosPares=0;
                SomaDeNumerosImpares=0;

                for(i=1; i <= 6; i++)
                {
                    cout << "\n Digite o " << i << "º número: ";
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

                cout << "\n  - O usuário digitou ao todo " << ContadorDeNumerosPares << " número(s) PAR(ES) e a soma foi igual a " << SomaDeNumerosPares << "\n";
                cout << "\n  - O usário digitou " << ContadorDeNumerosImpares << " número(s) ÍMPAR(ES) e a soma foi igual a " << SomaDeNumerosImpares << "\n";

                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 3)
            {
                cout << "\n                                                     MAIORIDADE E MENORIDADE DOS USUÁRIOS\n";

                ContadorDosMenoresDeIdade=0;
                ContadorDosMaioresDeIdade=0;

                for(i=1; i <= 6; i++)
                {
                    cout << "\n Digite o ano de nascimento do " << i << "º usuário: ";
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

                cout << "\n\n  - Tivemos em nosso cadastro " << ContadorDosMenoresDeIdade << " usuário(s) menor(es) de idade e " << ContadorDosMaioresDeIdade << " usuário(s) já maiores de idade!\n";

                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 4)
            {
                cout << "\n                                                         VALIDAÇÃO DE DADOS\n";

                while((RespostadoUsuario!="M" && RespostadoUsuario!="m" && RespostadoUsuario!="Masculino" && RespostadoUsuario!="masculino" && RespostadoUsuario!="MASCULINO") && (RespostadoUsuario!="F" && RespostadoUsuario!="f" && RespostadoUsuario!="Feminino" && RespostadoUsuario!="feminino" && RespostadoUsuario!="FEMININO"))
                {
                    cout << "\n\n Digite o seu gênero[Fem./Masc.]: ";
                    cin >> RespostadoUsuario;

                    if((RespostadoUsuario!="M" && RespostadoUsuario!="m" && RespostadoUsuario!="Masculino" && RespostadoUsuario!="masculino" && RespostadoUsuario!="MASCULINO") && (RespostadoUsuario!="F" && RespostadoUsuario!="f" && RespostadoUsuario!="Feminino" && RespostadoUsuario!="feminino" && RespostadoUsuario!="FEMININO"))
                    {
                        cout << "\n       Answer invalid! :|\n";
                    }
                }
                cout << "\n\n -    Obrigado!\n\n   - Agora o sistema conseguiu indentificar o seu gênero! ;)\n";
                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 5)
            {
                cout << "\n                                                                 JOGO DA ADIVINHAÇÃO\n";

                srand(time(NULL));
                NumeroAleatorio=rand() % 11;

                Contador=0;

                cout << "\nOlá, eu sou o seu computador!\n\n Eu estou pensando em um número entre 0 a 10!\n";

                while(NumeroEscolhidoPeloUsuario != NumeroAleatorio)
                {
                    cout << "\n Em qual número você acha que eu estou pensando ? ";
                    cin >> NumeroEscolhidoPeloUsuario;

                    if(NumeroEscolhidoPeloUsuario < 0)
                    {
                        cout << "\n -   Number negative invalid! :(\n\n\n";
                    }
                    else
                    {
                        if(NumeroEscolhidoPeloUsuario < NumeroAleatorio)
                        {
                            cout << "\n -   VOCÊ ERROU ... O número que estou pensando é maior!\n\n\n";
                        }
                        else{
                            if(NumeroEscolhidoPeloUsuario > NumeroAleatorio)
                            {
                                cout << "\n -   VOCÊ ERROU ... O número que estou pensando é menor!\n\n\n";
                            }
                        }
                    }
                    Contador+=1;
                }
                cout << "\n\n\n\n     - PARABÉNS, VOCÊ ACERTOU! ;)... Você precisou de " << Contador << " tentativas!\n";
                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 6)
            {
                cout << "\n                                                         CRIANDO UM MENU DE OPÇÕES\n";

                while(NumeroEscolhidoPeloUsuario != 5)
                {
                    cout << "\n Digite um número: ";
                    cin >> NumeroAleatorio;
                    cout << "\n Digite outro número: ";
                    cin >> OpcaoDoJogador;

                    while(NumeroEscolhidoPeloUsuario != 5)
                    {

                        cout << "\n\n Selecione apenas uma opção entre as 5:\n\n 1) Somar    2) Multiplcar    3) Maior    4) Novos números    5) Sair do programa\n\n   ";
                        cin >> NumeroEscolhidoPeloUsuario;

                        if(NumeroEscolhidoPeloUsuario < 0)
                        {
                            cout << "\n   [Error] Tente novamente! :(\n";
                        }
                        else
                        {
                            if(NumeroEscolhidoPeloUsuario == 1)
                            {
                                cout << "\n - A soma de " << NumeroAleatorio << " + " << OpcaoDoJogador << " é igual a " << NumeroAleatorio+OpcaoDoJogador << "\n";
                                cout << "\n___________________________________________________________________________________________________________________________________________\n";
                            }
                            else if(NumeroEscolhidoPeloUsuario == 2)
                            {
                                cout << "\n - A multiplicação de " << NumeroAleatorio << " x " << OpcaoDoJogador << " é igual a " << NumeroAleatorio*OpcaoDoJogador << "\n";
                                cout << "\n___________________________________________________________________________________________________________________________________________\n";
                            }
                            else if(NumeroEscolhidoPeloUsuario == 3)
                            {
                                if(NumeroAleatorio > OpcaoDoJogador)
                                {
                                    cout << "\n - O maior número é o " << NumeroAleatorio << "\n";
                                    cout << "\n___________________________________________________________________________________________________________________________________________\n";
                                }
                                else if(NumeroAleatorio == OpcaoDoJogador)
                                {
                                    cout << "\n - Os dois números são iguais a " << OpcaoDoJogador << "\n";
                                    cout << "\n___________________________________________________________________________________________________________________________________________\n";
                                }
                                else
                                {
                                    cout << "\n - O maior número é o " << OpcaoDoJogador << "\n";
                                    cout << "\n___________________________________________________________________________________________________________________________________________\n";
                                }
                            }
                            else if(NumeroEscolhidoPeloUsuario == 4)
                            {
                                cout << "\n___________________________________________________________________________________________________________________________________________\n";
                                cout << "\n Digite um novo número: ";
                                cin >> NumeroAleatorio;
                                cout << "\n Digite novo número: ";
                                cin >> OpcaoDoJogador;
                            }
                            else
                            {
                                if(NumeroEscolhidoPeloUsuario > 5)
                                {
                                    cout << "\n Número inválido!\n";
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

                cout << "\n Digite um número: ";
                cin >> NumeroEscolhidoPeloUsuario;

                i=1;
                Factorial=1;

                if(NumeroEscolhidoPeloUsuario < 0)
                {
                    cout << "\n - Não exste fatorial com números negativos!\n";
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
                cout << "\n                                                         TRATANDO VÁRIOS VALORES\n";

                SomadorDeDados=0;
                Contador=0;

                while(NumeroEscolhidoPeloUsuario != 999)
                {

                    cout << "\n Digite um número: ";
                    cin >> NumeroEscolhidoPeloUsuario;

                    if(NumeroEscolhidoPeloUsuario != 999)
                    {
                        SomadorDeDados+=NumeroEscolhidoPeloUsuario;
                        Contador+=1;
                    }
                }
                cout << "\n     - O laço se repetiu " << Contador << " vez(es) e ao todo a soma deu " << SomadorDeDados << "\n";
                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }

            else if(OpcaoDoUsuario == 9)
            {
                cout << "\n                                                               SIGNO DO USUÁRIO\n";

                cout << "\nDigite o dia do nascimento do usuário: ";
                cin >> DiaDoNasc;
                cout << "\nDigite o mês de nascimento do usuário: ";
                cin >> MesDeNasc;

                if(DiaDoNasc > 31)
                {
                    cout << "\n\n      [Error] Date invalid!\n";
                }
                else if((DiaDoNasc > 20 && (MesDeNasc == "Marco" || MesDeNasc == "marco" || MesDeNasc == "MARCO")) || (DiaDoNasc <= 20 && (MesDeNasc == "Abril" || MesDeNasc == "abril" || MesDeNasc == "ABRIL")))
                {
                    SignoDoUsuario="Àries";
                }
                else if((DiaDoNasc > 20 && (MesDeNasc == "Abril" || MesDeNasc == "abril" || MesDeNasc == "ABRIL")) || (DiaDoNasc <= 20 && (MesDeNasc == "Maio" || MesDeNasc == "maio" || MesDeNasc == "MAIO")))
                {
                    SignoDoUsuario="Touro";
                }
                else if((DiaDoNasc > 20 && (MesDeNasc == "Maio" || MesDeNasc == "maio" || MesDeNasc == "MAIO")) || (DiaDoNasc <= 20 && (MesDeNasc == "Junho" || MesDeNasc == "junho" || MesDeNasc == "JUNHO")))
                {
                    SignoDoUsuario="Gêmeos";
                }
                else if((DiaDoNasc > 20 && (MesDeNasc == "Junho" || MesDeNasc == "junho" || MesDeNasc == "JUNHO")) || (DiaDoNasc <= 22 && (MesDeNasc == "Julho" || MesDeNasc == "julho" || MesDeNasc == "JULHO")))
                {
                    SignoDoUsuario="Câncer";
                }
                else if((DiaDoNasc > 22 && (MesDeNasc == "Julho" || MesDeNasc == "julho" || MesDeNasc == "JULHO")) || (DiaDoNasc <= 22 && (MesDeNasc == "Agosto" || MesDeNasc == "agosto" || MesDeNasc == "AGOSTO")))
                {
                    SignoDoUsuario="Leão";
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
                    SignoDoUsuario="Escorpião";
                }
                else if((DiaDoNasc > 22 && (MesDeNasc == "Novembro" || MesDeNasc == "novembro" || MesDeNasc == "NOVEMBRO")) || (DiaDoNasc <= 21 && (MesDeNasc == "Dezembro" || MesDeNasc == "dezembro" || MesDeNasc == "DEZEMBRO")))
                {
                    SignoDoUsuario="Sagitário";
                }
                else if((DiaDoNasc > 21 && (MesDeNasc == "Dezembro" || MesDeNasc == "dezembro" || MesDeNasc == "DEZEMBRO")) || (DiaDoNasc <= 20 && (MesDeNasc == "Janeiro" || MesDeNasc == "janeiro" || MesDeNasc == "JANEIRO")))
                {
                    SignoDoUsuario="Capricórnio";
                }
                else if((DiaDoNasc > 20 && (MesDeNasc == "Janeiro" || MesDeNasc == "janeiro" || MesDeNasc == "JANEIRO")) || (DiaDoNasc <= 18 && (MesDeNasc == "Fevereiro" || MesDeNasc == "fevereiro" || MesDeNasc == "FEVEREIRO")))
                {
                    SignoDoUsuario="Aquário";
                }
                else
                {
                    if((DiaDoNasc > 18 && (MesDeNasc == "Fevereiro" || MesDeNasc == "fevereiro" || MesDeNasc == "FEVEREIRO")) || (DiaDoNasc <= 20 && (MesDeNasc == "Marco" || MesDeNasc == "marco" || MesDeNasc == "MARCO")))
                    {
                        SignoDoUsuario="Peixes";
                    }
                }

                cout << "\n\n -   Esse(a) usuário(a) faz aniversário em " << DiaDoNasc << " de " << MesDeNasc << ". Portanto, ele(a) é do signo de " << SignoDoUsuario << ".\n";
                cout << "\n___________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 10)
            {
                cout << "\n                                                        AS IDADES DOS USUÁRIOS(O usuário mais velho & usuário mais novo)\n";

                MaiorIdade=0;
                MenorIdade=0;

                for(i=1; i <= 5; i++)
                {
                    cout << "\nDigite a idade do " << i << "º usuário: ";
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

                cout << "\n\n -   O usuário mais velho tem " << MaiorIdade << " anos e o usuário mais novo tem " << MenorIdade << " anos!\n";
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
