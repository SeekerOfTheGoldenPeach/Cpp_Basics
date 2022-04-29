#include <iostream>
#include <typeinfo>
int main()
{
int a = 8;
int *ptr = &a;
int **ptr1 = &ptr;
std::cout<<"DEFAULT DATA:"<<std::endl;
std::cout<<"int a = 8;\n"<<"int *ptr = &a;\n"<<"int **ptr1 = &ptr;"<<std::endl;
std::cout<<"PRINT-OUT"<<std::endl;
std::cout<<"adress of int variable a:                "<<&a<<std::endl;
std::cout<<"value of ptr:                            "<<ptr<<std::endl;
std::cout<<"value of ptr1 pointing to adress of ptr: "<<ptr1<<std::endl;
std::cout<<"ptr adress:                              "<<&ptr<<std::endl;
std::cout<<"type of ptr1:                            "<<typeid(ptr1).name()<<std::endl;
std::cout<<"type of variable a:                      "<<typeid(a).name()<<std::endl;
std::cin.get();
return 0;
}