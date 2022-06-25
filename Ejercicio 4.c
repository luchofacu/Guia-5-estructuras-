/*4) Una ferretería tiene un listado de facturas emitidas en cierto año, con estos datos: número de factura, fecha de emisión (día y mes), nombre del cliente y monto total. Dado
 un vector de 10 facturas, se necesita mostrar en pantalla cuál fue el mejor mes (o sea, el de mayor dinero facturado). Los datos se pueden ingresar por teclado o dejarlos fijos 
 en el programa para no perder tiempo en tipear datos.*/
 
#include <stdio.h>
//Declaramos las estructuras.
struct fecha_s{
	int dia;
	int mes;
};

struct facturas_s{
	int num_factura;
	struct fecha_s fecha;
	char nombre[40];
	float monto;
};

int main(){
	float factura_mes[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};//Se inicia el contador cuyas posiciones corresponden a un mes del año, al que se le sumaran los montos correspondientes.
	struct facturas_s facturas[10];
	int i, j;
	int mejor = 0;
	
	for (i=0 ; i<10 ; i++){ //Se ingresan los datos.
		printf ("Ingrese el numero de factura: ");
		scanf ("%d",&facturas[i].num_factura);
		
		printf ("Ingrese el dia de la factura: ");
		scanf ("%d",&facturas[i].fecha.dia);
		
		printf ("Ingrese el mes de la factura: ");
		scanf ("%d",&facturas[i].fecha.mes);
		
		printf ("Ingrese el nombre del facturado(?): ");
		scanf("%s",&facturas[i].nombre);
		
		printf ("Ingrese el monto de la factura: ");
		scanf ("%f",&facturas[i].monto);
	}
	

	for (i=0 ; i<10 ; i++){//Se toma el mes de la factura y se suma el monto de la misma al contador en la posicion correspondiente segun el mes.	
	
		factura_mes[--facturas[i].fecha.mes] += facturas[i].monto;		
		
	}
		
	for (i=0 ; i<12 ; i++){
		if (factura_mes[i] > factura_mes[i+1]){//Se comparan las posiciones de factura_mes para encontrar el mes con mayor facturacion y se guarda el mismo.
			mejor = i;			
		}
	}
	printf("El mejor mes fue el %d ",++mejor);
	
	return 0;
}