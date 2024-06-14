#include <iostream>
#include <string>

class Curso
{
public:
    std::string nombre = "";
    void Print()
    {
        std::cout << "<Curso "
            << "nombre='" << nombre
            << " />";
    }
};

class Alumno
{
public:
    // propiedades
    std::string nombre;  //atributos instancia
    std::string codigo; //atributos instancia
    int ciclo; //atributos instancia
    float ppa; //atributos instancia
    static int cantidadInstancias; // Atributo CLASE
    Curso curso;

    Alumno() // Metodo constructor
    {
        nombre = "";
        codigo = "";
        ciclo = 0;
        ppa = 0.0f;

        Alumno::cantidadInstancias++;
    }

    // Metodo constructor
    Alumno(std::string nombre, std::string codigo, int ciclo, float ppa)
        : nombre(nombre), codigo(codigo), ciclo(ciclo), ppa(ppa)
    {
        Alumno::cantidadInstancias++;
    }

    ~Alumno() // Metodo destructor
    {

    }

    void Print() // Metodo instancia
    {
        std::cout << "<Alumno " 
            << "nombre=" << nombre << " "
            << "codigo=" << this->codigo << " "
            << "ciclo=" << ciclo << " "
            << "ppa=" << ppa << ">" << std::endl;
        curso.Print();
        std::cout << "<Alumno />"
            << std::endl;
    }
};
int Alumno::cantidadInstancias = 0;

int main()
{
    std::cout << Alumno::cantidadInstancias << std::endl;

    Alumno a1(
        "Pepito", 
        "20233434", 
        6, 
        13.4f
    ); // Objeto creado en stack
    a1.Print();

    Alumno* a2 = new Alumno(
        "Rocio", 
        "20221111", 
        6, 
        14.8f
    ); // Objeto creado en heap
    a2->Print();

    std::cout << Alumno::cantidadInstancias << std::endl;

    return 0;
}
