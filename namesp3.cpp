#include <iostream>

namespace bestcomimpl{
    void simplefunc(void);
}
namespace bestcomimpl{
    void prettyfunc(void);
}
namespace procomimpl{
    void simplefunc(void);
}

int main(){
    std::cout <<"bestcom func" << std::endl;
    bestcomimpl::prettyfunc();
    procomimpl::simplefunc();
}

void bestcomimpl::prettyfunc(){
    std::cout << "so pretty!!" << std::endl;
}

void procomimpl::simplefunc(){
    std::cout <<"progcom func" << std::endl;
}