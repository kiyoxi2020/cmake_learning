#include <iostream>

class add_my{
	public:
		int add(int a, int b);
};

int add_my::add(int a, int b){
	int out = (a + b) * b;
	std::cout<< " Results: "<< out << std::endl;
	return out;
}

extern "C" {
	add_my t;
	int add_my(int a,int b){
		return t.add(a,b);
	}
}
