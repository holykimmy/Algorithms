#include <bits/stdc++.h>
using namespace std;
void UnionIntersec(int A[], int B[],int N){
    for(int i=0;i<N;i++){
        if(A[i] != 0 && B[i] != 0){
            cout<<i<<" ";
        }
        /*if(A[i] >0 || B[i] >0){
            cout<<i<<" ";
        }*/
    }
}
int main(){
    int N = 5;
    int x[10];
    int y[10];
    int arr[N];
    for(int i=0;i<10;i++){
        x[i] = 0;
    }
    for(int j=0;j<10;j++){
        y[j] = 0;
    }
   
    /*for(int i=0;i<N;i++){
        cin>>arr[i];
    }*/
    int A[] = {6, 8, 7, 4, 1};
    int B[] = {3, 2, 7 ,1, 2};
    for(int i=0;i<N;i++){
        x[A[i]]++;
        cout<<x[A[i]]<<" ";
    }
    for(int i =0;i<N;i++){
        x[B[i]]++;
        cout<<x[B[i]]<<" ";
    }
    UnionIntersec(x,y,N);
    return 0;
}