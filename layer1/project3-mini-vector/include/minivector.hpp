#pragma once

class MiniVector{

    private:
    /*data member*/
        int *data;
        size_t n;
        size_t capacity;

    public:

    /*constructors*/
    MiniVector(); /*default constructor*/
    MiniVector(size_t size); /*Parameterized constructor*/
    MiniVector(const MiniVector &other); /*copy constructor*/
    MiniVector(MiniVector &&other); /*Move constructor*/

    /*Operations*/
    MiniVector& operator=(const MiniVector &other); /*Copy assignment operator overloading*/
    MiniVector& operator=(MiniVector &&other); /*Move assignment operator*/
    void push_back(int val); /*add element to the end*/
    void pop_back(); /*remove last element*/
    int operator[](int index); /*Access element by access*/
    size_t size(); /*Number of element stored*/

};