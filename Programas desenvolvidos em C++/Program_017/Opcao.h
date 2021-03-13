#ifndef OPCAO_H_INCLUDED
#define OPCAO_H_INCLUDED


class torres{

public:
    std::string name;
    int day;
    std::string mes;
    int year;
    std::string color;
    int internacional,mund,interCont,cpRio,interAm,Recpinter,libertadores,sulamericana,mercosul,Recp,cpComenbol,supercpLib,SSC,nac,campBR,cpBR,supercopaBr,cpcampMun,tt;
    torres(int a);
    void imp();
private:
};

torres::torres(int a){
    if(a == 1){
        name="Clube F.C.";
        day=25;
        mes="janeiro";
        year=1942;
        color="Preto, Branco e Vermelho";
        internacional=15;
        mund=1;
        interCont=3;
        cpRio=0;
        interAm=2;
        Recpinter=0;
        libertadores=4;
        sulamericana=1;
        mercosul=0;
        Recp=2;
        cpComenbol=1;
        supercpLib=1;
        SSC=0;
        nac=8;
        campBR=7;
        cpBR=1;
        supercopaBr=0;
        cpcampMun=2;
        tt=internacional+nac;
    }
    else if(a == 2){
        name="Equipe F.C.";
        day=26;
        mes="jeneiro";
        year=1910;
        color="Preto e Branco";
        internacional=10;
        mund=0;
        interCont=2;
        cpRio=0;
        interAm=0;
        Recpinter=1;
        libertadores=4;
        sulamericana=0;
        mercosul=0;
        Recp=1;
        cpComenbol=1;
        supercpLib=0;
        SSC=1;
        nac=13;
        campBR=11;
        cpBR=2;
        supercopaBr=0;
        cpcampMun=0;
        tt=internacional+nac;
    }
    else if(a == 3){
        name="S.E. Time";
        day=16;
        mes="fevereiro";
        year=1906;
        color="Verde e Branco";
        internacional=3;
        mund=0;
        interCont=0;
        cpRio=1;
        interAm=0;
        Recpinter=0;
        libertadores=1;
        sulamericana=0;
        mercosul=1;
        Recp=0;
        cpComenbol=0;
        supercpLib=0;
        SSC=0;
        nac=19;
        campBR=14;
        cpBR=4;
        supercopaBr=1;
        cpcampMun=0;
        tt=internacional+nac;
    }
}

void torres::imp(){
    std::cout << "\nNome________: " << name << "\n";
    std::cout << "\nFundação____: " << day << " de " << mes << " de " << year << "\n";
    std::cout << "\nCores_______: " << color << "\n\n\n";
    std::cout << "\n                    MUNDIAIS\n";
    std::cout << "\n_____________ " << mund << " Copa do Mundo de Clubes da FIFA\n";
    std::cout << "\n_____________ " << interCont << " Copa Intercontinental\n\n\n";
    std::cout << "\n                INTERCONTINENTAIS\n";
    std::cout << "\n_____________ " << cpRio << " Copa Rio\n";
    std::cout << "\n_____________ " << interAm << " Copa Interamericana\n";
    std::cout << "\n_____________ " << Recpinter << " Recopa Intercontinental\n\n\n";
    std::cout << "\n                  CONTINENTAIS\n";
    std::cout << "\n_____________ " << libertadores << " Copa Libertadores de América\n";
    std::cout << "\n_____________ " << sulamericana << " Copa Sul-americana\n";
    std::cout << "\n_____________ " << mercosul << " Copa Mercosul\n";
    std::cout << "\n_____________ " << Recp << " Recopa Sul-americana\n";
    std::cout << "\n_____________ " << cpComenbol << " Copa COMENBOL\n";
    std::cout << "\n_____________ " << supercpLib << " Supercopa da Libertadores\n";
    std::cout << "\n_____________ " << SSC << " Supercopa Sul-Americana dos Campeões Intercontinentais\n\n\n";
    std::cout << "\n                    NACIONAIS\n";
    std::cout << "\n_____________ " << campBR << " campeonatos brasileiros\n";
    std::cout << "\n_____________ " << cpBR << " Copa do Brasil\n";
    std::cout << "\n_____________ " << supercopaBr << " Supercopa do Brasil\n";
    std::cout << "\n_____________ " << cpcampMun << " Copa dos Campeões Mundiais\n\n\n";
    std::cout << "\nNº TOTAIS DE TÍTULOS: " << tt << " Títulos\n";
    std::cout << "\n________________________________________________________________________________\n";
}


#endif // OPCAO_H_INCLUDED
