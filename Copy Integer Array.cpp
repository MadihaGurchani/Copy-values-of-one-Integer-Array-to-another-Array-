#include <iostream>

using namespace std;

void Copy(int old_array[],int new_array[],int length)
{
    int *ptr1 = old_array;
    int *ptr2 = new_array;
    int i = 0;
    for(int i=0 ; i<length ; i++)
    {
        *(ptr2++) = *(ptr1++);
    }
    ptr2 = new_array;
    for (int i = 0; i <2; i++)
    {
        cout<<*(ptr2 + i)<<endl;
    }
}
int main()
{
    int a[2]={0,1};
    int b[2];
    Copy(a,b,2);
}
