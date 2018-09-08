/*
francisco uribe
pablo peña
herman fernandez
*/

//primer servicio del sistema hóroscopo
void calculadora_horoscopo(unsigned d, unsigned m){
	system("clear");
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
 void horoscopo_semana(int a){
  system("clear");

   /******************conexion**********************/
	MYSQL *conn,mysql; /* variable de conexión para MySQL */

    /******************conexion**********************/
	MYSQL *conn; /* variable de conexión para MySQL */

	MYSQL_RES *res; /* variable que contendra el resultado de la consuta */
	MYSQL_ROW row; /* variable que contendra los campos por cada registro consultado */
	char *server = "127.0.0.1"; /*direccion del servidor 127.0.0.1, localhost o direccion ip */
	char *user = "root"; /*usuario para consultar la base de datos */
	char *password = ""; /* contraseña para el usuario en cuestion */
	char *database = "horoscopo"; /*nombre de la base de datos a consultar */
	conn = mysql_init(&mysql); /*inicializacion a nula la conexión */
  	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "utf8");
	mysql_options(&mysql, MYSQL_INIT_COMMAND, "SET NAMES utf8");

	conn = mysql_init(NULL); /*inicializacion a nula la conexión */

	/* conectar a la base de datos */
	if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0))
	{ /* definir los parámetros de la conexión antes establecidos */
		fprintf(stderr, "%s\n", mysql_error(conn)); /* si hay un error definir cual fue dicho error */
		exit(1);
	}
    /*************************************************/

switch(a){
				
case 1:
    //printf("piscis");

 /******** enviar consulta SQL *****/

    /******** enviar consulta SQL *****/
	if (mysql_query(conn, "select nombre,color,personalidad,elemento,semanal from signo where id_signo=8"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){
          printf("Nombre:%s\t\n ",row[0]);
          printf("Color:%s\t\n",row[1]);
          printf("personalidad:%s\t\n",row[2]);
          printf("Elemento:%s\t\n",row[3]);
          printf("Semanal:%s\t\n",row[4]);
    }
    mysql_free_result(res);
	mysql_close(conn);
/***********************************/

    		break;
    		
case 2:
    //printf("tauro");

    /******** enviar consulta SQL *****/
	if (mysql_query(conn, "select nombre,color,personalidad,elemento,semanal from signo where id_signo=10"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){
          printf("Nombre:%s\t\n ",row[0]);
          printf("Color:%s\t\n",row[1]);
          printf("personalidad:%s\t\n",row[2]);
          printf("Elemento:%s\t\n",row[3]);
          printf("Semanal:%s\t\n",row[4]);
    }
    mysql_free_result(res);
	mysql_close(conn);
/***********************************/
    		break;
    		
    		
 case 3:
    //printf("geminis");

    /******** enviar consulta SQL *****/
	if (mysql_query(conn, "select nombre,color,personalidad,elemento,semanal from signo where id_signo=8"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){
          printf("Nombre:%s\t\n ",row[0]);
          printf("Color:%s\t\n",row[1]);
          printf("personalidad:%s\t\n",row[2]);
          printf("Elemento:%s\t\n",row[3]);
          printf("Semanal:%s\t\n",row[4]);
    }
    mysql_free_result(res);
	mysql_close(conn);
/***********************************/
    		break;
    		
 case 4:
    //printf("cancer");

    /******** enviar consulta SQL *****/
	if (mysql_query(conn, "select nombre,color,personalidad,elemento,semanal from signo where id_signo=12"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){
          printf("Nombre:%s\t\n ",row[0]);
          printf("Color:%s\t\n",row[1]);
          printf("personalidad:%s\t\n",row[2]);
          printf("Elemento:%s\t\n",row[3]);
          printf("Semanal:%s\t\n",row[4]);
    }
    mysql_free_result(res);
	mysql_close(conn);
/***********************************/
    		break;
    		
case 5:
    //printf("leo");

    /******** enviar consulta SQL *****/
	if (mysql_query(conn, "select nombre,color,personalidad,elemento,semanal from signo where id_signo=1"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){
          printf("Nombre:%s\t\n ",row[0]);
          printf("Color:%s\t\n",row[1]);
          printf("personalidad:%s\t\n",row[2]);
          printf("Elemento:%s\t\n",row[3]);
          printf("Semanal:%s\t\n",row[4]);
    }
    mysql_free_result(res);
	mysql_close(conn);
/***********************************/
    		break;
    		
 case 6:
    //printf("libra");

    /******** enviar consulta SQL *****/
	if (mysql_query(conn, "select nombre,color,personalidad,elemento,semanal from signo where id_signo=3"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){
          printf("Nombre:%s\t\n ",row[0]);
          printf("Color:%s\t\n",row[1]);
          printf("personalidad:%s\t\n",row[2]);
          printf("Elemento:%s\t\n",row[3]);
          printf("Semanal:%s\t\n",row[4]);
    }
    mysql_free_result(res);
	mysql_close(conn);
/***********************************/
    		break;
    		
case 7:
    //printf("escorpion");

   /******** enviar consulta SQL *****/
	if (mysql_query(conn, "select nombre,color,personalidad,elemento,semanal from signo where id_signo=4"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){
          printf("Nombre:%s\t\n ",row[0]);
          printf("Color:%s\t\n",row[1]);
          printf("personalidad:%s\t\n",row[2]);
          printf("Elemento:%s\t\n",row[3]);
          printf("Semanal:%s\t\n",row[4]);
    }
    mysql_free_result(res);
	mysql_close(conn);
/***********************************/
    		break;
    		
 case 8:
    	//printf("sagitario");

     /******** enviar consulta SQL *****/
	if (mysql_query(conn, "select nombre,color,personalidad,elemento,semanal from signo where id_signo=5"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){
          printf("Nombre:%s\t\n ",row[0]);
          printf("Color:%s\t\n",row[1]);
          printf("personalidad:%s\t\n",row[2]);
          printf("Elemento:%s\t\n",row[3]);
          printf("Semanal:%s\t\n",row[4]);
    }
    mysql_free_result(res);
	mysql_close(conn);
/***********************************/
    		break;
    		

  case 9:
    		//printf("capricornio");

      /******** enviar consulta SQL *****/
	if (mysql_query(conn, "select nombre,color,personalidad,elemento,semanal from signo where id_signo=6"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){
          printf("Nombre:%s\t\n ",row[0]);
          printf("Color:%s\t\n",row[1]);
          printf("personalidad:%s\t\n",row[2]);
          printf("Elemento:%s\t\n",row[3]);
          printf("Semanal:%s\t\n",row[4]);
    }
    mysql_free_result(res);
	mysql_close(conn);
/***********************************/
    		break;
    		
 case 10:
    		//printf("acuario");

     /******** enviar consulta SQL *****/
	if (mysql_query(conn, "select nombre,color,personalidad,elemento,semanal from signo where id_signo=7"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){
          printf("Nombre:%s\t\n ",row[0]);
          printf("Color:%s\t\n",row[1]);
          printf("personalidad:%s\t\n",row[2]);
          printf("Elemento:%s\t\n",row[3]);
          printf("Semanal:%s\t\n",row[4]);
    }
    mysql_free_result(res);
	mysql_close(conn);
/***********************************/
    		break;
    		
 case 11:
    		//printf("aries");

     /******** enviar consulta SQL *****/
	if (mysql_query(conn, "select nombre,color,personalidad,elemento,semanal from signo where id_signo=9"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){
          printf("Nombre:%s\t\n ",row[0]);
          printf("Color:%s\t\n",row[1]);
          printf("personalidad:%s\t\n",row[2]);
          printf("Elemento:%s\t\n",row[3]);
          printf("Semanal:%s\t\n",row[4]);
    }
    mysql_free_result(res);
	mysql_close(conn);
/***********************************/
    		break;
    		
    		
 case 12:

    	    //printf("virgo");
     
     /******** enviar consulta SQL *****/
	if (mysql_query(conn, "select nombre,color,personalidad,elemento,semanal from signo where id_signo=2"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){
          printf("Nombre:\t%s\n ",row[0]);
          printf("Color:%s\t\n",row[1]);
          printf("personalidad:%s\t\n",row[2]);
          printf("Elemento:%s\t\n",row[3]);
          printf("Semanal:%s\t\n",row[4]);
    }
    mysql_free_result(res);
	mysql_close(conn);
/***********************************/
    		break;
    }
}


//cuarto servicio del sistema hóroscopo chino
//segundo servicio del sistema hóroscopo chino
void horoscopo_chino(unsigned d,unsigned m,unsigned a,int genero){

   /******************conexion**********************/
	MYSQL *conn,mysql; /* variable de conexión para MySQL */
	MYSQL_RES *res; /* variable que contendra el resultado de la consuta */
	MYSQL_ROW row; /* variable que contendra los campos por cada registro consultado */
	char *server = "127.0.0.1"; /*direccion del servidor 127.0.0.1, localhost o direccion ip */
	char *user = "root"; /*usuario para consultar la base de datos */
	char *password = ""; /* contraseña para el usuario en cuestion */
	char *database = "horoscopo"; /*nombre de la base de datos a consultar */
	conn = mysql_init(&mysql); /*inicializacion a nula la conexión */
  	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "utf8");
	mysql_options(&mysql, MYSQL_INIT_COMMAND, "SET NAMES utf8");

	/* conectar a la base de datos */
	if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0))
	{ /* definir los parámetros de la conexión antes establecidos */
		fprintf(stderr, "%s\n", mysql_error(conn)); /* si hay un error definir cual fue dicho error */
		exit(1);
	}
    /*************************************************/



int signo;
/*codigo en proceso de desarrollo*/


/*conexion a la base de datos*/
if (a%12==0)
{

     printf("Tu Horoscopo chino corresponde al Mono\n");
	/*******enviar consulta sql************/
	if (mysql_query(conn, "select descripcion,planeta,elemento,hora_influencia,personalidad,signo_compatible from signo_chino where id=12"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){

          printf("Descripcion:%s\t\n\n ",row[0]);
          printf("Planeta:%s\t\n\n",row[1]);
          printf("Elemento:%s\t\n\n",row[2]);
          printf("Hora de influencia:%s\t\n\n",row[3]);
          printf("Personalidad:%s\t\n\n",row[4]);
          printf("Signo compatible:%s\t\n\n",row[5]);
    }
    mysql_free_result(res);
	mysql_close(conn);
	/***************************************/
}

else if (a%12==1)
{
	/* code */
	printf("Tu Horoscopo chino corresponde al Perro ");

	/*******enviar consulta sql************/
	if (mysql_query(conn, "select descripcion,planeta,elemento,hora_influencia,personalidad,signo_compatible from signo_chino where id=11"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){

          printf("Descripcion:%s\t\n\n ",row[0]);
          printf("Planeta:%s\t\n\n",row[1]);
          printf("Elemento:%s\t\n\n",row[2]);
          printf("Hora de influencia:%s\t\n\n",row[3]);
          printf("Personalidad:%s\t\n\n",row[4]);
          printf("Signo compatible:%s\t\n\n",row[5]);
    }
    mysql_free_result(res);
	mysql_close(conn);
	/***************************************/
}

else if (a%12==2)
{
	/* code */
	printf("Tu Horoscopo chino corresponde al Cerdo ");

	/*******enviar consulta sql************/
	if (mysql_query(conn, "select descripcion,planeta,elemento,hora_influencia,personalidad,signo_compatible from signo_chino where id=10"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){

                   printf("Descripcion:%s\t\n\n ",row[0]);
          printf("Planeta:%s\t\n\n",row[1]);
          printf("Elemento:%s\t\n\n",row[2]);
          printf("Hora de influencia:%s\t\n\n",row[3]);
          printf("Personalidad:%s\t\n\n",row[4]);
          printf("Signo compatible:%s\t\n\n",row[5]);
    }
    mysql_free_result(res);
	mysql_close(conn);
	/***************************************/
}

else if (a%12==3)
{
	/* code */
	printf("Tu Horoscopo chino corresponde a la Rata ");

	/*******enviar consulta sql************/
	if (mysql_query(conn, "select descripcion,planeta,elemento,hora_influencia,personalidad,signo_compatible from signo_chino where id=9"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){

          printf("Descripcion:%s\t\n\n ",row[0]);
          printf("Planeta:%s\t\n\n",row[1]);
          printf("Elemento:%s\t\n\n",row[2]);
          printf("Hora de influencia:%s\t\n\n",row[3]);
          printf("Personalidad:%s\t\n\n",row[4]);
          printf("Signo compatible:%s\t\n\n",row[5]);
    }
    mysql_free_result(res);
	mysql_close(conn);
	/***************************************/
}

else if (a%12==4)
{
	/* code */
	printf("Tu Horoscopo chino corresponde a la Rata ");

	/*******enviar consulta sql************/
	if (mysql_query(conn, "select descripcion,planeta,elemento,hora_influencia,personalidad,signo_compatible from signo_chino where id=8"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){

          printf("Descripcion:%s\t\n\n ",row[0]);
          printf("Planeta:%s\t\n\n",row[1]);
          printf("Elemento:%s\t\n\n",row[2]);
          printf("Hora de influencia:%s\t\n\n",row[3]);
          printf("Personalidad:%s\t\n\n",row[4]);
          printf("Signo compatible:%s\t\n\n",row[5]);
    }
    mysql_free_result(res);
	mysql_close(conn);
	/***************************************/

}

else if (a%12==5)
{
	/* code */
	printf("Tu Horoscopo chino corresponde a la Rata ");

	/*******enviar consulta sql************/
	if (mysql_query(conn, "select descripcion,planeta,elemento,hora_influencia,personalidad,signo_compatible from signo_chino where id=7"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){

          printf("Descripcion:%s\t\n\n ",row[0]);
          printf("Planeta:%s\t\n\n",row[1]);
          printf("Elemento:%s\t\n\n",row[2]);
          printf("Hora de influencia:%s\t\n\n",row[3]);
          printf("Personalidad:%s\t\n\n",row[4]);
          printf("Signo compatible:%s\t\n\n",row[5]);
    }
    mysql_free_result(res);
	mysql_close(conn);
	/***************************************/
}

else if (a%12==6)
{
	/* code */
	printf("Tu Horoscopo chino corresponde al Tigre ");

	/*******enviar consulta sql************/
	if (mysql_query(conn, "select descripcion,planeta,elemento,hora_influencia,personalidad,signo_compatible from signo_chino where id=6"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){

          printf("Descripcion:%s\t\n\n ",row[0]);
          printf("Planeta:%s\t\n\n",row[1]);
          printf("Elemento:%s\t\n\n",row[2]);
          printf("Hora de influencia:%s\t\n\n",row[3]);
          printf("Personalidad:%s\t\n\n",row[4]);
          printf("Signo compatible:%s\t\n\n",row[5]);
    }
    mysql_free_result(res);
	mysql_close(conn);
	/***************************************/

}

else if (a%12==7)
{
	/* code */
	printf("Tu Horoscopo chino corresponde al Conejo ");

	/*******enviar consulta sql************/
	if (mysql_query(conn, "select descripcion,planeta,elemento,hora_influencia,personalidad,signo_compatible from signo_chino where id=5"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){

          printf("Descripcion:%s\t\n\n ",row[0]);
          printf("Planeta:%s\t\n\n",row[1]);
          printf("Elemento:%s\t\n\n",row[2]);
          printf("Hora de influencia:%s\t\n\n",row[3]);
          printf("Personalidad:%s\t\n\n",row[4]);
          printf("Signo compatible:%s\t\n\n",row[5]);
    }
    mysql_free_result(res);
	mysql_close(conn);
	/***************************************/
}

else if (a%12==8)
{
	/* code */
	printf("Tu Horoscopo chino corresponde al Dragon ");

	/*******enviar consulta sql************/
	if (mysql_query(conn, "select descripcion,planeta,elemento,hora_influencia,personalidad,signo_compatible from signo_chino where id=4"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){

          printf("Descripcion:%s\t\n\n ",row[0]);
          printf("Planeta:%s\t\n\n",row[1]);
          printf("Elemento:%s\t\n\n",row[2]);
          printf("Hora de influencia:%s\t\n\n",row[3]);
          printf("Personalidad:%s\t\n\n",row[4]);
          printf("Signo compatible:%s\t\n\n",row[5]);
    }
    mysql_free_result(res);
	mysql_close(conn);
	/***************************************/
}

else if (a%12==9)
{
	/* code */
	printf("Tu Horoscopo chino corresponde a la Serpiente ");

	/*******enviar consulta sql************/
	if (mysql_query(conn, "select descripcion,planeta,elemento,hora_influencia,personalidad,signo_compatible from signo_chino where id=3"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){

          printf("Descripcion:%s\t\n\n ",row[0]);
          printf("Planeta:%s\t\n\n",row[1]);
          printf("Elemento:%s\t\n\n",row[2]);
          printf("Hora de influencia:%s\t\n\n",row[3]);
          printf("Personalidad:%s\t\n\n",row[4]);
          printf("Signo compatible:%s\t\n\n",row[5]);
    }
    mysql_free_result(res);
	mysql_close(conn);
	/***************************************/
}


else if (a%12==10)
{
	/* code */
	printf("Tu Horoscopo chino corresponde al Caballo ");

	/*******enviar consulta sql************/
	if (mysql_query(conn, "select descripcion,planeta,elemento,hora_influencia,personalidad,signo_compatible from signo_chino where id=2"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){

          printf("Descripcion:%s\t\n\n ",row[0]);
          printf("Planeta:%s\t\n\n",row[1]);
          printf("Elemento:%s\t\n\n",row[2]);
          printf("Hora de influencia:%s\t\n\n",row[3]);
          printf("Personalidad:%s\t\n\n",row[4]);
          printf("Signo compatible:%s\t\n\n",row[5]);
    }
    mysql_free_result(res);
	mysql_close(conn);
	/***************************************/
}

else if (a%12==11)
{
	/* code */
	printf("Tu Horoscopo chino corresponde a La Cabra ");

	/*******enviar consulta sql************/
	if (mysql_query(conn, "select descripcion,planeta,elemento,hora_influencia,personalidad,signo_compatible from signo_chino where id=1"))
	{ /* definicion de la consulta y el origen de la conexion */
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
    
     res=mysql_use_result(conn);
     //printf("Nombre\t\tcolor\n");
     //obtiene los resultados
    if((row=mysql_fetch_row(res))!=NULL){

          printf("Descripcion:%s\t\n\n ",row[0]);
          printf("Planeta:%s\t\n\n",row[1]);
          printf("Elemento:%s\t\n\n",row[2]);
          printf("Hora de influencia:%s\t\n\n",row[3]);
          printf("Personalidad:%s\t\n\n",row[4]);
          printf("Signo compatible:%s\t\n\n",row[5]);
    }
    mysql_free_result(res);
	mysql_close(conn);
	/***************************************/
}

else
{
	printf("la fecha ingresada esta incorrecta, por favor realizar la operacion nuevamente!!");
}


}
