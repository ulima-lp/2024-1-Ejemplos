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

void PilaArray::Apilar(Vector2* v)
{
    if (tam == 0)
    {
        // Arreglo vacio
        arr = new Vector2[1];
        arr->x = v->x;
        arr->y = v->y;
    }else
    {
        // Arreglo con elementos
        Vector2* nuevoArreglo = new Vector2[tam + 1];

        // Transferencia de datos
        for (int i=0; i < tam; i++)
        {
           nuevoArreglo[i].x = arr[i].x;
           nuevoArreglo[i].y = arr[i].y;
        }
        nuevoArreglo[tam].x = v->x;
        nuevoArreglo[tam].y = v->y; 

        // Liberamos espacio
        Vector2* temp = arr;
        arr = nuevoArreglo;
        delete[] temp;
    }
    tam++;
}

Vector2* PilaArray::Desapilar()
{

}