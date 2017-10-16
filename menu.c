
	/*
	------------------------------------------------------------------------------------------
		Presentar al usuario un menu de cuatro opciones, mostrarle la accion que corresponde
		a dada una de ellas exceptuando la cuarta, cuando ésta sea elegida salir del programa.
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
	Universidad Nacional Autónoma de México
	Facultad de Ingeniería
	Fundamentos de Programación
	Grupo: 1120
	
	Práctica: 8 "Estructuras de selección"
	 
	Autor: Jose Luis Bautista Rodríguez
	Fecha de inicio: 15/10/2017
	Lugar: AV. UNIVERSIDAD Nº 3000, UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO, C.U.,
		   Cidad de México, 04510.
	------------------------------------------------------------------------------------------
	
	*/
