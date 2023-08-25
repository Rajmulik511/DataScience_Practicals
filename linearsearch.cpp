#include <bits/stdc++.h>
using namespace std;
void swapalternative(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printingarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    printingarray(arr,6);
    cout<<endl;
    
    
    swapalternative(arr,6);

    printingarray(arr,6);


return 0;
}