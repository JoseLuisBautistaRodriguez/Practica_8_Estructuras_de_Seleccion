
	/*
	------------------------------------------------------------------------------------------
		Dado un arreglo de 10 n�meros enteros, sacar el total.
	------------------------------------------------------------------------------------------
	*/
	
#include <stdio.h>

int main(){
	
	int c, b, i;
	int a[10]={ 25 , 2, 4, 5, 87, 46,-45, 14, 10, 14};
	b = 0;
	c = 0;
		
	for( i = 0 ; i < 10 ; i++ ){
		
		b = a[i] + b;
		
	}
	
	printf("\n	El resultado es %d.\n\n", b);
	
	system("pause");
	return 0;
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
