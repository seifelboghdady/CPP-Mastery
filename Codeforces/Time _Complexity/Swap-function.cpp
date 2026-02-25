#include <iostream>
using namespace std;


//i use & to pass referece of variable and may update it

void swap(int& x, int& y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    // cout<<x<<' '<<y;
}

void swap(int arr[]){
    arr[0] = 10;
}


int main(){
    int num1 = 10;
    int num2 = 20;
    int nums[3] = {1, 2, 3};
    //call swap func
    swap(num1, num2);
    swap(nums);
    cout<<num1<<' '<<num2<<endl<<nums[0]<<' '<<nums[1]<< ' '<<nums[2];

    // cout<<nums[0]<<' '<<nums[1]<< ' '<<nums[2]
}

