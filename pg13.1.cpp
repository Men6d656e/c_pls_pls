# include <iostream>

using namespace std ;

int main () {

    class Test {
        private:
        int n;
        public:
        void in(){
            cout<<"Enter Number"<<endl;
            cin>>n;
        }
        void out(){
            cout<<"Enter Number is "<< n <<endl;
        }
    };


    Test obj;
    obj.in();
    obj.out();

    return 0;
}