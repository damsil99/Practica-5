#ifndef SISTEMA_H
#define SISTEMA_H
#include<vector>
#include<iostream>
#include"cuerpo.h"
using namespace std;
class sistema
{
public:
    float aix,aiy;
    vector <Cuerpo> Cuerpos;
    sistema();
void agregar(void);
void agregar(int l);
void actualizarA(int pos);
void actualizarP(void);
void actualizarV(void);
float sacarX(int zs);
float sacarY(int zs);
/*void aceleracionx(int _n,int _pos);
void aceleraciony(int _n,int _pos);   */
};

#endif // SISTEMA_H
