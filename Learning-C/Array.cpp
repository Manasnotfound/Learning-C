#include <iostream>

int main(){
    int Example[8];
    Example[0] = 9;
    Example[6] = 54;
    Example[3] = 89;
    Example[7] = 56;

    std::cout << Example << std::endl;
    std::cout << Example[3] << std::endl;
}