/*
 * funciones.h
 *
 *  Created on: 15 abr. 2022
 *      Author: Augusto Roman
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/**
 * @brief calcularDescuento Aplica el descuento al precio
 * @param precio precio sin aplicar el descuento
 * @param precioDebito precio con el descuento aplicado
 * @param descuento Descuento a aplicar, debe ser menor a 1 y mayor a 0.
 */

void calcularDescuento(float precio, float* precioFinal, float descuento);

/**
 * @brief calcularInteres aplica el interes al precio
 * @param precio sin aplicar el interes
 * @param precioInteres con el interes aplicado
 * @param interes aplicado al precio
 */


void calcularInteres(float precio, float interes, float*precioFinal);
/**
 * @fn void Bitcoin(float, float, float*)
 * @brief calcular precio de bitcoin
 * @param precio
 * @param bitcoin
 * @param precio normal en bitcoins
 */


void Bitcoin(float precio, float bitcoin, float* precioFinal);


/**
 * @fn void calcularKm(float, float, float*)
 * @brief calcular precio unitario de los kilometros
 * @param precio
 * @param kilometros
 * @param precioUnitario
 */
void calcularKm (float precio, float kilometros, float* precioUnitario);


/***
 * @fn void calcularDiferencia(float, float, float*)
 * @brief calcula la diferencia entre ambos precios
 * @param precioLatam
 * @param precioAerolineas
 * @param diferencia entre ambos precios
 */
void calcularDiferencia(float precioLatam, float precioAerolineas, float* diferencia);

/**
 * @fn void mostrarResultado(float, float, float, float)
 * @brief muestra los resultados de todos las opciones de pago
 * @param precioDebito
 * @param precioInteres
 * @param precioBitcoin
 * @param precioUnitario
 */
void mostrarResultado(float precioDebito, float precioInteres, float precioBitcoin, float precioUnitario);



#endif /* FUNCIONES_H_ */
