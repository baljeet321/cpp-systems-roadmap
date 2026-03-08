#include <bits/stdc++.h>
#include "minivector.hpp"

/*Implementation of default constructor*/
MiniVector:: MiniVector():n(0), capacity(0), data(nullptr){}

/*Implementation of parameterized constructor*/
MiniVector:: MiniVector(size_t m):n(m), capacity(m), data(new int[m]){}

/*Implementation of copy constructor*/
MiniVector::MiniVector(const MiniVector &other){
     
    this->n = other.n;
    this->capacity = other.capacity;

    /*Perform deep copy of resource*/
    this->data = new int[capacity];
    std::memcpy(this->data, other.data, sizeof(int)*other.capacity);

}

/*Implementation of move constructor*/
MiniVector:: MiniVector(MiniVector &&other)
{
    /*stealing resource*/
    this->data = other.data;
    this->n    = other.n;
    this->capacity = other.capacity;

    /*Keeping temp object in valid state*/
    other.data = nullptr;
    other.n = 0;
    other.capacity = 0;
}


/*Implementation of copy assignment operator*/
MiniVector& MiniVector::operator=(const MiniVector &other)
{
    /*checking for self copy thing*/
    if(this == &other)
    {
        return *this;
    }

    /*copyign size and capacity*/
    this->n = other.n;
    this->capacity = other.capacity;

    /*releasing existing resource*/
    delete []this->data;

    this->data = new int[capacity];

    std::memcpy(this->data, other.data, sizeof(int)*other.capacity);

    return *this;
}

/*Implementation of move assignment operator*/
MiniVector& MiniVector::operator=(MiniVector &&other)
{
    /*checking for self copy thing*/
    if(this == &other)
    {
        return *this;
    }

    /*copyign size and capacity*/
    this->n = other.n;
    this->capacity = other.capacity;

    /*releasing existing resource*/
    delete []this->data;

    this->data = other.data;


    /*clean up*/
    other.data = nullptr;
    other.n = 0;
    other.capacity = 0;

    return *this;
}

/*Implementation of function to add element at the end*/
void MiniVector::push_back(int val)
{
    if(n >= capacity)
    {
        if(capacity == 0)
        {
            capacity = 1;
        }
        /*time to double the capacity*/
        capacity = 2ll*capacity;

        int *temp = new int[capacity];
        std::memcpy(temp, data, sizeof(int)*n);

        delete []data;
        data = temp;

    }
    data[n]=val;
    n++;
}

/*remove last element*/
void MiniVector::pop_back()
{
    if(n>0)
    {
        n--;
    }
}

/*Access an element; oht read and wirte permission*/
int& MiniVector::operator[](int index)
{
    if(index<n)
    {
        return data[index];
    }
    throw("Index out of bound exception");
}

/*return siz of vector*/
size_t MiniVector::size()
{
    return n;
}


MiniVector::~MiniVector()
{
    delete []this->data;
    this->n = 0;
    this->capacity = 0;
}