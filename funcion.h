/*
francisco uribe
pablo peña
herman fernandez
*/
//primer servicio del sistema hóroscopo
void calculadora_horoscopo(unsigned d, unsigned m,unsigned a){
	
	if(d>=20 && m==1){
		if(d<=18 && m==2){
			//Enero 20 – Febrero 18-> acuario
	        //printf("sus signo es acuario");
		}
	}
		if(d>=19 && m==2){
	     	if(d<=20 && m==3){
			//Febrero 19 – Marzo 20
	        //printf("sus signo es piscis");
		}
	}
	
		if(d>=21 && m==3){
		      if(d<=19 && m==4){
		    	//Marzo 21 –Abril 19
	            //printf("sus signo es aries");
		}
	}
	
		 if(d>=20 && m==4){
	          if(d<=20 && m==5){
		        //Abril 20 – Mayo 20-> tauro
	            //printf("sus signo es tauro");
		}
	}
	
		if(d>=21 && m==5){
	        	if(d<=20 && m==6){
		        	//Mayo 21 – Junio 20 -> geminis
	                //printf("sus signo es geminis");
		}
	}
	

		if(d>=20 && m==6){
		        if(d<=18 && m==7){
		         	//Enero 20 – Febrero 18-> acuario
	                //printf("sus signo es acuario");
		}
	}	
	        if(d>=20 && m==1){
		          if(d<=18 && m==2){
	           		//Enero 20 – Febrero 18-> acuario
	                //printf("sus signo es acuario");
		}
	}
	
		if(d>=20 && m==1){
		if(d<=18 && m==2){
			//Enero 20 – Febrero 18-> acuario
	        //printf("sus signo es acuario");
		}
	}
	
		if(d>=20 && m==1){
		if(d<=18 && m==2){
			//Enero 20 – Febrero 18-> acuario
	        //printf("sus signo es acuario");
		}
	}
	
		if(d>=20 && m==1){
		if(d<=18 && m==2){
			//Enero 20 – Febrero 18-> acuario
	        //printf("sus signo es acuario");
		}
	}
		if(d>=20 && m==1){
		if(d<=18 && m==2){
			//Enero 20 – Febrero 18-> acuario
	        //printf("sus signo es acuario");
		}
	}
	
		if(d>=20 && m==1){
		if(d<=18 && m==2){
			//Enero 20 – Febrero 18-> acuario
	        //printf("sus signo es acuario");
		}
	}
	
		if(d>=20 && m==1){
		if(d<=18 && m==2){
			//Enero 20 – Febrero 18-> acuario
	        //printf("sus signo es acuario");
		}
	}
	
	
	else if(d==19){
		//Febrero 19 – Marzo 20 ->piscis
	}
}

//segundo servicio del sistema hóroscopo
void horoscopo_semana(){
	printf("--Escoja el servicio que desea utilizar--\n");
	printf("--Escoja su signo--\n");
	printf("1.- Piscis\n");
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
}

