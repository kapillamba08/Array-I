#include <iostream>
using namespace std;

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int size = 8;

    int key;
    cout<<"Enter the value you want to find: ";
    cin>>key;

    bool flag = 0;
    // 0 -> not found , 1 -> found

    // Linear Search
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            // found
            flag = 1;
            break;
        }
    }
    if(flag){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}