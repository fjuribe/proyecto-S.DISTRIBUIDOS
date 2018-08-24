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
    

    
	printf("--Escoja el servicio que desea utilizar--\n");
	printf("1.- calculadora de signo\n");
	printf("2.- Tauro\n");
	printf("3.- Geminis\n");
	printf("4.- Cancer\n");
	printf("5.- Leo\n");
	printf("6.- Virgo\n");
	printf("7.- Librar\n");	
	printf("8.- Escorpion\n");
	printf("9.- Sagitario\n");
	printf("10.- Capricornio\n");
	printf("11.- Acuario\n");
	printf("12.- Calcular Area de un circulo\n");
	printf("0.- Salir\n");
	scanf("%i",&respt);fflush(stdin);


    switch(respt){
				
			case 1:
    		printf("piscis");
    		break;
    		
    		case 2:
    		printf("tauro");
    		break;
    		
    		
    		case 3:
    		printf("geminis");
    		break;
    		
    		
    		case 4:
    		printf("cancer");
    		break;
    		
    		case 5:
    		printf("leo");
    		break;
    		
    		case 6:
    		printf("libra");
    		break;
    		
    		case 7:
    		printf("escorpion");
    		break;
    		
    		case 8:
    		printf("sagitario");
    		break;
    		
    		case 9:
    		printf("capricornio");
    		break;
    		
    		case 10:
    		printf("acuario");
    		break;
    		
    		case 11:
    		printf("aries");
    		break;
    		
    		
        	case 12:
    	    printf("virgo");
    		break;
    }
system("pause");
}
