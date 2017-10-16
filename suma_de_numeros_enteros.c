
	/*
	------------------------------------------------------------------------------------------
		Dado un arreglo de 10 números enteros, sacar el total.
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
