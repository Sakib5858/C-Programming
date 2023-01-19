#include<iostream>
using namespace std;
int main()
{
    int size,i;
    cout<<"Enter the size of the array :";
    cin>>size;
    int array[size];

    cout<<"\n\nThe new generated array is :";
    for(i=0; i<size; i++)
    {
        array[i]=rand()%50;
        cout<<array[i]<<"  ";
    }

    for(int j=0; j<size-1; j++)
    {
        for(i=0; i<size-1-j; i++)
        {
            if(array[i]>array[i+1])
                swap(array[i],array[i+1]);
        }
    }
    cout<<"\n\nThe sorted array is :";

    for(i=0; i<size; i++)
        cout<<array[i]<<"  ";
    return 0;
}
