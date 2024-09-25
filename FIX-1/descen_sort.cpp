//Sort the elements int descendin order
#include<iostream>
using namespace std;
void descendsort(int a[],int size){
    int i,j,temp;
    for(i=0;i<size-1;i++){
        temp=0;
        for(j=0;j<size;i++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    for(i=0;i<size;i++){
        cout<<"The resultant array after sorting is"<<a[i]<<" "<<endl;
    }
}
int main(){
    int arr[6]={3,6,1,32,5,4};
    int n=6;
    descendsort(arr,n);
    return 0;
}