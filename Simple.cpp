#include "Simple.h"

Simple :: Simple (int cant, String mat, String mar, String dep): Camion(cant,mat,mar)
{
    depto=dep;
}

Simple :: ~Simple ()
{

}

String Simple :: getDepto()
{
    return depto;
}

void Simple :: setDepto (String d)
{
    depto =d;
}

 String Simple:: tipoCamion()
 {
    return "Simple";
 }


float Simple:: Volumen (){

    //Cada cami�n simple puede transportar 10 metros c�bicos por viaje.
    return 10 * getCantViajesAnuales();

}
