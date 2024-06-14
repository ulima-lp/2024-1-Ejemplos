#include "listas.h"

int main()
{
    ListaCursos cursos;

    cursos.Agregar("LP");
    cursos.Agregar("Redes");
    cursos.Agregar("Ope");

    cursos.Print();

    return 0;
}
