#include <iostream>
#include "DYNAMICARRAY.h"
using namespace std;

int main()
{
    DYNAMICARRAY a;
    cout << a.getsize()<< endl;

    int arreglo[]={10,12,7,8,25,9,17,28};
    int tam=sizeof(arreglo)/sizeof(arreglo[0]);

    DYNAMICARRAY b(arreglo,tam);
    cout<<b.getsize()<<endl;
    //CONSTRUCTOR COPIA
    if(true)
        DYNAMICARRAY c=b;
    b.print();
    b.push_back(15);
    b.print();
    b.insert(6,7);
    b.print();
    b.remove(5);
    b.print();

    return 0;
}
