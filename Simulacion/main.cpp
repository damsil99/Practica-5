#include <iostream>
#include<vector>
#include<fstream>
#include"sistema.h"

using namespace std;

int main()
{
    sistema lactea;
    int x;
    cout << "Para agregar un sistema, ingrese el numero de planetas" << endl;
    cin>>x;
    //for(int i=0;i<x;++i){
    lactea.agregar(1);
    //}
    ofstream txt;
    txt.open("lactea.txt",ios::out);

    for(int j=0;j<10001;j++){
        for(int k=0;k<x;k++){
            txt<<lactea.sacarX(k)<<"\t"<<lactea.sacarY(k)<<"\t";
        }
        txt<<'\n';
        for(int i=0;i<x;++i){
            lactea.actualizarA(i);
        }
        lactea.actualizarV();
        lactea.actualizarP();
    }
    return 0;
}
