#include<iostream>
using namespace std;
int main(){

    for(int i=0;i<=100;i+=1){
        int j =i%3;
        int k =i%5;
        if(k==0 && j==0){
            cout<<i<<"FizzBuzz"<<endl;
        }else if(k==0){
            cout<<i<<"Buzz"<<endl;
        } else if(j==0){
            cout<<i<<"Fizz"<<endl;
        } else{
            cout<<i<<endl;
        }

    
    }
    cout<<"Hello!! I am a programmer now";
    return 0;
}