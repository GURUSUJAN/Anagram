#include "iostream"
using namespace::std;
int main()
{
    char ch1[4]={'a','b','c','d'};
    char ch2[4]={'b','d','a','e'};
    int count=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(ch1[i]==ch2[j])
            {
                count++;
            }
        }
    }
    if(count==4)
    {
        cout<<"Yes";
    }
    else
        cout<<"No";
}
