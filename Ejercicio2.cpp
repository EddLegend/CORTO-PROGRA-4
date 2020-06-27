#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
	int estatura[25], i, n=0, est_may=0, est_men=0, suma=0;
	float promedio;
 
    cout << "**Calculo de estaturas de estudiantes**" << endl;
	
    for(i=0;i<25;i++)
    {
        cout<<"ingrese la estatura del estudiante en (cm)"<<endl;
		    cin>>estatura[i];
		    suma=suma+estatura[i];
		    n=n+1;
    }
 
    promedio = suma / n;
 
	  cout<< endl <<""<<endl;
 
	  for(i=0;i<25;i++)
    {
	      if (estatura[i] > promedio)
        est_may++;
        else
        est_men++;
    }
 
	cout<<"El promedio de las estaturas es de: "<<promedio<<endl;
	cout<<"Las estaturas menores son: "<<est_men<<endl;
	cout<<"Las estaturas mayores son: "<<est_may<<endl;
 
  return 0;
}