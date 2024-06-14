#include "listas.h"


//****************** Curso ****************/
void Curso::Print()
{
    std::cout << "<Curso "
        << "nombre='" << nombre
        << " />";
}

/*******************************************/

/*************** ListCursos ****************/














Alumno::Alumno() // Metodo constructor
{
    nombre = "";
    codigo = "";
    ciclo = 0;
    ppa = 0.0f;

    Alumno::cantidadInstancias++;
}

Alumno::Alumno(std::string nombre, std::string codigo, int ciclo, float ppa)
    : nombre(nombre), codigo(codigo), ciclo(ciclo), ppa(ppa)
{
    Alumno::cantidadInstancias++;
}

Alumno::~Alumno() // Metodo destructor
{}

void Alumno::Print() // Metodo instancia
{
    std::cout << "<Alumno "
              << "nombre=" << nombre << " "
              << "codigo=" << this->codigo << " "
              << "ciclo=" << ciclo << " "
              << "ppa=" << ppa << ">" << std::endl;
    curso.Print();
    std::cout << std::endl;
    std::cout << "<Alumno />"
              << std::endl;
}