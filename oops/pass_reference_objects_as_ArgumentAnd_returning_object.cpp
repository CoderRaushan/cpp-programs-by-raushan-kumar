#include <iostream>
using namespace std;
class sample
{
public:
    int value;
    void getvalue()
    {
        cout << "enter a number:";
        cin >> value;
    }
    void display()
    {
        cout << value;
    }
    sample sum(sample &s)
    {
        s.value = s.value + 10;
        return s;
    }
};
int main()
{
    sample t, s;
    t.getvalue();
    cout<<"before giving address:";
    t.display();
    cout << endl;
    s=t.sum(t);
    s.display();
    cout << endl;
    cout<<"after giving address:";
    t.display();
   
    return 0;
}
