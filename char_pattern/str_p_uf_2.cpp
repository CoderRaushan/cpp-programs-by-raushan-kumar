#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        
        for (int j = 1; j <= n; j++) 
        {  
           
            if (j <= i) 
            {
                cout << char(64+i)<<" ";
            } 
          
            else 
            {
                cout << " ";
            }
            
        }
      
        cout << "\n";
    }
    return 0;
}
