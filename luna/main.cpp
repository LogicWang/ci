#include <iostream>
#include <cmath>

//
// Created by page on 14/12/2016.
//
#include "header/quick_sort.h"

using namespace std;



int main() {
    std::cout << "start" << std::endl;
    //sieve();
    char* flab[] = {
            "actually",
            "just",
            "quiet",
            "really",
            NULL
    };
    char *w;
    w = "quiet";
    //int ret  = lookup2(w, flab,4);

    int st[] = {1,9,4,6,3,8};
    my_quick_sort(st,6);
    for(int i = 0; i < 6; i++)
        std::cout << st[i] << std::endl;
    return 0;
}


int lookup(char* word, char* array[]) {
    int i;
    for (i = 0; array[i] != NULL; i++)
        if(strcmp(word, array[i]) ==  0)
            return i;
    return -1;
}


int lookup2(char *name, char* array[],  int ntab) {
    int low, high, middle, cmp;
    low = 0;
    high = ntab - 1;
    while(low <= high){
        middle = (low + high)/2;
        cmp = strcmp(name, array[middle]);
        if(cmp < 0)
            high = middle - 1;
        else if(cmp > 0)
            low = middle + 1;
        else
            return middle;
    }
    return -1;
}





