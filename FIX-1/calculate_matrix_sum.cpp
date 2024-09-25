//The function method calcualte the matrix sum calcualtes the sum of odd elements of matrix whose ith and jth index are the same
#include<iostream>
using namespace std;


int calculateMatrixSum(int A[][4], int row, int col){
    int sum=0;
    int count=0;
    if(row>0&&col>0){
        for (int i = 0; i < row; i++){      
		    for (int j = 0; j <col ; j++){
                if(i==j && A[i][j]%2!=0){
                    sum=sum+A[i][j];
                    count++;
                }
                
            }
        }
        
    }
    else{
        return sum;
    }
    //if none of the diangonal elements are odd
    if(count==0){
        return sum;
    }
    return sum;
    

}
int main(){
    int rows=4;
    int coulmns=4;
    	int A[4][4] = { { 1, 1, 1, 1 },
					{ 2, 2, 2, 2 },
					{ 3, 3, 3, 3 },
					{ 4, 4, 4, 4 } };
    int sum=calculateMatrixSum(A,rows,coulmns);
    cout<<"The resultant sum is="<<sum<<endl;
    return 0;

}