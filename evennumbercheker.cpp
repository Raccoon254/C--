#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter number to check if even";
    cin>>number;
    int y=number%2;

    switch(y){
        case 1:
        cout<<"Not Divisible";
        break;
        default:
        cout<<"Divisible By Two";
        break;
    }

    return 0;
}