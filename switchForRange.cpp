#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter Your Marks \n";
    cin>>marks;

    switch(marks){
        case 0 ... 39:
        cout<<"Fail \nF";
        break;
        case 40 ... 49:
        cout<<"Pass";
        break;
        case 50 ... 59:
        cout<<"Satisfactory";
        break;
        case 60 ... 69:
        cout<<"Good";
        break;
        case 70 ... 100:
        cout<<"Excellent";
        break;
        default:
        cout<<"Invalid Data";
        break;
    }

    return 0;
}