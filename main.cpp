#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "MoteCarlo realizacijos pradzia" << endl;
    cout << "(RANDOM SEARCH METHOD)" << endl;
    //kiontamuju apsirashymas
    double f,*x, h=1,l=0;   // j-jos reiksmes ir argumentas x
    int n;      // uzdavinio dimensija
    int xSprendin; //  sprendinys
    int fSprend;    // uzdavinio sprendinys
    x=(double*) malloc(510);
    cout<<"Atsakymas: "<<endl;
    for(int i=0; i<100; i++){
    x[i]=rand()*(h-l)/RAND_MAX +l ;
    cout<<x[i]<<endl;
}

    return 0;
}
