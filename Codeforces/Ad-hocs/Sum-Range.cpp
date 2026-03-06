/*
Problem: 
Running Sum 
ChallengeTime Limit: 1.0 secondMemory Limit: 256 megabytes
Description
    You are given an array A consisting of n integers. Your task is to process several queries. 
    For each query, you are given an integer k, and you must calculate the sum of the first k elements of the array.
Input
    The first line contains an integer n (1 \le n \le 10^5) — the number of elements in the array.
    The second line contains n integers a_1, a_2, \dots, a_n (-10^9 \le a_i \le 10^9).
    The third line contains an integer q (1 \le q \le 10^5) — the number of queries.
    Each of the following q lines contains a single integer k (1 \le k \le n).
Output
For each query, print a single integer representing the sum of the elements from index 1 to k.
ExampleInput:
5
5 2 4 -1 3
3
5
2
3
Output:
13
7
11
*/

#include <iostream>
using namespace std;

int arr[100001]; 
long long pre[100001];
int main(){
    int n; cin>>n;
    pre[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        pre[i]= pre[i-1]+arr[i];
    }

    int q; cin>>q;
    for (int i = 1; i <= q; i++)
    {
        int k; cin>>k;
        cout << pre[k] << "\n";
    }
}


