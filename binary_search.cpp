
#include <iostream>

using namespace std;



void binary_search_dec(){
    int num;
    cout << "\nEnter the Number to be searched : ";
    cin >> num;

    cout << "\n";
    int arr[10] = {100,99,88,77,66,55,44,33,22,11};

    int start = 0, end = 9;
    while (start <= end){
        int mid = start + (end - start)/2; //optimizetion --> what if (start + end) exceeds the value => max_int => {pow(2, 31) - 1}
        // int mid = (start + end)/2;

        if (arr[mid] == num) {
            cout << "--Yes, the Number " << num << " is present at Index : " << mid << "\n\n";
            break;

        } else if (arr[mid] > num) {
            start = mid +1;
        } else {
            end = mid - 1;
        }
        
    }

}

int main(){
    binary_search_dec();
}
