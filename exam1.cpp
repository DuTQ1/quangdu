#include <iostream>

int main(){ 
int a,b;
int temp;
a = 5;
b = 10;
std:: cout<<"Before swap:";
std::cout<<a<<std::endl;
std::cout<<b<<std::endl;
temp = a;
a = b;
b = temp;
std:: cout<<"After swap:";
std::cout<<a<<std::endl;
std::cout<<b<<std::endl;
return 0;
}