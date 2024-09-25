//Searchijg through middle element 
//incorrect one
/*#include<iostream>
using namespace std;
 int binarysearch(int arr[], int n, int k){
        int start=0;
        int end=n-1;
        while (start <= end) {
        int middle = start+ (end + start) / 2;
 
        if (arr[middle] == k)
            return middle;
 
        if (arr[middle] > k)
            start = middle - 1;
 
        else
            end = middle + 1;
    }
 
     return -1;
    }
*/




//correct code
/*#include<iostream>
#include<vector>
using namespace std;
int search(vector& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int mid=0;
        while(l<=h){
            mid=(h+l)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return -1;
    }
*/



