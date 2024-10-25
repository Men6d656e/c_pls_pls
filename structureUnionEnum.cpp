#include<iostream>

using namespace std;


// simple
// struct employ
// {
//     /* data */
//     int eid;
//     char favChar;
//     float salery;
// };

// int main(){

//     struct employ Akash ;
//     Akash.eid = 1;
//     Akash.favChar = 'a';
//     Akash.salery = 10000;

//     cout<<"value of eid "<<Akash.eid<<endl;
//     cout<<"fav char  "<<Akash.favChar<<endl;
//     cout<<"salery is "<<Akash.salery<<endl;
//     return 0;
// }



// 

typedef struct  employ
{
    /* data */
    int eid;
    char favChar;
    float salery;
} ep;

union money
{
    /* data */
    int package1;
    int package2;
    int package3;
};


int main(){

    ep Akash ;
    Akash.eid = 1;
    Akash.favChar = 'a';
    Akash.salery = 10000;

    cout<<"value of eid "<<Akash.eid<<endl;
    cout<<"fav char  "<<Akash.favChar<<endl;
    cout<<"salery is "<<Akash.salery<<endl;

    union money m1;
    m1.package1 = 100;
    m1.package3 = 1000;
    cout<<"package  1 " <<m1.package1<<endl;
    cout<<"package  1 " <<m1.package3<<endl;





    return 0;
}