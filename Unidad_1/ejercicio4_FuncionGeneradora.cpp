//
// Created by Mathías Rotell on 22/6/2025.
//
#include<iostream>
#include<cmath>
using namespace std;

void Resolver_FuncionGeneradora(double num[2], double denom[3])
{
	double m = denom[0];
	double n = denom[1];
	double p = denom[2];

	if (m != 0) //si m es diferente de 0
	{
		cout<<"Resolviendo ecuacion con m!=0...\n";
		double delta = n*n - 4*m*p;

		if (delta <= 0)
		{   cout<<"ERROR: El discriminante debe ser mayor que cero.\n";
			return;   }

		// Calcular raíces
		double r1 = (-n + sqrt(delta) ) / (2 * m);
		double r2 = (-n - sqrt(delta) ) / (2 * m);

		cout<<"\nLas raices del denominador son: \n";
		cout<<"r1 = "<< r1 <<", r2 = "<<r2<<"\n\n";

		//Fracciones Parciales
		double a0, a1;
		cout<<"Condiciones iniciales:\n";
		cout<<"- Ingresa el valor de a_0: ";	cin>>a0;
		cout<<"- Ingresa el valor de a_1: ";	cin>>a1;

			//Hallar los numeradores de las fracciones parciales
			double A = (a1-a0*r2) / (r1-r2);
			double B = a0 - A;

		cout<<"La solucion general es:\n";
		cout<<"a_n = "<< A <<"*("<< r1 <<")^n + "<< B <<"*("<< r2 <<")^n\n";

		double coef1 = -(r1+r2);
		double coef2 = r1*r2;

		cout<<"La ecuacion de recurrencia es:\n";
		cout<<"a_n + ("<<coef1<<")a_{n-1} + ("<<coef2<<")a_{n-2} = 0\n";

    }
	else {
		cout<<"Resolviendo ecuacion con m=0...\n";

		if (n==0)
		{cout << "ERROR: No es una funcion racional valida (denominador constante).\n";  return;}

		double r1 = -p / n;
		cout<<"\nDenominador es de grado 1. La única raíz es: r1 = " << r1 << "\n\n";

		double a0;
		cout<<"Condiciones iniciales:\n";
		cout<<"- Ingresa el valor de a_0: ";	cin>>a0;

		double A = a0;

		cout<<"La solucion general es:\n";
		cout<<"a_n = " << A << "*(" << r1 << ")^n\n";

		cout<<"La ecuación de recurrencia es:\n";
		cout<<"a_n - ("<<r1<<")a_{n-1} = 0\n";
	}
}



int main()
{
    double num[2], den[3];
    cout<<"\nIngresa los coeficientes del numerador (ax + b): \n";
        cout<<"- Ingresa a: ";    cin>>num[0];
        cout<<"- Ingresa b: ";    cin>>num[1];

    cout<<"\nIngresa los coeficientes del denominador (mx2 + nx + p): \n";
        cout<<"- Ingresa m: ";    cin>>den[0];
        cout<<"- Ingresa n: ";    cin>>den[1];
        cout<<"- Ingresa p: ";    cin>>den[2];
        
    Resolver_FuncionGeneradora(num, den);

    return 0;
}
