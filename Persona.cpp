//
// Created by gusta on 17/02/2018.
//

#include "Persona.h"
Persona::Persona() {
    this->nombre="";
    this->fechaNac="";
    this->genero = 0;
    this->estatura=0;
    this->peso=0;
}
Persona::Persona(std::string, std::string, char) {
    this->nombre=nombre;
    this->fechaNac=fechaNac;
    this->genero = genero;
    this->estatura=estatura;
    this->peso=peso;
}
void Persona::setEstatura(float) {
    estatura=estatura;
}
void Persona::setPeso(float) {
    this->peso=peso;
}
std::string Persona::getNombre() {
    return this->nombre;
}
std::string Persona::getFechaNac() {
    return this->fechaNac;
}
std::string Persona::getGenero() {
    return this->(std::to_string(genero));
}
float Persona::getEstatura() {
    return this->estatura;
}
float Persona::getPeso() {
    return this->peso;
}
