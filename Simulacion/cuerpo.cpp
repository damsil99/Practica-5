#include "cuerpo.h"
//#include<math.h>
#include<cmath>
Cuerpo::Cuerpo()
{
    pix=0;
    piy=0;
    vix=0;
    viy=0;
    aix=0;
    aiy=0;
    m=0;
    r=0;
}
Cuerpo::Cuerpo(float _r,float _m, float _aix, float _aiy, float _vix, float _viy, float _pix, float _piy){
    r=_r;
    m=_m;
    aix=_aix;
    aiy=_aiy;
    vix=_vix;
    viy=_viy;
    pix=_pix;
    piy=_piy;
}
float Cuerpo::getMasa() const
{
    return m;
}
float Cuerpo::getAx() const
{
    return aix;
}
float Cuerpo::getAy() const
{
    return aiy;
}
float Cuerpo::getVx() const
{
    return vix;
}
float Cuerpo::getVy() const
{
    return viy;
}
float Cuerpo::getPx() const
{
    return pix;
}
float Cuerpo::getPy() const
{
    return piy;
}

void Cuerpo::setMasa(float value)
{
    m = value;
}
void Cuerpo::setAx(float value)
{
    aix = value;
}
void Cuerpo::setAy(float value)
{
    aiy = value;
}
void Cuerpo::setVx(float value)
{
    vix = value;
}
void Cuerpo::setVy(float value)
{
    viy = value;
}
void Cuerpo::setPx(float value)
{
    pix = value;
}
void Cuerpo::setPy(float value)
{
    piy = value;
}
void Cuerpo::posicionx(void){
     pix=pix+vix+((aix * pow(t,2))/2);
}
void Cuerpo::posiciony(void){
    piy=piy+viy+((aiy * pow(t,2))/2);
}
float Cuerpo::aceleracionx(float _m1,float y2,float x2){
    float eje,_r,_aix;
    _r=sqrt(pow(x2-pix,2)+pow(y2-piy,2));
    eje=atan2((y2-piy),(x2-pix));
    _aix=(_m1/pow(_r,2))*cos(eje);
    return _aix;
}
float Cuerpo::aceleraciony(float _m1,float y2,float x2){
    float eje,_r,_aiy;
    _r=sqrt(pow(x2-pix,2)+pow(y2-piy,2));
    eje=atan2(y2-piy,x2-pix);
    _aiy=(_m1/pow(_r,2))*sin(eje);
    return _aiy;
}
void Cuerpo::velocidadx(){
    vix=(aix*t)+vix;
}
void Cuerpo::velocidady(){
    viy=(aiy*t)+viy;
}
