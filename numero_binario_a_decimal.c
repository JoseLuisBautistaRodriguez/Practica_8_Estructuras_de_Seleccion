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
