# include <iostream>
# include <string>

using namespace std;

class Result {
        private:
        int rollNo , marks[3];
        char name[50];
        public:
        void input(){
            cout<<"Enter the Name: ";
            cin>>name;
            cout<<endl;
            cout<<"Enter the RollNo: ";
            cin>>rollNo;
            cout<<endl;
            for (int i = 0; i < 3 ; i++)
            {
                cout<<"Enter The marks of subject "<<i + 1<<endl;
                cin>>marks[i];
            }
        }
        void show(){
            cout<<"Name: "<<name<<endl;
            cout<<"rollNo: "<<rollNo<<endl;
            for (int i = 0 ; i < 3 ; i++)
            {
                cout<<"Subject "<<i+1<<" marks :"<<marks[i]<<endl;
            }
        }
        int total(){
            int t ;
            for (int i = 0 ; i < 3 ; i++)
            {
                t = t+marks[i];
            }
            return t;
        }
        float avg(){
            float avg;
            for (int i = 0; i < 3 ; i++)
            {
                avg = avg +marks[i];
            }
            return avg/3; 
        }
    };

int main () {

    
    Result r;
    r.input();
    r.show();
    int to = r.total();
    float av = r.total();
    cout<<"Sum of the subject marks "<<to;
    cout<<"Avg of the subject marks "<<av;
    return 0;
}