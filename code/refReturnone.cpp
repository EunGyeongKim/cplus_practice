#include <iostream>
using namespace std;

int & refRetFunOne(int & ref){
    ref ++;
    return ref;
}

int main(void){
    int num1 = 1;
    int &num2 = refRetFunOne(num1);

    num1++;
    num2++;

    cout << "num1 : " << num1 << endl; //4
    cout << "num2 : " << num2 << endl; //4

    return 0;

}