#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H


class DYNAMICARRAY{
    int size;
    int *arr;
    public:
        DYNAMICARRAY();
        DYNAMICARRAY(const *ptr, int size);
        DYNAMICARRAY(const DYNAMICARRAY &o);

        void push_back(int elem);
        void insert(int elem, int pos);
        void remove(int pos);


        int getsize()const{
            return size;
        }

        void print()const;
        ~DYNAMICARRAY();
};

#endif // DYNAMICARRAY_H
