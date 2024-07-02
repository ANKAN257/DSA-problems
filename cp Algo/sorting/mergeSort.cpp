#include<bits/stdc++.h>
using namespace std;
  void mergeSortedArray_combination(int arr[],int left,int mid,int right){
        int  n1=mid-left+1;
        int n2=mid-right;

        int arr1[n1],arr2[n2];

       for(int i=0;i<n1;i++)
           arr1[i]=arr2[left+i];
       for(int i=0;i<n2;i++)
           arr2[i]=arr1[mid+i+1];  


       int i,j,k;
       i=0;
       j=0;
       k=left;

       while(i<n1&&j<n2){
          if(arr[i]<=arr2[j]){
             arr[k]=arr1[i++];
          }else {
             arr[k]=arr2[j++];
          }
          k++;
       }   


       while(i<n1){
         arr[k++]=arr1[i++];
       }   
       while(j<n2){
        arr[k++]=arr2[j++];
       }


  }


  void mergeSort_divide(int arr[],int left,int right){
      if(left<right){
        int mid=(right-left)/2;
        mergeSort_divide(arr,left,mid);
        mergeSort_divide(arr,mid+1,right);

        mergeSortedArray_combination(arr,left,mid,right);
      }
  }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];

    mergeSort_divide(arr,0,n-1);


    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";



}