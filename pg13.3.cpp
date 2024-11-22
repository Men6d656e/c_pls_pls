# include <iostream>

using namespace std;

int main(){

    class circle{
        private:
        float radious;
        public:
        void set_radious(float r){
            radious = r;
        }
        void area(){
            cout<<"The area of the circule is "<<3.14*radious*radious<<endl;
        }
        void circum(){
            cout<<"The circumference"<<2*3.14*radious<<endl;
        }
    };

    circle c;
    float red;
    cout<<"Enter the radious in integer "<<endl;
    cin>>red;
    c.set_radious(red);
    c.area();
    c.circum();

    return 0;
}