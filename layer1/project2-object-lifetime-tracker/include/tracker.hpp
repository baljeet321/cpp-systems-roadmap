#pragma once /*to avoid multiple inclusion*/

class Tracker
{
    int *p;
    const size_t n{10};
    public:
        Tracker(); /*Defualt constructor*/
        Tracker(const Tracker &other); /*Copy constructor*/
        Tracker(Tracker &&other); /*Move constructor*/
        Tracker& operator=(const Tracker &other); /*Copy assignement operator*/
        Tracker& operator=(Tracker &&other); /*Move assignement operator*/
        ~Tracker(); /*Destructor*/
};