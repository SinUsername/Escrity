#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

static void GotoXY(int X , int Y){
	
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = X;
	dwPos.Y = Y;
	SetConsoleCursorPosition(hCon, dwPos);
}

static int StrScanInt(int Int){
	
	fflush(stdin);
	scanf("%i", &Int);
	fflush(stdin);

	return Int;
}

static void charClear (){

	system("clear");

}

static void charNewLines (int cand){

	if(cand == 1){
		printf("\n");
	}
	else if(cand == 2){
		printf("\n\n");
	}

}

static int Juego_Lee_Tecla()
{
	return getch();
}

static void view_asset (int URL){
    
    //int numbers[1024];
    //printf("%d ",URL);
    
    char caracters[1024] = {'%', '\\', '|', '=', '[', ']', '<', '>', '{', '}', '@', '#', '$', '_', '&', '-', '+', '(', ')', '/', '*', '\"', '\'', ':', ';', '!', '?', '~', '`', 'N'};
    
    printf("[%c] = %d",caracters[URL],URL);
    
}

void asset (char nombre_de_archivo[1024])
{
	FILE *db;
	char caracters[1024] = {'%', '\\', '|', '=', '[', ']', '<', '>', '{', '}', '@', '#', '$', '_', '&', '-', '+', '(', ')', '/', '*', '\"', '\'', ':', ';', '!', '?', '~', '`', 'N' , 'A' , 'B' , 'C'};
	int opcion = 0;

	int i;

	char cat[1024] = ".asset";
	char nose[1024];

	strcpy(nose, nombre_de_archivo);

	strcat(nose, cat);

	db = fopen(nose, "a");

	if (db == NULL)
	{
		perror("char ");
	}

	while (opcion != 33)
	{
		charClear();
		GotoXY(31,2);
		printf("CreatorSprits\n\n");
		printf("Nombre del archivo: %s\n", nose);
		printf("Opciones: 0 - 32 para caracteres 33 para salir\n\n");
		printf("Version del editador: 1.0\n\n");
		printf("Numero anterior\n\n\n");
		view_asset(opcion);
		printf("\n\n\nMarterial: \n\n");
		for (i = 0; i < 30; i++)
		{
			printf(" [%c] ", caracters[i]);
		}

		charNewLines(1);
		printf("\n");
		printf(">> ");
		opcion = StrScanInt(opcion);
		//GotoXY(0,14);
		charNewLines(1);

		if (opcion == 0)
		{
			fprintf(db, "%c", caracters[0]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[0]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 1)
		{
			fprintf(db, "%c", caracters[1]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[1]);
			Juego_Lee_Tecla();
		}
		if (opcion == 2)
		{
			fprintf(db, "%c", caracters[2]);
		    printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[2]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 3)
		{
			fprintf(db, "%c", caracters[3]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[3]);
			Juego_Lee_Tecla();
		}
		if (opcion == 4)
		{
			fprintf(db, "%c", caracters[4]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[4]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 5)
		{
			fprintf(db, "%c", caracters[5]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[5]);
			Juego_Lee_Tecla();
		}
		if (opcion == 6)
		{
			fprintf(db, "%c", caracters[6]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[6]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 7)
		{
			fprintf(db, "%c", caracters[7]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[7]);
			Juego_Lee_Tecla();
		}
		if (opcion == 8)
		{
			fprintf(db, "%c", caracters[8]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[8]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 9)
		{
			fprintf(db, "%c", caracters[9]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[9]);
			Juego_Lee_Tecla();
		}
		if (opcion == 10)
		{
			fprintf(db, "%c", caracters[10]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[10]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 11)
		{
			fprintf(db, "%c", caracters[11]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[11]);
			Juego_Lee_Tecla();
		}
		if (opcion == 12)
		{
			fprintf(db, "%c", caracters[12]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[12]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 13)
		{
			fprintf(db, "%c", caracters[13]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[13]);
			Juego_Lee_Tecla();
		}
		if (opcion == 14)
		{
			fprintf(db, "%c", caracters[14]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[14]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 15)
		{
			fprintf(db, "%c", caracters[15]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[15]);
			Juego_Lee_Tecla();
		}
		if (opcion == 16)
		{
			fprintf(db, "%c", caracters[16]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[16]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 17)
		{
			fprintf(db, "%c", caracters[17]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[17]);
			Juego_Lee_Tecla();
		}
		if (opcion == 18)
		{
			fprintf(db, "%c", caracters[18]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[18]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 19)
		{
			fprintf(db, "%c", caracters[19]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[19]);
			Juego_Lee_Tecla();
		}
		if (opcion == 20)
		{
			fprintf(db, "%c", caracters[20]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[20]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 21)
		{
			fprintf(db, "%c", caracters[21]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[21]);
			Juego_Lee_Tecla();
		}
		if (opcion == 22)
		{
			fprintf(db, "%c", caracters[22]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[22]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 23)
		{
			fprintf(db, "%c", caracters[23]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[23]);
			Juego_Lee_Tecla();
		}
		if (opcion == 24)
		{
			fprintf(db, "%c", caracters[24]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[24]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 25)
		{
			fprintf(db, "%c", caracters[25]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[25]);
			Juego_Lee_Tecla();
		}
		if (opcion == 26)
		{
			fprintf(db, "%c", caracters[26]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[26]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 27)
		{
			fprintf(db, "%c", caracters[27]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[27]);
			Juego_Lee_Tecla();
		}
		if (opcion == 28)
		{
			fprintf(db, "%c", caracters[28]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[28]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 29)
		{
			fprintf(db, "%c", caracters[29]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[29]);
			Juego_Lee_Tecla();
		}
		if (opcion == 30)
		{
			fprintf(db, "%c", caracters[30]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[30]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 31)
		{
			fprintf(db, " ");
			printf("StringLibrary: Se ha guardado el caracter: [ ]\n");
			Juego_Lee_Tecla();
		}
		if (opcion == 32)
		{
			fprintf(db, "\n");
			printf("StringLibrary: Se ha guardado el caracter: [\\n]\n");
			Juego_Lee_Tecla();
		}
		else if (opcion == 34)
		{
			system("pause");
		}
	}

	fclose(db);
}

int main (void){
    
    asset("example");
    if(remove("example.asset") == -1){
        printf("No se ha eliminado tu archivo\n");
    }else{
       printf("Se ha eliminado con exito tu archivo\n");
    }
    
    return 0;
}
