#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED


typedef struct
{
    char name[500];
    char lastName[500];
    char id[500];
    char isEmpty[500];

}eUsuario;


eUsuario constructor(char* name, char* lastName, char* id, char isEmpty)
{
    eUsuario usuario;
    usuario.name = name;
    usuario.lastName = lastName;
    usuario.id = id;
    usuario.isEmpty =

}

#endif // USUARIO_H_INCLUDED
