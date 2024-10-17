#include <iostream>
using namespace std;

void swap(int arr[], int n){
    for (int i = 0; i < n; i+=2){
        if(i+1 < n){
            swap(arr[i], arr[i + 1]);
        }
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int a[6] = {5, 2, 7, 1, 6};
    swap(a, 5);
    int b[8] = {5, 2, 7, 1, 6, 3, 2, 9};
    cout << endl;
    swap(b, 8);
}