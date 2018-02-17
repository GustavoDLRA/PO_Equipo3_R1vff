//
// Created by gusta on 17/02/2018.
//

#ifndef PO_EQUIPO3_R1VFF_PROFESOR_H
#define PO_EQUIPO3_R1VFF_PROFESOR_H


#include "Persona.h"
#include "Horario.h"
#include <iostream>

class Profesor: virtual public Persona {
//Atributos
private:
    std::string nomina;
//Metodos
public:
    Profesor();
    Profesor(std::string n,std::string fNac,char gen,std::string nomina );
    void setHorario(Horario*horario);
    Horario*getHorario();
    std::string getNomina();
    std::string toString();


};



#endif //PO_EQUIPO3_R1VFF_PROFESOR_H
