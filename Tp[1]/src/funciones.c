/*
 * funciones.c
 *
 *  Created on: 15 abr. 2022
 *      Author: Augusto Roman
 */
#include <stdio.h>
void calcularDescuento(float precio, float* precioFinal, float descuento)
{
	*precioFinal = precio - (precio * descuento);
}

void calcularInteres(float precio, float interes, float*precioFinal)
{
	*precioFinal = precio * interes;
}

void Bitcoin(float precio, float bitcoin, float* precioFinal)
{
	*precioFinal = precio / bitcoin;
}

void calcularKm (float precio, float kilometros, float* precioUnitario)
{
	*precioUnitario = precio / kilometros;
}

void calcularDiferencia(float precioLatam, float precioAerolineas, float* diferencia)
{
	if (precioLatam > precioAerolineas)
	{
		*diferencia = precioLatam - precioAerolineas;
	}
	else if (precioAerolineas > precioLatam)
	{
		*diferencia = precioAerolineas - precioLatam;
	}
	else
	{
		*diferencia = 0;
	}

}

void mostrarResultado(float precioDebito, float precioInteres, float precioBitcoin, float precioUnitario)
{

	printf("\na)Precio con tarjeta de debito es: %.2f",precioDebito);
	printf("\nb)Precio con tarjeta de credito es: %.2f",precioInteres);
	printf("\nc)Precio pagando bitcoin es: %.8f", precioBitcoin);
	printf("\nd)Precio unitario es: %.2f", precioUnitario);

}
