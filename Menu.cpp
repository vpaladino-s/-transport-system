#include "Menu.h"

void ImprimirMenu (int &o){
/*
1. Registro de un nuevo cami�n, dados sus datos y la c�dula del camionero que lo maneja.

2. Listado b�sico de todos los camiones registrados. No se pide ning�n orden para este listado.

3. Listado detallado de un cami�n. Dada la matr�cula del cami�n, listar todos sus datos. Tambi�n se
deben listar los datos del camionero que lo maneja y la cantidad de metros c�bicos anuales que
es capaz de transportar. En caso de que el cami�n no exista, se debe emitir un mensaje de error.

4. Registro de un nuevo camionero, dados sus datos. Se debe chequear que no exista otro camionero
con la misma c�dula. En otro caso, el registro ser� cancelado, emitiendo un mensaje de error.

5. Listado de todos los camioneros registrados. Este listado debe realizarse ordenado por c�dula
de identidad de menor a mayor.

6. Calcular la cantidad de metros c�bicos anuales que toda la flota de camiones es capaz de
transportar (es decir, la suma de todas las cantidades de metros c�bicos anuales que cada
cami�n es capaz de transportar).

7) Dada la matr�cula de un cami�n, modificar la cantidad de viajes anuales que realiza dicho
cami�n. En caso de el cami�n no exista, se debe emitir un mensaje de error.

8) Obtener la cantidad de camiones de cada tipo que hay en la flota (es decir, la cantidad de
camiones simples, la cantidad de camiones grandes y la cantidad de camiones con remolque).

9) Listar los datos del camionero con la mayor cantidad de tatuajes. En caso de que haya m�s de
uno, listar cualquiera de ellos. En caso de que no haya ning�n camionero registrado, se debe
emitir un mensaje de error.

10) Dada una fecha, contar cu�ntos camiones grandes hay registrados cuya fecha de adquisici�n
sea posterior a dicha fecha. */

    printf("\n\n************MENU************\n\n");
    printf("\n1. Registrar camion");
    printf("\n2. Listado de camiones registrados");
    printf("\n3. Listado detallado de un camion");
    printf("\n4. Registro de un nuevo camionero");
    printf("\n5. Listado de todos los camioneros registrados");
    printf("\n6. Calcular la cantidad de metros cubicos anuales");
    printf("\n7. Modificar la cantidad de viajes anuales de un camion");
    printf("\n8. Obtener la cantidad de camiones de cada tipo que hay en la flota");
    printf("\n9. Listar los datos del camionero con la mayor cantidad de tatuajes.");
    printf("\n10. Dada una fecha, contar cuantos camiones grandes hay registrados");
    printf("\n\n\n11. Salir");

    printf("\n\nIngrese una Opcion: ");
    scanf("%d",&o);
}
