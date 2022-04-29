
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void toggle()
{
    unsigned int number = 1;
    int pos =0;

    std::cout<<"Your number: "<< number<< "\n";
    std::cout<<"bit to toggle: ";
    std::cin>>pos;
    number^=1<<pos;
    std::cout<<"New number after toggle bit is: "<<number<<std::endl;
}

void changeBit()
{

}
