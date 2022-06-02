//simple printing problem
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"n:\n";
    cin>>n;
    while(i<=n)
    {
        int j=1,value=i;
        while(j<=i)
        {
            cout<<value;
            value++;
            j++;
            
        }
        cout<<endl;
        i++;
    }
}
cout<<"****************************************************** NEXT PATTERN ******************************************************";
//simple paattern 2
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"n:\n";
    cin>>n;
    while(i<=n)
    {
        int j=1,value=i;/*OR if value is not use then 
                          while(j<=i)
                           {
                             cout<<i-j+1;
                                  j++;
                           }
                              */
        while(j<=i)
        {
            cout<<value;
            value--;
            j++;
            
        }
        cout<<endl;
        i++;
    }
}
