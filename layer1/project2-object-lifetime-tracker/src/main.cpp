#include<iostream>
#include "tracker.hpp"

int main()
{
    Tracker T1;
    Tracker T2(T1);
    Tracker T3;
    T3 =  T1;
    Tracker T4(std::move(T2));
    T4 = std::move(T3);
    Tracker T5 = T1;
}