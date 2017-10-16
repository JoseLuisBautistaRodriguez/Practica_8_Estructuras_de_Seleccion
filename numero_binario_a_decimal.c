	/*
	------------------------------------------------------------------------------------------
		Dado un arreglo de cuatro unidades en binario, regresar su valor en decimal.
	------------------------------------------------------------------------------------------
	*/
int main(){
	
	int i, a;
	int nibble[4] = {0,1,1,0};
	a = 0 ;
	
	for( i = 0 ; i < 4 ; i++){
		
		if ( 1 == nibble[i] && i == 0){
			
			a += 1;
			
		}
		if ( 1 == nibble[i] && i == 1){
			
			a += 2;
			
		}
		if ( 1 == nibble[i] && i == 2){
			
			a += 4;
			
		}
		if ( 1 == nibble[i] && i == 3){
			
			a += 8;
			
		}
		
	}
	
	printf("\nEl resultado es %d\n\n\n", a);
	
	system("pause");
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
