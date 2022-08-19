//codigo para calcular tiempo de certificacion
//Emilia G.V.
//19 de Agosto del 2022
//Version 1.1

//Bibliotecas
#include <stdio.h>

int main(void) {
//variables
  int Tcert=60;
  int Tdedicado;
  int Trequerido;
//ingresar los valores 
  printf("Ingresa el tiempo a estudiar\n");
  scanf("%d",&Tdedicado);

    //operacion
  Trequerido=Tcert+60/Tdedicado;

  //imprimir resultados
  printf("se requieren %f dias para obtener el certificado");
  return 0;
}