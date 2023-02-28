// Your First C++ Program

#include <iostream>

int main() {
    int day;
    std::cout<<"Enter day";
    std::cin>>day;
    switch(day){
        case 1:
        std::cout<<"sun";
        break;
        case 2:
        std::cout<<"mun";
        break;
        case 3:
        std::cout<<"tue";
        break;
        case 4:
        std::cout<<"wed";
        break;
        case 5:
        std::cout<<"thur";
        break;
        case 6:
        std::cout<<"fri";
        break;
        default:
        std::cout<<"sat";
        ;
    }
    return 0;
}
