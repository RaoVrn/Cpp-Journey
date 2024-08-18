#include<iostream>
using namespace std;

int main() {
    int start_num, end_num;

    cout << "Enter the starting number: ";
    cin >> start_num;

    cout << "Enter the ending number: ";
    cin >> end_num;

    for (int i=start_num; i<=end_num; i++){
        int j;
        for (int j=2; j<i; j++) {
            if(i%j == 0){
                break;
            }
        }
        if(j == i){
            cout << i << endl;
        }
    }
    return 0;
}