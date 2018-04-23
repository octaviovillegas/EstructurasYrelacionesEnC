#include "persona.h"


void mostrarUnaPersona(Persona auxPersona)
{
    printf("\nid:%d",auxPersona.idPersona);
    printf("\nLocalidad:%d",auxPersona.idLocalidad);
    printf("\nNombre:%s",auxPersona.nombrePersona);

}
Persona PedirDatosUnaPersona(void)
{
    Persona nuevaPersona;
    nuevaPersona.idLocalidad=888;
    nuevaPersona.idPersona=666;
    strcpy( nuevaPersona.nombrePersona, "natalia natalia");
    return nuevaPersona;
}
