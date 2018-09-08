//
// Created by page on 2018/9/8.
//
#include <iostream>


#include "../header/quick_sort.h"


using namespace std;

void swap(int v[], int i, int j)
{
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}


/*quick sort */
void my_quick_sort(int v[], int n)
{
    int i, last;
    if (n <= 1)
        return;
    swap(v, 0, rand() % n);
    last = 0;
    for (i = 0; i < n; i++)
        if (v[i] < v[0])
            swap(v, ++last, i);
    swap(v, 0, last);
    my_quick_sort(v, last);
    my_quick_sort(v + last + 1, n - last - 1);
}
