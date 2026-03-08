#include<bits/stdc++.h>
#include "tracker.hpp"

/*Implementation of default constructor*/
Tracker::Tracker(): p(new int[10])
{
    std::cout<<"Default constructor"<<std::endl;
}


/*implementation of destructor*/
Tracker::~Tracker()
{
    std::cout<<"Destructor called ... for obj "<<this<<std::endl;
    
    /*Releasing resource*/
    delete []p;

}

/*implementation of copy constructor*/
Tracker:: Tracker(const Tracker &other)
{
    std::cout<<"Copy Constructor called"<<std::endl;
    /*doiing deep copy*/
    this->p = new int[this->n];
    std::memcpy(this->p, other.p, sizeof(int)*this->n);
    
}

/*copy assignment operator*/
Tracker & Tracker:: operator=(const Tracker &other) 
{
    std::cout<<"Copy Assignement called"<<std::endl;

    /*defesnive check to avoid self copy x= x*/
    if(this == &other)
    {
        return *this;
    }

    /*releasing exiting resource*/
    delete[] this->p;
    

    /*doiing deep copy*/
    this->p = new int[this->n];
    std::memcpy(this->p, other.p, sizeof(int)*this->n);

    return *this;
}

/*move constructor*/
Tracker:: Tracker(Tracker &&other)
{
    std::cout<<"Move constructor called"<<std::endl;

    /*taking resource*/
    this-> p =  other.p;

    /*keep in valid state*/
    other.p = nullptr;

}

/*move assignment operator*/
Tracker & Tracker:: operator=(Tracker &&other) 
{
    std::cout<<"Move Assignement called"<<std::endl;

    /*defesnive check to avoid self move x= x*/
    if(this == &other)
    {
        return *this;
    }

    /*releasing exiting resource*/
    delete[] this->p;
    
    /*taking resource*/
    this-> p =  other.p;

    /*keep in valid state*/
    other.p = nullptr;
    
    return *this;
}