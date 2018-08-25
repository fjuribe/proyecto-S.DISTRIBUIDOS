/*
francisco uribe
pablo peña
herman fernandez
*/

//primer servicio del sistema hóroscopo
void calculadora_horoscopo(unsigned d, unsigned m){
	
			/*************acuario ***********/
	  if(d>=20 && m==1){
	       	//Enero 20 – Febrero 18-> acuario
	        printf("sus signo es acuario");
    	}
		else if(d<=18 && m==2){
			//Enero 20 – Febrero 18-> acuario
	        printf("sus signo es acuario");
		}
		
		
		
		/*************piscis ***********/
		else if(d>=19 && m==2){
	     	//Febrero 19 – Marzo 20
	        printf("sus signo es piscis");
    	}
	    
	    else if(d<=20 && m==3){
			//Febrero 19 – Marzo 20
	        printf("sus signo es piscis");
		}
		
		
		/************* aries ***********/
		else if(d>=21 && m==3){
		      //Marzo 21 –Abril 19
	            printf("sus signo es aries");
      	}
	    else if(d<=19 && m==4){
		    	//Marzo 21 –Abril 19
	            printf("sus signo es aries");
		}
	
	
	   		/************* tauro ***********/
		 else if(d>=20 && m==4){
	          //Abril 20 – Mayo 20-> tauro
	          printf("sus signo es tauro");
	    }
	    else if(d<=20 && m==5){
		        //Abril 20 – Mayo 20-> tauro
	            printf("sus signo es tauro");
		}
		
		/************* geminis ***********/
		else if(d>=21 && m==5){
	        		//Mayo 21 – Junio 20 -> geminis
	              printf("sus signo es geminis");
     	}
	    else if(d<=20 && m==6){
		        	//Mayo 21 – Junio 20 -> geminis
	                printf("sus signo es geminis");
		}


       	/************* cancer ***********/
		else if(d>=21 && m==6){
		        	//Junio 21 – Julio 22-> cancer
	            printf("sus signo es cancer");   
    	}	
    	else if(d<=22 && m==7){
		         	//Junio 21 – Julio 22-> cancer
	            printf("sus signo es cancer");  
		}
		
		/*************leo ***********/
	     else if(d>=23 && m==7){
		            //Julio 23–Agosto 22-> leo
	                printf("sus signo es leo"); 
    	}
	    else if(d<=22 && m==8){
	           		  //Julio 23–Agosto 22-> leo
	            printf("sus signo es leo"); 
		}
	
	
	   /************* virgo **********************/
		else if(d>=23 && m==8){
		       //Agosto 23 – Septiembre 22-> virgo
	           printf("sus signo es virgo");
    	}
    	else if(d<=22 && m==9){
			//Agosto 23 – Septiembre 22-> virgo
	           printf("sus signo es virgo");
		}
		
		
		
		/************ libra ************/
		else if(d>=23 && m==9){
		    //Septiembre 23 – Octubre 22-> libra
	        printf("sus signo es libra");
	    }
	    else if(d<=22 && m==10){
		   //Septiembre 23 – Octubre 22-> libra
	        printf("sus signo es libra");
		}
	
	/****************** escorpion ********************/
		else if(d>=23 && m==10){
		    //Octubre 23 – Noviembre 21-> escorpion
	        printf("sus signo es escorpion");
	    }
	     else if(d<=21 && m==11){
		  //Octubre 23 – Noviembre 21-> escorpion
	        printf("sus signo es escorpion");
		}
		
		/*****************sagitario**********************/
		else if(d>=22 && m==11){
		   	//Noviembre 22 - Diciembre 21-> sagitario
	        printf("sus signo es sagitario");
     	}
     	else if(d<=22 && m==12){
			//Noviembre 22 - Diciembre 21-> sagitario
	        printf("sus signo es sagitario");
		}
	   
	    /********************* sagitario ***********************/
		else if(d>=20 && m==1){
		  //Enero 20 – Febrero 18-> acuario
	      printf("sus signo es acuario");
	    }
	    else if(d<=18 && m==2){
			//Enero 20 – Febrero 18-> acuario
	        printf("sus signo es acuario");
		}
	
	 /**************** capricornio ******************/
		else if(d>=22 && m==12){
		    //Diciembre 22 – Enero 19-> capricornio
	        printf("sus signo es capricornio");
	    }
	    else if(d<=19 && m==1){
			 //Diciembre 22 – Enero 19-> capricornio
	        printf("sus signo es capricornio");
		}

}



//segundo servicio del sistema hóroscopo
 horoscopo_semana(int a){


    switch(a){
				
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

