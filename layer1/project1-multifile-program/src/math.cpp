
#include "math.hpp"
#include<string>
int add(int x, int y)
{
    return {x+y};
}

int sub(int x, int y)
{
    return {x-y};
}

int mul(int x, int y)
{
    return {x*y};
}

int divi(int x, int y)
{
    try{
        
        if(y==0)
            throw(std::string("Divide by zero exception !!"));
        
        return {x/y};
    }
    catch(std::string s)
    {
        throw s;
    }
    
}