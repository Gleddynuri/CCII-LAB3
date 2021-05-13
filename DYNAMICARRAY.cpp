#include "DYNAMICARRAY.h"
#include <iostream>
DYNAMICARRAY::DYNAMICARRAY(){
    size=0;
    arr=new int[0];

    //ctor
}

DYNAMICARRAY::DYNAMICARRAY(const int*ptr, int size){
    this->size=size;
    this->arr=new int[size];
    for(int i=0;i<size;i++){
        arr[i]=ptr[i];
    }
}

DYNAMICARRAY::DYNAMICARRAY(const DYNAMICARRAY &o){
    this->size=o.size;
    this->arr=new int[o.size];
    for(int i=0;i<size;i++){
        arr[i]=o.arr[i];
    }
}

void DYNAMICARRAY::push_back(int elem){
    int *tmp=new int [size+1];
    for(int i=0;i<size;i++)
        tmp[i]=arr[i];
    tmp[size]=elem;
    size+=1;
    delete[]arr;
    arr=tmp;
}

void DYNAMICARRAY::insert(int elem, int pos){
    //se considera si el indice es menor a la posicion
    int *arr2=new int [size+1];
    for(int i=0;i<size;i++){
        if(i<pos)
            arr2[i]=arr[i];
        else
            arr2[i+1]=arr[i];
    }
    arr2[pos]=elem;
    size+=1;
    delete[]arr;
    arr=arr2;
}

void DYNAMICARRAY::remove(int pos){
    //Es similar al insert pero al reves
    int *arr3=new int [size-1];
    size-=1;
    for(int i=0;i<size;i++){
        if(i<pos)
            arr3[i]=arr[i];
        else
            arr3[i]=arr[i+1];
    }
    delete[]arr;
    arr=arr3;
}

void DYNAMICARRAY::print()const {
    for(int i=0;i<size;i++)
        std::cout<<arr[i]<<" ";
    std::cout<<std::endl;

}
DYNAMICARRAY::~DYNAMICARRAY()
{
    delete[]arr;
    //dtor
}
