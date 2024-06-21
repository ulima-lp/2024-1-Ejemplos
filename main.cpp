#include "pilas.h"

void Test(Pila* p)
{
    Vector2* v1 = new Vector2();
    v1->x = 10;
    v1->y = 20;

    Vector2* v2 = new Vector2();
    v2->x = 40;
    v2->y = 20;

    p->Apilar(v1);
    p->Apilar(v2);
    p->Pintar();
    std::cout << "***********************" << std::endl;
    auto v = p->Desapilar();
    v->Pintar();
    p->Pintar();
}

int main(int argc, char* argv[])
{
    Pila* pila1 = new PilaLE();
    Pila* pila2 = new PilaArray();

    std::cout << "PRUEBA CON LE" << std::endl;
    Test(pila1);
    std::cout << "PRUEBA CON ARRAYS" << std::endl;
    Test(pila2);

    


    /*std::string animal = argv[1];
    
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
    
    */
    

    

    



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
