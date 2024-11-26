# include <iostream>

using namespace std;

int main () {
    int a = 0;
    int* b = &a;
    int* z = &a;
    cout<<*b<<endl;
    cout<<b<<endl;
    cout<<z<<endl;
    cout<<*z<<endl;
    return 0;
}