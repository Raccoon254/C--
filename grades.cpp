// Your First C++ Program

#include <iostream>

int main() {
    char grade;
    std::cout<<"Enter Grade";
    std::cin>>grade;
    switch(grade){
        case 'a':
        std::cout<<"Excellent";
        break;
        case 'b':
        std::cout<<"Good";
        break;
        case 'c':
        std::cout<<"Satisfactory";
        break;
        case 'd':
        std::cout<<"Pass";
        break;
        default:
        std::cout<<"Fail";
        break;
        ;
    }
    return 0;
}
