#include <iostream>
#include <conio.h>
#include<string.h>
#include <time.h>
#include<fstream>
using namespace std;

int a,b,c,d,e,f,i, opc,contra, nume;
char A[20],B[20],C[10],D[20],E[10],F[10];
void menu();
void horal();
void regis();
void repor();
void contrasena1();
void contrasena2();
void reloj();

int main ()
{
	system("COLOR 10");
	menu();
	system("pause");
}
void menu()
{
	 system ("cls");
	 cout << "\n\n Reloj Checador Encosta S.A de C.V";
	 cout << "\n---------------------------------------";
	 cout << "\n\n (1) Hora de llegada";
	 cout << "\n (2) Registrar un usuario";
	 cout << "\n (3) Ver horarios del dia";
	 cout << "\n (4) Salir";
	 cout << "\n\n Elige una opcion: ";
	 cin >> opc; 
	 switch (opc)
	 {
	 	case 1: 
		 horal();
		 break; 
		 case 2:
		 contrasena1();
		 break;
		 case 3: 
		 contrasena2();
		 break; 
		case 4: 
		exit(1);
		break;
		default: cout << "\n Opcion no Valida";
		break; 
	 }
}
void contrasena1()
{
	system ("cls");
	cout << "\nBuen Dia Administrador" << "\n\n Ingrese su contrasena: ";
	cin >> contra;
	if (contra==18299){
		regis();}
	else{ 
	cout << "\n\n La contrasena es Incorrecta intente de nuevo \n\n\n"; 
	system("pause");
	contrasena1();
	}
	
	
}
void horal()
{
	system ("cls");
	int cont;
	cout << "Ingresa tu numero de usuario: ";
	cin >> nume;
	if (nume==a)
	{
		cout << "\n bienvenido " <<A;
		cout << "\n\n Esta es la hora Exacta: " ;
		reloj();
		cout <<"\n";
		cout <<"\n Registra por favor la hora ";
		cin >>C;
		cout << "\n Que tengas un excelente dia: ";
	    cout << "\n\n\n (1) Para continuar: ";
	    cin >> cont;
	switch (cont)
	{
	case 1:
	menu();
	break;
	}
	}
	else 
	{
	if (nume==b)
	{
		cout << "\n bienvenido " <<B;
		cout << "\n Esta es la hora Exacta: " ;
		reloj();
		cout <<"\n";
		cout << "\n Registra por favor la hora ";
		cin >>E;
		cout << "\n Que tengas un excelente dia: ";
	cout << "\n\n\n (1) Para continuar: ";
	cin >> cont;
	switch (cont)
	{
	case 1:
	menu();
	break;
	}
	if (nume==d)
	{
		cout << "\n bienvenido " <<D;
		cout << "\n Esta es la hora Exacta: " ;
		reloj();
		cout <<"\n";
		cout << "\n Registra por favor la hora ";
		cin >>F;
		cout << "\n Que tengas un excelente dia: ";
	cout << "\n\n\n (1) Para continuar: ";
	cin >> cont;
	switch (cont)
	{
	case 1:
	menu();
	break;
	}
		}	
	}	
}
}
void regis()
{
	int N,opc;
	system ("cls");
	cout << "\n cuantos empleados quiere registrar? (1 a 3): ";
	cin >> N;
	switch (N)
	{
		case 1: 
		{
		cout << "\n Nombre del Empleado: ";
		cin >> A;
		cout << "\n Usuario del Empleado: ";
		cin >>a;
		cout << "\n\nLos datos son correctos: " <<"Nombre: " <<A <<" Usuario: " <<a;
		}
		break;
		case 2: 
		{
		cout << "\n Nombre del Empleado: ";
		cin >> A;
		cout << "\n Usuario del Empleado: ";
		cin >>a;
		cout << "\n Nombre del Empleado: ";
		cin >> B;
		cout << "\n Usuario del Empleado: ";
		cin >>b;
		cout << "\n\nLos datos son correctos: " <<"Nombre: " <<A <<" Usuario: " <<a;
		cout << "\nLos datos son correctos: " <<"Nombre: " <<B <<" Usuario: " <<b;
		}
		break;
		case 3: 
	{
		cout << "\n Nombre del Empleado: ";
		cin >> A;
		cout << "\n Usuario del Empleado: ";
		cin >>a;
		cout << "\n Nombre del Empleado: ";
		cin >> B;
		cout << "\n Usuario del Empleado: ";
		cin >>b;
		cout << "\n Nombre del Empleado: ";
		cin >> D;
		cout << "\n Usuario del Empleado: ";
		cin >>d;
		cout << "\n\nLos datos son correctos: " <<"Nombre: " <<A <<" Usuario: " <<a;
		cout << "\nLos datos son correctos: " <<"Nombre: " <<B <<" Usuario: " <<b;
		cout << "\nLos datos son correctos: " <<"Nombre: " <<D <<" Usuario: " <<d;
		
		}
		break;
		
	}

	cout << "\n\n\n (1)Si / (2) No: ";
	cin >>opc;
	switch (opc)
	{
		case 1:
		menu();
		break;
		case 2:
		regis();
		break;
	}

}
void contrasena2()
{
	system ("cls");
	cout << "\nBuen Dia Administrador" << "\n\n Ingrese su contrasena: ";
	cin >> contra;
	if (contra==18299){
		repor();}
	else{ 
	cout << "\n\n La contrasena es Incorrecta intente de nuevo \n\n\n"; 
	system("pause");
	contrasena2();
	}
}
		

void repor()
{
	system ("cls");
	cout << "\n Reporte del Dia: ";
	cout << "\n\n " <<A <<" Hora de entrada: " <<C;
	cout << "\n " <<B <<" Hora de entrada: " <<E;
	cout << "\n " <<D <<" Hora de entrada: " <<F << "\n\n";
	
}
void reloj()
{
	    time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128," %H:%M:%S",tlocal);
        cout << " " << output;
}

