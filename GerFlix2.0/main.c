#include <stdio.h>
#include <stdlib.h>
#include "serie.h"
#include "usuario.h"
#include "usuarioSerie.h"
#define TAMANIO 5

/**
*
    1. los datos de la serie que ve cada usuario
    2. por cada serie todos los usuarios que la ven
    3. por cada serie cuantos usuarios la ven
*
*/
int main()
{
    eSerie listadoSeries[TAMANIO];
    CrearListadoSeries(listadoSeries,5);

    printf("Hello world!\n");
    return 0;
}
