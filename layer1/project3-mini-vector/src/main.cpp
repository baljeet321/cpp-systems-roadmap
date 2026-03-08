#include <bits/stdc++.h>
#include "minivector.hpp"

int main()
{

    MiniVector v1;
    MiniVector v2(5);
    std::cout<<v1.size()<<std::endl;
    std::cout<<v2.size()<<std::endl;
    v2.push_back(100);
    v1.push_back(100);

    std::cout<<v1.size()<<std::endl;
    std::cout<<v2.size()<<std::endl;

    MiniVector v3(v1);
    MiniVector v4 = v2;

    std::cout<<v3.size()<<std::endl;
    std::cout<<v4.size()<<std::endl;
    v3.push_back(100);
    v4.push_back(100);
    std::cout<<v3.size()<<std::endl;
    std::cout<<v4.size()<<std::endl;
    MiniVector v5, v6;
    v5 = v2;
    v6 = std::move(v3);
    for(int i=0;i<v5.size();i++)
    {
        std::cout<<"at index "<<i<<" : "<<v5[i]<<std::endl;
    }
}