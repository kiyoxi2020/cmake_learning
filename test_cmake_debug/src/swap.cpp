#include"swap.h"
using namespace std;

void SWAP::run(){
    int temp;
    temp = _a;
    _a = _b;
    _b = temp;
}

void SWAP::print_info(){
    cout<<"a = "<<_a<<" b = "<<_b<<endl;
}