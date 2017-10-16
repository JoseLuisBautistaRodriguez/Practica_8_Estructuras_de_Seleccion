	/*
	------------------------------------------------------------------------------------------
	Dado un areglo dados 10 números, sumar negativos, positivos y el número de 0.
	------------------------------------------------------------------------------------------
	*/
	
#include <stdio.h>

int main(){
	
	int b, i;
	int a[10]={ 25 , 2, 0, 5, 87, 0,-45, 14, 10, 14};
	int positivos, negativos;
	positivos = 0 ;
	negativos = 0 ;
	b = 0;
		
	for( i = 0 ; i < 10 ; i++ ){
				
		if (a[i] > 0){
			positivos = positivos + a[i];
		}else if ( a[i] < 0 ){
			negativos = negativos + a[i];
		} else {
			
			b++;
		
		}
	}
	
	printf("\n	La suma de n%cmeros de negativos es %d.\n", 163, negativos);
	printf("	La suma de n%cmeros positivos es %d.\n", 163, positivos);
	printf("	La cantidad de ceros que hay es %d.\n\n\n", b);
	
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
