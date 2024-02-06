#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high)
{
  int pivot=arr[low];
  int i=low;
  int j=high;
  while(i<j)
  {
      while(arr[i]<=pivot &&i<=high-1)       //ye pivot se bda dekhega
      {
          i++;
      }
      while(arr[j]>=pivot&&j>=low+1)      ///ye pivot se choto dekhega
      {
          j--;
      }
      if(i<j)
      {
          int temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
      }
  }
  swap(arr[low],arr[j]);
  return j;
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pindex=partition(arr,low,high);
        quicksort(arr,low,pindex-1);
        quicksort(arr,pindex+1,high);

    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
