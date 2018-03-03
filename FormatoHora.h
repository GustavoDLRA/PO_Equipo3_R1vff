//
// Created by gusta on 17/02/2018.
//

#ifndef PO_EQUIPO3_R1VFF_FORMATOHORA_H
#define PO_EQUIPO3_R1VFF_FORMATOHORA_H


#include <iostream>

class FormatoHora {
//Atributos de la clase FormatoHora.
public: //Antes Private
    int horas;
    int minutos;
    int segundos;
    //double horas;
    //double minutos;
    //double segundos;
    //Clases amigas
    friend FormatoHora operator + (const FormatoHora &fH1, const FormatoHora &fH2);
    friend FormatoHora operator - (const FormatoHora &fH1, const FormatoHora &fH2);
    friend FormatoHora operator < (const FormatoHora &fH1,const FormatoHora &fH2);
    friend FormatoHora operator > (const FormatoHora &fH1, const FormatoHora &fH2);
    friend FormatoHora operator <= (const FormatoHora &fH1, const FormatoHora &fH2);
    friend FormatoHora operator >= (const FormatoHora &fH1, const FormatoHora &fH2);
    friend FormatoHora operator != (const FormatoHora &fH1, const FormatoHora &fH2);
//Metodos de la clase FormatoHora.
public:
    FormatoHora(int h,int m, int s);
    //FormatoHora(double h, double m, double s);
    int getHoras();
    int getMinutos();
    int getSegundos();
    std::string to_String();
    bool validaHrs(int);
    bool validaMS(int);
    bool validar();
    /*bool menorA();
    bool mayorA();
    bool menorOIgualA();
    bool mayorOIgualA();
    bool diferenteA();*/


};


#endif //PO_EQUIPO3_R1VFF_FORMATOHORA_H
