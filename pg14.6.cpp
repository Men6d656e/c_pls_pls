# include <iostream>
# include <cstring>
using namespace std;

class String{
    private:
    char str[50];
    public:
    
    String(){
        str[0] = '\0';
    }

    void in(){
        cout<<"Enter String "<<endl;
        cin>>str;
    }
    void show(){
        cout<<"The string you enter is :"<<str<<endl;
    }
    bool operator == (String s){
        if(strlen(s.str) == strlen(str))
            return true;
        else 
            return false;
    }
};
int main(){
    
    String s1 ,s2;
    s1.in();
    s2.in();
    cout<<"s1 ="<<endl;
    s1.show();
    cout<<"s2 ="<<endl;
    s2.show();
    if(s1==s2){
        cout<<"Both string are equal of length."<<endl;
    } else {
        cout<<"Both strings are different in length."<<endl;
    }
    
    return 0;
}