#include "listas.h"
#include "polimorfismo.h"

void Init(Animal* animal)
{
    animal->HacerSonido();
}

int main(int argc, char* argv[])
{
    std::string animal = argv[1];
    
    if (animal == "perro")
    {
        Perro p1;
        p1.nombre = "Firulais";
        Init(&p1);
    }else
    {
        Gato g1;
        g1.nombre = "Lola";
        Init(&g1);
    }
    

    

    

    



    /*ListaCursos cursos;

    cursos.Agregar("LP");
    cursos.Agregar("Redes");
    cursos.Agregar("Ope");

    Curso curso1;
    curso1.nombre = "IS2";
    curso1.siguiente = nullptr;
    cursos.Agregar(&curso1);

    Curso* curso = cursos.Obtener(2);
    curso->Print();

    cursos.Eliminar(0);

    cursos.Print();*/

    return 0;
}
