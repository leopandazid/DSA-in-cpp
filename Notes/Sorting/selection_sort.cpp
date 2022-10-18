#include <iostream>
using namespace std;

int main()
{
    int arr[]={9,3,5,2,8,7,1};
    int size=sizeof(arr)/sizeof(int);

    //printing the array before sorting
    cout<<"before sorting"<<endl;
    for (int i=0;i<size;i++)
    {cout<<arr[i]<<" ";}
    cout<<endl;

    for(int i=0;i<=size-2;i++)
    {
        int minimum=i; //assuming the minimum element to be at 0th index
        for (int j=i+1;j<=size-1;j++)
        {
            
            if(arr[minimum]>arr[j])  //if j th element is less than assumed minimum element set jth element to be minimum
            {
                minimum=j; 
            }                             

        }
        swap(arr[minimum],arr[i]); //swap the minimum element with first index and till size-2 th index
                                   //last element gets automatically sorted if size-2 th indexes are sorted
    }

    //printing the array after sorting
    cout<<"after sorting"<<endl;
    for (int i=0;i<size;i++)
    {cout<<arr[i]<<" ";}


}