//
// Created by gusta on 17/02/2018.
//

#ifndef PO_EQUIPO3_R1VFF_HORARIO_H
#define PO_EQUIPO3_R1VFF_HORARIO_H


#include "FormatoHora.h"
#include <iostream>

class Horario {
//Atributos
private:
    FormatoHora*inicio;
    FormatoHora*fin;
    std::string aula;
//Metodos
public:
    Horario();
    Horario(FormatoHora*inicio,FormatoHora*fin,std::string);
    Horario(int h, int m, int s, FormatoHora*inicio, FormatoHora*fin, std::string aula);
    FormatoHora*CalculaDuracion();
    void setAula(std::string aula);
    FormatoHora*getInicio();
    FormatoHora*getFin();
    std::string getAula();
    std::string toString();

};


#endif //PO_EQUIPO3_R1VFF_HORARIO_H
