#ifndef CLUBE1_H_INCLUDED
#define CLUBE1_H_INCLUDED

class clube{

public:
    int a=0;
    int b;
    std::string time;
    clube(int d);
    void imprimir();

private:

};

clube::clube(int d){
    if(d==1){
        b=10;
        time="S.E. Palmeiras";
    }
    else if(d==2){
        b=8;
        time="Santos F.C.";
    }
    else if(d==3){
        b=7;
        time="S.C. Corinthians P.";
    }
    else if(d==4){
        b=6;
        time="São Paulo F.C.";
    }
}

void clube::imprimir(){
    std::cout << "\nO " << time << " tem " << b << " campeonatos brasileiros\n";
    std::cout << "\n---------------------------------------------------\n";
}


#endif // CLUBE1_H_INCLUDED
