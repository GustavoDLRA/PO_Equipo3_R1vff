//
// Created by gusta on 17/02/2018.
//

#include "FormatoHora.h"

FormatoHora::FormatoHora(int h, int m, int s) {
    this->horas=h;
    this->minutos=m;
    this->segundos=s;
    std::cout<<this->to_String()<<"\n";
}
bool FormatoHora::validaHrs(int) {
    bool horaCorrecta = true;
    if(horas>=0 && horas<=23){
        bool horacorrecta=true;
    }else if (horas<0 || horas>23){
        bool horacorrecta=false;
    }
}

bool FormatoHora::validaMS(int) {
    bool minutosYSegValidos = true;

    if(minutos>=0 && minutos<=59 && segundos>=0 && segundos <=59){
        bool minutosYSegvalidos= true;
    }else if (minutos<=0 || minutos>59 || segundos<=0 ||segundos>59 ){
        bool minutosYSegValidos=false;
    }
}
int FormatoHora::getHoras() {
    return horas;
}
int FormatoHora::getMinutos() {
    return minutos;
}
int FormatoHora::getSegundos() {
    return segundos;
}
std::string FormatoHora::to_String() {
    std::string muestraHora;
    std::string muestraMinutos;
    std::string muestraSegundos;
    muestraHora= getHoras();
    muestraMinutos= getMinutos();
    muestraSegundos= getSegundos();
    return muestraHora+ "/"+muestraMinutos+"/"+muestraSegundos;
}