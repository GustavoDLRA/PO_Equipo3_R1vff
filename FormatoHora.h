//
// Created by gusta on 17/02/2018.
//

#ifndef PO_EQUIPO3_R1VFF_FORMATOHORA_H
#define PO_EQUIPO3_R1VFF_FORMATOHORA_H


#include <iostream>

class FormatoHora {
//Atributos de la clase FormatoHora.
private:
    int horas;
    int minutos;
    int segundos;
//Metodos de la clase FormatoHora.
public:
    FormatoHora(int h, int m, int s);
    int getHoras();
    int getMinutos();
    int getSegundos();
    std::string to_String();
    bool validaHrs(int);
    bool validaMS(int);
};


#endif //PO_EQUIPO3_R1VFF_FORMATOHORA_H
