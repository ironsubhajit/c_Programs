/*
cpp program for selection sort
Author: Anil Kumar
Date modified:22-10-2021
*/



#include<iostream>
using namespace std;

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y =temp;


}

void bubble(int A[],int n){

    for (int i = 0; i < n-1; i++)
    {
        int flag=0;
        for (int j = 0; j < n-i-1; j++)
        {
            if(A[j]>A[j+1]){
                swap(&A[j],&A[j+1]);
                flag=1;
            }
            if(flag==0)exit;
        }
        
    }
    

}

int main (){

    int n;
    cin>>n;

    int A[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    bubble(A,n);
    
    for (int i = 0; i < n; i++)
    {
        cout<<A[i];
    }
    

}
