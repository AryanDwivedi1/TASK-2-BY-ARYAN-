#include <iostream>

using namespace std;

void linear_search(){
    int num;
    cout << "\nEnter the Number to be searched : ";
    cin >> num;

    cout << "\n";
    int arr[10] = {101, 2, 88, -82, 92, 888, 1, 99, 8, 0};

    for (int i = 0; i < 10; i++){
        if (arr[i] == num){
            cout << "--Yes, the Number " << num << " is present at Index : " << i << "\n\n";
        }

    }

    
}


int main(){
    linear_search();
}