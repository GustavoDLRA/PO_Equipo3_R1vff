//
// Created by gusta on 17/02/2018.
//

#ifndef PO_EQUIPO3_R1VFF_ALUMNO_H
#define PO_EQUIPO3_R1VFF_ALUMNO_H


#include "Persona.h"
#include "Horario.h"
#include "Materia.h"
#include <iostream>
class Alumno: virtual public Persona {
    //Atributos
private:
    std::string matricula;
    std::string gene;
    Materia*materias[6];

    //Metodos
public:
    Alumno();
    Alumno(std::string n, std::string fNac,char gen,std::string matricula,std::string generacion);
    void setHorario(Horario*horario);
    void setMaterias(Materia*m[6]);
    Horario*getHorario();
    Materia*getMateria();
    std::string getMatricula();
    std::string getGene();
    std::string toString();

};


#endif //PO_EQUIPO3_R1VFF_ALUMNO_H
