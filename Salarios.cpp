#include <iostream>

using namespace std;

int main ()
{
  
    float ValorHorasTrab = 1.75;
    float Horas;
    float ValorHorasEx = 2.50;
    float HorasEx;
    float SalarioReal;
    float SalarioTotalSH;
    float SalarioTotalCH;
    float SalarioAFP;
    float SalarioTotal;
    float ValorSalarioAFP;
    float SS = 0.04;
    float ValorSalarioSS;
    float SalarioSS;
    float AFP = 0.0625;
    float ImpuestoRenta = 1;
    float Rensalario;

    cout <<"Calcular el salario mensual o semanal de los empleados de nuestra empresa"<< endl;

    cout <<"Ingrese las horas trabajadas por el empleado: "<< endl;
     cin >> Horas;
     SalarioTotalSH=Horas*ValorHorasTrab;

    while (Horas <= 0)
    {
        cout << "Ese weon flojo no ha trabajado nada"<< endl;
        system("PAUSE");
        return 0;
    }
    if (SalarioTotal >= 500)
    {
    Rensalario = SalarioTotal * ImpuestoRenta;
    SalarioReal = SalarioTotal - Rensalario;
    } 
 
    
    else
    {
        cout <<"Ingrese las horas extra"<< endl;

        cin >> HorasEx;
        SalarioTotalCH=HorasEx*ValorHorasEx;
        SalarioTotal=SalarioTotalCH+SalarioTotalSH;


    }
    
    ValorSalarioAFP=SalarioTotal*AFP;
    SalarioAFP=SalarioTotal-ValorSalarioAFP;

    ValorSalarioSS=SalarioAFP*SS;
    SalarioAFP=SalarioAFP-ValorSalarioSS;

    cout <<"El salario real es: "<< SalarioAFP;   

    
   
   


    
    
    
    
    
    
    
   




    



}


