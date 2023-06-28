#include <iostream>

namespace bestcomimpl{
    void simplefunc(void){
        std::cout<<"best come func" << std::endl;
    }
}
namespace progcomimpl
{
    void simplefunc(void){
        std::cout << "progcom's func " << std::endl;
    }
} // namespace progcomimpl

int main(void){
    bestcomimpl::simplefunc();
    progcomimpl::simplefunc();

    return 0;
}