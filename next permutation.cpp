#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={3,1,2};
    sort(arr,arr+3);
    do{
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<"\n";
    }while(next_permutation(arr,arr+3));
    cout<<arr[0]<<' '<<arr[1]<<' '<<arr[2]<<'\n';
    return 0;
}
