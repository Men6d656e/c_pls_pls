#include <iostream>
#include <string>

using namespace std;

class aray
{
private:
    int a[5];

public:
    void fill();
    void display();
    int max();
    float min();
};
void aray::fill()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value " << endl;
        cin >> a[i];
    }
}

void aray::display()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "a[" << i << "]: " << a[i] << endl;
    }
}

int aray::max()
{
    int m = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (m < a[i])
        {
            m = a[i];
        }
    }
      return m;
}

float aray::min()
{
    int m = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (m > a[i])
        {
            m = a[i];
        }
    }
            return m;
}

int main()
{
    aray arr;
    arr.fill();
    cout<<"You Ener a values: "<<endl;
    arr.display();
    int max = arr.max();
    int min = arr.min();
    cout<<"Minimum value is: "<<max<<endl;
    cout<<"Maximun value is: "<<min<<endl;
    return 0;
}