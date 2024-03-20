#include<bits/stdc++.h>
using namespace std;
void Sort(int arr[],int n,int m)
{
   for(int i=n;i<m;i++)
   {
      for(int j=i;j<m;j++)
      {
        if(arr[i]>arr[j])
        swap(arr[i],arr[j]);
      }
   }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
       
    }    
    int low=arr[0];
    int high=arr[0];
    
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>high)
        {
            high=arr[i];
        }
        if(arr[i]<low)
        {
            low=arr[i];
        }
    }
    int mid=(high+low)/2;
    
    cout<<"mid value: "<<mid<<endl;
    
    int  midvalue=abs(arr[0] - mid);
    int index=0;
    int closest=arr[0];
    for(int i=1;i<n;i++)
    {
        int x=abs(arr[i]-mid);
        if(x<=midvalue)
        {   
            index=i;
            midvalue=x;
            closest=arr[i];
        }
           
    }
   
    cout<<"closest value index: "<< index <<endl;
    cout<<"closest index value: "<< closest <<endl;

    int p=(n-1)/2;
  
    swap(arr[index],arr[p]);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
   Sort(arr,0,p);
    Sort(arr,p+1,n);
    //  sort(arr,arr+p);
    // sort(arr+p+1,arr+n);
    // 
   for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}