#include<iostream>

using namespace std;

int sum(int a , int b){
    int c = a + b;
    return c;
}

int main(){
    cout<<"this is the program written by the akash"<<endl;
    int num1 , num2;
    cout<<"enter the Number 1: "<<endl;
    cin>>num1;
    cout<<"enter the Number 2: "<<endl;
    cin>>num2;
    int outp = sum(num1,num2);
    cout<<outp;
    return 0;
}