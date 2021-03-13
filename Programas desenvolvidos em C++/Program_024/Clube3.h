#ifndef CLUBE3_H_INCLUDED
#define CLUBE3_H_INCLUDED

class time{

public:
    std::string nome;
    std::string fundacao;
    int internacionais;
    int MundialFIFA;
    int CopaInter;
    int CopaRio;
    int InterAmer;
    int Libertadores;
    int SulAmericana;
    int Recopa;
    int Supercopa;
    int CopaConmebol;
    int MasterConmebol;
    int nacionais;
    int CampBr;
    int CopaBr;
    int SupercopaBr;
    int CopaCampMun;
    int total;
    time(int club);
    void imprimir();

private:
};

time::time(int club){
    if(club==1){
        nome="Clube F.C.";
        fundacao="1 de fevereiro de 1906";
        internacionais=4;
        MundialFIFA=1;
        CopaInter=0;
        CopaRio=1;
        InterAmer=0;
        Libertadores=1;
        SulAmericana=0;
        Recopa=1;
        Supercopa=0;
        CopaConmebol=0;
        MasterConmebol=0;
        nacionais=20;
        CampBr=15;
        CopaBr=4;
        SupercopaBr=1;
        CopaCampMun=0;
        total=internacionais+nacionais;
    }
    if(club==2){
        nome="Time F.C.";
        fundacao="25 de janeiro de 1940";
        internacionais=16;
        MundialFIFA=1;
        CopaInter=3;
        CopaRio=0;
        InterAmer=2;
        Libertadores=4;
        SulAmericana=1;
        Recopa=2;
        Supercopa=1;
        CopaConmebol=1;
        MasterConmebol=1;
        nacionais=9;
        CampBr=7;
        CopaBr=2;
        SupercopaBr=0;
        CopaCampMun=2;
        total=internacionais+nacionais;
    }
}

void time::imprimir(){
    std::cout << "\n Nome_______________: " << nome << "\n";
    std::cout << " Fundação___________: " << fundacao << "\n\n\n";
    std::cout << " MUNDIAIS\n";
    std::cout << " ___________________: " << MundialFIFA << " Copa do Mundo de Clubes da FIFA\n";
    std::cout << " ___________________: " << CopaInter << " Copa Intercontinental\n\n\n";
    std::cout << " INTERCONTINENTAIS\n";
    std::cout << " ___________________: " << CopaRio << " Copa Rio\n";
    std::cout << " ___________________: " << InterAmer << " Copa Interamericana\n\n\n";
    std::cout << " CONTINENTAIS\n";
    std::cout << " ___________________: " << Libertadores << " Copa Libertadores da América\n";
    std::cout << " ___________________: " << SulAmericana << " Copa Sul-americana\n";
    std::cout << " ___________________: " << Recopa << " Recopa Sul-americana\n";
    std::cout << " ___________________: " << Supercopa << " Supercopa da Libertadores\n";
    std::cout << " ___________________: " << CopaConmebol << " Copa CONMEBOL\n";
    std::cout << " ___________________: " << MasterConmebol << " Copa Master da CONMEBOL\n\n\n";
    std::cout << " NACIONAIS\n";
    std::cout << " ___________________: " << CampBr << " campeonatos brasileiros\n";
    std::cout << " ___________________: " << CopaBr << " Copa do Brasil\n";
    std::cout << " ___________________: " << SupercopaBr << " Supercopa do Brasil\n";
    std::cout << " ___________________: " << CopaCampMun << " Copa dos Campeões Mundiais\n\n";
    std::cout << " Nº TOTAL DE TÍTULOS: " << total << " Títulos\n\n";
    std::cout << "\n\n------------------------------------------------------------------------------\n\n";
}



#endif // CLUBE3_H_INCLUDED
