#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED


typedef struct
{
    char name[500];
    char lastName[500];
    int id;
    char isEmpty[500];

}eUsuario;


eUsuario constructor(char*, char*, char*, char*);

#endif // USUARIO_H_INCLUDED
