#include <iostream>

using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a=b;
    b=temp;
    return;
}

int main(int n) {
int arr[]={3,2,1,5,7};
    int n=3;
    int s=sizeof(arr)/sizeof(arr[0]);
    swap(arr[0],arr[n-1]);
    for(int i=0;i<s;i++) {
        cout<<arr[i]<<" ";

    }

}
