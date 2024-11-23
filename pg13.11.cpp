
# include <iostream>
# include <string>
# include <cstring>
using namespace std;

class Over {

    private:
    int num;
    char ch;
    public:
    Over(){
        num = 0;
        ch = 'x';
    }
    Over(int n , char c){
        num = n;
        ch = c;
    }
    void show(){
        cout<<"num = "<<num<<endl;
        cout<<"Char = "<<ch<<endl;
    }

};

   


int main () {
    Over first;
    Over second(100,'a`````');
    first.show();
    cout<<"second one"<<endl;
    second.show();
    return 0;
}