#include <iostream>
using namespace std;

// int main()
// {
    // // pr
    // int num1, num2, num3;
    // num1 = 12;
    // num2 = 12;
    // num3 = num1 + num2;
    // cout << " hello world "<<endl;
    // cout << " hello AKASH "<<endl;
    // cout << num3<<endl;

    class Person
    {
        private:
        char name[50];
        public:
        void get(){
            cout<<"Enter your name"<<endl;
            cin>>name;
        }
        void show(){
            cout<<"your name is "<<name<<endl;
        }
    };

    int main(){
        Person *ptr[5];
        int i;
        for (int i = 0; i < 5; i++)
        {
            ptr[i] = new Person;
            ptr[i]->get();
        }
        for (int i = 0; i < 5; i++)
        {
            ptr[i]->show();
            
        }
        
        
        return 0;
    }

    // }








    // return 0;
// }