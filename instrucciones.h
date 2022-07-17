#ifndef INSTRUCCIONES_H
#define INSTRUCCIONES_H

typedef char Public;
typedef char String[100];
typedef char * string[500];
typedef  char matrix[5][5];
typedef int var;

#define N 50

Public creaArchivo[N] = "crea.file.new(TEXT):";
Public abreArchivo[N] = "crea.file.open(FILE);";
Public eliminaArchivo[N] = "crea.file.delete(FILE):";
Public creaAssets[N] = "crea.Asset.new(TEXT):";
Public abreAssets[N] = "crea.Asset.open(ASSET):";
Public imprime[N] = "print(TEXT):";
Public limpiar[N] = "clear(PANTALLA):";
Public suma[N] = "suma(N,N):";
Public resta[N] = "resta(N,N):";
Public multiplica[N] = "multiplica(N,N):";
Public divide[N] = "divide(N,N):";
Public comparaNum[N] = "nbrcmp(0,0):";
Public comparaStr[N] = "strcmp(NULL , NULL):";
Public createProject[] = "Escrity.new.project.in(.c):";
#endif // INSTRUCCIONES_H
