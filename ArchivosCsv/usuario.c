#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "usuario.h"


/** \brief
 *
 * \param name char*
 * \param lastName char*
 * \param id int
 * \param isEmpty int
 * \return eUsuario
 *
 */
eUsuario constructor(char* name, char* lastName, char* id, char* isEmpty)
{
    eUsuario usuario;
    strcpy(usuario.name, name);
    strcpy(usuario.lastName, lastName);
    usuario.id = atoi(id);
    strcpy(usuario.isEmpty, isEmpty);

    return usuario;
}
