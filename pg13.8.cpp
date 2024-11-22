# include <iostream>
using namespace std;

class Numbers {
    private:
    int x,y;
    public:
    Numbers(){
        x=y=100;
    }
    float avg (){
        cout<<"value 1: "<<x<<endl;
        cout<<"value 2: "<<y<<endl;
        cout<<"value 1,2 average is: "<<(x+y)/2<<endl;
    }
};

int main () {
    Numbers m;
    m.avg();
    return 0;
}