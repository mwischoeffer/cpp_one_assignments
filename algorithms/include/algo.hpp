#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"
#include <iostream>
#include <string>


// comments will be obvious to you, but useful to me when I review these
long fibonacci(const int n)
{
<<<<<<< HEAD
    long long a = 0, b = 1, R; // a and b are first two digits of sequence, R is local result

    if (n <= 1){
        R = n;
    } 
    else {
        R = a + b;
            for (int i = 0; i < n-2; ++i){ //iterates the following n-2 times 
            a = b;
            b = R;
            R = a + b;
            }
    }
    return R;
=======
    std::cout << n << std::endl;
    if(n == 0 || n == 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
>>>>>>> upstream/main
}



int linear_search(Array * a, const int target)
<<<<<<< HEAD
{    
    int targetElement=target; //copies const variable target so it's modifiable


    for (size_t i=0; i< a->len; i++){
        if (a->data[i] == targetElement){
=======
{
    for(size_t i = 0; i < a->len; i++)
    {
        if(a->data[i] == target)
        {
>>>>>>> upstream/main
            return i;
        }
    }
    return -1;
}



long factorial(const int n)
{
<<<<<<< HEAD
    long long R = 1; // R is local result

    if (n == 0) { //probably overkill for this, but since 0! is one...
        return R;
    }
    for (int mod_n = n; mod_n > 1; --mod_n){  //mod_n converts const n to modifiable variable
        R *= mod_n;
        }
    return R;
=======
    if(n == 0)
        return 1;
    else{
        return n * factorial(n - 1);
    }
}

std::string fizz_buzz_checker(const int n) {
    if (n % 15 == 0) {
        return "fizzbuzz";
    }
    else if (n % 5 == 0)
    {
        return "buzz";
    }
    else if (n % 3 == 0)
    {
        return "fizz";
    }
    return "";
>>>>>>> upstream/main
}

#endif // ALGO_H_
