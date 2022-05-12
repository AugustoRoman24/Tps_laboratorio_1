/*
 ============================================================================
 Name        : Tp[1].c
 Author      : Augusto Alejandro Roman
 Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {

	int opcion;
	float precioLatam;
	float precioAerolineas;
	char latamAerolineas;
	float km;
	float precioDebitoLatam;
	float precioDebitoAerolineas;
	float precioInteresLatam;
	float precioInteresAerolineas;
	float precioBitcoinLatam;
	float precioBitcoinAerolineas;
	float precioUnitarioLatam;
	float precioUnitarioAerolineas;
	float diferencia;

	setbuf(stdout, NULL);

	diferencia = 0;
	km = 7090;
	precioUnitarioLatam = 0;
	precioUnitarioAerolineas = 0;
	precioBitcoinLatam = 0;
	precioBitcoinAerolineas = 0;
	precioDebitoLatam = 0;
	precioDebitoAerolineas = 0;
	precioInteresLatam = 0;
	precioInteresAerolineas = 0;
	precioLatam = 159339;
	precioAerolineas = 162965;

	do {
		printf("\nMenu:"
				"\n1-Ingresar kilometros."
				"\n2-Ingresar precio."
				"\n3-Calcular costos."
				"\n4-informar datos."
				"\n5-Carga forzada."
				"\n6-Salir.");

		fflush(stdin);
		scanf("%d", &opcion);

		switch (opcion) {
		case 1:
			do{
			printf("\nIngrese kilometros");
			fflush(stdin);
			scanf("%f", &km);

			if (km < 0)
			{
				printf("\nError,Ingrese un valor mayor a 0");
			}
			}while(km <0);
			break;

		case 2:
			do {
				printf(
						"\nDesea ingresar precio de latam o aerolinea(Latam 'l' y aerolineas 'a')");
				fflush(stdin);
				scanf("%c", &latamAerolineas);



				switch (latamAerolineas) {

				case 'l':
					do{
					printf("\nIngrese precio de latam: $ ");
					fflush(stdin);
					scanf("%f", &precioLatam);

					if (precioLatam < 0)
					{
						printf("\nError, Ingrese un precio mayor a 0");
					}
					}while(precioLatam < 0);
					break;


				case 'a':
					do{
					printf("\nIngrese precio de aerolineas: $ ");
					fflush(stdin);
					scanf("%f", &precioAerolineas);
					if(precioAerolineas < 0)
					{
						printf("\nError, Ingrese un precio mayor a 0");
					}
					}while (precioAerolineas < 0);
					break;
				}

			} while (latamAerolineas != 'a' && latamAerolineas != 'l');
			break;
		case 3:
			calcularDescuento(precioLatam, &precioDebitoLatam, 0.10);
			calcularDescuento(precioAerolineas, &precioDebitoAerolineas, 0.10);
			calcularInteres(precioLatam, 1.25, &precioInteresLatam);
			calcularInteres(precioAerolineas, 1.25, &precioInteresAerolineas);
			Bitcoin(precioLatam, 4626362.56, &precioBitcoinLatam);
			Bitcoin(precioAerolineas, 4626362.56, &precioBitcoinAerolineas);
			calcularKm(precioLatam, km, &precioUnitarioLatam);
			calcularKm(precioAerolineas, km, &precioUnitarioAerolineas);
			calcularDiferencia(precioLatam, precioAerolineas, &diferencia);

			printf("\nCalculando costos...");
			break;

		case 4:

			printf("Latam");
			mostrarResultado(precioDebitoLatam, precioInteresLatam,
					precioBitcoinLatam, precioUnitarioLatam);
			printf("\nAerolineas");
			mostrarResultado(precioDebitoAerolineas, precioInteresAerolineas,
					precioBitcoinAerolineas, precioUnitarioAerolineas);
			printf("\nLa diferencia de precio es: %.2f", diferencia);
			break;

		case 5:
			km = 7090;
			precioAerolineas = 162965;
			precioLatam = 159339;

			calcularDescuento(precioLatam, &precioDebitoLatam, 0.10);
			calcularDescuento(precioAerolineas, &precioDebitoAerolineas, 0.10);
			calcularInteres(precioLatam, 1.25, &precioInteresLatam);
			calcularInteres(precioAerolineas, 1.25, &precioInteresAerolineas);
			Bitcoin(precioLatam, 4626362.56, &precioBitcoinLatam);
			Bitcoin(precioAerolineas, 4626362.56, &precioBitcoinAerolineas);
			calcularKm(precioLatam, km, &precioUnitarioLatam);
			calcularKm(precioAerolineas, km, &precioUnitarioAerolineas);
			calcularDiferencia(precioLatam, precioAerolineas, &diferencia);

			printf("\nLatam");
			mostrarResultado(precioDebitoLatam, precioInteresLatam,
					precioBitcoinLatam, precioUnitarioLatam);
			printf("\nAerolineas");
			mostrarResultado(precioDebitoAerolineas, precioInteresAerolineas,
					precioBitcoinAerolineas, precioUnitarioAerolineas);
			printf("\nLa diferencia de precio es: %.2f", diferencia);

			break;
		}
	} while (opcion != 6);
	{
		printf("\nSaliendo...");
	}
	return EXIT_SUCCESS;
}//fin de la funcion
