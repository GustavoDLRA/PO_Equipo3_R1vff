//
// Created by gusta on 17/02/2018.
//

#include "FormatoHora.h"
#include <cmath>

FormatoHora::FormatoHora(int h, int m, int s) {
    this->horas=h;
    this->minutos=m;
    this->segundos=s;
    //std::cout<<this->to_String()<<"\n";
}
/*bool FormatoHora::validaHrs(int) {
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
    muestraHora= (std::to_string(getHoras()));
    muestraMinutos= (std::to_string(getMinutos()));
    muestraSegundos= (std::to_string(getSegundos()));
    return muestraHora+ "/"+muestraMinutos+"/"+muestraSegundos;
}*/
FormatoHora operator +(const FormatoHora &fH1, const FormatoHora &fH2){
    //CONTINUAR A PARTIR DE AQUÍ.
    int resultadoH;
    int resultadoM;
    int resultadoS;

    resultadoH=fH1.horas+fH2.horas;
    resultadoM=fH1.minutos+fH2.minutos;
    resultadoS=fH1.segundos+fH2.segundos;

    if (resultadoM>=60){
        resultadoH++;
        resultadoM= resultadoM-60;
    }
    if (resultadoS>=60){
        resultadoM++;
        resultadoS=resultadoS-60;
    }

    FormatoHora resultado = *new FormatoHora(resultadoH,resultadoM,resultadoS);


    //FormatoHora resultado(fH1.horas +fH2.horas, fH1.minutos+fH2.minutos,fH1.segundos+fH2.segundos); FORMA RAPIDA DE PONER LO RESPECTIVO.
    return resultado;
}
FormatoHora operator -(const FormatoHora &fH1, const FormatoHora &fH2){
    int resultadoH;
    int resultadoM;
    int resultadoS;
    //Al hacer el calculo originalmente, me salían horas negativas, por lo que
    //Tuve que hacer que alterar los valores de fH2
    resultadoH= -1*(fH2.horas-fH1.horas);
    resultadoM=-1*(fH2.minutos-fH1.minutos);
    resultadoS= 1*(fH2.segundos-fH1.segundos);

    if (resultadoM>=60){
        resultadoH++;
        resultadoM= resultadoM-60;
    }
    if (resultadoS>=60){
        resultadoM++;
        resultadoS=resultadoS-60;
    }


    FormatoHora resultado = *new FormatoHora(resultadoH,resultadoM,resultadoS);



    return resultado;

}