#include "sistema.h"

sistema::sistema()
{
    Cuerpos;
}
void sistema::agregar(int l){
    Cuerpo aux1(120,70,0,0,2,0,0,-7000);
    Cuerpos.push_back(aux1);
    Cuerpo aux2(300,70000, 0,0,0,0,0,0);
    Cuerpos.push_back(aux2);
    Cuerpo aux(100,25, 0,0,-1.6,1.2,4000,5000);
    Cuerpos.push_back(aux);
}
void sistema::agregar(){
    float  _aix,_aiy,_vix,_viy,_pix,_piy;
    float _r,_m;
    cout<<"ingrese la pocicion inicial x"<<endl;
    cin>>_pix;
    cout<<"ingrese la pocicion inicial y"<<endl;
    cin>>_piy;
    cout<<"ingrese la masa"<<endl;
    cin>>_m;
    cout<<"ingrese el radio"<<endl;
    cin>>_r;
    _aix=0;
    _aiy=0;
    cout<<"ingrese la velocidad x inicial"<<endl;
    cin>>_vix;
    cout<<"ingrese la velocidad y inicial"<<endl;
    cin>>_viy;
    Cuerpo aux(_r,_m, _aix,_aiy,_vix,_viy,_pix,_piy);
    Cuerpos.push_back(aux);
}
void sistema::actualizarA(int pos){
    float m1=0;
    float x1=0,y1=0,sumx=0,sumy=0;
    for( int i=0;i<Cuerpos.size();++i){
        if(pos!=i){
            m1=Cuerpos[i].getMasa();
            x1=Cuerpos[i].getPx();
            y1=Cuerpos[i].getPy();
            sumx+=Cuerpos[pos].aceleracionx(m1,y1,x1);
            sumy+=Cuerpos[pos].aceleraciony(m1,y1,x1);
        }
    }
    Cuerpos[pos].setAx(sumx);
    Cuerpos[pos].setAy(sumy);
}
void sistema::actualizarV(void){
    for(unsigned int i=0;i<Cuerpos.size();++i){
        Cuerpos[i].velocidadx();
        Cuerpos[i].velocidady();
    }
}
void sistema::actualizarP(void){
    for(unsigned int i=0;i<Cuerpos.size();++i){
        Cuerpos[i].posicionx();
        Cuerpos[i].posiciony();
    }
}
float sistema::sacarX(int zs){
    float s;
    s=Cuerpos[zs].getPx();
    return s;
}
float sistema::sacarY(int zs){
    float s;
    s=Cuerpos[zs].getPy();
    return s;
}
/*void sistema::aceleracionx(int _n, int _pos){
    aix=
}
void sistema::aceleraciony(int _n, int _pos){
    
}*/
