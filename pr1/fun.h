
#ifndef fun_h
#define fun_h

#include <string>
#include <ctime>
#include <stdlib.h>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>

using namespace System::Windows::Forms;

struct student
{
    std::string fam;
    std::string im;
    int age;
};

bool savest(student* a, int n);
void sort11(student* a, int n);
void sort12(student* a, int n);
void sort21(student* a, int n);
void sort22(student* a, int n);

#endif