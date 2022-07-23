#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <stdio.h>
#include <string.h>

#include "resource.h"
#include "funciones.c"

#define N 50

typedef char Public;

//importaciones
Public importacion1[N] = "crea.importation.stringgame:";
Public importacion_standar[N] = "crea.importation.standar:";

//Declaracion de funciones
Public funcion_principal[N] = "TYP.main.[VOID]<";

//Declaracion de variables
Public declara_int[N] = "integer.";
Public declara_string[N] = "string.";
Public declara_float[N] = "float.";

//Uso de las variables declaradas
Public usa_int[N] = "=";
Public usa_string[N] = "::";
Public usa_float[N] = "=";

//Funciones para usar
Public print[N] = "print::";
Public lee_[N] = "crea.integer.system.in[";

//Bucles
Public bucle_true[N] = "while[true]<";
Public bucle_false[N] = "while[false]<";

//Llaves , parentecis , punto y coma y mas
Public llave_open[N] = "<";
Public llave_close[N] = ">";
Public parentecis_open[N] = "[";
Public parentecis_close[N] = "]";
Public punto_coma[N] = ";";
//Condicionales

//Structs
Public StructAsset[N] = "#BIT::ASSET::onStart:";
Public StructTexture[N] = "#BIT::TEXTURE::onStart:";
/*Public StructScene[N] = "#BIT::SCENEOBJECT::onStart:";
Public StructObject[N] = "#BIT::OBJECT::onStart:";
Public StructNewObject[N] = "#BIT::NEWOBJECT::onStart:";
Public StructLimit[N] = "#BIT::LIMITOBJECT::onStart:";

//Funciones , codigos , bucles especiales
Public ReadSprit[N] = "readSprit[";
Public moveObject1[N] = "crea.importation.moveObject.stringgame.asset.";
Public moveObject2[N] = "crea.importation.moveObject.stringgame.posX.";
Public moveObject3[N] = "crea.importation.moveObject.stringgame.posY.";
Public moveObject4[N] = "crea.importation.moveObject.stringgame.Key1.";
Public moveObject5[N] = "crea.importation.moveObject.stringgame.Key2.";
Public moveObject6[N] = "crea.importation.moveObject.stringgame.Key3.";
Public moveObject7[N] = "crea.importation.moveObject.stringgame.Key4.";

Public limitObject1[N] = "crea.importation.limitObject.stringgame.X1.";
Public limitObject2[N] = "crea.importation.limitObject.stringgame.X2.";
Public limitObject3[N] = "crea.importation.limitObject.stringgame.Y1.";
Public limitObject4[N] = "crea.importation.limitObject.stringgame.Y2.";

Public Sizeof[N] = "system.sizeof.";
Public hidden[N] = "system.hidden.cursor.";
Public attributeText[N] = "system.attributeText.";
Public gotoX[N] = "system.GotoX.";
Public gotoY[N] = "system.GotoY.";
Public Exit[N] = "system.Exit:";*/

typedef char String[100];
typedef char *string[500];
typedef char matrix[5][5];
typedef int var;

char creaArchivo[N] = "crea.file.new(TEXT):";
char abreArchivo[N] = "crea.file.open(FILE):";
char eliminaArchivo[N] = "crea.file.delete(FILE):";
char creaSprit[N] = "crea.Sprit.new(TEXT):";
char abreSprit[N] = "crea.Sprit.open(ASSET):";
char creaAssets[N] = "crea.Asset.new(TEXT):";
char abreAssets[N] = "crea.Asset.open(ASSET):";
char imprime[N] = "print(TEXT):";
char limpiar[N] = "clear(PANTALLA):";
char suma[N] = "suma(N,N):";
char resta[N] = "resta(N,N):";
char multiplica[N] = "multiplica(N,N):";
char divide[N] = "divide(N,N):";
char comparaNum[N] = "nbrcmp(0,0):";
char comparaStr[N] = "strcmp(NULL , NULL):";
char createProject[N] = "Escrity.new.project.in(.c):";
char createNewFile[N] = "Escrity.new.file.in(.c):";
char createProject2[N] = "Escrity.new.project(Escrity):";

void Edit_Project(void);

HINSTANCE hInst;

void InsertarMenu(HWND hWnd);

int window();

BOOL CALLBACK DialogProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    String user1, user2, user3, user4;
    float N1, N2, N3, num1, num2, result;
    //char Item_save1;
    //void * VoidText = NULL;

    switch (uMsg)
    {
    case WM_INITDIALOG:
        /*
             * TODO: Add code to initialize the dialog.
             */
        SetTitle("Escrity : cmd");
        printf("System : Escrity : open!\n");
        InsertarMenu(hwndDlg);
        return TRUE;

    case WM_CLOSE:
        printf("System : user : Desa salir?\n");
        if (MessageBox(hwndDlg, "Desea cerrar Escrity", "Salir", MB_ICONQUESTION | MB_YESNO) == IDYES)
        {
            EndDialog(hwndDlg, 0);
        }
        printf("System : user : Desea salir? : No!\n");
        return TRUE;

    case WM_COMMAND:
        switch (LOWORD(wParam))
        {
        /*
                 * TODO: Add more control ID's, when needed.
                 */
        case IDC_BTN_QUIT:

            GetDlgItemText(hwndDlg, IDC_EDIT_INPUT2, user1, 100);
            
            sFile2("assets.h","Public ");
            sFile2("assets.h",user1);
            sFile2("assets.h",user1);
            sFile2("assets.h","[] = \"");
            sFile2("assets.h","URL_");
            sFile2("assets.h",user1);
            sFile("assets.h","\";");
            MessageBox(hwndDlg , "Se ha agregado el asset o sprit en el proyecto" , "Escrity : new sprit" , MB_ICONINFORMATION);
            //yReadFile(user1);

            return TRUE;

        case IDC_BTN_TEST:

            GetDlgItemText(hwndDlg, IDC_EDIT_INPUT, user1, 100);

            user4[500] = user1[500];

            //user4 = user1;

            if (strcmp(user1, imprime) == 0)
            {
                printf("System : user : input : ");
                fflush(stdin);
                gets(user2);
                MessageBox(hwndDlg, user2, "Escrity : output", MB_ICONINFORMATION);
            }
            else if (strcmp(user1, limpiar) == 0)
            {
                CLS();
            }
            if (strcmp(user1, creaSprit) == 0)
            {
                printf("System : user : input : ");
                fflush(stdin);
                gets(user3);
                printf("System : open : Escrity_Creator_Sprit : nombre del asset : %s : cargando...\n", user3);
                Sleep(3500);
                CLS();
                asset(user3);
            }
            if (strcmp(user1, abreSprit) == 0)
            {
                printf("System : user : input : ");
                fflush(stdin);
                gets(user3);
                fileAssets(user3);
            }
            if (strcmp(user1, creaAssets) == 0)
            {
                printf("System : user : input : ");
                fflush(stdin);
                gets(user3);
                printf("System : open : Escrity_Creator_Assets : nombre del asset : %s : cargando...\n", user3);
                Sleep(3500);
                CLS();
                asset(user3);
            }
            if (strcmp(user1, abreAssets) == 0)
            {
                printf("System : user : input : ");
                fflush(stdin);
                gets(user3);
                fileAssets(user3);
            }
            else if (user1 == " ")
            {
                sFile("UserFile.void", user1);
            }
            if (strcmp(user1, suma) == 0)
            {
                printf("System: Escrity: crea.importation.math.suma.NULL.output.new.number: N: ");
                fflush(stdin);
                scanf("%i", &num1);
                printf("System: Escrity: crea.importation.math.suma.NULL.output.new.number: N: ");
                fflush(stdin);
                scanf("%f", &num2);
                fflush(stdin);
                result = num1 + num2;
                printf("System: N(%f) + (%f) = (%f)\n", num1, num2, result);
            }
            else if (strcmp(user1, resta) == 0)
            {
                printf("System: Escrity: crea.importation.math.resta.NULL.output.new.number: N: ");
                fflush(stdin);
                scanf("%f", &num1);
                printf("System: Escrity: crea.importation.math.resta.NULL.output.new.number: N: ");
                fflush(stdin);
                scanf("%f", &num2);
                fflush(stdin);
                result = num1 - num2;
                printf("System: N(%f) - (%f) = (%f)\n", num1, num2, result);
            }

            if (strcmp(user1, createProject) == 0)
            {
                /*printf("System : user : input : ");
                        fflush(stdin);
                        gets(user3);*/

                sFile("main.c", "/*New project game\nCode*/\n#include \"include/stringgame.h\"\n\n");
                //File("game.cdp","<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\" ?>\n<CodeBlocks_project_file>\n	<FileVersion major=\"1\" minor=\"6\" />\n	<Project>\n		<Option title=\"game\" />\n		<Option pch_mode=\"2\" />\n		<Option compiler=\"gcc\" />\n		<Build>\n			<Target title=\"Debug\">\n				<Option output=\"\bin\Debug\game\" prefix_auto=\"1\" extension_auto=\"1\" />\n				<Option object_output=\"obj\Debug\\\" />\n				<Option type=\"1\" />\n				<Option compiler=\"gcc\" />\n				<Compiler>\n					<Add option=\"-g\" />\n				</Compiler>\n			</Target>\n			<Target title=\"Release\">\n 				<Option output=\"bin\Release\game\" prefix_auto=\"1\" extension_auto=\"1\" />\n				<Option object_output=\"obj\Release\\\" />\n				<Option type=\"1\" />\n				<Option compiler=\"gcc\" />\n				<Compiler>\n					<Add option=\"-O2\" />\n				</Compiler>\n				<Linker>\n					<Add option=\"-s\" />\n				</Linker>\n			</Target>\n		</Build>\n		<Compiler>\n			<Add option=\"-Wall\" />\n		</Compiler>\n		<Unit filename=\"main.c\">\n			<Option compilerVar=\"CC\" />\n		</Unit>\n		<Extensions>\n			<code_completion />\n			<debugger />\n		</Extensions>\n	</Project>\n</CodeBlocks_project_file>\n");
                //File("game.depend","# depslib dependency file v1.0\n");
                //File("game.layout","<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\" ?><CodeBlocks_layout_file>\n	<ActiveTarget name=\"Debug\" />\n	<File name=\"main.c\" open=\"1\" top=\"1\" tabpos=\"0\">\n		<Cursor position=\"0\" topLine=\"0\" />\n	</File>\n</CodeBlocks_layout_file>\n\n");
                MessageBox(hwndDlg, "Se ha creado el proyecto con exito...", "System : New Project", MB_ICONINFORMATION);
                SetTitle("Escrity : cmd : New project");
                Edit_File();
            }

            if (strcmp(user1, createNewFile) == 0)
            {
                printf("System : user : input : ");
                fflush(stdin);
                gets(user3);
                Edit2(user3);
            }

            if (strcmp(user1, createProject2) == 0)
            {
                MessageBox(hwndDlg, "Se ha creado el projecto", "Escrity : new : native : project", MB_ICONINFORMATION);
                Edit_Project();
            }

            if (strcmp(user1, multiplica) == 0)
            {
                printf("System: Escrity: crea.importation.math.multip.NULL.output.new.number: N: ");
                fflush(stdin);
                scanf("%f", &num1);
                printf("System: Escrity: crea.importation.math.multip.NULL.output.new.number: N: ");
                fflush(stdin);
                scanf("%f", &num2);
                fflush(stdin);
                result = num1 * num2;
                printf("System: N(%f) * (%f) = (%f)\n", num1, num2, result);
            }
            else if (strcmp(user1, divide) == 0)
            {
                printf("System: Escrity: crea.importation.math.division.NULL.output.new.number: N: ");
                fflush(stdin);
                scanf("%f", &N1);
                printf("System: Escrity: crea.importation.math.division.NULL.output.new.number: N: ");
                fflush(stdin);
                scanf("%f", &N2);
                printf("System: Escrity: crea.importation.math.division.%%g.view.numbers.out:\n");
                fflush(stdin);
                N3 = N1 / N2;
                printf("System: N(%f) / (%f) = (%f)\n", N1, N2, N3);
            }
            if (strcmp(user1, eliminaArchivo) == 0)
            {
                printf("System : input : ");

                fflush(stdin);

                gets(user2);

                if (remove(user2) == -1)
                {
                    SetTitle("Escrity : cmd : error");

                    MessageBox(hwndDlg, "Archivo no eliminado...", "System : delete file : error", MB_ICONERROR);

                    SetTitle("Escrity : cmd");
                }

                else
                {
                    MessageBox(hwndDlg, "Archivo Eliminado con exito", "System : delete file", MB_ICONINFORMATION);
                }
            }
            /*else{
                        printf("Escrity : No reconoce la instruccion dada : %s = Bad!\n" , user1);
                        MessageBox(hwndDlg , "Error Escrity no reconoce la instruccion" , "Escrity : error", MB_ICONERROR);
                   }*/

            return TRUE;
        case CM_SALIR:
            EndDialog(hwndDlg, 0);
            return TRUE;
        case CM_PRUEBA:

            GetDlgItemText(hwndDlg, IDC_EDIT_INPUT, user1, 100);

            /*if(strcmp(user1,(const char *)VoidText) == 0){

                SetTitle("Escrity : cmd : error");

                MessageBox(hwndDlg, "El Archivo no se pudo eliminar...", "System : delete file : error", MB_ICONERROR);

                SetTitle("Escrity : cmd");

                return TRUE;

            }*/

            if (remove(user1) == -1)
                {
                    SetTitle("Escrity : cmd : error");

                    MessageBox(hwndDlg, "El Archivo no se pudo eliminar...", "System : delete file : error", MB_ICONERROR);

                    SetTitle("Escrity : cmd");
                }

                else
                {
                    MessageBox(hwndDlg, "Archivo Eliminado con exito", "System : delete file", MB_ICONINFORMATION);
                }

            return TRUE;

        case CM_ARCHIVOS:

            printf("System : user : input : ");
            fflush(stdin);
            gets(user3);
            Edit2(user3);

            return TRUE;

        case CM_CREADOR_IMG:

            MessageBox(hwndDlg, "1.-crea.file.new(TEXT):\n2.-crea.file.open(FILE):\n3.-crea.file.delete(FILE):\n4.-crea.Asset.new(TEXT):\n5.-crea.Asset.open(ASSET):\n6.-print(TEXT):\n7.-clear(PANTALLA):\n8.-suma(N,N):\n9.-resta(N,N):\n10.-multiplica(N,N):\n11.-divide(N,N):\n12.-Escrity.new.project.in(.c):\n13.-Escrity.new.file.in(.c):\n14.-Escrity.new.project(Escrity):\n16.-crea.Sprit.new(TEXT):\n", "Intrucciones o camandos", MB_ICONINFORMATION);

            return TRUE;
        case CM_CREADOR_TEXTURE:

            GetDlgItemText(hwndDlg, IDC_EDIT_INPUT2, user1, 100);
            /*if(strcmp(user1,(const char *)VoidText) == 0){

                MessageBox(hwndDlg , "Error al crear la texture en el archivo 'textures.h'","Escrity : error",MB_ICONERROR);

            }*/

            sFile2("textures.h","//Esta es una texture de ");
            sFile("textures.h",user1);
            sFile2("textures.h","void ");
            sFile2("textures.h","texture_");
            sFile2("textures.h",user1);
            sFile("textures.h"," (void){");
            sFile("textures.h","    // TODO: Implement this function");
            sFile2("textures.h","    struct texture ");
            sFile2("textures.h",user1);
            sFile("textures.h",";");
            sFile2("textures.h","    ");
            sFile2("textures.h",user1);
            sFile("textures.h",".ID = 1;");
            sFile2("textures.h","    ");
            sFile2("textures.h",user1);
            sFile("textures.h",".mode = 1;");
            sFile2("textures.h","    ");
            sFile2("textures.h","strcpy(");
            sFile2("textures.h",user1);
            sFile2("textures.h",".name");
            sFile2("textures.h",",\"Object_");
            sFile2("textures.h",user1);
            sFile("textures.h","\");");
            sFile2("textures.h","    ");
            sFile2("textures.h","strcpy(");
            sFile2("textures.h",user1);
            sFile2("textures.h",".nameFile");
            sFile2("textures.h",",\"");
            sFile2("textures.h",user1);
            sFile("textures.h","\");");
            sFile2("textures.h","    ");
            sFile2("textures.h","strcpy(");
            sFile2("textures.h",user1);
            sFile2("textures.h",".content");
            sFile2("textures.h",",\"");
            sFile2("textures.h","(Data or texture)");
            sFile("textures.h","\"); //Here you data or strings");
            sFile2("textures.h","    StrPrintTexture(&");
            sFile2("textures.h",user1);
            sFile("textures.h",");");
            sFile("textures.h","}");
            sFile("textures.h","");
            MessageBox(hwndDlg , "Se ha guardado la texture en el archivo 'textures.h" , "Escrity : save texture" , MB_ICONINFORMATION);


        return TRUE;

        case CM_CREADOR_ASSET:

            GetDlgItemText(hwndDlg, IDC_EDIT_INPUT2, user1, 100);        

            sFile2("newAssets.h","//Este es un asset de ");
            sFile("newAssets.h",user1);
            sFile2("newAssets.h","void ");
            sFile2("newAssets.h","asset_");
            sFile2("newAssets.h",user1);
            sFile("newAssets.h"," (void){");
            sFile("newAssets.h","    // TODO: Implement this function");
            sFile2("newAssets.h","    struct asset ");
            sFile2("newAssets.h",user1);
            sFile("newAssets.h",";");
            sFile2("newAssets.h","    ");
            sFile2("newAssets.h",user1);
            sFile("newAssets.h",".ID = 1;");
            sFile2("newAssets.h","    ");
            sFile2("newAssets.h",user1);
            sFile("newAssets.h",".color = 1;");
            sFile2("newAssets.h","    ");
            sFile2("newAssets.h","strcpy(\"");
            sFile2("newAssets.h",user1);
            sFile2("newAssets.h",".name\",\"asset_");
            sFile2("newAssets.h",user1);
            sFile("newAssets.h","\");");
            sFile2("newAssets.h","    ");
            sFile2("newAssets.h","strcpy(\"");
            sFile2("newAssets.h",user1);
            sFile2("newAssets.h",".data\",\"(Strings Nulls)");
            sFile("newAssets.h","\");");
            sFile2("newAssets.h","    ");
            sFile2("newAssets.h","StrAssetStart(&");
            sFile2("newAssets.h",user1);
            sFile("newAssets.h",");");
            sFile2("newAssets.h","    ");
            sFile2("newAssets.h","StrAssetPaint(&");
            sFile2("newAssets.h",user1);
            sFile("newAssets.h",");");
            sFile2("newAssets.h","    ");
            sFile2("newAssets.h","StrAssetEnd(&");
            sFile2("newAssets.h",user1);
            sFile("newAssets.h",");");
            sFile("newAssets.h","}");
            sFile("newAssets.h","");
            
            MessageBox(hwndDlg , "Se ha guardado el asset en el archivo 'newAssets.h" , "Escrity : save asset" , MB_ICONINFORMATION);

        return TRUE;
        }
    }

    return FALSE;
}

int window()
{
    HINSTANCE hInstance;
    hInst = hInstance;

    return DialogBox(hInstance, MAKEINTRESOURCE(DLG_IMG), NULL, (DLGPROC)DialogProc);
}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    hInst = hInstance;

    // The user interface is a modal dialog box
    return DialogBox(hInstance, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)DialogProc);
}

void Edit_Project(void)
{
    char savd[] = "save";

    while (True)
    {
        CLS();
        DuplicText("=", 80, 0);
        GotoXY(26, 1);
        printf("Escrity Edit Project\n");
        printf("Archivo: main.c*\n");
        printf("Configuracion: save for exit\n");
        DuplicText("=", 80, 0);
        works(INPUT, 7);
        printf("\n\n");
        printf(">> ");
        gets(input);

        if(strcmp(input,savd) == 0){

            return;

        }

        /*
Public StructScene[N] = "#BIT::SCENEOBJECT::onStart:";
Public StructObject[N] = "#BIT::OBJECT::onStart:";
Public StructNewObject[N] = "#BIT::NEWOBJECT::onStart:";
Public StructLimit[N] = "#BIT::LIMITOBJECT::onStart:";
        */
        //Declaracion de structuras
        if(strcmp(input,StructAsset) == 0){

            GotoXY(0,23);
            sFile("main.c", "    struct asset Asset1;");
            sFile2("main.c","    ");
            sFile2("main.c","Asset1");
            sFile("main.c",".ID = 1;");
            sFile2("main.c","    ");
            sFile2("main.c","Asset1");
            sFile("main.c",".color = 1;");
            sFile2("main.c","    ");
            sFile2("main.c","strcpy(\"");
            sFile2("main.c","Asset1");
            sFile2("main.c",".name,\"asset_");
            sFile2("main.c","Asset1");
            sFile("main.c","\");");
            sFile2("main.c","    ");
            sFile2("main.c","strcpy(\"");
            sFile2("main.c","Asset1");
            sFile2("main.c",".data,\"(Strings Nulls)");
            sFile("main.c","\");");
            Sleep(1000);

            continue;

        }
        if(strcmp(input,StructAsset) == 0){

            GotoXY(0,23);
            sFile("main.c", "struct texture texture1;");
            Sleep(1000);

            continue;
        }
        //incluir la cabecera stringgame.h
        if (strcmp(input, importacion1) == 0)
        {
            GotoXY(0,23);
            sFile("main.c", "#include \"include\\stringgame.h\"");
            Sleep(1000);
            continue;
        }
        //Declacion de la funcion principal
        else if (strcmp(input, funcion_principal) == 0)
        {
            GotoXY(0,23);
            sFile("main.c", "int main (void){");
            Sleep(1000);
            continue;
        }
        //Declaraciones de variables int , char , float
        if (strcmp(input, declara_int) == 0)
        {
            CLS();
            DuplicText("=", 80, 0);
            GotoXY(26, 1);
            printf("Escrity Edit Project\n");
            printf("Archivo: main.c*\n");
            printf("Configuracion: save for exit\n");
            DuplicText("=", 80, 0);
            works(INPUT, 7);
            printf("\n\n");
            printf(">> %s", declara_int);
            gets(input2);
            strcat(declara_int, input2);
            memcpy(subText, &declara_int[8], 30);
            subText[31] = '\0';

            GotoXY(0,23);
            sFile2("main.c", "int ");
            GotoXY(20,23);
            sFile("main.c", subText);
            Sleep(1000);
            continue;
        }
        else if (strcmp(input, declara_string) == 0)
        {
            CLS();
            DuplicText("=", 80, 0);
            GotoXY(26, 1);
            printf("Escrity Edit Project\n");
            printf("Archivo: main.c*\n");
            printf("Configuracion: save for exit\n");
            DuplicText("=", 80, 0);
            works(INPUT, 7);
            printf("\n\n");
            printf(">> %s", declara_string);
            gets(input2);
            strcat(declara_string, input2);
            memcpy(subText, &declara_string[8], 30);
            subText[31] = '\0';

            GotoXY(0,23);
            sFile2("main.c", "char ");
            GotoXY(20,23);
            sFile("main.c", subText);
            Sleep(1000);
            continue;

        }
        if (strcmp(input, declara_float) == 0)
        {
            CLS();
            DuplicText("=", 80, 0);
            GotoXY(26, 1);
            printf("Escrity Edit Project\n");
            printf("Archivo: main.c*\n");
            printf("Configuracion: save for exit\n");
            DuplicText("=", 80, 0);
            works(INPUT, 7);
            printf("\n\n");
            printf(">> %s", declara_float);
            gets(input2);
            strcat(declara_float, input2);
            memcpy(subText, &declara_float[7], 30);
            subText[31] = '\0';

            GotoXY(0,23);
            sFile2("main.c", "float ");
            GotoXY(20,23);
            sFile("main.c", subText);
            Sleep(1000);
            continue;

        }
        //Usar las variables
        else if (strcmp(input, input) == 0)
        {
            CLS();
            DuplicText("=", 80, 0);
            GotoXY(26, 1);
            printf("Escrity Edit Project\n");
            printf("Archivo: main.c*\n");
            printf("Configuracion: save for exit\n");
            DuplicText("=", 80, 0);
            works(INPUT, 7);
            printf("\n\n");
            printf(">> %s", input);
            gets(input2);
            GotoXY(0,23);
            sFile2("main.c", input);
            GotoXY(10,23);
            sFile2("main.c", " ");
            GotoXY(20,23);
            sFile2("main.c", usa_int);
            GotoXY(30,23);
            sFile2("main.c", " ");
            GotoXY(40,23);
            sFile("main.c", input2);
            Sleep(1000);
            continue;
            //printf("%s%s%s\n",input,usa_int,input2);
            /*strcat(usa_int,input2);
        memcpy(subText,&usa_int[1],30);
        subText[31] = '\0';*/
        }

        //Funciones para imprimir , etc
        if (strcmp(input, print) == 0)
        {
            CLS();
            DuplicText("=", 80, 0);
            GotoXY(26, 1);
            printf("Escrity Edit Project\n");
            printf("Archivo: main.c*\n");
            printf("Configuracion: save for exit\n");
            DuplicText("=", 80, 0);
            works(INPUT, 7);
            printf("\n\n");
            printf(">> %s", print);
            gets(input2);
            strcat(print, input2);
            memcpy(subText, &print[7], 30);
            subText[31] = '\0';
            GotoXY(0,23);
            sFile2("main.c", "printf(\"");
            GotoXY(10,23);
            sFile2("main.c", subText);
            GotoXY(20,23);
            sFile("main.c", "\n\");");
            Sleep(1000);
            continue;

        }
        //Llaves , parentecis , y de mas
        else if (strcmp(input, llave_open) == 0)
        {
            GotoXY(0,23);
            sFile("main.c", "{");
            Sleep(1000);
            continue;
        }
        if (strcmp(input, llave_close) == 0)
        {
            GotoXY(0,23);
            sFile("main.c", "}");
            Sleep(1000);
            continue;
        }
        else if (strcmp(input, parentecis_close) == 0)
        {
            GotoXY(0,23);
            sFile("main.c", ")");
            Sleep(1000);
            continue;
        }
        if (strcmp(input, parentecis_open) == 0)
        {
            GotoXY(0,23);
            sFile("main.c", "(");
            Sleep(1000);
            continue;
        }
        else{

            GotoXY(0,23);
            sFile("main.c"," ");
            Sleep(1000);
            continue;

        }
    }
}

void InsertarMenu(HWND hWnd)
{
    HMENU hMenu1, hMenu2 , hMenu3 , hMenu4;

    hMenu1 = CreateMenu();                                                /* Manipulador de la barra de menú */
    hMenu2 = CreateMenu();
    hMenu3 = CreateMenu();
    hMenu4 = CreateMenu();
    //hMenu                                               /* Manipulador para el primer menú pop-up */
    AppendMenu(hMenu2, MF_STRING, CM_PRUEBA, "&Eliminar archivo"); /* 1º ítem */
    AppendMenu(hMenu2, MF_STRING, CM_ARCHIVOS, "&Crear archivo");    /* 2 item*/
    AppendMenu(hMenu2, MF_SEPARATOR, 0, NULL);                            /* 3º ítem (separador) */
    AppendMenu(hMenu4, MF_STRING, CM_CREADOR_IMG, "&Instrucciones");      /* 4"º ítem */
    AppendMenu(hMenu2, MF_STRING, CM_SALIR, "&Salir");                    /* 5º ítem */
    //hMenu3
    AppendMenu(hMenu3, MF_STRING, CM_CREADOR_TEXTURE, "&New texture in project");
    AppendMenu(hMenu3, MF_STRING, CM_CREADOR_ASSET, "&New asset in project");
    /* Inserción del menú pop-up */
    AppendMenu(hMenu1, MF_STRING | MF_POPUP, (UINT)hMenu2, "&Archivos");
    AppendMenu(hMenu1, MF_STRING | MF_POPUP, (UINT)hMenu3, "&Assets");
    AppendMenu(hMenu1, MF_STRING | MF_POPUP, (UINT)hMenu4, "&Commands");
    SetMenu(hWnd, hMenu1); /* Asigna el menú a la ventana hWnd */
}
