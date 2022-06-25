/* 1) Declare una estructura para almacenar datos de estudiantes (DNI y dos notas correspondientes a los dos cuatrimestres del anio).
Haga un programa que permita ingresar los datos de 5 estudiantes en un vector de estas estructuras.
Luego de ingresar los datos se deben mostrar los DNI de cada estudiante y el promedio que tiene en sus examenes. */

#include <stdio.h>

struct estudiantes{      //Se declara la estructura estudiante y se indica que datos van a estar incluidos en la misma.          
    int DNI;                                                  
    float nota1;
    float nota2;
    };

int main(){
    int i = 0;
    float promedio;   
    struct estudiantes estudiante[5];   //Se crea un vector de estructuras con una posicion para cada uno de los cinco estudiantes.
		

    for(i=0; i<5; i++){                                //La utilizacion de un vector de estructuras hace mas efectivo el ingreso de datos.            
        printf("Ingrese el DNI del estudiante %d: ", i+1);
        scanf("%d", &estudiante[i].DNI);

        printf("Ingrese la primer nota del estudiante %d: ", i+1); 
        scanf("%f", &estudiante[i].nota1);                         
                                                                   
        printf("Ingrese la segunda nota del estudiante %d: ", i+1);
        scanf("%f", &estudiante[i].nota2);
        
   	 }

    for(i=0; i<5; i++){        //Se calcula el promedio de cada estudiante y se muestra en pantalla.

        promedio = (estudiante[i].nota1 + estudiante[i].nota2)/2;    //La variable promedio no es parte de la estructura estudiante, sino que cambia su valor en cada estudiante.         

        printf("D.N.I.: %d\tPromedio: %.2f\n", estudiante[i].DNI, promedio);
    }
}