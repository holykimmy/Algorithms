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
    int N ;
    cin >> N ;

    int x[n];
    int y[n];
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
   
    /*for(int i=0;i<N;i++){
        cin>>arr[i];
    }*/
    int A[N] = {6, 8, 7, 4, 1};
    int B[N] = {3, 2, 7 ,1, 2};
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