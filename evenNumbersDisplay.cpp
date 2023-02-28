#include<iostream>
using namespace std;
int main(){

    for(int i =1;i<=10;i++){
        int mod= i%2;
        switch(mod){
            case 0:{
                cout<<i<<endl;
            }
        }
    }

    return 0;
}