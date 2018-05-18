#ifndef CUERPO_H
#define CUERPO_H
#include<iostream>
#define t 1
#define PI 3.1416
using namespace std;
class Cuerpo
{
private:
    float m,r;
    float aix, aiy;
    float vix, viy;
    float pix, piy;
public:
    Cuerpo();
    Cuerpo(float _r,float _m, float _aix, float _aiy, float _vix, float _viy, float _pix, float _piy);
    float getMasa() const;
    float getAx() const;
    float getAy() const;
    float getVx() const;
    float getVy() const;
    float getPx() const;
    float getPy() const;

    void setMasa(float value);
    void setAx(float value);
    void setAy(float value);
    void setVx(float value);
    void setVy(float value);
    void setPx(float value);
    void setPy(float value);
    
    void posicionx(void);
    void posiciony(void);
    float aceleracionx(float _m1,float y2,float x2);
    float aceleraciony(float _m1,float y2,float x2);
    void velocidadx(void);
    void velocidady(void);
};

#endif // CUERPO_H
