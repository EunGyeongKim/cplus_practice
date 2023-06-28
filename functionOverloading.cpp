#include <iostream>

void myfunc(void){
    std::cout << "myfunc(void) called" << std::endl;
}
void myfunc(char c){
    std::cout << "myfunc(char c) called" << std::endl;
}
void myfunc(int a, int b){
    std::cout << "myfuc(int a, int b) called" << std::endl;
}

int main(void){
    myfunc();
    myfunc('A');
    myfunc(12, 13);
    return 0;
}