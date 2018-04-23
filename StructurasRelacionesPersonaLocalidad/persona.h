#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

typedef struct{
    int idPersona;
    char  nombrePersona[50];
    int idLocalidad;
}Persona;


#endif // PERSONA_H_INCLUDED
void mostrarUnaPersona(Persona auxPersona);
Persona PedirDatosUnaPersona(void);
