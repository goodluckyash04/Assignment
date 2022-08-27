#include<iostream>
using namespace std;
template<typename X> X sort(X a[25]){
        X i,j;
        for(i=0;i<5;i++){
            cout<<"Enter Array Element "<<i<<":";
            cin>>a[i];
        }
        for(i=0;i<5;i++){
            for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                X temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            }
            cout<<a[i]<<" ";
        }
}
int main(){
    int a[5];
    sort(a);
}