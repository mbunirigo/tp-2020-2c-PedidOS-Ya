/*
 ============================================================================
 Name        : Restaurante.c
 Author      : 
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "Restaurante.h"


int main(int argc, char* argv[]) {

// ACTIVACION DE CONSOLA POR TIPO DE LOG:
	  	bool_log_oficial    = false;
	    bool_log_restaurante = true;


	    //  set logs no oficiales
	    log_config_ini = log_create("log_restaurante.log", "restaurante", bool_log_restaurante, LOG_LEVEL_DEBUG);
	    log_oficial = log_create("log_oficial.log", "log_oficial", bool_log_oficial, LOG_LEVEL_DEBUG);

	    //  set configs:
	     if (argc != 2) {
	         log_debug(log_config_ini, "[CONFIG_INI]: Config path mal pasado, se usara default.config por defecto.");
	         config = leer_config("/home/utnso/workspace/tp-2020-2c-CoronaLinux/Restaurante/src/default.config");
	     } else {
	         // cargar config desde path provisto mediante argv[1]
	         config = config_create(argv[1]);
	     }
//PRUEBA DE LOGS
log_info(log_config_ini, "\tSE INICIO EL LOG INICIAL \n");
log_info(log_oficial, "\tSE INICIO EL LOG OFICIAL \n");


//CARGO CONFIGURACION
cargar_configuracion();

//INICIO RESTAURANTE CON METADATA
iniciar_restaurante();




//Abrir puerto de escucha para clientes
	//pthread_create(&hilo_servidor_clientes, NULL,(void*) fhilo_servidor_clientes, NULL);
	//pthread_join(hilo_servidor_clientes,NULL);




	return EXIT_SUCCESS;
}
