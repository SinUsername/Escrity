#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <stdio.h>
#include <string.h>

#include "resource.h"
#include "instrucciones.h"
#include "funciones.h"

HINSTANCE hInst;

void InsertarMenu(HWND hWnd);

int EscrityWindowImg(UINT uMsg , HWND hwndDlg);

int window();

BOOL CALLBACK DialogProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

    String user1 , user2 , user3 , user4;
    float N1 , N2 , N3 , num1 , num2 , result;
    char Item_save1;

    switch(uMsg)
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
            if(MessageBox(hwndDlg , "Desea cerrar Escrity" , "Salir" , MB_ICONQUESTION | MB_YESNO) == IDYES){
                EndDialog(hwndDlg , 0);
            }
            printf("System : user : Desea salir? : No!\n");
            return TRUE;

        case WM_COMMAND:
            switch(LOWORD(wParam))
            {
                /*
                 * TODO: Add more control ID's, when needed.
                 */
                case IDC_BTN_QUIT:
                    printf("System : user : Desa salir?\n");
                    if(MessageBox(hwndDlg , "Desea cerrar Escrity" , "Salir" , MB_ICONQUESTION | MB_YESNO) == IDYES){
                         EndDialog(hwndDlg , 0);
                     }
                     printf("System : user : Desea salir? : No!\n");
                    return TRUE;

                case IDC_BTN_TEST:

                    GetDlgItemText(hwndDlg , IDC_EDIT_INPUT , user1 ,100);

                    user4[500] = user1[500];

                    //user4 = user1;

                    if(strcmp(user1 , imprime) == 0){
                        printf("System : user : input : ");
                        fflush(stdin);
                        gets(user2);
                        MessageBox(hwndDlg , user2 , "Escrity : output" , MB_ICONINFORMATION);


                   } else if(strcmp(user1 ,  limpiar) == 0){
                        CLS();
                    }
                    if(strcmp(user1 , creaAssets) == 0){
                        printf("System : user : input : ");
                        fflush(stdin);
                        gets(user3);
                        printf("System : open : Escrity_Creator_Assets : nombre del asset : %s : cargando...\n",user3);
                        Sleep(3500);
                        CLS();
                        asset(user3);
                    }
                    if(strcmp(user1,abreAssets) == 0){

                        printf("System : user : input : ");
                        fflush(stdin);
                        gets(user3);
                        fileAssets(user3);


                    }
                    if(strcmp(user1,createProject) == 0){

                        /*printf("System : user : input : ");
                        fflush(stdin);
                        gets(user3);*/

                        File("main.c","/*New project game\nCode*/\n#include \"include/stringgame.h\"\n\n");
                        MessageBox(hwndDlg , "Se ha creado el proyecto con exito..." , "System : New Project" , MB_ICONINFORMATION);
                        SetTitle("Escrity : cmd : New project");
                        Edit_File();

                    }
                    else if(user1 == " "){
                        File("UserFile.void",user1);
                    }if(strcmp(user1,suma) == 0){
                        printf("System: Escrity: crea.importation.math.suma.NULL.output.new.number: N: ");
                        fflush(stdin);
                        scanf("%d",&num1);
                        printf("System: Escrity: crea.importation.math.suma.NULL.output.new.number: N: ");
                        fflush(stdin);
                        scanf("%f",&num2);
                        fflush(stdin);
                        result = num1 + num2;
                        printf("System: N(%f) + (%f) = (%f)\n",num1,num2,result);
                    }else if(strcmp(user1,resta) == 0){
                        printf("System: Escrity: crea.importation.math.resta.NULL.output.new.number: N: ");
                        fflush(stdin);
                        scanf("%f",&num1);
                        printf("System: Escrity: crea.importation.math.resta.NULL.output.new.number: N: ");
                        fflush(stdin);
                        scanf("%f",&num2);
                        fflush(stdin);
                        result = num1 - num2;
                        printf("System: N(%f) - (%f) = (%f)\n",num1,num2,result);
                    }
                    if(strcmp(user1,multiplica) == 0){
                        printf("System: Escrity: crea.importation.math.multip.NULL.output.new.number: N: ");
                        fflush(stdin);
                        scanf("%f",&num1);
                        printf("System: Escrity: crea.importation.math.multip.NULL.output.new.number: N: ");
                        fflush(stdin);
                        scanf("%f",&num2);
                        fflush(stdin);
                        result = num1 * num2;
                        printf("System: N(%f) * (%f) = (%f)\n",num1,num2,result);
                    }else if(strcmp(user1,divide) == 0){
                        printf("System: Escrity: crea.importation.math.division.NULL.output.new.number: N: ");
                        fflush(stdin);
                        scanf("%f",&N1);
                        printf("System: Escrity: crea.importation.math.division.NULL.output.new.number: N: ");
                        fflush(stdin);
                        scanf("%f",&N2);
                        printf("System: Escrity: crea.importation.math.division.%%g.view.numbers.out:\n");
                        fflush(stdin);
                        N3 = N1 / N2;
                        printf("System: N(%f) / (%f) = (%f)\n",N1,N2,N3);
                    }if(strcmp(user1,eliminaArchivo) == 0){



                        printf("System : input : ");

                        fflush(stdin);

                        gets(user2);



                        if(remove(user2) == -1){



                            SetTitle("Escrity : cmd : error");

                            MessageBox(hwndDlg , "Archivo no eliminado..." , "System : delete file : error" , MB_ICONERROR);

                            SetTitle("Escrity : cmd");



                        }

                        else{



                            MessageBox(hwndDlg , "Archivo Eliminado con exito" , "System : delete file" , MB_ICONINFORMATION);



                        }



                    }
                    /*else{
                        printf("Escrity : No reconoce la instruccion dada : %s = Bad!\n" , user1);
                        MessageBox(hwndDlg , "Error Escrity no reconoce la instruccion" , "Escrity : error", MB_ICONERROR);
                    }*/

                    return TRUE;
                case CM_SALIR:
                    EndDialog(hwndDlg , 0);
                    return TRUE;
                case CM_PRUEBA:
                    //GetDlgItemText(hwndDlg , IDC_EDIT_INPUT , user1 ,100);
                   //*(Vector+1) = user1;
                    MessageBox(hwndDlg , user4 , "instrucciones recientes" , MB_ICONINFORMATION);
                    return TRUE;
                case CM_CREADOR_IMG:
                   //EscrityWindowImg();
                   window();

                   EscrityWindowImg(uMsg , hwndDlg);
                   return TRUE;
            }
    }

    return FALSE;
}

int window(){

    HINSTANCE hInstance;
    hInst = hInstance;

    return  DialogBox(hInstance, MAKEINTRESOURCE(DLG_IMG), NULL, (DLGPROC)DialogProc);

}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    hInst = hInstance;

    // The user interface is a modal dialog box
    return DialogBox(hInstance, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)DialogProc);
}

void InsertarMenu(HWND hWnd){

   HMENU hMenu1, hMenu2;

   hMenu1 = CreateMenu(); /* Manipulador de la barra de menú */
   hMenu2 = CreateMenu(); /* Manipulador para el primer menú pop-up */
   AppendMenu(hMenu2, MF_STRING, CM_PRUEBA, "&Instrucciones recientes"); /* 1º ítem */
   AppendMenu(hMenu2 , MF_STRING , CM_ARCHIVOS , "&Archivos recientes"); /* 2 item*/
   AppendMenu(hMenu2, MF_SEPARATOR, 0, NULL);           /* 3º ítem (separador) */
   AppendMenu(hMenu2, MF_STRING, CM_CREADOR_IMG, "&Creador img");  /* 4"º ítem */
   AppendMenu(hMenu2, MF_STRING, CM_SALIR, "&Salir");   /* 5º ítem */
   /* Inserción del menú pop-up */
   AppendMenu(hMenu1, MF_STRING | MF_POPUP, (UINT)hMenu2, "&Archivo");
   SetMenu (hWnd, hMenu1);  /* Asigna el menú a la ventana hWnd */
}

int EscrityWindowImg(UINT uMsg , HWND hwndDlg){

    /*HINSTANCE hInstance;
    hInst = hInstance;

    DialogBox(hInstance, MAKEINTRESOURCE(DLG_IMG), NULL, (DLGPROC)DialogProc);*/

    String user1 , user2;

    switch(uMsg){

        case WM_INITDIALOG:
             SetTitle("Escrity : Asset : img");
             InsertarMenu(hwndDlg);
            return TRUE;
        case WM_CLOSE:
            EndDialog(hwndDlg , 0);
            return TRUE;
        case IDC_BTN_ATRAS:
            EndDialog(hwndDlg , 0);
            return TRUE;
        case IDC_BTN_GUARDAR:

            GetDlgItemText(hwndDlg , IDC_EDIT_NAME_FILE , user1 ,100);
            GetDlgItemText(hwndDlg , IDC_EDIT_DIBUJO , user2 ,100);

            if(user1 == " " || user2 == " "){

                MessageBox(hwndDlg , "Error al crear el archivo. Verifique que tenga nombre o este con datos" , "System : Error : Escrity : File" , MB_ICONERROR);
                EndDialog(hwndDlg , 0);

            }
            else{
                MessageBox(hwndDlg , "Se ha guardado el archivo con exito" , "System : Save : Escrity : File" , MB_ICONINFORMATION);
                File(user1 , user2);
            }

            return TRUE;

    }

}
