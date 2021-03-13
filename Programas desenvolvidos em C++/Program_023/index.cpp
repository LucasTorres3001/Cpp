#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <locale>
#include <ctime>

using namespace std;

int test()
{
    string NomeDoUsuario,RespostaDoUsuario,SobrenomeDoUsuario;
    short a,AlistamentoMilitar,AlternativaSelecionadaPeloUsuario,AnoAtual,AnoDeNascimentoDoUsuario,ContadorDeNumerosImpares,ContadorDeNumerosPares,DiaDoNascimentoDoUsuario,i,OpcaoDoUsuario;
    short NumeroEscolhidoAleatoriamentePeloUsuario,NumeroEscolhidoAleatoriamentePeloUsuario2,PrimeiroSegmento,SegundoSegmento,SomaDosNumerosPares,SomaDosNumerosImpares,TerceiroSegmento;
    short UsuariosMaioresDeIdade,UsuariosMenoresDeIdade,ValorDaDiariaDoAluguel,VelocidadeDoVeiculo;
    float PesoDoUsuario,TemperaturaNoMomento;
    char EtniaDoUsuario[10],MesDeNascimentoDoUsuario[10],NomeDoUsuario1[10],GeneroSexualDoUsuario[10],SobrenomeDoUsuario1[10];
    double AlturaDaParede,AlturaDoUsuario,ConversorDeMoeda,IMCdoUsuario,LarguraDaParede,RAdoAluno,RAdoAluno1,SenhaDoUsuario,SenhaDoUsuario1,VariacaoDoEspaco;
    AnoAtual = 2021;

    do
    {
        cout << "\n                                                                 PROGRAMA\n";

        i=0;

        while(i <= 3)
        {
            cout << "\n\n\nDigite um n�mero qualquer: ";
            cin >> OpcaoDoUsuario;

            system("cls");

            if(OpcaoDoUsuario == 1)
            {
                cout << "\n                                             �ndice de Massa Corporal(IMC)\n";

                cout << "\n Digite seu nome: ";
                cin >> NomeDoUsuario;
                cout << "\n Digite seu sobrenome: ";
                cin >> SobrenomeDoUsuario;
                cout << "\n Digite o dia do seu nascimento: ";
                cin >> DiaDoNascimentoDoUsuario;
                cout << "\n Digite o m�s do seu nascimento: ";
                cin >> MesDeNascimentoDoUsuario;
                cout << "\n Digite o ano do seu nascimento: ";
                cin >> AnoDeNascimentoDoUsuario;
                cout << "\n Digite seu genero: ";
                cin >> GeneroSexualDoUsuario;
                cout << "\n Digite sua etnia: ";
                cin >> EtniaDoUsuario;
                cout << "\n Digite sua altura: ";
                cin >> AlturaDoUsuario;
                cout << "\n Digite sua massa: ";
                cin >> PesoDoUsuario;

                IMCdoUsuario=PesoDoUsuario/(AlturaDoUsuario*AlturaDoUsuario);

                cout << "\n\n Ol�!\n\n  O meu nome � " << NomeDoUsuario << " " << SobrenomeDoUsuario << ", nasci em " << DiaDoNascimentoDoUsuario << " de " << MesDeNascimentoDoUsuario << " de " << AnoDeNascimentoDoUsuario << ", sou do sexo " << GeneroSexualDoUsuario << ", sou " << EtniaDoUsuario << ", tenho uma massa de " << PesoDoUsuario << " kg e " << AlturaDoUsuario << " m de altura.\n";
                cout << "\n  Ol�, " << NomeDoUsuario << ", o seu IMC � de " << IMCdoUsuario << " kg/m�\n";

                if((DiaDoNascimentoDoUsuario < 0) || (AnoDeNascimentoDoUsuario < (AnoAtual - 125)) || (AnoDeNascimentoDoUsuario > AnoAtual) || (AlturaDoUsuario < 0) || (PesoDoUsuario < 0))
                {
                    cout << "\n\n   [Error] Tente novamente! :(\n";
                }
                else
                {
                    if(IMCdoUsuario >= 0 && IMCdoUsuario < 17)
                    {
                        cout << "\n\n Voc� est� muito abaixo de peso!\n";
                    }
                    else if(IMCdoUsuario >= 17 && IMCdoUsuario < 18.5)
                    {
                        cout << "\n\n Voc� est� abaixo do peso!\n";
                    }
                    else if(IMCdoUsuario >= 18.5 && IMCdoUsuario < 25)
                    {
                        cout << "\n\n Voc� est� com o peso normal!\n";
                    }
                    else if(IMCdoUsuario >= 25 && IMCdoUsuario < 30)
                    {
                        cout << "\n\n Voc� est� com sobrepeso!\n";
                    }
                    else if(IMCdoUsuario >= 30 && IMCdoUsuario < 35)
                    {
                        cout << "\n\n Voc� est� com Obesidade grau I!\n";
                    }
                    else if(IMCdoUsuario >= 35 && IMCdoUsuario < 40)
                    {
                        cout << "\n\n Voc� est� com Obesidade grau II!\n";
                    }
                    else
                    {
                        if(IMCdoUsuario >= 40)
                        {
                            cout << "\n\n Voc� est� com Obesidade grau III!\n";
                        }
                    }
                }
                cout << "\n________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 2)
            {
                cout << "\n                                                 CONFIRMA��O DE DADOS\n";

                cout << "\n Digite seu nome: ";
                cin >> NomeDoUsuario1;
                cout << "\n Digite seu sobrenome: ";
                cin >> SobrenomeDoUsuario1;
                cout << "\n Digite o seu RA: ";
                cin >> RAdoAluno1;
                cout << "\n Digite uma senha: ";
                cin >> SenhaDoUsuario1;
                system("cls");
                cout << "\n                                                 CONFIRMA��O DE DADOS\n";

                cout << "\n Confirme seu nome: ";
                cin >> NomeDoUsuario;
                cout << "\n Confirme seu sobrenome: ";
                cin >> SobrenomeDoUsuario;
                cout << "\n Confirme o seu RA: ";
                cin >> RAdoAluno;
                cout << "\n Confirme sua senha: ";
                cin >> SenhaDoUsuario;

                if((SenhaDoUsuario <= 0 || SenhaDoUsuario1 <= 0) || (RAdoAluno1 <= 0 || RAdoAluno <= 0))
                {
                    cout << "\n     Number nagative invalid! :(\n";
                }
                else
                {
                    if((NomeDoUsuario == NomeDoUsuario1 && SobrenomeDoUsuario == SobrenomeDoUsuario1) && (RAdoAluno == RAdoAluno1 && SenhaDoUsuario == SenhaDoUsuario1))
                    {
                        cout << "\n Saindo ...\n";
                        break;
                    }
                    else
                    {
                        cout << "\n\nSenha, nome, sobrenome ou RA inv�lido! :(\n";
                    }
                }
                cout << "\n________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 3)
            {
                cout << "\n                                                     EXERCICIO\n";

                cout << "\nSelecione apenas uma das seguintes alternativas:\n";
                cout << "\n 1) Impulso e Qntd. de Movimento  2) M.R.U.V.  3) Fisiologia  4) Ecologia  5) Termoqu�mica  6) Estequiometria\n";
                cin >> AlternativaSelecionadaPeloUsuario;

                switch(AlternativaSelecionadaPeloUsuario)
                {
                    case 1:
                    case 2:
                        cout << "\n Mat�ria de F�sica\n";
                        switch(AlternativaSelecionadaPeloUsuario)
                        {
                            case 1:
                                cout << "\n Voc� selecionou 'Impulso e Quantidade de Movimento'\n";
                            break;
                            case 2:
                                cout << "\n Voc� selecionou 'Movimento Retil�neo Uniformemente Variado'\n";
                            break;
                        }
                        break;
                    case 3:
                    case 4:
                        cout << "\n Mat�ria de Biologia\n";
                        switch(AlternativaSelecionadaPeloUsuario)
                        {
                            case 3:
                                cout << "\n Voc� selecionou 'Fisiologia'\n";
                            break;
                            case 4:
                                cout << "\n Voc� selecionou 'Ecologia'\n";
                            break;
                        }
                        break;
                    case 5:
                    case 6:
                        cout << "\n Mat�ria de Qu�mica\n";
                        switch(AlternativaSelecionadaPeloUsuario)
                        {
                            case 5:
                                cout << "\n Voc� selecionou 'Termoqu�mica'\n";
                            break;
                            case 6:
                                cout << "\n Voc� selecionou 'Estequiometria'\n";
                            break;
                         }
                         break;
                    default:
                         cout << "\n Opcao inv�lida!\n\n";
                    break;
                }
                cout << "\n________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 4)
            {
                cout << "\n                                                        TABUADA\n";

                cout << "\n Digite um n�mero: ";
                cin >> NumeroEscolhidoAleatoriamentePeloUsuario;

                for(a=1; a <= 10; a++)
                {
                    cout << "\n" << NumeroEscolhidoAleatoriamentePeloUsuario << " X " << a << " = " << NumeroEscolhidoAleatoriamentePeloUsuario*a << "\n";
                }
                cout << "\n________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 5)
            {
                cout << "\n                                     FUN��O L�MBDA c/ comandos IF, ELSE IF e ELSE\n";

                cout << "\n Digite um n�mero: ";
                cin >> NumeroEscolhidoAleatoriamentePeloUsuario;
                cout << "\n Digite outro n�mero: ";
                cin >> NumeroEscolhidoAleatoriamentePeloUsuario2;

                auto maior=[=]()->short
                {

                    if(NumeroEscolhidoAleatoriamentePeloUsuario > NumeroEscolhidoAleatoriamentePeloUsuario2)
                    {
                        cout << "\n\nO maior n�mero � ";
                        return NumeroEscolhidoAleatoriamentePeloUsuario;
                    }
                    else if(NumeroEscolhidoAleatoriamentePeloUsuario == NumeroEscolhidoAleatoriamentePeloUsuario2)
                    {
                        cout << "\n\nOs dois n�meros s�o iguais a ";
                        return NumeroEscolhidoAleatoriamentePeloUsuario;
                    }
                    else
                    {
                        cout << "\n\nO maior n�mero � ";
                        return NumeroEscolhidoAleatoriamentePeloUsuario2;
                    }
                };
                cout << maior() << "\n";

                cout << "\n________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 6)
            {
                cout << "\n                                               VELOCIDADE DO VE�CULO & VALOR DA MULTA\n";

                cout << "\n Digite a velocidade do ve�culo: ";
                cin >> VelocidadeDoVeiculo;

                if(VelocidadeDoVeiculo < 0)
                {
                    cout << "\n - [Error] Tente novamente! :(\n";
                }
                else
                {
                    if(VelocidadeDoVeiculo >= 0 && VelocidadeDoVeiculo <= 80)
                    {
                        cout << "\n - O motorista desse ve�culo est� h� uma velocidade de " << VelocidadeDoVeiculo << " km/h, velocidade\ndentro do limite permitido. Portanto, ele n�o ser� multado.";
                    }
                    else
                    {
                        if(VelocidadeDoVeiculo > 80)
                        {
                            cout << "\n - O motorista desse ve�culo est� h� uma velocidade de " << VelocidadeDoVeiculo << " km/h, velocidade\nacima do limite permitido. Portanto, ele ser� multado no valor de R$" << ((VelocidadeDoVeiculo-80)*7) << " reais.";
                        }
                    }
                }
                cout << "\n________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 7)
            {
                cout << "\n                                               CONVERSOR DE MOEDA\n";

                cout << "\n Digite um valor em reais que voc� queira converter para d�lares: R$ ";
                cin >> ConversorDeMoeda;

                if(ConversorDeMoeda < 0)
                {
                    cout << "\n - [Error] Tente novamente! :(\n";
                }
                else
                {
                    if(ConversorDeMoeda >= 0)
                    {
                        cout << "\n - R$" << ConversorDeMoeda << " reais equivalem a US$" << ((ConversorDeMoeda/544)*100) << "\n";
                    }
                }
                cout << "\n________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 8)
            {
                cout << "\n                                                CONVERSOR DE TEMPERATURA\n";

                cout << "\n Digite o valor da temperatura em �C: ";
                cin >> TemperaturaNoMomento;

                cout << "\n - " << TemperaturaNoMomento << "�C equivale a " << ((TemperaturaNoMomento*18)/10)+32 << " F\n";

                cout << "\n_______________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 9)
            {
                cout << "\n                                                 PINTANDO A PAREDE\n";

                cout << "\n Digite a largura da parede: ";
                cin >> LarguraDaParede;
                cout << "\n Digite a altura da parede: ";
                cin >> AlturaDaParede;

                cout << "\n - As medidas dessa parede � " << AlturaDaParede << " m de altura, " << LarguraDaParede << " m de largura e �rea de " << (AlturaDaParede*LarguraDaParede) << " m�.\nPortanto, para pintar essa parede vai ser preciso de " << ((AlturaDaParede*LarguraDaParede)/2) << " l de tinta.";

                cout << "\n_______________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 10)
            {
                cout << "\n                                             VALOR DA VIAGEM E O ALUGUEL DO VE�CULO\n";

                cout << "\n Quantos km o motorista percorreu durante a viagem ? ";
                cin >> VariacaoDoEspaco;
                cout << "\n Quantos dias o ve�culo foi alugado ? ";
                cin >> ValorDaDiariaDoAluguel;

                if(VariacaoDoEspaco < 0)
                {
                    cout << "\n\n    [Error] Tente novamente!\n";
                }
                else
                {
                    if(VariacaoDoEspaco >= 0)
                    {
                        cout << "\n\n - O motorista alugou esse ve�culo por " << ValorDaDiariaDoAluguel << " dias e a dist�ncia percorrida por ele foi de " << VariacaoDoEspaco << " km. Portanto, o motorista ter� que\n  pegar R$ " << (ValorDaDiariaDoAluguel*60) << " reais de aluguel e mais R$ " << (VariacaoDoEspaco*15)/100 << " reais pela dist�ncia percorrida durante a viagem.\n";
                    }
                }

                cout << "\n_______________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 11)
            {
                cout << "\n                                                   ALISTAMENTO MILITAR\n";
                cout << "\n Digite seu ano de nascimento: ";
                cin >> AlistamentoMilitar;

                if(AlistamentoMilitar < (AnoAtual - 125) || AlistamentoMilitar > AnoAtual)
                {
                    cout << "\n     [Error] Tente novamente!\n";
                }
                else
                {
                    cout << "\n     Voc� atualmente est� com " << (AnoAtual - AlistamentoMilitar) << " anos de idade!\n";

                    if((AnoAtual - AlistamentoMilitar) < 18)
                    {
                        cout << "\n     Ainda faltam " << (18-(AnoAtual - AlistamentoMilitar)) << " ano(s) para voc� ir se alistar! ...\n     Voc� s� poder� ir se alistar no ano de " << (AlistamentoMilitar+18) << "\n";
                    }
                    else if((AnoAtual - AlistamentoMilitar) == 18)
                    {
                        cout << "\n     J� est� na hora de voc� ir se alistar!\n";
                    }
                    else
                    {
                        if((AnoAtual - AlistamentoMilitar) > 18)
                        {
                            cout << "\n     J� se passaram " << ((AnoAtual - AlistamentoMilitar)-18) << " ano(s) para voc� ter ido se alistar! ...\n     Era para voc� ter ido se alistar no ano de " << (AlistamentoMilitar+18) << "\n";
                        }
                    }
                }
                cout << "\n________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 12)
            {
                cout << "\n                                                         O N�mero � PAR ou �MPAR\n";

                cout << "\n Digite um n�mero qualquer: ";
                cin >> NumeroEscolhidoAleatoriamentePeloUsuario;

                if(NumeroEscolhidoAleatoriamentePeloUsuario < 0)
                {
                    cout << "\n\n    [Error] Tente novamente! :(\n";
                }
                else
                {
                    if(NumeroEscolhidoAleatoriamentePeloUsuario % 2 == 0)
                    {
                        cout << "\n\n   O n�mero digitado � PAR!\n";
                    }
                    else
                    {
                        if(NumeroEscolhidoAleatoriamentePeloUsuario % 2 != 0)
                        {
                            cout << "\n\n   O n�mero digitado � �MPAR!\n";
                        }
                    }
                }
                cout << "\n_______________________________________________________________________________________________________________________________________________\n";

            }
            else if(OpcaoDoUsuario == 13)
            {
                cout << "\n                                                       ANALISANDO TRI�NGULOS\n";

                cout << "\n Digite o tamanho da primeira aresta: ";
                cin >> PrimeiroSegmento;
                cout << "\n Digite o tamanho da segunda aresta: ";
                cin >> SegundoSegmento;
                cout << "\n Digite o tamanho da terceira aresta: ";
                cin >> TerceiroSegmento;

                if(PrimeiroSegmento <= 0 || SegundoSegmento <= 0 || TerceiroSegmento <= 0)
                {
                    cout << "\n\n    [Error] Tente novamente! :(\n";
                }
                else
                {
                    if(PrimeiroSegmento == SegundoSegmento && SegundoSegmento == TerceiroSegmento)
                    {
                        cout << "\n\n     As seguintes arestas formam um tri�ngulo EQUIL�TERO!\n";
                    }
                    else if((PrimeiroSegmento < (SegundoSegmento+TerceiroSegmento) && (SegundoSegmento == TerceiroSegmento)) || (SegundoSegmento < (PrimeiroSegmento+TerceiroSegmento) && (PrimeiroSegmento == TerceiroSegmento)) || (TerceiroSegmento < (PrimeiroSegmento+SegundoSegmento) && (PrimeiroSegmento == SegundoSegmento)))
                    {
                        cout << "\n\n     As seguintes arestas formam um tri�ngulo IS�SCELES!\n";
                    }
                    else if(PrimeiroSegmento < (SegundoSegmento+TerceiroSegmento) && SegundoSegmento < (PrimeiroSegmento+TerceiroSegmento) && TerceiroSegmento < (PrimeiroSegmento+SegundoSegmento))
                    {
                        cout << "\n\n     As seguintes arestas formam um tri�ngulo ESCALENO!\n";
                    }
                    else
                    {
                        cout << "\n\n     As seguintes arestas n�o formam um tri�ngulo!\n";
                    }
                }
                cout << "\n_______________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 14)
            {
                cout << "\n                                                             MAIORIDADE E MENORIDADE DOS USU�RIOS\n";

                UsuariosMaioresDeIdade=0;
                UsuariosMenoresDeIdade=0;

                for(a=1; a <= 8; a++)
                {
                    cout << "\n Digite o ano de nascimento do " << a << "� usu�rio cadastrado: ";
                    cin >> AnoDeNascimentoDoUsuario;

                    if(AnoDeNascimentoDoUsuario < (AnoAtual - 125) || AnoDeNascimentoDoUsuario > AnoAtual)
                    {
                        cout << "\n\n    [Error] Tente novamente! :(\n";
                        break;
                    }
                    else
                    {
                        if((AnoAtual - AnoDeNascimentoDoUsuario) < 21)
                        {
                            UsuariosMenoresDeIdade+=1;
                        }
                        else
                        {
                            if((AnoAtual - AnoDeNascimentoDoUsuario) >= 21)
                            {
                                UsuariosMaioresDeIdade+=1;
                            }
                        }
                    }
                }
                cout << "\n\n  - " << UsuariosMenoresDeIdade << " usu�rio(s) s�o menor(es) de idade!\n";
                cout << "\n\n  - " << UsuariosMaioresDeIdade << " usu�rio(s) j� s�o maior(es) de idade!\n";

                cout << "\n_______________________________________________________________________________________________________________________________________________\n";
            }
            else if(OpcaoDoUsuario == 15)
            {
                cout << "\n                                                         SOMA DOS N�MEROS PARES e �MPARES\n";

                SomaDosNumerosPares=0;
                ContadorDeNumerosPares=0;
                SomaDosNumerosImpares=0;
                ContadorDeNumerosImpares=0;

                for(a=1; a <= 7; a++)
                {
                    cout << "\n Digite o " << a << "� um n�mero: ";
                    cin >> NumeroEscolhidoAleatoriamentePeloUsuario;

                    if(NumeroEscolhidoAleatoriamentePeloUsuario < 0)
                    {
                        cout << "\n     [Error] Tente novamente! :(\n";
                        break;
                    }
                    else
                    {
                        if(NumeroEscolhidoAleatoriamentePeloUsuario % 2 == 0)
                        {
                            SomaDosNumerosPares+=NumeroEscolhidoAleatoriamentePeloUsuario;
                            ContadorDeNumerosPares+=1;
                        }
                        else
                        {
                            if(NumeroEscolhidoAleatoriamentePeloUsuario % 2 != 0)
                            {
                                SomaDosNumerosImpares+=NumeroEscolhidoAleatoriamentePeloUsuario;
                                ContadorDeNumerosImpares+=1;
                            }
                        }
                    }
                }
                cout << "\n  -  O usu�rio digitou " << ContadorDeNumerosPares << " n�mero(s) PAR(ES) e sua soma deu " << SomaDosNumerosPares << "\n";
                cout << "\n  -  O usu�rio tamb�m digitou " << ContadorDeNumerosImpares << " n�mero(s) �MPAR(ES) e sua soma deu " << SomaDosNumerosImpares << "\n";

                cout << "\n_______________________________________________________________________________________________________________________________________________\n";
            }
            else
            {
                cout << "\nOpcao inv�lida!\n";

                cout << "\n_______________________________________________________________________________________________________________________________________________\n";
            }

            i++;
        }

        while(((RespostaDoUsuario!="n" && RespostaDoUsuario!="N") && RespostaDoUsuario!="Nao" && RespostaDoUsuario!="nao" && RespostaDoUsuario!="NAO") && ((RespostaDoUsuario!="s" && RespostaDoUsuario!="S") && (RespostaDoUsuario!="Sim" && RespostaDoUsuario!="sim" && RespostaDoUsuario!="SIM")))
        {
            cout << "\n\n\nDeseja continuar? ";
            cin >> RespostaDoUsuario;

            if(((RespostaDoUsuario!="n" && RespostaDoUsuario!="N") && (RespostaDoUsuario!="Nao" && RespostaDoUsuario!="nao" && RespostaDoUsuario!="NAO")) && ((RespostaDoUsuario!="s" && RespostaDoUsuario!="S") && (RespostaDoUsuario!="Sim" && RespostaDoUsuario!="sim" && RespostaDoUsuario!="SIM")))
            {
                cout << "\n Resposta inv�lida!\n\n\n";
            }
        }
        if((RespostaDoUsuario=="n" || RespostaDoUsuario=="N") || (RespostaDoUsuario=="nao" || RespostaDoUsuario=="NAO" || RespostaDoUsuario=="Nao"))
        {
            break;
        }
    }
    while((RespostaDoUsuario=="s" || RespostaDoUsuario=="S") || (RespostaDoUsuario=="Sim" || RespostaDoUsuario=="sim" || RespostaDoUsuario=="SIM"));

    cout << "\n\nPrograma executado com sucesso! :)\n\n\n";

    time_t zoi;
    struct tm * loanding;
    char flan[25],pudim[20];

    time(&zoi);
    loanding=localtime(&zoi);

    strftime(flan,25,"%H h %M min %S seg",loanding);
    strftime(pudim,25,"%d/%m/%y",loanding);

    cout << flan << " - " << pudim << "\n";

}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    test();

    return 0;
}
