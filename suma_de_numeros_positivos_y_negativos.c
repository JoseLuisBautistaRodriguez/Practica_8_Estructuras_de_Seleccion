	/*
	------------------------------------------------------------------------------------------
	Dado un areglo dados 10 n�meros, sumar negativos, positivos y el n�mero de 0.
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
