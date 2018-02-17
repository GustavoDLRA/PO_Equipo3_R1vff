cmake_minimum_required(VERSION 3.8)
project(PO_Equipo3_R1vff)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp FormatoHora.cpp FormatoHora.h Horario.cpp Horario.h Materia.cpp Materia.h Profesor.cpp Profesor.h Alumno.cpp Alumno.h Persona.cpp Persona.h)
add_executable(PO_Equipo3_R1vff ${SOURCE_FILES})