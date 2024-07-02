#include<bits/stdc++.h>
using namespace std;

int partionIng_theArray(int arr[],int left,int right){
      //make strting pivot 
      int pivot=arr[left];
      int cnt=0;
      for(int i=left+1;i<=right;i++){
         if(arr[i]<=pivot)cnt++;//count kr rhe hu ki pivot se kitna bad ahai 
      }



      //pivot ko uske sahi pos pe pahucha do
      int pivotIdx=left+cnt;
      swap(arr[left],arr[pivotIdx]);

      int i=left,j=right;

      while(i<pivotIdx && j>pivotIdx){
          while(arr[i]<=pivot)i++;

          while(arr[j]>pivot)j--;
          if(i<pivotIdx&&j>pivotIdx){
           swap(arr[i++],arr[j--]);
          }
      }

     

      return pivotIdx;
}


void quickSort(int arr[],int left,int right){
      if(left>=right) return ;
      
       int p=partionIng_theArray(arr,left,right);

       //sort left part
        quickSort(arr,left,p-1);
       //sort the right part
       quickSort(arr,p+1,right);
}

//pick 1st ele  as pivot
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];

    quickSort(arr,0,n-1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}