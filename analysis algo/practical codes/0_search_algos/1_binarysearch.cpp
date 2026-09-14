//by sir method 
#include<iostream>
using namespace std;
int binary_search(int arr[], int i,int j , int x){ 
    if (i > j) {
        return -1; // -1 indicates "not found"
    }
    if(arr[i]==arr[j]){
        if(arr[i]==x){
            return i;
        }else{
            return 0;
        }
        int mid=i+(j-i)/2;
        if(arr[mid]==x){
            return mid;
        }  else{
            if(arr[mid]>x){
            return   binary_search(arr,i,mid-1,x);
            }else{
             return   binary_search(arr,i,mid+1,x);
            }
        }   
    }
} 
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int x;
    cin>>x;
    int key =binary_search(arr,0,7,x);
    cout<<key;
}

