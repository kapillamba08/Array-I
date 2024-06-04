#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of Array: ";
    cin >> n;
 
    cout << "Enter elements of Array: ";
    int arr[10];
 
    // Taking input
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Minimum element is: "<<min<<endl;

}