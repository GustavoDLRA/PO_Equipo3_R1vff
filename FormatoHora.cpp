//
// Created by gusta on 17/02/2018.
//

#include "FormatoHora.h"
#include <cmath>

FormatoHora::FormatoHora(int h, int m, int s) {
    this->horas=h;
    this->minutos=m;
    this->segundos=s;
    std::cout<<this->to_String()<<"\n";
}
/*FormatoHora::FormatoHora(double h, double m, double s) {
    this->horas=h;
    this->minutos=m;
    this->segundos=s;
    //std::cout<<this->to_String()<<"\n";
}*/
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
    muestraHora= (std::to_string(horas));
    muestraMinutos= (std::to_string(minutos));
    muestraSegundos= (std::to_string(segundos));
    return muestraHora+ ":"+muestraMinutos+":"+muestraSegundos;
}
/*FormatoHora operator +(const FormatoHora &fH1, const FormatoHora &fH2){
    //CONTINUAR A PARTIR DE AQUÍ.
    double resultadoH;
    double resultadoM;
    double resultadoS;

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
}*/
/*FormatoHora operator -(const FormatoHora &fH1, const FormatoHora &fH2){
    double resultadoH;
    double resultadoM;
    double resultadoS;
    //Al hacer el calculo originalmente, me salían horas negativas, por lo que
    //Tuve que hacer que alterar los valores de fH2
    resultadoH= fabs(fH2.horas-fH1.horas);
    resultadoM=fabs(fH2.minutos-fH1.minutos);
    resultadoS= fabs(fH2.segundos-fH1.segundos);

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

}*/
FormatoHora operator +(const FormatoHora &fH1, const FormatoHora &fH2){
    //CONTINUAR A PARTIR DE AQUÍ.
    int resultadoH;
    int resultadoM;
    int resultadoS;

    resultadoH=fH1.horas+fH2.horas;
    resultadoM=fH1.minutos+fH2.minutos;
    resultadoS=fH1.segundos+fH2.segundos;

    /*if (resultadoM>=60){
        resultadoH++;
        resultadoM= resultadoM-60;
    }
    if (resultadoS>=60){
        resultadoM++;
        resultadoS=resultadoS-60;
    }*/

    FormatoHora resultado = *new FormatoHora(resultadoH,resultadoM,resultadoS);

    resultado.validar();
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

    /*if (resultadoM>=60){
        resultadoH++;
        resultadoM= resultadoM-60;
    }
    if (resultadoS>=60){
        resultadoM++;
        resultadoS=resultadoS-60;
    }*/


    FormatoHora resultado = *new FormatoHora(resultadoH,resultadoM,resultadoS);

    resultado.validar();

    return resultado;

}
FormatoHora operator < (const FormatoHora &fH1, const FormatoHora &fH2){
    bool menorQue;
    if(fH1.horas<fH2.horas){
        menorQue=true;
        std::cout<<"La hora 1, es menor que la hora 2\n";
    }
    if (fH1.horas>fH2.horas){
        menorQue=false;
        std::cout<<"La hora 1, no es menor que la hora 2\n";
    }

}
FormatoHora operator > (const FormatoHora &fH1, const FormatoHora &fH2){
    bool mayorQue;
    if(fH1.horas>fH2.horas){
        mayorQue=true;
        std::cout<<"La hora 1, es mayor que la hora 2\n";
    }
    if (fH1.horas<fH2.horas){
        mayorQue=false;
        std::cout<<"La hora 1, no es mayor que la hora 2 \n";
    }
}
FormatoHora operator <= (const FormatoHora &fH1, const FormatoHora &fH2){
    bool menoroIgual;
    if (fH1.horas && fH1.minutos && fH1.segundos<=fH2.horas && fH2.minutos &&fH2.segundos){
        menoroIgual=true;
        std::cout<<"La hora 1, es menor o igual a la hora 2 \n";
    }
    if(fH1.horas && fH1.minutos && fH1.segundos>fH2.horas || fH2.minutos || fH2.segundos ){
        menoroIgual=false;
        std::cout<<"La hora 1, no es menor o igual a la hora 2 \n";
    }
}
FormatoHora operator >= (const FormatoHora &fH1, const FormatoHora &fH2){
    bool mayoroIgual;
    if (fH1.horas && fH1.minutos && fH1.segundos >= fH2.horas && fH2.minutos &&fH2.segundos ){
        mayoroIgual=true;
        std::cout<<"La hora 1, es mayor o igual a la hora 2\n";
    }
    if (fH1.horas && fH1.minutos && fH1.segundos < fH2.horas && fH2.minutos && fH2.segundos){
        mayoroIgual=false;
        std::cout<<"La hora 1, no es mayor o igual a la hora 2\n";
    }
}
FormatoHora operator != (const FormatoHora &fH1, const FormatoHora &fH2){
    bool diferenteA;
    if (fH1.horas || fH1.minutos || fH1.segundos != fH2.horas || fH2.minutos || fH2.segundos){
        diferenteA=true;
        std::cout<<"La hora 1, es diferente a la hora 2\n ";
    }
    if (fH1.horas && fH1.minutos && fH1.segundos == fH2.horas && fH2.minutos && fH2.segundos){
        diferenteA=false;
        std::cout<<"La hora 1, es igual a la hora 2 \n";
    }
}


bool FormatoHora::validar() {

    if (this->segundos>=60){
        this->minutos++;
        this->segundos=segundos-60;
    }
    if(this->minutos>=60){
        this->horas++;
        this->minutos=minutos-60;
    }

}
/*bool FormatoHora::menorA() {

}
bool FormatoHora::mayorA() {

}
bool FormatoHora::menorOIgualA() {

}
bool FormatoHora::mayorOIgualA() {

}
bool FormatoHora::diferenteA() {

}*/
//ACTIVIDAD 6