#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <math.h>
#include <locale.h>
#include "Opcao.h"

using namespace std;

struct Titulos
{
    string Nome;
    short Dia;
    string Mes;
    short Ano;
    string Cores;
    short Inter,Mundial,Intercont,InterAme,Liberta,Sula,Recopa,Comenbol,SupercopaLib,Nacio,CampBr,CopaBr,CopaCampMun,Total;

    void insere(string $Nome,short $Dia,string $Mes,short $Ano,string $Cores,short $Inter,short $Mundial,short $Intercont,short $InterAme,short $Liberta,short $Sula,short $Recopa,short $Comenbol,short $SupercopaLib,short $Nacio,short $CampBr,short $CopaBr,short $CopaCampMun,short $Total)
    {
        Nome=$Nome;
        Dia=$Dia;
        Mes=$Mes;
        Ano=$Ano;
        Cores=$Cores;
        Inter=$Inter;
        Mundial=$Mundial;
        Intercont=$Intercont;
        InterAme=$InterAme;
        Liberta=$Liberta;
        Sula=$Sula;
        Recopa=$Recopa;
        Comenbol=$Comenbol;
        SupercopaLib=$SupercopaLib;
        Nacio=$Nacio;
        CampBr=$CampBr;
        CopaBr=$CopaBr;
        CopaCampMun=$CopaCampMun;
        Total=$Total;
    }

    void imprimir()
    {
        cout << "\nNome________________ " << Nome << "\n";
        cout << "\nFundação____________ " << Dia << " de " << Mes << " de " << Ano << "\n";
        cout << "\nCores_______________ " << Cores << "\n\n";
        cout << "\n             MUNDIAIS\n";
        cout << "\n____________________ " << Mundial << " Copa Mundo de Clubes da FIFA\n";
        cout << "\n____________________ " << Intercont << " Copa Intercontinental\n\n\n";
        cout << "\n         INTERCONTINENTAIS\n";
        cout << "\n____________________ " << InterAme << " Copa Interamericana\n\n\n";
        cout << "\n           CONTINENTAIS\n";
        cout << "\n____________________ " << Liberta << " Copa Libertadores da América\n";
        cout << "\n____________________ " << Sula << " Copa Sul-americana\n";
        cout << "\n____________________ " << Recopa << " Recopa Sul-americana\n";
        cout << "\n____________________ " << Comenbol << " Copa COMENBOL\n";
        cout << "\n____________________ " << SupercopaLib << " Supercopa da Libertadores\n\n\n";
        cout << "\n             NACIONAIS\n";
        cout << "\n____________________ " << CampBr << " campeonatos brasileiros\n";
        cout << "\n____________________ " << CopaBr << " Copa do Brasil\n";
        cout << "\n____________________ " << CopaCampMun << " Copa dos Campeões Mundiais\n\n\n";
        cout << "Nº TOTAIS DE TÍTULOS: " << Total << " Títulos\n";
        cout << "\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
    }
};

int main()
{
    setlocale(LC_ALL,"Portuguese");

    short opc,t,a,g;
    float Vo,m,So,A1,A2,v,vo,h;
    double Epg,S,d,V,E,F;
    string resp;


    do
    {
            system("cls");

            cout << "\n                                                             PROGRAMA\n";

            cout << "\n Digite um número: ";
            cin >> opc;
            system("cls");

            if (opc == 1){
                cout << "                                                           Movimento Uniforme (MU)\n";
                cout << "\nPosição inicial: ";
                cin >> So;
                cout << "\nVelocidade: ";
                cin >> V;
                cout << "\nTempo: ";
                cin >> t;

                S=So+(V*t);

                cout << "\n I) Um veiculo está a um distância de " << So << " m de sua posição final. Então, esse mesmo veiculo que antes estava em repouso, passa a se mover com uma velocidade de " << V << " m/s. Depois de " << t << " s esse veiculo chega finalmente ao sua posição final. Portanto, qual será a posição final desse veiculo ?\n\n";
                cout << "\nA posição final desse objeto será igual a " << S << " m\n";

                if(S >= 0 && S < 500)
                {
                    cout << "\n\nDistância percorrida, curta!\n";
                }
                else if(S >= 500 && S < 1000)
                {
                    cout << "\n\nDistância percorrida, moderada!\n";
                }
                else
                {
                    cout << "\n\nDistância percorrida, longa!\n";
                }
            }
            else if(opc == 2)
            {
                cout << "\n\n                                               Movimento Retílineo Uniformemente Variado(MRUV)\n";

                cout << "\nVelocidade inicial: ";
                cin >> Vo;
                cout << "\nAceleração: ";
                cin >> a;
                cout << "\nPosição: ";
                cin >> S;

                V=sqrt(Vo+(2*a*S));

                cout << "\n II) um objeto está a uma velocidade inical de " << Vo << " m/s, com uma aceleração de " << a << " m/s². Sabe-se que esse veiculo percorreu uma distância de " << S << " m. Portanto, qual será a velocidade final desse veiculo ?\n\n";
                cout << "\nA velocidade final desse será igual a " << V << " m/s\n";

                if(V >=0 && V < 11.12)
                {
                    cout << "\n\nO motorista desse veiculo será multado por velociade a baixo do permitido!\n";
                }
                else if(V >=11.12 && V <= 22.22)
                {
                    cout << "\n\nO motorista desse veiculo está dentro da velocidade permitida, portanto, ele não será multado!\n";
                }
                else
                {
                    cout << "\n\nO motorista desse veiculo será multado por velociade acima do permitido!\n";
                }
            }
            else if(opc == 3)
            {
                cout << "\n                                                         IMPULSO & QUANTIDADE DE MOVIMENTO\n";

                cout << "\nMassa: ";
                cin >> m;
                cout << "\nVelocidade inicial: ";
                cin >> vo;
                cout << "\nVelocidade final: ";
                cin >> v;
                cout << "\nTempo: ";
                cin >> t;

                F=((m*v)-(m*vo))/t;

                cout << "\n IV) Um carro de massa igual a " << m << " Kg desloca-se com velocidade igual a " << vo << " m/s. Quando o motorista acelera o veículo, passa a se movimentar com velocidade igual a " << v << " m/s. Se o tempo gasto para mudança de velocidade foi de " << t << " s, determine a força resultante que agiu sobre o veículo ?\n\n";
                cout << "\nA Força resultante que agil sobre esse veiculo foi igual a " << F << " N\n";

                if(F >= 0 && F < 12100)
                {
                    cout << "\n\nForça resultante baixa!\n";
                }
                else if(F >= 12100 && F < 25600)
                {
                    cout << "\n\nForça resultante moderada!\n";
                }
                else
                {
                    cout << "\n\nForça resultante alta!\n";
                }
            }
            else if(opc == 4)
            {
                cout << "\n                                                           ENERGIA POTENCIAL GRAVITACIONAL\n";

                cout << "\nMassa: ";
                cin >> m;
                cout << "\nGravidade: ";
                cin >> g;
                cout << "\nAltura: ";
                cin >> h;

                Epg=m*g*h;

                cout << "\n VI) Um objeto de massa " << m << " kg está a uma altura de " << h << " m cuja a gravidade é " << g << " m/s². Portanto, qual será a enegia gravitacional desse objeto ?\n\n";
                cout << "\nA energia gravitacional desse objeto será igual a " << Epg << " N\n";

                if(Epg >= 0 && Epg < 25000)
                {
                    cout << "\n\nA energia gravitacional desse objeto é baixa!\n";
                }
                else if(Epg >= 25000 && Epg < 50000)
                {
                    cout << "\n\nA energia gravitacional desse objeto é moderada!\n";
                }
                else
                {
                    cout << "\n\nA energia gravitacional desse objeto é alta!\n";
                }
            }
            else if(opc == 5)
            {
                cout << "\n                                                                      FUTEBOL I\n";

                Titulos Dados1;
                Titulos Dados2;

                Dados1.insere("Clube F.C.",31,"janeiro",1940,"Amarelo, Branco e Vermelho",15,1,3,2,4,1,2,1,1,8,6,0,2,(15+8));
                Dados1.imprimir();

                Dados2.insere("Time F.C.",5,"fevereiro",1935,"Preto e Branco",9,0,2,0,3,1,1,1,1,12,8,4,1,(9+13));
                Dados2.imprimir();
            }
            else if(opc == 6)
            {
                cout << "\n                                                                      FUTEBOL II\n";

                torres *tor1=new torres(1);
                torres *tor2=new torres(2);
                torres *tor3=new torres(3);

                tor1->imp();
                tor2->imp();
                tor3->imp();
            }
            else if(opc == 7)
            {
                cout << "\n                                                                 HIDROSTÁTICA\n";

                cout << "\nÁrea: ";
                cin >> A1;
                cout << "\nÁrea: ";
                cin >> A2;
                cout << "\nMassa: ";
                cin >> m;
                cout << "\nAceleração gravitacional: ";
                cin >> g;

                F=(m*g*A2)/A1;

                cout << "\n\n (Mackenzie-SP) Dispõe-se de uma prensa hidráulica conforme o esquema a seguir, na qual os êmbolos A e B, de pesos desprezíveis, têm áreas respectivamente iguais a " << A1 << " cm² e " << A2 << " cm². Se desejarmos equilibrar um corpo de " << m << " kg que repousa sobre o êmbolo A deveremos aplicar em B a força perpendicular F, de intensidade:\nDado: g = " << g << " m/s²\n";
                cout << "\n\nDeve-se aplicar uma força em B de intensidade de " << F << " N\n";
            }
            else
            {
                cout << "\n\nOpção inválida!\n\n";
            }
            cout << "\n__________________________________________________________________________________________________________________________________________________\n";

            do
            {
                    cout << "\n\nDeseja continuar ? ";
                    cin >> resp;
            }
            while(resp != "Nao" && resp != "nao" && resp != "Sim" && resp != "sim");

    }
    while(resp != "Nao" && resp != "nao" || resp == "Sim" && resp == "sim");


    cout << "\n\nPrograma executado com sucesso!\n\n\n\n";

    time_t z;
    struct tm * Pink;
    char big[30];
    char little[30];

    time(&z);
    Pink=localtime(&z);

    strftime(big,30,"%H h %M m %S s",Pink);
    strftime(little,30,"%d/%m/%y",Pink);

    cout << little << " - " << big << "\n";

    return 0;
}
