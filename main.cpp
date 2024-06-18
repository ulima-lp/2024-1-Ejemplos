#include "listas.h"

int main()
{
    ListaCursos cursos;

    cursos.Agregar("LP");
    cursos.Agregar("Redes");
    cursos.Agregar("Ope");

    Curso* curso = cursos.Obtener(2);
    curso->Print();

    cursos.Eliminar(0);

    cursos.Print();

    return 0;
}
