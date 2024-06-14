#include <iostream>

class Curso
{
public:
    std::string nombre = "";
    Curso* siguiente = nullptr;
    void Print();
};

class ListaCursos
{
    int tam = 0;
public:
    Curso* primer = nullptr;
    size_t Longitud();
    void Agregar(std::string nombre);
    void Print();
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

    Alumno(); // Metodo constructor
    

    // Metodo constructor
    Alumno(
        std::string nombre, 
        std::string codigo, 
        int ciclo, float ppa
    );

    ~Alumno(); // Metodo destructor

    void Print(); // Metodo instancia
};
int Alumno::cantidadInstancias = 0;