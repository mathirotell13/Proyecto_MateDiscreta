#include<iostream>
using namespace std;

void Generar_EcRecurrencia(int grado) {
    if (grado != 2 && grado != 3) {
        cout<<"ERROR: El ejercicio te pide solo de grado 2 o 3.\n";
        return;
    }

    double r[3], A[3]; //para guardar raíces y los coeficientes A,B,C

    for (int i = 0; i < grado; i++)
    {   cout<<"Ingrese r"<<(i + 1)<<": ";
        cin>>r[i]; }

    for (int i = 0; i < grado; i++)
    {   cout<<"Ingrese "<<char(65+i)<<": ";
        cin>>A[i];  }

    //Verificar raíces
    for (int i = 0; i < grado; i++)
    {   for (int k = i+1; k < grado; k++)
        {   if (r[k]==r[i])
            {   cout<<"ERROR: Las raices deben ser distintas.\n";
                return;   }
        }
    }

    // Mostrar ecuación de recurrencia
    cout<<"\nLa ecuación en recurrencia que satisface a_n es:\n";

    if (grado == 2)
    {   double coef1 = -(r[0] + r[1]);
        double coef2 = r[0] * r[1];
        cout<<"a_n + ("<< coef1 <<")a_{n-1} + ("<< coef2 <<")a_{n-2} = 0\n";
    }
    else if (grado == 3)
    {
        double coef1 = -(r[0] + r[1] + r[2]);
        double coef2 = r[0]*r[1] + r[0]*r[2] + r[1]*r[2];
        double coef3 = -r[0]*r[1]*r[2];
        cout << "a_n + ("<< coef1 <<")a_{n-1} + ("<< coef2 <<")a_{n-2} + ("<< coef3 <<")a_{n-3} = 0\n";
    }

    //Plus: Mostrar los primeros términos de la sucesión
    cout << "\nPrimeros terminos de la sucesion:\n";
    for (int n = 0; n < grado; n++)
    {
        double an = 0;
        for (int i = 0; i < grado; i++)
        {
            an += A[i] * pow(r[i], n);
        }
        cout<< "a_"<<n<<" = "<<an<< endl;
    }

}

int main() {
    int grado;
    cout<<"Ingresa el grado de la solucion: ";
    cin>>grado;

    Generar_EcRecurrencia(grado);
    return 0;
}
