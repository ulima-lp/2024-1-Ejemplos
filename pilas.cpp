#include "pilas.h"

Pila::Pila() : tam(0)
{}

void PilaLE::Apilar(Vector2* v)
{
    if (tam == 0)
    {
        v->siguiente = nullptr;
        primer = v;
    }else
    {
        v->siguiente = primer;
        primer = v;
    }
    tam++;
}

Vector2* PilaLE::Desapilar()
{
    if (tam == 0)
    {
        return nullptr;
    }
    Vector2* temp = primer;
    primer = primer->siguiente;
    tam--;
    return temp;
}