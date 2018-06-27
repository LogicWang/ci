#include <iostream>
#include <cmath>
#include "search.h"
#include "myquicksort.h"
//
// Created by page on 14/12/2016.
//

using namespace std;


int main() {
    std::cout << "Hello, World!" << std::endl;
    //sieve();
    char* flab[] = {
            "actually",
            "just",
            "quiet",
            "really",
            NULL
    };
    char *w;
    int st[] = {1,9,4,6,3,8};
    myquicksort(st,6);

    w = "quiet";
    //int ret  = lookup2(w, flab,4);
    for(int i = 0; i < 6; i++)
        std::cout << st[i] << std::endl;
    return 0;
}

