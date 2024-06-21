#include <iostream>

class Vector2
{
public:
    int x;
    int y;
    Vector2* siguiente;
};

class Pila
{
protected:
    size_t tam;
public:
    Pila();
    virtual void Apilar(Vector2* v) = 0; // abstractos
    virtual Vector2* Desapilar() = 0; // abstractos
};

class PilaLE : public Pila
{
    Vector2* primer;
public:
    void Apilar(Vector2* v) override;
    Vector2* Desapilar() override;
};

class PilaArray : public Pila
{
    Vector2* arr;
public:
    void Apilar(Vector2* v) override;
    Vector2* Desapilar() override;
};