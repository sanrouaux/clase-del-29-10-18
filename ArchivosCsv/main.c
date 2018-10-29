#include <stdio.h>
#include <stdlib.h>
#include "usuario.h"


int main()
{
    int i = 0;

    char name[500], lastName[500], id[500],isEmpty[500];
    eUsuario auxUsuario;

    eUsuario* pArrayUsuarios;
    pArrayUsuarios = (eUsuario*)malloc(sizeof(eUsuario)*10);

    FILE* pFile;
    pFile = fopen("MOCK_DATA.csv", "r");

    fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, name, lastName,isEmpty);

    while(!feof(pFile))
    {
        fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, name, lastName,isEmpty);

        auxUsuario = constructor(name, lastName, id, isEmpty);

        *(pArrayUsuarios + i) = auxUsuario;
        printf("%d - %s %s - %s\n", (pArrayUsuarios+i)->id, (pArrayUsuarios+i)->name, (pArrayUsuarios+i)->lastName,
               (pArrayUsuarios+i)->isEmpty);

        i++;
    }

    fclose(pFile);

    return(0);
}
