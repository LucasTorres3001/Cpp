#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{

public:
    int velMax;
    std::string tipo;
    Aviao(int tp);
    void imprimir();

private:

};

Aviao::Aviao(int tp){
    if(tp==1){
        tipo="Jato";
        velMax=800;
    }
    else if(tp==2){
        tipo="Monomotor";
        velMax=350;
    }
    else if(tp==3){
        tipo="Planador";
        velMax=180;
    }
}

void Aviao::imprimir(){
    std::cout << " Tipo_____________: " << tipo << "\n";
    std::cout << " Velocidade máxima: " << velMax << " km/h\n\n";
    std::cout << "-----------------------------------" << "\n\n";
}


#endif // AVIAO_H_INCLUDED
