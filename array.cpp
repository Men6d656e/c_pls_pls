#include<iostream>

using namespace std;

int main(){
    int marks[] = { 23,24,25,26};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    
    // through loop

    cout<<"for loop Loop"<<endl;
    
    for (int i = 0; i < 4 ; i++)
    {
        cout<<marks[i]<<endl;
    }

    // using while loop
    cout<<"while Loop"<<endl;
    
    int a = 0;
    while (a < 4 )
    {
        cout<<marks[a]<<endl;
        a++;
    }

    // do while loop
    cout<<"do while Loop"<<endl;
    
    int s = 0;
    do
    {
        cout<<marks[s]<<endl;
        s++;
        
    } while ( s < 4 );

    // pointer variable
    // int b = 12;
    // int* c = &b;
    // cout<<c;
    // cout<<*c;

    // pointer variables with arrays
    int* p = marks;

    cout<<endl;
    cout<<"the value of marks[0] is"<<*p<<endl;
    cout<<"the value of marks[0] is"<<*( p + 1 )<<endl;

    cout<<"the value of marks address is"<<p<<endl;
    cout<<"the value of marks address + 1 is"<<( p + 1 )<<endl;

    return 0;
}