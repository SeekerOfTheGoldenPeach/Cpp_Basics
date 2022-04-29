#pragma once
#include <string>

/* INCLUDE GUARD: if compiler not support pragma once
#ifndef MIAN.H
#define MAIN.H

// code

#endif //MAIN.H
*/

enum cow_purpouse {dairy,meet,pet};

class cow
{
public:
cow(std::string name_i, int age_i, unsigned char type_i);
std::string get_name();
int get_age();
unsigned char get_type();
void set_name(std::string new_name);
void set_age(int new_age);
void set_type(unsigned char new_type);

private:
std::string name;
int age;
unsigned char type;
};

