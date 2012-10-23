#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

double six(double *x)
{
    
    double f=(4-2.1*(x[0]*x[0])+pow(x[0],4.0/3)*(x[0]*x[0])+(x[0]*x[1])+(-4+4*(x[1]*x[1]))*(x[1]*x[1]));
    return f;
    
}

using namespace std;

int main()
{   

    //srand;
    cout << "MoteCarlo realizacijos pradzia" << endl;
    cout << "(RANDOM SEARCH METHOD)" << endl;
    //kiontamuju apsirashymas
    double f,*x, h=1,l=0;   // j-jos reiksmes ir argumentas x
    int n;      // uzdavinio dimensija
    int xSprendin; //  sprendinys
    int fSprend;    // uzdavinio sprendinys
    x=(double*) malloc(500);
    cout<<"Atsakymas: "<<endl;
    for(int i=0; i<5; i++)
        {
            //cout<<h-1<<endl;
            x[i]=rand()*(h-l)/RAND_MAX +l;
            cout<<i+1<<" as:\t"<<x[i]<<endl;
        }
        
        x[0]=0.089842;
        x[1]=-0.712656;
        cout<<"six lygu siame taske "<< six(&x[0])<<endl;
    system("pause");
    return 0;
}
