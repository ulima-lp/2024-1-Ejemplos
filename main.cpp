int main()
{
    std::cout << Alumno::cantidadInstancias << std::endl;

    Alumno a1(
        "Pepito", 
        "20233434", 
        6, 
        13.4f
    ); // Objeto creado en stack

    Curso curso1;
    curso1.nombre = "LP";
    a1.curso = curso1;
    a1.Print();

    Alumno* a2 = new Alumno(
        "Rocio", 
        "20221111", 
        6, 
        14.8f
    ); // Objeto creado en heap
    a2->curso = curso1;
    a2->Print();
    

    std::cout << Alumno::cantidadInstancias << std::endl;

    return 0;
}
