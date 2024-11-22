# include <iostream>

using namespace std ;

int main () {

    class Marks {

        private:
        int a,b,c;
        public:
        void in(){
            cout<<"Enter a Number1"<<endl;
            cin >> a;
            cout<<"Enter a Number2"<<endl;
            cin >> b;
            cout<<"Enter a Number3"<<endl;
            cin >> c;
        }

        int sum(){
            return a+b+c;
        }

        int avg () {
            int average = 0;
            average = (a+b+c)/3;
            return average;
        }

        int show (){
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
            return 0;
        }
    };

    Marks obj;
    obj.in();
    int numbers = obj.show();
    cout<<"You enter three numbers "<<numbers<<endl;
    int s = obj.sum();
    float av = obj.avg();
    cout<<"Sum of these  "<<s<<endl;
    cout<<"Avg of these  "<<av<<endl;


    return 0;
}