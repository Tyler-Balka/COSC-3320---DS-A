#include <iostream>
using namespace std;

int summation(int n){
    int sum = n * (n + 1)/2;
    return sum;
}

int main(){

    cout << summation(7) << endl;
    return 0;
}