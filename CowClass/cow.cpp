#include <iostream>
#include "cow.hpp"

cow::cow(std::string name_i, int age_i, unsigned char type_i)
{
    name = name_i;
    age = age_i;
    type = type_i;
}
std:: string cow::get_name()
{
    return name;
}
int cow::get_age()
{
    return age;
}
unsigned char cow::get_type()
{
    return type;
}

void cow::set_name(std::string new_name)
{
    name = new_name;
}

void cow::set_age(int new_age)
{
    age = new_age;
}

void cow::set_type(unsigned char new_type)
{
    type = new_type;
}

