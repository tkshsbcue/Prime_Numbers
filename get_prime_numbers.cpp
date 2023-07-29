//function to print prime numbers
#include<iostream>
using namespace std;

void prime(int stp){
    cout << 2 << "\n";
    cout << 3 << "\n";
    for(int i = 1; i < stp; i++){
        cout<< 6*i + 1 << "\n";
         cout<< 6*i - 1 << "\n";

    }
}

//above is the function which prints all the prime number

int main(){
    int stp;
    cout << "Enter the index through which you want prime numbers ->";
    cin >> stp;
    prime(stp - 4);

    return 0;
}