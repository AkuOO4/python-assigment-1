#include <iostream>
using namespace std;

class linear_search
{
    public:
    int iterative_search(int data[],int,int);
    int recursive_search(int data[],int,int);
};
int linear_search::iterative_search(int data[],int key,int length)
{
    for (int i=0;i<=length;i++)
    {
        if (data[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int linear_search::recursive_search(int data[],int key,int length)
{
    if (length>0)
    {
    if (data[length]==key)
        {
            return length;
        }
    else
    {
        return recursive_search(data,key,length-1);
    }
    }
    else
    {
        return 0;
    }
}

int main()
{
    int length=10;
    int finder=9;
    int data[length]={1, 2 ,3, 4,5,6,7,8,9,10};
    linear_search search;
    cout<<search.iterative_search(data,finder,length)<<endl;
    cout<<search.recursive_search(data,finder,length)<<endl;
}
