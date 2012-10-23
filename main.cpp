#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

double six(double *x)
{   double f;
    double k=100;
    for (int i=0;i<100;i++)
    {
        f=(4-2.1*(x[i]*x[i])+pow(x[i],4.0/3)*(x[i]*x[i])+(x[i]*x[i+1])+(-4+4*(x[i+1]*x[i+1]))*(x[i+1]*x[i+1]));
        if (x[i]<k)
        {
            k=x[i];
            std::cout<<"maziausia f-jos reiksme "<<k<<std::endl;
        }
    }
    std::cout<<"maziausia f-jos reiksme "<<f<<std::endl;
    return f;
    
}

using namespace std;

int main()
{   

    srand;
    cout << "MoteCarlo realizacijos pradzia" << endl;
    cout << "(RANDOM SEARCH METHOD)" << endl;
    //kiontamuju apsirashymas
    double f,*x, h=1,l=0;   // j-jos reiksmes ir argumentas x
    int n;      // uzdavinio dimensija
    int xSprendin; //  sprendinys
    int fSprend;    // uzdavinio sprendinys
    x=(double*) malloc(5000);
    cout<<"Atsakymas: "<<endl;
    for(int i=0; i<100; i++)
        {
            //cout<<h-1<<endl;
            x[i]=-1+2*((float)rand())/RAND_MAX;
            cout<<i+1<<" as:\t"<<x[i]<<endl;
        }
        cout<<"six lygu siame taske "<< six(x)<<endl;
    system("pause");
    return 0;
}
