//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream.h>
#include <math.h>
#include <conio.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
        double x,z,b,f,a,a1,a2,a3;
        cin >> z;
        cin >> a;
        cin >> b;
        if (z > 0 )
        {
        x=1/(pow(z,2.0)+2*z);
        }
        else if (z <=0){
        x=1 - pow(z,3.0);
        };
        cout << "f(x)= 2*x" ;
        f=2*x;
        a1= 2.5*a*exp(-3*x)- 4*b*pow(x,2.0);
        a2= log(fabs(x))+f;
        cout << "\n" << a1/a2;
        cout << "\n";
        cout << "f(x)= x^2";
        f=pow(x,2.0);
        a1= 2.5*a*exp(-3.0*x)- 4*b*pow(x,2.0);
        a2= log(fabs(x))+f;
        cout << "\n" << a1/a2;
        cout << "\n";
        cout << "f(x)= x/3";
        f=x/3.0;
        a1= 2.5*a*exp(-3*x)- 4*b*pow(x,2.0);
        a2= log(fabs(x))+f;
        cout << "\n" << a1/a2;
        getch();
        return 0;
}
//---------------------------------------------------------------------------

