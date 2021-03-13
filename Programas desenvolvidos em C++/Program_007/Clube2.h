#ifndef CLUBE2_H_INCLUDED
#define CLUBE2_H_INCLUDED

class clube{

public:
    std::string nome;
    std::string cores;
    std::string fundacao;
    int inter,mundial,copaInter,copaRio,libertadores,sulAmericana,recopa,recopaInter,supercopa,supercopaSul,mercosul,copaConmenbol,masterConmenbol,nacio,campBr,copaBr,copaCam,supercopaBr,ccm,total;
    clube(int y);
    void imprimir();

private:

};

clube::clube(int y){
    if(y==1){
        nome="São Paulo F.C.";
        cores="Preto, Branco e Vermelho";
        fundacao="25 de janeiro de 1930";
        inter=12;
        mundial=1;
        copaInter=2;
        libertadores=3;
        sulAmericana=1;
        recopa=2;
        recopaInter=0;
        supercopa=1;
        supercopaSul=0;
        mercosul=0;
        copaRio=0;
        copaConmenbol=1;
        masterConmenbol=1;
        nacio=6;
        campBr=6;
        copaBr=0;
        copaCam=0;
        supercopaBr=0;
        ccm=2;
        total=inter+nacio;
    }
    else if(y==2){
        nome="Santos F.C.";
        cores="Preto e Branco";
        fundacao="14 de abril de 1912";
        inter=9;
        mundial=0;
        copaInter=2;
        libertadores=3;
        sulAmericana=0;
        recopa=1;
        recopaInter=1;
        supercopa=0;
        supercopaSul=1;
        mercosul=0;
        copaRio=0;
        copaConmenbol=1;
        masterConmenbol=0;
        nacio=9;
        campBr=8;
        copaBr=1;
        copaCam=0;
        supercopaBr=0;
        ccm=0;
        total=inter+nacio;
    }
    else if(y==3){
        nome="S.E. Palmeiras";
        cores="Verde e Branco";
        fundacao="26 de agosto de 1914";
        inter=3;
        mundial=0;
        copaInter=0;
        libertadores=1;
        sulAmericana=0;
        recopa=0;
        recopaInter=0;
        supercopa=0;
        supercopaSul=0;
        mercosul=1;
        copaRio=1;
        copaConmenbol=0;
        masterConmenbol=0;
        nacio=14;
        campBr=10;
        copaBr=3;
        copaCam=1;
        supercopaBr=0;
        ccm=0;
        total=inter+nacio;
    }
    else if(y==4){
        nome="S.C. Corinthians P.";
        cores="Preto e Branco";
        fundacao="1 de setembro de 1910";
        inter=4;
        mundial=2;
        copaInter=0;
        libertadores=1;
        sulAmericana=0;
        recopa=1;
        recopaInter=0;
        supercopa=0;
        supercopaSul=0;
        mercosul=0;
        copaRio=0;
        copaConmenbol=0;
        masterConmenbol=0;
        nacio=11;
        campBr=7;
        copaBr=3;
        copaCam=0;
        supercopaBr=1;
        ccm=0;
        total=inter+nacio;
    }
}

void clube::imprimir(){
    std::cout << "\n Nome________________: " << nome << "\n";
    std::cout << " Cores_______________: " << cores << "\n";
    std::cout << " Data da fundação____: " << fundacao << "\n\n\n";
    std::cout << " TÍTULOS MUNDIAIS\n";
    std::cout << " ____________________: " << mundial << " Copas do Mundo de Clubes da FIFA\n";
    std::cout << " ____________________: " << copaInter << " Copas Intercontinentais\n\n\n";
    std::cout << " TÍTULOS INTECONTINENTAIS\n";
    std::cout << " ____________________: " << copaRio << " Copa Rio\n";
    std::cout << " ____________________: " << recopaInter << " Recopa dos Campeões Intercontinentais\n\n\n";
    std::cout << " TÍTULOS CONTINENTAIS\n";
    std::cout << " ____________________: " << libertadores << " Copa Libertadores da América\n";
    std::cout << " ____________________: " << sulAmericana << " Copa Sul-Americana\n";
    std::cout << " ____________________: " << recopa << " Recopa Sul-Americana\n";
    std::cout << " ____________________: " << mercosul << " Copa Mercosul\n";
    std::cout << " ____________________: " << copaConmenbol << " Copa CONMEBOL\n";
    std::cout << " ____________________: " << supercopa << " Supercopa da Libertadores\n";
    std::cout << " ____________________: " << supercopaSul << " Supercopa Sul-Americana dos Campeões Intercontinentais\n";
    std::cout << " ____________________: " << masterConmenbol << " Copa Master da CONMEBOL\n\n\n";
    std::cout << " TÍTULOS NACIONAIS\n";
    std::cout << " ____________________: " << campBr << " campeonatos brasileiros\n";
    std::cout << " ____________________: " << copaBr << " Copa do Brasil\n";
    std::cout << " ____________________: " << supercopaBr << " Supercopa do Brasil\n";
    std::cout << " ____________________: " << copaCam << " Copa dos Campeões\n";
    std::cout << " ____________________: " << ccm << " Copa dos Campeões Mundiais\n\n\n";
    std::cout << " Nº TOTAIS DE TÍTULOS: " << total << " Títulos\n\n";
    std::cout << "\n\n----------------------------------------------------------------------------------------------\n\n";
}


#endif // CLUBE2_H_INCLUDED
