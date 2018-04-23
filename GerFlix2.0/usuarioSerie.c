#include "usuarioSerie.h"

void CrearListadoUsuariosYSeries(eUsuarioSerie misRelaciones[])
{
    int i;

    int usuario[9]={100,100,100,100,101,101,101,102,102 };
    int serie[9]={1,2,3,4,1,2,3,1,4};


    for(i=0;i<10;i++)
    {
       misRelaciones[i].idSerie=serie[i];
       misRelaciones[i].idUsuario=usuario[i];
    }

}
