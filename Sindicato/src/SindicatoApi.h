#ifndef SINDICATOAPI_H_
#define SINDICATOAPI_H_

#include "SindicatoUtils.h"

/* ********************************** PUBLIC  FUNCTIONS ********************************** */

/* Console functions */
void sindicato_api_crear_restaurante(char* nombre, int cantCocineros, int* posXY, char** afinidades, char** platos, int* precioPlatos, int cantHornos);
void sindicato_api_crear_receta(char* nombre, char** pasos, int* tiempoPasos);

/* Server functions */
void sindicato_api_send_response_of_operation(t_responseMessage* response, int socket_cliente);
t_restaurante_y_plato* sindicato_api_consultar_platos(void* message);
uint32_t* sindicato_api_guardar_pedido(void* pedido);
uint32_t* sindicato_api_guardar_plato(void* pedido);
uint32_t* sindicato_api_confirmar_pedido(void* pedido);
rta_obtenerPedido* sindicato_api_obtener_pedido(void* pedido);
rta_obtenerRestaurante* sindicato_api_obtener_restaurante(void* restaurante);
uint32_t* sindicato_api_plato_listo(void* plato);
rta_obtenerReceta* sindicato_api_obtener_receta(void* plato);
uint32_t* sindicato_api_terminar_pedido(void* pedido);

/* Main functions */
void sindicato_api_afip_initialize();

#endif /* SINDICATOAPI_H_ */
