//
// Created by gusta on 17/02/2018.
//

#ifndef PO_EQUIPO3_R1VFF_PERSONA_H
#define PO_EQUIPO3_R1VFF_PERSONA_H


#include <iostream>

class Persona {
//Atributos
protected:
    std::string nombre;
    std::string fechaNac;
    char genero;
    float estatura;
    float peso;

//Metodos
public:
    Persona();
    Persona(std::string,std::string, char);
    void setEstatura(float);
    void setPeso(float);
    std::string getNombre();
    std::string getFechaNac();
    std::string getGenero();
    float getEstatura();
    float getPeso();
    virtual std::string toString()=0;
};



#endif //PO_EQUIPO3_R1VFF_PERSONA_H
