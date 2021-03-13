#ifndef CARRO_H_INCLUDED
#define CARRO_H_INCLUDED

class automovel{

public:
    int cilindros,peso,Valvulas,cilindradas;
    double pesoPotencia,pesoTorque;
    float rotacao;
    double diamCil,Cdospis;
    int potenciaMax,potenciaMax2;
    double torqueMax;
    int torqueMax2;
    double torqueEsp,potenciaEsp;
    float torqueComb;
    int cambio;
    float capdaBat;
    int cargaUtil,tanqCombust,portaMala,velMax;
    float Aceleracao;
    double areaFront;
    std::string preco;
    std::string nome;
    automovel(int a);
    void imprimir();

private:

};

automovel::automovel(int a){
    if( a==1){
        nome="Ferrari F355 F1 3.5 V8";
        cilindros=8;
        Valvulas=4;
        cilindradas=3495;
        pesoPotencia=3.5;
        pesoTorque=36.5;
        diamCil=85;
        Cdospis=77;
        potenciaMax=381;
        potenciaMax2=8250;
        torqueMax=37;
        torqueMax2=6000;
        torqueEsp=10.6;
        potenciaEsp=109;
        cambio=6;
        cargaUtil=232;
        tanqCombust=88;
        portaMala=220;
        peso=1350;
        velMax=295;
        Aceleracao=4.8;
        preco="271.267,00";
    }
    else if(a==2){
        nome="Lamborghini Gallardo LP 560-4 5.2 V10";
        cilindros=10;
        Valvulas=4;
        cilindradas=5204;
        pesoPotencia=2.7;
        pesoTorque=27.2;
        diamCil=84.5;
        Cdospis=92.8;
        potenciaMax=560;
        potenciaMax2=8000;
        torqueMax=55.1;
        torqueMax2=6500;
        torqueEsp=10.6;
        potenciaEsp=107.6;
        cambio=6;
        cargaUtil=300;
        tanqCombust=90;
        portaMala=110;
        peso=1500;
        velMax=325;
        Aceleracao=3.7;
        preco="738.087,00";
    }
    else if(a==3){
        nome="Porsche Boxster 2.0";
        cilindros=4;
        Valvulas=4;
        cilindradas=1988;
        pesoPotencia=4.6;
        pesoTorque=35.3;
        rotacao=7500;
        diamCil=91;
        Cdospis=76.4;
        potenciaMax=300;
        potenciaMax2=6500;
        torqueMax=38.7;
        torqueMax2=1950;
        torqueEsp=19.5;
        potenciaEsp=150.9;
        cambio=7;
        cargaUtil=320;
        tanqCombust=54;
        portaMala=275;
        peso=1365;
        velMax=275;
        Aceleracao=4.9;
        preco="355.000,00";
    }
}


void automovel::imprimir(){
    std::cout << "Nome do veiculo________: " << nome << "\n\n";
    std::cout << "MOTOR\n";
    std::cout << "Cilindros______________: " << cilindros << " opostos horizontalmente\n";
    std::cout << "Válvulas por cilindro__: " << Valvulas << "\n";
    std::cout << "Cilindrada_____________: " << cilindradas << " cm³\n";
    std::cout << "Peso/Potência__________: " << pesoPotencia << " kg/cv\n";
    std::cout << "Peso/Torque____________: " << pesoTorque << " kg/kgfm\n";
    std::cout << "Rotação máxima_________: " << rotacao << " rpm\n";
    std::cout << "Diâmetro dos cilindros_: " << diamCil << " mm\n";
    std::cout << "Curso dos pistões______: " << Cdospis << " mm\n";
    std::cout << "Potência máxima________: " << potenciaMax << " cv a " << potenciaMax2 << " rpm\n";
    std::cout << "Torque máximo__________: " << torqueMax << " kgfm a " << torqueMax2 << " rpm\n";
    std::cout << "Torque específico______: " << torqueEsp << " kgfm/litro\n";
    std::cout << "Potência específica____: " << potenciaEsp << " cv/litro\n\n";
    std::cout << "TRANSMISSÃO\n";
    std::cout << "Câmbio Automatizado de " << cambio << " marcha\n\n";
    std::cout << "DIMENSÕES\n";
    std::cout << "Porta-malas____________: " << portaMala << " litros\n";
    std::cout << "Peso___________________: " << peso << " kg\n";
    std::cout << "Tanque de combustível__: " << tanqCombust << " litros\n";
    std::cout << "Carga útil_____________: " << cargaUtil << " kg\n\n";
    std::cout << "DESMPENHO\n";
    std::cout << "Velocidade máxima______: " << velMax << " km/h\n";
    std::cout << "Aceleração de 0-100km/h: " << Aceleracao << " s\n\n";
    std::cout << "Preço Total____________: R$ " << preco << "\n";
    std::cout << "\n-----------------------------------------------------------------------\n";
}


#endif // CARRO_H_INCLUDED
