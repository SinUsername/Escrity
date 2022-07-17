#include <stdio.h>
#include <windows.h>

#include <time.h>

#include <stdlib.h>

#define True 1

typedef const char * ptring;
typedef void Override;

char INPUT[500];

void sFile (const char * file, const char * data)
{
	FILE *archivo;

	archivo = fopen(file, "a");

	if (archivo == NULL)
	{
		perror("Escrity ");
		return;
	}
	printf("Escrity: guardado: '%s'", file);
	fprintf(archivo, "%s\n", data);
	fclose(archivo);
}

int StrGenereRandom(int inicio, int fin)
{
    srand(time(NULL));
    inicio = rand() % fin;

    return inicio;
}

Override DuplicText(const char *text, int cantidad, int tipo)
{
    int fin = 0, ale = 0, figura;

    if (tipo == 0)
    {
        while (1)
        {
            fin++;
            printf("%s", text);
            if (fin == cantidad)
            {
                break;
            }
        }
    }
    else if (tipo == 1)
    {
        while (1)
        {
            fin++;
            printf("%s ", text);
            if (fin == cantidad)
            {
                break;
            }
        }
    }
    if (tipo == 2)
    {
        while (1)
        {
            fin++;
            printf("%s\n", text);
            if (fin == cantidad)
            {
                break;
            }
        }
    }

    if (tipo == 3)
    {
        if (text == NULL)
        {
            while (1)
            {
                fin++;
                printf(" ");
                if (fin == cantidad)
                {
                    break;
                }
            }
        }
    }

    if (tipo == -1)
    {
        while (fin != 1620)
        {
            fin++;
            printf("#");
            if (fin == cantidad)
            {
                break;
            }
        }
    }

    if (tipo == -2)
    {
        ale = StrGenereRandom(fin, 1660);
        figura = StrGenereRandom(0, 5);
        if (figura == 0)
        {
            while (fin != ale)
            {
                fin++;
                printf("#");
                if (fin == cantidad)
                {
                    break;
                }
            }
        }
        else if (figura == 1)
        {
            while (fin != ale)
            {
                fin++;
                printf("&");
                if (fin == cantidad)
                {
                    break;
                }
            }
        }

        if (figura == 3)
        {
            while (fin != ale)
            {
                fin++;
                printf("[#]");
                if (fin == cantidad)
                {
                    break;
                }
            }
        }
        else if (figura == 4)
        {
            while (fin != ale)
            {
                fin++;
                printf("=");
                if (fin == cantidad)
                {
                    break;
                }
            }
        }
    }
}

static void works (const char * work , int y){


    GotoXY(0,y);
    printf("%s",work);

}

void Edit_File(/*char start[500]*/)
{
    char save[] = "save";
    char newFile[] = "1";
    char file[500];

    while (True)
    {
        CLS();
        DuplicText("=", 80, 0);
        GotoXY(26, 1);
        printf("Escrity Edit\n");
        printf("Archivo: main.c*\n");
        printf("Configuracion: save for exit | 1 for create new file\n");
        DuplicText("=", 80, 0);
        works(INPUT,7);
        printf("\n\n");
        printf(">> ");
        gets(INPUT);
        if (strcmp(INPUT, save) == 0)
        {
            return;
        }
        if (strcmp(INPUT, newFile) == 0)
        {
            gets(file);

            while (strcmp(INPUT, save) != 0)
            {
                system("clear");
                DuplicText("=", 60, 0);
                GotoXY(26, 1);
                printf("Escrity Edit\n");
                printf("Archivo: %s*\n", file);
                printf("Configuracion: save for exit | 1 for create new file\n");
                DuplicText("=", 60, 0);
                printf("\n\n");
                printf(">> ");
                gets(INPUT);
                if (strcmp(INPUT, save) == 0)
                {
                    return;
                }
                GotoXY(0, 23);
                sFile(file, INPUT);
                printf("\n");
                Sleep(1200);
            }
        }
        GotoXY(0, 23);
        sFile("main.c", INPUT);
        printf("\n");
        Sleep(1200);
    }
}

static void StringReadFileModeRB (const char *URL)
{
	FILE *lectura;
	char variable[1025];

	lectura = fopen(URL, "rb");

	if (lectura == NULL)
	{
		perror("StringLibrary ");
		printf("Directorio o Archivo: [\" ");
		printf("%s", URL);
		printf(". \"] \n");
	}
	else
	{
		while (feof(lectura) == 0)
		{
			fgets(variable, 1025, lectura);
			printf("%s", variable);
		}
	}
	fclose(lectura);
}

void fileAssets (const char nameAsset[1024]){
    
    char cat[1024] = ".asset";
	char nose[1024];

	FILE *file;

	strcpy(nose, nameAsset);

	strcat(nose, cat);

	file = fopen(nose, "r");

	/*if (file == NULL)
	{
		printf("Escrity: \" %s \" error no create asset'", nameAsset);
		return;
	}

	fprintf(file, "%s", data);
	printf("Escrity: Se ha guardado\n");*/
	
	StringReadFileModeRB(nose);
    
}

void File (const char * file, const char * data)
{
	FILE *archivo;

	archivo = fopen(file, "wb");

	if (archivo == NULL)
	{
		perror("Escrity ");
		return;
	}
	printf("Escrity: guardado: '%s'", file);
	fprintf(archivo, "%s", data);
	fclose(archivo);
}

int Random(int inicio, int fin)
{
	srand(time(NULL));
	inicio = rand() % fin;

	return inicio;
}

void Char1(int inicio, int fin){

	srand(time(NULL));
	inicio = rand() % fin;

	if(inicio == 0){
		printf("A");
	}
	else if(inicio == 1){
		printf("B");
	}
	if(inicio == 2){
		printf("C");
	}
	else if(inicio == 3){
		printf("D");
	}
	if(inicio == 4){
		printf("E");
	}
	else if(inicio == 5){
		printf("F");
	}
	if(inicio == 6){
		printf("G");
	}
	else if(inicio == 7){
		printf("H");
	}
	if(inicio == 8){
		printf("I");
	}
	else if(inicio == 9){
		printf("J");
	}
	if(inicio == 10){
		printf("K");
	}
	else if(inicio == 11){
		printf("L");
	}
	if(inicio == 12){
		printf("M");
	}
	else if(inicio == 13){
		printf("N");
	}
	if(inicio == 14){
		printf("O");
	}
	else if(inicio == 15){
		printf("P");
	}
	if(inicio == 16){
		printf("Q");
	}
	else if(inicio == 17){
		printf("R");
	}
	if(inicio == 18){
		printf("S");
	}
	else if(inicio == 19){
		printf("T");
	}
	if(inicio == 20){
		printf("U");
	}
	else if(inicio == 21){
		printf("V");
	}
	if(inicio == 22){
		printf("W");
	}
	else if(inicio == 23){
		printf("X");
	}
	if(inicio == 24){
		printf("Y");
	}
	else if(inicio == 25){
		printf("Z");
	}

	if(inicio == 26){
		printf("a");
	}
	else if(inicio == 27){
		printf("b");
	}
	if(inicio == 28){
		printf("c");
	}
	else if(inicio == 29){
		printf("d");
	}
	if(inicio == 30){
		printf("e");
	}
	else if(inicio == 31){
		printf("f");
	}
	if(inicio == 32){
		printf("g");
	}
	else if(inicio == 33){
		printf("h");
	}
	if(inicio == 34){
		printf("i");
	}
	else if(inicio == 35){
		printf("j");
	}
	if(inicio == 36){
		printf("k");
	}
	else if(inicio == 37){
		printf("l");
	}
	if(inicio == 38){
		printf("m");
	}
	else if(inicio == 39){
		printf("n");
	}
	if(inicio == 40){
		printf("o");
	}
	else if(inicio == 41){
		printf("p");
	}
	if(inicio == 42){
		printf("q");
	}
	else if(inicio == 43){
		printf("r");
	}
	if(inicio == 44){
		printf("s");
	}
	else if(inicio == 45){
		printf("t");
	}
	if(inicio == 46){
		printf("u");
	}
	else if(inicio == 47){
		printf("v");
	}
	if(inicio == 48){
		printf("w");
	}
	else if(inicio == 49){
		printf("x");
	}
	if(inicio == 50){
		printf("y");
	}
	else if(inicio == 51){
		printf("z");
	}

}

void SetTitle (const char * title){

	SetConsoleTitle(title);

}

void CLS (void){

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    DWORD bufferSize, charsWritten;

    COORD topleft = {0, 0};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    GetConsoleScreenBufferInfo(hConsole, &csbi);
    bufferSize = csbi.dwSize.X * csbi.dwSize.Y;
    FillConsoleOutputCharacter(hConsole, TEXT(' '), bufferSize, topleft, &charsWritten);
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    FillConsoleOutputAttribute(hConsole, csbi.wAttributes, bufferSize, topleft, &charsWritten);
    SetConsoleCursorPosition(hConsole, topleft);

}

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

	CLS();

}

static void charNewLines (int cand){

	if(cand == 1){
		printf("\n");
	}
	else if(cand == 2){
		printf("\n\n");
	}

}

static void Juego_Lee_Tecla()
{
	getchar();
}

static void view_asset (int URL){

    //int numbers[1024];
    //printf("%d ",URL);



    if(URL == 31){

        printf("[ ] = %d",URL);
        return;

    } else if(URL == 32){

        printf("[\\n] = %d",URL);
        return;

    }

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
		perror("System  ");
	}

	while (opcion != 33)
	{
		charClear();
		GotoXY(31,2);
		printf("CreatorSprits\n\n");
		printf("Nombre del archivo: %s\n", nose);

		printf("Memoria estatica ocupada: %dBytes - 4,98kb\n",8*1024+8*1024+8*1024+8*1024+8*1024+4+4+4+8);
		printf("Opciones: 0 - 32 para caracteres 33 para salir\n\n");
		printf("Version del editador: 1.0\n\n");
		printf("Numero anterior\n\n\n");
		view_asset(opcion);
		printf("\n\n\nMarterial:\n\n");
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
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[0]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 1)
		{
			fprintf(db, "%c", caracters[1]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[1]);
			Juego_Lee_Tecla();
		}
		if (opcion == 2)
		{
			fprintf(db, "%c", caracters[2]);
		    printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[2]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 3)
		{
			fprintf(db, "%c", caracters[3]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[3]);
			Juego_Lee_Tecla();
		}
		if (opcion == 4)
		{
			fprintf(db, "%c", caracters[4]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[4]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 5)
		{
			fprintf(db, "%c", caracters[5]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[5]);
			Juego_Lee_Tecla();
		}
		if (opcion == 6)
		{
			fprintf(db, "%c", caracters[6]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[6]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 7)
		{
			fprintf(db, "%c", caracters[7]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[7]);
			Juego_Lee_Tecla();
		}
		if (opcion == 8)
		{
			fprintf(db, "%c", caracters[8]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[8]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 9)
		{
			fprintf(db, "%c", caracters[9]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[9]);
			Juego_Lee_Tecla();
		}
		if (opcion == 10)
		{
			fprintf(db, "%c", caracters[10]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[10]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 11)
		{
			fprintf(db, "%c", caracters[11]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[11]);
			Juego_Lee_Tecla();
		}
		if (opcion == 12)
		{
			fprintf(db, "%c", caracters[12]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[12]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 13)
		{
			fprintf(db, "%c", caracters[13]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[13]);
			Juego_Lee_Tecla();
		}
		if (opcion == 14)
		{
			fprintf(db, "%c", caracters[14]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[14]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 15)
		{
			fprintf(db, "%c", caracters[15]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[15]);
			Juego_Lee_Tecla();
		}
		if (opcion == 16)
		{
			fprintf(db, "%c", caracters[16]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[16]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 17)
		{
			fprintf(db, "%c", caracters[17]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[17]);
			Juego_Lee_Tecla();
		}
		if (opcion == 18)
		{
			fprintf(db, "%c", caracters[18]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[18]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 19)
		{
			fprintf(db, "%c", caracters[19]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[19]);
			Juego_Lee_Tecla();
		}
		if (opcion == 20)
		{
			fprintf(db, "%c", caracters[20]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[20]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 21)
		{
			fprintf(db, "%c", caracters[21]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[21]);
			Juego_Lee_Tecla();
		}
		if (opcion == 22)
		{
			fprintf(db, "%c", caracters[22]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[22]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 23)
		{
			fprintf(db, "%c", caracters[23]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[23]);
			Juego_Lee_Tecla();
		}
		if (opcion == 24)
		{
			fprintf(db, "%c", caracters[24]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[24]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 25)
		{
			fprintf(db, "%c", caracters[25]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[25]);
			Juego_Lee_Tecla();
		}
		if (opcion == 26)
		{
			fprintf(db, "%c", caracters[26]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[26]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 27)
		{
			fprintf(db, "%c", caracters[27]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[27]);
			Juego_Lee_Tecla();
		}
		if (opcion == 28)
		{
			fprintf(db, "%c", caracters[28]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[28]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 29)
		{
			fprintf(db, "%c", caracters[29]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[29]);
			Juego_Lee_Tecla();
		}
		if (opcion == 30)
		{
			fprintf(db, "%c", caracters[30]);
			printf("Escrity: Se ha guardado el caracter: [%c]\n", caracters[30]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 31)
		{
			fprintf(db, " ");
			printf("Escrity: Se ha guardado el caracter: [ ]\n");
			Juego_Lee_Tecla();
		}
		if (opcion == 32)
		{
			fprintf(db, "\n");
			printf("Escrity: Se ha guardado el caracter: [\\n]\n");
			Juego_Lee_Tecla();
		}
		else if (opcion == 100)
		{
			//Juego_Lee_Tecla();

			fprintf(db , "%c%c%c",caracters[1] , caracters[0] , caracters[0]);

			printf("Escrity: Se ha guardado los caracteres: %c%c%c",caracters[1] , caracters[0] , caracters[0]);

            Juego_Lee_Tecla();




		}



		if (opcion == 101)

		{

			//Juego_Lee_Tecla();

			fprintf(db , "%c%c%c",caracters[1] , caracters[0] , caracters[1]);

			printf("Escrity: Se ha guardado los caracteres: %c%c%c",caracters[1] , caracters[0] , caracters[1]);

			Juego_Lee_Tecla();



		}



		else if (opcion == 102)

		{

			//Juego_Lee_Tecla();

			fprintf(db , "%c%c%c",caracters[1] , caracters[0] , caracters[2]);

			printf("Escrity: Se ha guardado los caracteres: %c%c%c",caracters[1] , caracters[0] , caracters[2]);

			Juego_Lee_Tecla();



		}




	}

	fclose(db);
}
























