#include <stdio.h>
#include <stdlib.h>
#define TAMANO 10

int guardarArrayEnTXT(int*, int, char*);
int guardarArrayEnBIN(int*, int, char*);
int mostrarArrayTXT(char*);
int mostrarArrayBIN(char*);


int main()
{
    int array[TAMANO] = {1,2,3,4,5,6,7,8,9,10};
    //guardarArrayEnTXT(array, TAMANO, "Array.txt");
    guardarArrayEnBIN(array, TAMANO, "ArrayBin.bin");
    //mostrarArrayTXT("Array.txt");
    mostrarArrayBIN("Array.bin");

    return 0;
}


int guardarArrayEnTXT(int* array, int tam, char nombre[])
{
    FILE* pArchivo;
    pArchivo = fopen(nombre, "w");

    int i;
    for(i=0; i<TAMANO; i++)
    {
        fprintf(pArchivo, "%d\n", array[i]);
    }

    fclose(pArchivo);

    return 0;
}


int guardarArrayEnBIN(int* array, int tam, char nombre[])
{
    FILE* pArchivo;
    pArchivo = fopen(nombre, "wb");

    int i;
    for(i=0; i<TAMANO; i++)
    {
        printf("%d", *(array+i));
        fwrite(array+i, 4, 1, pArchivo);
    }

    fclose(pArchivo);

    return 0;
}

int mostrarArrayTXT(char nombre[])
{
    char buffer[10];

    FILE* pArchivo;
    pArchivo = fopen(nombre, "r");

    int i;
    for(i=0; i<TAMANO; i++)
    {
        fgets(buffer, 10, pArchivo);
        puts(buffer);
    }

    fclose(pArchivo);

    return 0;
}


int mostrarArrayBIN(char* nombre)
{
    int auxInt;

    FILE* pArchivo;
    pArchivo = fopen(nombre, "rb");

    int i;
    for(i=0; i<TAMANO; i++)
    {
        fread(auxInt, 4, 1, pArchivo);
        printf("%d", auxInt);
    }

    fclose(pArchivo);

    return 0;
}
