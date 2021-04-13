#ifndef STING_H_INCLUDED
#define STING_H_INCLUDED
#include <iostream>
#include <string.h>
using namespace std;



const int MAX = 80;
class String
{
    private:
        char * cadena;

    public:
        String();   // constructor por defecto.

        String(char* s);  // constructor com�n

        String(const String &); // constructor de copia

        ~String();  // destructor

        String operator=(const String &);  // sobrecarga de asignaci�n

        bool operator==(String);  // compara dos strings por igualdad.

        bool operator< (String); // compara dos strings alfab�ticamente

        void scan();  // lee un string desde la entrada est�ndar.

        void print();  // muestra un string en la salida est�ndar

        int toNumero();

};


#endif // STING_H_INCLUDED
