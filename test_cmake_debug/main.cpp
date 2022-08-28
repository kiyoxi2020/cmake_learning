#include<iostream>
#include "swap.h"
using namespace std;

int main(){
    SWAP swap(1,2);
    swap.print_info();
    swap.run();
    swap.print_info();
}