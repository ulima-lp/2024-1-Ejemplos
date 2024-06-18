#include <iostream>

class Animal
{
public:
    std::string nombre;
    virtual void HacerSonido() ;
};

class Perro : public Animal
{
public:
    void HacerSonido() override;
};

class Gato : public Animal
{
public:
    void HacerSonido() override;
};