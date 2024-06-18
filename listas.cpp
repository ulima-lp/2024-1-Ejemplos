#include "listas.h"


//****************** Curso ****************/
void Curso::Print()
{
    std::cout << "<Curso "
        << "nombre=" << nombre
        << " />";
}

/*******************************************/

/*************** ListCursos ****************/
size_t ListaCursos::Longitud()
{
    return tam;
}
void ListaCursos::Agregar(std::string nombre)
{
    Curso* curso = new Curso();
    curso->nombre = nombre;
    curso->siguiente = nullptr;

    if (primer == nullptr)
    {
        // Lista vacia
        primer = curso;
    }
    else
    {
        Curso* pPivot = primer;

        // pPivot se queda apuntando al ultimo
        while(pPivot->siguiente != nullptr)
        {
            pPivot = pPivot->siguiente;
        }

        pPivot->siguiente = curso;
    }
    tam++;
}

void ListaCursos::Eliminar(size_t pos)
{

}

Curso* ListaCursos::Obtener(size_t pos)
{

}

void ListaCursos::Print()
{
    Curso* pPivot = primer;

    while(pPivot != nullptr)
    {
        pPivot->Print();
        pPivot = pPivot->siguiente;
    }
}













Alumno::Alumno() // Metodo constructor
{
    nombre = "";
    codigo = "";
    ciclo = 0;
    ppa = 0.0f;

    //Alumno::cantidadInstancias++;
}

Alumno::Alumno(std::string nombre, std::string codigo, int ciclo, float ppa)
    : nombre(nombre), codigo(codigo), ciclo(ciclo), ppa(ppa)
{
    //Alumno::cantidadInstancias++;
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