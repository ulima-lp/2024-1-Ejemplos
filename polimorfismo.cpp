#include "polimorfismo.h"

void Animal::HacerSonido()
{
    std::cout << "grrr" << std::endl;
}

void Perro::HacerSonido() 
{
    std::cout << "guau guau" << std::endl;
}

void Gato::HacerSonido()
{
    std::cout << "miau" << std::endl;
}