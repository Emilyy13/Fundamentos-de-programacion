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
  float Trequerido;
//ingresar los valores 
  //lo que va a preguntar la computadora
  printf("Ingresa el tiempo a estudiar en minutos\n");
  scanf("%d",&Tdedicado); //%d,&Tdedicado es lo que uno le dice a la comutadota que va a dedicar 

    //operacion
  Trequerido=Tcert*60/Tdedicado; // el Tcert se multiplica por 60min, por que el 60 de arriba eran 60 horas, luego se divide entre el tiempo que se dedica

  //imprimir resultados
  printf("se requieren %f dias para obtener el certificado",Trequerido);
  return 0;
  // nos dice cuantos dias se van a necesitar
}