#include <iostream>
#include <ctime>
#include <locale.h>
#include <math.h>

using namespace std;

int programs()
{
    short ard,t,i,m,num,deltaTi,deltaTo,n1;
    float Vo,So,b,y,z,j,v,c,a;
    double S,V,Q;
    string res;


    do
    {
        system("cls");

        cout << "\n                                                              PROGRAMA (de outras formas)\n";

        cout << "\nDigite um n�mero: ";
        cin >> num;

        system("cls");

        if(num == 1)
        {
            cout << "\n                                                          FUN��O HOR�RIA DO MUV(Movimento Uniformente Variado)\n";

            cout << "\nPosi��o inicial: ";
            cin >> So;
            cout << "\nVelocidade escalar: ";
            cin >> Vo;
            cout << "\nTempo: ";
            cin >> t;
            cout << "\nAcelera��o: ";
            cin >> a;

            S=So+(Vo*t)+(a*(t*t)/2);

            cout << "\n\n Suponhamos que um autom�vel tenha saido da posi��o " << So << " m com velocidade escalar inicial de " << Vo << " m/s, acelerando a " << a << " m/s� constante. Qual ser� dist�ncia percorrida nos " << t << " s:\n";
            cout << "\n\nA dist�ncia percorrida ser� de " << S << " m\n";

            if(S >=0 && S < 900)
            {
                cout << "\n\nA dist�ncia percorrida por esse autom�vel foi curta!!\n";
            }
            else if(S >= 900 && S < 1800)
            {
                cout << "\n\nA dist�ncia percorrida por esse autom�vel foi moderada!!\n";
            }
            else if(S >= 1800 && S < 2700)
            {
                cout << "\n\nA dist�ncia percorrida por esse autom�vel foi longa!!\n";
            }
            else{
                cout << "\n\nA dist�ncia percorrida por esse autom�vel foi para l� de bagda!!\n";
            }
        }
        else if(num == 2)
        {
            cout << "\n                                                     HIDRODIN�MICA\n";

            cout << "\nVolume: ";
            cin >> v;
            cout << "\nTempo: ";
            cin >> t;

            V=v/t;

            cout << "\n\n No entamboramento de um determinado produto s�o utilizado tambores de " << v << " l. Para encher um tambor levam-se " << t << " min. Calcule:\n\n A vaz�o da tubula��o utilizada para encher os tambores.\n";
            cout << "\n\nResposta: " << V << " l/min.\n";
        }
        else if(num == 3)
        {
            cout << "\n                                                         TERMOLOGIA\n";

            cout << "\nMassa: ";
            cin >> m;
            cout << "\nCalor espec�fico: ";
            cin >> c;
            cout << "\nTemperatura inicial: ";
            cin >> deltaTi;
            cout << "\nTemperatura final: ";
            cin >> deltaTo;

            Q=(m*c*(deltaTo-deltaTi))/1000;

            b=(m+c)*(deltaTo/deltaTi)/1000;
            j=(m-c)+(deltaTo/deltaTi)/1000;
            y=(deltaTo*m)-(deltaTi*c)/1000;
            z=(deltaTo*c)/(deltaTi+m)/1000;

            cout << "\n\n Em uma panela foram colocados " << m << " g de �gua em temperatura ambiente (" << deltaTi << " �C). Ao ser aquecida, sua temperatura passa para " << deltaTo << " �C. Considerando que o calor espec�fico da �gua � de " << c << " cal/g �C, calcule a quantidade de calor recebida pela �gua para atingir essa temperatura\n";
            cout << "\n\n 1) " << j << " kcal                2) " << Q << " kcal                 3) " << b << " kcal                4) " << y << " kcal             5) " << z << " kcal\n";
            cin >> ard;

            switch(ard)
            {
                case 1:
                    cout << "\n\nAlternativa incorreta! :(\n";
                break;
                case 2:
                    cout << "\n\nParab�ns! Alternativa correta! :)\n";
                break;
                case 3:
                    cout << "\n\nAlternativa incorreta! :(\n";
                break;
                case 4:
                    cout << "\n\nAlternativa incorreta! :(\n";
                break;
                case 5:
                    cout << "\n\nAlternativa incorreta! :(\n";
                break;
                default:
                    cout << "\n\nAlternativa inv�lida! :(\n";
                break;
            }
        }
        else if(num == 4)
        {
            cout << "\n                                            TABUADA\n";

            cout << "\nDigite um n�mero: ";
            cin >> n1;

            for(i=1;i<=10;i++)
            {
                cout << "\n" << n1 << " X " << i << " = " << n1*i << "\n";
            }
        }
        else
        {
            cout << "\nN�o tem op��o para o n�mero " << num << " :(\n";
        }
        cout << "\n______________________________________________________________________________________________________________________________________________________________\n";

        do
        {
            cout << "\nDeseja continuar? ";
            cin >> res;

            if(((res!="n" && res!="N") && (res!="Nao" && res!="nao" && res!="NAO")) && ((res!="s" && res!="S") && (res!="Sim" && res!="sim" && res!="SIM")))
            {
                cout << "\n     [Error] Answer invalid! :(\n";
            }
        }
        while(((res!="n" && res!="N") && (res!="Nao" && res!="nao" && res!="NAO")) && ((res!="s" && res!="S") && (res!="Sim" && res!="sim" && res!="SIM")));

        if((res=="n" || res=="N") || (res=="Nao" || res=="nao" || res=="NAO"))
        {
            break;
        }
    }
    while((res=="s" || res=="S") || (res=="Sim" || res=="sim" || res=="SIM"));

    cout << "\n\nSaindo ...;) _\|/_\n\n\n";

    time_t n;
    struct tm * tchonga;
    char colco[20],user[25];

    time(&n);
    tchonga=localtime(&n);

    strftime(colco,20,"%H h %M m %S s",tchonga);
    strftime(user,25,"%d/%m/%y ",tchonga);

    cout << user << " - " << colco << "\n";
}

int main()
{
	setlocale(LC_ALL,"Portuguese");

	programs();

	return 0;
}
