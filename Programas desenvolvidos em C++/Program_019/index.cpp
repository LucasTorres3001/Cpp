#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <locale.h>

using namespace std;

struct Pessoal
{
    string nam;
    double urbano;
    float rodoviario;
    double emissoes;
    short ndecil,diametro,cursordocil,deslocdomotor,potencia,potenciaII,RPMpotmax,rpm,rpmII,torquemas,velmax;
    float aceleracao,aceleracaoII,aceleracaoIII;
    double coefaerodinamico;
    short peso,pesoII,pesototal,cargamax,capdoportamala,tanquedecomb;

    void insere(string $nam,double $urbano,float $rodoviario,double $emissoes,short $ndecil,short $diametro,short $cursordocil,short $deslocdomotor,short $potencia,short $potenciaII,short $RPMpotmax,short $rpm,short $rpmII,short $torquemas,short $velmax,float $aceleracao,float $aceleracaoII,float $aceleracaoIII,double $coefaerodinamico,short $peso,short $pesoII,short $pesototal,short $cargamax,short $capdoportamala,short $tanquedecomb)
    {
        nam=$nam;
        urbano=$urbano;
        rodoviario=$rodoviario;
        emissoes=$emissoes;
        ndecil=$ndecil;
        diametro=$diametro;
        cursordocil=$cursordocil;
        deslocdomotor=$deslocdomotor;
        potencia=$potencia;
        potenciaII=$potenciaII;
        RPMpotmax=$RPMpotmax;
        rpm=$rpm;
        rpmII=$rpmII;
        torquemas=$torquemas;
        velmax=$velmax;
        aceleracao=$aceleracao;
        aceleracaoII=$aceleracaoII;
        aceleracaoIII=$aceleracaoIII;
        coefaerodinamico=$coefaerodinamico;
        peso=$peso;
        pesoII=$pesoII;
        pesototal=$pesototal;
        cargamax=$cargamax;
        capdoportamala=$capdoportamala;
        tanquedecomb=$tanquedecomb;
    }

    void imprimir()
    {
        cout << "\n                                                                       " << nam << "\n\n";
        cout << "\n      CONSUMO DE COMBUSTÍVEL / EMISSÕES\n";
        cout << "\nUrbano______________________________ " << urbano << " km/l\n";
        cout << "\nRodoviário___________________________ " << rodoviario << " km/l\n";
        cout << "\nEmissões de CO2______________________ " << emissoes << "\n\n\n";
        cout << "\n                   MOTOR\n";
        cout << "\nNº de cilindros_______________________ " << ndecil << "\n";
        cout << "\nDiâmetro___________________________ " << diametro << " mm\n";
        cout << "\nCursor do cilindro____________________ " << cursordocil << " mm\n";
        cout << "\nDeslocamento do motor______________ " << deslocdomotor << " cm³\n";
        cout << "\nPotência (kW)______________________ " << potencia << " kW\n";
        cout << "\nPotência (cv)_______________________ " << potenciaII << " PS\n";
        cout << "\nRPM potência máxima_______________ " << RPMpotmax << " r/min.\n";
        cout << "\n@rpm_____________________________ " << rpm << " - " << rpmII << " r/min.\n";
        cout << "\nTorque Mas.________________________ " << torquemas << " Nm\n\n\n";
        cout << "\n              PERFORMANCE\n";
        cout << "\nVelocidade máxima__________________ " << velmax << " km/h\n";
        cout << "\nAceleração de 0 - 100 km/h____________ " << aceleracao << " s\n";
        cout << "\nAceleração de 0 - 160 km/h____________ " << aceleracaoII << " s\n";
        cout << "\nAceleração de em marcha (80 - 120 km/h) " << aceleracaoIII << " s\n\n\n";
        cout << "\n                  CARROCERIA\n";
        cout << "\nCoeficiente aerodinâmico (Cd)__________ " << coefaerodinamico << " cW\n";
        cout << "\nPeso(DIN)___________________________ " << peso << " kg\n";
        cout << "\nPeso(EG)____________________________ " << pesoII << " kg\n";
        cout << "\nPeso total permissivel_________________ " << pesototal << " kg\n";
        cout << "\nCarga máxima_______________________ " << cargamax << " kg\n\n\n";
        cout << "\n                  CAPACIDADE\n";
        cout << "\nCapacidade do porta-malas____________ " << capdoportamala << " l\n";
        cout << "\nTanque de combustível________________ " << tanquedecomb << " l\n";
    }
};

int formulario()
{
    char sexo[10],etnia[8];
    short idade,num,opcao,n,i,g;
    int senha,senhaI;
    float m;
    double h,imc,epg;
    string nome,nomeI,resp,sobrenome,sobrenomeI,resp1;

    do
    {
            system("cls");

            cout << "\n                                                                                    PROGRAMA 4\n";

            cout << "\nDigite um número: ";
            cin >> num;

            system("cls");

            if(num == 1)
            {
                cout << "\n                                                                               DADOS PESSOAIS\n";

                cout << "\nDigite seu nome: ";
                cin >> nome;
                cout << "\nDigite seu sobrenome: ";
                cin >> sobrenome;
                cout << "\nDigite seu sexo(Masc./Fem.): ";
                cin >> sexo;
                cout << "\nDigite sua etnia: ";
                cin >> etnia;
                cout << "\nDigite sua idade: ";
                cin >> idade;
                cout << "\nDigite sua altura: ";
                cin >> h;
                cout << "\nDigite sua massa: ";
                cin >> m;

                imc=m/(h*h);

                cout << "\n\n Olá!\n\n  O meu nome é " << nome << " " << sobrenome << ", sou do sexo " << sexo << ", tenho " << idade << " anos, sou " << etnia << ", tenho " << m << " kg e minha altura é de " << h << " m.\n\n";

                cout << "\n " << nome << ", seu IMC é de " << imc << " kg/m²\n";

                if(imc >= 0 && imc < 16.9)
                {
                    cout << "\n\nVocê está muito abaixo do peso!\n";

                    do
                    {
                        cout << "\nVocê está satisfeito com o seu peso ? ";
                        cin >> resp1;
                    }
                    while(resp1!="Nao" && resp1!="nao" && resp1!="Sim" && resp1!="sim");

                    cout << "\nObrigado! Sua resposta foi computada com sucesso!\n";
                }
                else if(imc >= 16.9 && imc < 18.5)
                {
                    cout << "\n\nVocê está abaixo do peso!\n";

                    do
                    {
                        cout << "\nVocê está satisfeito com o seu peso ? ";
                        cin >> resp1;
                    }
                    while(resp1!="Nao" && resp1!="nao" && resp1!="Sim" && resp1!="sim");

                    cout << "\nObrigado! Sua resposta foi computada com sucesso!\n";
                }
                else if(imc >= 18.5 && imc < 25){
                    cout << "\n\nVocê está com o peso normal!\n";

                    do{
                        cout << "\nVocê está satisfeito com o seu peso ? ";
                        cin >> resp1;
                    }
                    while(resp1!="Nao" && resp1!="nao" && resp1!="Sim" && resp1!="sim");

                    cout << "\nObrigado! Sua resposta foi computada com sucesso!\n";
                }
                else if(imc >= 25 && imc < 30){
                    cout << "\n\nVocê está com sobrepeso!\n";

                    do{
                        cout << "\nVocê está satisfeito com o seu peso ? ";
                        cin >> resp1;
                    }
                    while(resp1!="Nao" && resp1!="nao" && resp1!="Sim" && resp1!="sim");

                    cout << "\nObrigado! Sua resposta foi computada com sucesso!\n";
                }
                else if(imc >= 30 && imc < 35){
                    cout << "\n\nVocê está com Obesidade grau I\n";

                    do{
                        cout << "\nVocê está satisfeito com o seu peso ? ";
                        cin >> resp1;
                    }
                    while(resp1!="Nao" && resp1!="nao" && resp1!="Sim" && resp1!="sim");

                    cout << "\nObrigado! Sua resposta foi computada com sucesso!\n";
                }
                else if(imc >= 35 && imc < 40){
                    cout << "\n\nVocê está com Obesidade grau II\n";

                    do{
                        cout << "\nVocê está satisfeito com o seu peso ? ";
                        cin >> resp1;
                    }
                    while(resp1!="Nao" && resp1!="nao" && resp1!="Sim" && resp1!="sim");

                    cout << "\nObrigado! Sua resposta foi computada com sucesso!\n";
                }
                else{
                    cout << "\n\nVocê está com Obesidade grau III\n";

                    do{
                        cout << "\nVocê está satisfeito com o seu peso ? ";
                        cin >> resp1;
                    }
                    while(resp1!="Nao" && resp1!="nao" && resp1!="Sim" && resp1!="sim");

                    cout << "\nObrigado! Sua resposta foi computada com sucesso!\n";
                }
            }
            else if(num == 2){
                cout << "\n                                                                           INFORME OS SEGUINTES DADOS\n";

                cout << "\nDigite seu nome: ";
                cin >> nomeI;
                cout << "\nDigite seu sobrenome: ";
                cin >> sobrenomeI;
                cout << "\nDigite sua senha: ";
                cin >> senhaI;
                cout << "\n__________________________________________________________________________________________________________________________________________________\n";
                cout << "\nConfirme seu nome: ";
                cin >> nome;
                cout << "\nConfirme seu sobrenome: ";
                cin >> sobrenome;
                cout << "\nConfirme sua senha: ";
                cin >> senha;

                if(nome == nomeI && sobrenome == sobrenomeI && senha == senhaI){
                    cout << "\n\nSaindo ...\n";
                    break;
                }
                else{
                    cout << "\n\nSenha ou nome inválidos! :(\n";
                }
            }
            else if(num == 3){
                cout << "\n                                                                              Comando SWITCH\n";

                cout << "\n\n Escolha uma das seguintes opções\n";
                cout << "\nI) Chongqing            II) Xangai            III) Mumbai           IV) Carachi            V)  Istambul          VI) Moscou              VII) Pequim\n";
                cin >> opcao;

                switch(opcao){
                    case 1:
                    case 2:
                        cout << "\nEssa cidade fica localizada no território chinês!\n";
                        switch(opcao){
                            case 1:
                                cout << "\n\nVocê selecionou a cidade de Chongqing!\n";
                            break;
                            case 2:
                                cout << "\n\nVocê selecionou a cidade de Xangai!\n";
                            break;
                            }
                        break;
                    case 3:
                        cout << "\nEssa cidade fica localizada no território indiano!\n";
                        switch(opcao){
                            case 3:
                                cout << "\n\nVocê selecionou a cidade de Mumbai!\n";
                            break;
                            }
                        break;
                    case 4:
                        cout << "\nEssa cidade fica localizada no território paquistanês!\n";
                        switch(opcao){
                            case 4:
                                cout << "\n\nVocê selecionou a cidade de Carachi!\n";
                            break;
                            }
                        break;
                    case 5:
                        cout << "\nEssa cidade fica localizada no território turco!\n";
                        switch(opcao){
                            case 5:
                                cout << "\n\nVocê selecionou a cidade de Istambul!\n";
                            break;
                            }
                        break;
                    case 6:
                        cout << "\nEssa cidade fica localizada no território russo!\n";
                        switch(opcao){
                            case 6:
                                cout << "\n\nVocê selecionou a cidade de Moscou!\n";
                            break;
                            }
                        break;
                    case 7:
                        cout << "\n\nEssa cidade fica localizada no território chinês!\n";
                        switch(opcao){
                            case 7:
                                cout << "\n\nVocê selecionou a cidade de Pequim!\n";
                            break;
                            }
                        break;
                    default:
                        cout << "\nOpção inválida! :(\n";
                    break;
                }
            }
            else if(num == 4){
                cout << "\n                                                                                                   TABUADA\n";

                cout << "\nDigite um número: ";
                cin >> n;

                for(i=1;i<=10;i++){
                    cout << "\n\n" << n << " X " << i << " = " << n*i ;
                }
            }
            else if(num == 5)
            {
                Pessoal Pes;

                Pes.insere("PORSCHE 718 BOXTER",9.05,12.2,132.59,4,91,76,1988,220,300,6500,1950,4500,380,275,4.9,11.1,3.2,0.31,1365,1440,1685,320,125,54);

                Pes.imprimir();
            }
            else if(num == 6){
                    cout << "\n                                                                                 FUNÇÃO LÂMBDA\n";

                    cout << "\nDigite a massa: ";
                    cin >> m;
                    cout << "\nDigite a aceleração gravitacional: ";
                    cin >> g;
                    cout << "\nDigite a altura: ";
                    cin >> h;

                    epg=m*g*h;

                    auto fisica=[=]()->double{
                        return epg;
                    };

                    cout << "\n\nA energia potencial gravitacional é de " << fisica() << " J\n";
            }
            else if(num == 7){
                cout << "\n                                                                     FUNÇÃO LÂMBDA c/ IF, ELSE IF E ELSE\n";

                cout << "\nDigite um comparador: ";
                cin >> n;
                cout << "\nDigite outro comparador: ";
                cin >> opcao;

                auto maior=[=]()->int{

                    if(n > opcao){
                        cout << "\n\nO maior número é ";
                        return n;
                    }
                    else if(n == opcao){
                        cout << "\n\nOs dois números são iguais a ";
                        return n,opcao;
                    }
                    else{
                        cout << "\n\nO maior número é ";
                        return opcao;
                    }
                };

                cout << maior() << "\n";
            }
            else{
                cout << "\nOpção inválida! :(\n";
            }
            cout << "\n_____________________________________________________________________________________________________________________________________________________________\n";

            do
            {
                cout << "\nDeseja continuar ? ";
                cin >> resp;
            }
            while(resp!="Nao" && resp!="nao" && resp!="Sim" && resp!="sim");
    }
    while(resp!="Nao" && resp!="nao" || resp=="Sim" && resp=="sim");

    cout << "\n\nPrograma executado com sucesso! ;)\n\n\n";

    time_t on;
    struct tm * locke;
    char battery[22],memory[22];

    time(&on);
    locke=localtime(&on);

    strftime(battery,22,"%H h %M m %S s",locke);
    strftime(memory,22,"%d/%m/%y ",locke);

    cout << memory << " - " << battery << "\n";
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    formulario();

    return 0;
}
