#include <iostream>
#include<cmath>
#include<cstring>

//
// Created by page on 14/12/2016.
//


using namespace std;
int sieve()
{
    const int n = 100;
    bool a[101];
    int i, j;

    memset(a, 1, sizeof(a));
    a[1] = 0;
    for(i = 2; i <= sqrt(n); i ++)
    {
        if(a[i])
        {
            for(j = 2; j <= n/i; j ++)
            {
                a[i*j] = 0;
            }
        }
    }
    for(i = 2; i <= n; i ++)
    {
        if(a[i]) cout << i << " ";
    }
    return 0;

}


int main() {
    std::cout << "Hello, World!" << std::endl;
    sieve();
    return 0;
}

