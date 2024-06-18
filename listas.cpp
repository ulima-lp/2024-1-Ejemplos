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

void ListaCursos::Agregar(Curso* curso)
{
    curso->siguiente = nullptr; // asegurarse

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
    if (tam == 0 || pos >= tam)
    {
        return;
    }

    if (pos == 0)
    {
        // Quiero eliminar primera posicion
        Curso* temp = primer;
        primer = primer->siguiente;
        delete temp;
    }else
    {
        // Quiero eliminar otra que no sea la primera.
        Curso* pAnt = nullptr;
        Curso* pPivot = primer;

        int cont = 0;
        while(cont < pos)
        {
            pAnt = pPivot;
            pPivot = pPivot->siguiente;
            cont++;
        }

        pAnt->siguiente = pPivot->siguiente;
        delete pPivot;
    }
    tam--;
}

Curso* ListaCursos::Obtener(size_t pos)
{
    if (pos >= tam)
    {
        return nullptr;
    }

    Curso* pPivot = primer;

    int cont = 0;
    while (cont < pos)
    {
        pPivot = pPivot->siguiente;
        cont++;
    }
    return pPivot;
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