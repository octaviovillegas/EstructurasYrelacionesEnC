#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

typedef struct{
    int idLocalidad;
    char  nombreLocalidad[50];
}Localidad;


int main()
{
    Persona unaPersona;
    unaPersona=PedirDatosUnaPersona();
    mostrarUnaPersona(unaPersona);

    return 0;
}

