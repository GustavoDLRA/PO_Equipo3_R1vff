#include <iostream>
#include "FormatoHora.h"
#include "Profesor.h"
#include "Materia.h"
#include "Alumno.h"

int main(){

    //PRUEBA DE FUNCIONAMIENTO DE FormatoHora
    FormatoHora hora1(13,23,50);
    FormatoHora hora2(20,40,15);

    FormatoHora hora3=hora1+hora2;
    FormatoHora hora4= hora2 - hora1;

    std::cout<<"Suma de horas:\n";
    //std::cout<<hora3.horas<<":"<<hora3.minutos<<":"<<hora3.segundos<<"\n";
    std::cout<<hora3.to_String()+"\n";
    std::cout<<"Resta de horas: \n";
    //std::cout<<hora4.horas<<":"<<hora4.minutos<<":"<<hora4.segundos<<"\n";
    std::cout<<hora4.to_String()+"\n";

//Declaramos nuestros atributos en el Main
    //Atributos de Horario.
    /*FormatoHora*inicio;
    FormatoHora*fin;
    std::string aula;
    //Atributos de Materia.
    std::string Nombre;
    std::string Clave;
    std::string horario;
    Profesor*Maestro;
    //Atributo de Profesor.
    std::string nomina;
    //Atributos de Alumno.
    std::string matricula;
    std::string gene;
    Materia*Materias[6];
    //Atributos de Persona.
    std::string nombre;
    std::string nombreP;
    std::string fechaNac;
    std::string fechaNacP;
    char genero;
    char generoP;
    float estatura;
    float estaturaP;
    float peso;
    float pesoP;*/
//Atributos de formato hora necesarios para marcar la hora.
    //Hora de Inicio.
   /* int h1;
    int m1;
    int s1;
    //Hora final.
    int h2;
    int m2;
    int s2;*/



//Comenzamos a definir cada uno de los Metodos a usar.
   /* std::cout<<"Bienvenido al sistema de creacion de horario.<<\n";
    std::cout<<"ESTA EN MODO EDICION DE HORARIO\n";
    std::cout<<"ETAPA 1: INGRESE DATOS DEL ESTUDIANTE.\n";
    std::cout<<"Introduzca el nombre del estudiante:\n";
    std::cin>>nombre;
    std::cout<<"Introduzca la Fecha de Nacimiento del Estudiante:\n";
    std::cin>>fechaNac;
    std::cout<<"Introduzca el Genero del Estudiante:\n";
    std::cin>>genero;
    std::cout<<"Introduzca la Estatura del estudiante (m):\n";
    std::cin>>estatura;
    std::cout<<"Introduzca el Peso del estudiante (kg): \n";
    std::cin>>peso;
    std::cout<<"Introduzca la Matricula del Estudiante:\n";
    std::cin>>matricula;
    std::cout<<"Introduzca la Generacion del Estudiante:\n";
    std::cin>>gene;
    std::cout<<"FIN DE INGRESO DE DATOS DEL ESTUDIANTE. CONCLUYE ETAPA 1\n";
    std::cout<<".\n";
    std::cout<<".\n";
    std::cout<<".\n";
    std::cout<<"ETAPA 2: INGRESE LOS DATOS DEL PROFESOR.\n";
    std::cout<<"Introduzca el Nombre del Profesor: \n";
    std::cin>>nombreP;
    std::cout<<"Introduzca la Fecha de Nacimiento del Profesor:\n";
    std::cin>>fechaNacP;
    std::cout<<"Introduzca el Genero del Profesor:\n";
    std::cin>>generoP;
    std::cout<<"Introduzca la estatura del Profesor:\n";
    std::cin>>estaturaP;
    std::cout<<"Introduzca el Peso del Profesor:\n";
    std::cin>>pesoP;
    std::cout<<"Introduzca la Nomina del Profesor:\n";
    std::cin>>nomina;
    std::cout<<"FIN DE INGRESO DE DATOS DEL PROFESOR. CONCLUYE ETAPA 2.\n";
    std::cout<<".\n";
    std::cout<<".\n";
    std::cout<<".\n";*/
    /*std::cout<<"ETAPA 3: INGRESE LOS DATOS DE LA CLASE.\n";
    //std::cout<<"Ingrese el Aula donde se tomará la clase: \n";
    //std::cin>>aula;
    std::cout<<"Ingrese la hora de inicio de la clase (SOLO LA HORA):\n";
    std::cin>>h1;
    std::cout<<"Ingrese los minutos de la hora inicio de la clase (SOLO LOS MINUTOS):\n";
    std::cin>>m1;
    std::cout<<"Ingrese la cantidad de segundos del instante en el que inicia la clase (SOLO SEG.)\n";
    std::cin>>s1;
    //FALTA SEGUIR INGRESANDO lo de la fecha.
    std::cout<<"Ingrese la hora de termino de la clase (SOLO HORA):\n";
    std::cin>>h2;
    std::cout<<"Ingrese los minutos de la hora a los que acaba la clase: (SOLO MINUTOS):\n";
    std::cin>>m2;
    std::cout<<"Ingrese los segundos de la hora termino(SOLO SEGUNDOS): \n";
    std::cin>>s2;*/






    /*Alumno elAlumno =*new Alumno(nombre,fechaNac,genero,matricula,gene);
    Profesor Profe = *new Profesor(nombreP,fechaNacP,genero,nomina);
    std::cout<<"De:";
    FormatoHora horaInicio = *new FormatoHora(h1,m1,s1);
    std::cout<<"Hasta:";
    FormatoHora horaFinal=*new FormatoHora(h2,m2,s2);
    //std::cout<<"Aula:";
    //Horario elHorario = *new Horario(aula);
    //Horario elHorario= *new Horario(horaInicio,horaFinal,aula);*/



    return 0;
}