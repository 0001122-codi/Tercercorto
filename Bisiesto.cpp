#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main ()
{
int anioIngresado;

while(true)
{
    cout <<"Ingrese un ano: "<< endl;
    cin >> anioIngresado;

    if(anioIngresado % 4 == 0) 
    {
        cout <<"Es ano bisiesto"<< endl;
        break;
    }
    else if (((anioIngresado % 100 != 0) || anioIngresado % 400 == 0));
    {
        cout <<"No es ano bisisesto"<< endl;
    }
    
    
    
}
}