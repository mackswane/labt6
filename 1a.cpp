# labt6
//1.a
#include<iostream>
 
using namespace std;
 
int main()
{
    int search(int [],int,int);
    int size,i,a[100],x,pos;
    cout<<"Enter the size of array:";
    cin>>size;
    cout<<"\nEnter Elements of Array in Ascending order\n";
 //loop to enter array elements   
    for(i=0;i<size;++i)
    {
        cin>>a[i];
    }
    
    cout<<"\nEnter element tyou want to search:";
    cin>>x;
    
    pos=search(a,size,x);
    
    if(pos!=-1)
        cout<<"\nElement found at position "<<pos+1;
    else
        cout<<"\nElement is not found....!!!";
 
    return 0;
}
 //function to search for element
int search(int a[],int n,int e)
{
    int l,h,mid;
    l=0;
    h=n-1;
    //loop to find the element
    while(l<=h)
    {
        mid=(l+h)/2;
        if(e==a[mid])
            return(mid);
        else
            if(e>a[mid])
                l=mid+1;
            else
                h=mid-1;
    }
    
    return -1;
}
