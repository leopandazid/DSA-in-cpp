#include <iostream>
using namespace std;

int main()
{
    int arr[]={4,6,7,2,5,7,34,6,89,87,99};
    int n = sizeof(arr)/sizeof(int);

    //printing the array before sorting
    cout<<"before sorting"<<endl;
    for (int i=0;i<n;i++)
    {cout<<arr[i]<<" ";}
    cout<<endl;

    for (int i=1;i<n;i++)
    {   
            int picked=arr[i];
        for(int j=i-1;j>=0;j--)    
            if(picked<arr[j])
            {   
                arr[j+1]=arr[j];
                arr[j]=picked; // or arr[j+1]=picked after this loop
            }
    }

    
    //printing the array after sorting
    cout<<"after sorting"<<endl;
    for (int i=0;i<n;i++)
    {cout<<arr[i]<<" ";}

}