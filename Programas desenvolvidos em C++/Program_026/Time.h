#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class equipe{

public:
    std::string nome;
    int dia;
    std::string mes;
    int ano;
    std::string cores;
    int inter, mundial, intercont, Copario, interamericana, libertadores, Sulamericana, copaConmebol, supercopaLi, Recopa, nacio, campBr, copaBr, supercopaBr, copacampmun, total;
    equipe(int e);
    void imprimir();

private:
};

equipe::equipe(int e){
    if(e == 1){
        nome="Equipe F.C.";
        dia=25;
        mes="janeiro";
        ano=1942;
        cores="Preto, Branco e Vermelho";
        inter=15;
        mundial=1;
        intercont=3;
        Copario=0;
        interamericana=2;
        libertadores=4;
        Sulamericana=1;
        copaConmebol=1;
        supercopaLi=1;
        Recopa=2;
        nacio=6;
        campBr=5;
        copaBr=1;
        supercopaBr=0;
        copacampmun=2;
        total=inter+nacio;
    }
    else if(e == 2){
        nome="S.C. Equipe P.";
        dia=28;
        mes="janeiro";
        ano=1905;
        cores="Preto e Branco";
        inter=5;
        mundial=1;
        intercont=0;
        Copario=1;
        interamericana=0;
        libertadores=2;
        Sulamericana=0;
        copaConmebol=0;
        supercopaLi=0;
        Recopa=1;
        nacio=20;
        campBr=16;
        copaBr=3;
        supercopaBr=1;
        copacampmun=0;
        total=inter+nacio;
    }
}

void equipe::imprimir(){
    std::cout << "\n Nome________________: " << nome << "\n";
    std::cout << "\n Fundação____________: " << dia << " de " << mes << " de " << ano << "\n";
    std::cout << "\n Cores_______________: " << cores << "\n\n\n";
    std::cout << "\n MUNDIAIS\n";
    std::cout << "\n ____________________: " << mundial << " Copa do Mundo de Clubes da FIFA\n";
    std::cout << "\n ____________________: " << intercont << " Copa Intercontinental\n\n\n";
    std::cout << "\n INTERCONTINENTAIS\n";
    std::cout << "\n ____________________: " << Copario << " Copa Rio\n";
    std::cout << "\n ____________________: " << interamericana << " Copa Interamericana\n\n\n";
    std::cout << "\n CONTINENTAIS\n";
    std::cout << "\n ____________________: " << libertadores << " Copa Libertadores da América\n";
    std::cout << "\n ____________________: " << Sulamericana << " Copa Sul-Americana\n";
    std::cout << "\n ____________________: " << Recopa << " Recopa Sul-Americana\n";
    std::cout << "\n ____________________: " << copaConmebol << " Copa Conmebol\n";
    std::cout << "\n ____________________: " << supercopaLi << " Supercopa da Libertadores\n\n\n";
    std::cout << "\n NACIONAIS\n";
    std::cout << "\n ____________________: " << campBr << " campeonato brasileiro\n";
    std::cout << "\n ____________________: " << copaBr << " Copa do Brasil\n";
    std::cout << "\n ____________________: " << supercopaBr << " Supercopa do Brasil\n";
    std::cout << "\n ____________________: " << copacampmun << " Copa dos Campeões Mundiais\n\n\n";
    std::cout << "\n Nº de títulos totais: " << total << " Títulos\n";
    std::cout << "\n----------------------------------------------------------\n";
}


#endif // TIME_H_INCLUDED
