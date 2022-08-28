#pragma once
#include<iostream>
class SWAP{
    private:
        int _a;
        int _b;
    public:
        SWAP(int a, int b){
            this->_a = a;
            this->_b = b;
        }
        void run();
        void print_info();
};