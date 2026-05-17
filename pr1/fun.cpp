#include "fun.h"

bool savest(student* a, int n)
{
    std::ofstream f("emae.txt");
    if (!f.is_open())
    {
        return false;
    }

    for (int i = 0; i < n; i++)
    {
        f << a[i].fam << '\n';
        f << a[i].im << '\n';
        f << a[i].age << '\n';
    }
    f.close();
    return true;
}

void sort11(student* a, int n)
{
    for (int x = 0; x < n; x++)
    {
        student t;
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i].fam > a[i + 1].fam)
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                flag++;
            }
        }
        if (flag == 0) { break; }
    }
}

void sort12(student* a, int n)
{
    for (int x = 0; x < n; x++)
    {
        student t;
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i].fam < a[i + 1].fam)
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                flag++;
            }
        }
        if (flag == 0) { break; }
    }
}

void sort21(student* a, int n)
{
    for (int x = 0; x < n; x++)
    {
        student t;
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i].age > a[i + 1].age)
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                flag++;
            }
        }
        if (flag == 0) { break; }
    }
}

void sort22(student* a, int n)
{
    for (int x = 0; x < n; x++)
    {
        student t;
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i].age < a[i + 1].age)
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                flag++;
            }
        }
        if (flag == 0) { break; }
    }
}