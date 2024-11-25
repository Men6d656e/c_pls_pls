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
    String operator + (String s){
        String temp;
        strcpy(temp.str , str);
        strcpy(temp.str , s.str);
        return temp;
    }
};
int main(){
    
    String s1 ,s2 ,s3;
    s1.in();
    s2.in();
    cout<<"s1 = "<<endl;
    s1.show();
    cout<<"s2 = "<<endl;
    s2.show();
    cout<<"s3= "<<endl;
    s3.show();
    cout<<"Concatinating s1 and s2 in s3.. "<<endl;
    s3 = s1 + s2;
    cout<<"s3 is: "<<endl;
    s3.show();


    return 0;
}