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

    int numZero = 0, numOne = 0;

    // Counting 0's and 1's
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            numZero++;
        } else if(arr[i] == 1){
            numOne++;
        }
    }

    cout << "Total Zeros are: " << numZero << endl;
    cout << "Total Ones are: " << numOne << endl;
 
    return 0;
}
