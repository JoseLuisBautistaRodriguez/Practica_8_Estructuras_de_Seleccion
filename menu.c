
	/*
	------------------------------------------------------------------------------------------
		Presentar al usuario un menu de cuatro opciones, mostrarle la accion que corresponde
		a dada una de ellas exceptuando la cuarta, cuando �sta sea elegida salir del programa.
	------------------------------------------------------------------------------------------
	*/

#include <stdio.h>

int main(){
	
	int a;
	int i = 0;
	
	while(i == 0){
		
		system("cls");
		
		printf("\n	1- Comer\n	2- Pagar\n	3- Tomar\n	4- Correr\n\n	Ingresa una opcion: ");
		scanf("%d", &a);	
		

			switch(a){
				
				case 1 :	printf("\n	Vas a comer.\n\n");	break;
				case 2 :	printf("\n	Vas a Pagar.\n\n");	break;
				case 3 :	printf("\n	Vas a Tomar.\n\n");	break;
				case 4 :	i = a;	break;
				default : printf("\n	Ingresaste un valor indadecuado\n\n");
			}
			
		
		system ("pause");

	}
	
	printf("\n	El programa termino de manera exitosa.\n\n");
	
	system ("pause");
	return 0 ;
	
}

	/*
	
	Datos Generales del archivo:
	------------------------------------------------------------------------------------------
	Universidad Nacional Aut�noma de M�xico
	Facultad de Ingenier�a
	Fundamentos de Programaci�n
	Grupo: 1120
	
	Pr�ctica: 8 "Estructuras de selecci�n"
	 
	Autor: Jose Luis Bautista Rodr�guez
	Fecha de inicio: 15/10/2017
	Lugar: AV. UNIVERSIDAD N� 3000, UNIVERSIDAD NACIONAL AUT�NOMA DE M�XICO, C.U.,
		   Cidad de M�xico, 04510.
	------------------------------------------------------------------------------------------
	
	*/
