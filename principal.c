/*
francisco uribe
pablo peña
herman fernandez
*/
#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"

int main(int argc,char *argv[])
{	

//int dia,mes,anio;
    int respt;
 
    printf("--Servicios--\n");
	printf("1.- Calculadora de signo del zodiaco\n");
	printf("2.- Horóscopo de la semana\n");
	printf("3.- Compatibilidad entre Signos\n");
	printf("4.- Conoce tu Horóscopo chinoy tu galleta\n");
	printf("5.- Salir\n");
	printf("Respuesta: ");
	scanf("%i",&respt);fflush(stdin);

/*funciones modulares implementadas en funciones.h*/
    switch(respt){
				
			case 1:
    		    char linea[MAX_CHARS];
                        unsigned d;
                        unsigned m;
                        unsigned a;
   
                            puts("Introduce la fecha en formato dd/mm/aaaa:");
                            if(fgets(linea, MAX_CHARS, stdin) == NULL)
                                            return EXIT_FAILURE;
                            if(sscanf(linea, "%2u/%2u/%4u", &d, &m, &a) == 3){
               /* 
                  ** Primera validacion fue exitosa, falta verificar 
                  ** que los tres enteros esten en el rango valido
               */
                            printf("Dia: %u\nMes: %u\nAnio: %u\n", d, m, a);
                                             }else
                            puts("Entrada no valida");
                                    return EXIT_SUCCESS;
                                    
                                    
            
            /**/
            calculadora_horoscopo(d,m,a);
            /**/

    		break;
 /****************************************************************************************/   		
    		case 2:
    			
    		break;
    		
/****************************************************************************************/    		
    		case 3:
    			
    		break;
    		
/****************************************************************************************/   		
    		case 4:
    			
    		break;
/****************************************************************************************/  		
    		case 5:
    			
    		break;
    		
    		case 6:
    		break;
    		
    		case 7:
    		break;
    		
    		case 8:
    		break;
    		
    }
system("pause");
}
