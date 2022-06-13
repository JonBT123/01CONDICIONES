#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    
    int dn, mn, an, da, ma, aa,edad;
    system("cls");
	
   
    cout << "\n Introduzca su Fecha de nacimiento\n";
    cout << "\nDia: ";
    cin >> dn;
    cout << "\nMes: ";
    cin >> mn;
    cout << "\nAño: ";
    cin >> an;

   
    cout << "\nFecha actual:\n";
    cout << "\nDia: ";
    cin >> da;
    cout << "\nMes: ";
    cin >> ma;
    cout << "\nAñio: ";
    cin >> aa;

                                                
    edad = aa - an;

   
    if(mn > ma)
       edad--;
    else if(ma == mn)
    if(dn > da)
        edad--;
    else if(da == dn)
        cout << "\nFelicidades!!! Hoy es tu cumpleaños" << endl;
    
    cout << "\nEdad: " << edad << endl;
    
    system("pause");
}
