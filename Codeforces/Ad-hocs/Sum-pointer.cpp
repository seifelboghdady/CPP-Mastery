/*
Range Sum 
QueryTime Limit: $1.0$ secondMemory Limit: $256$ megabytes
Problem Description
You are given an array $A$ of $n$ integers. You need to process $q$ queries. 
For each query, you are given two indices $L$ and $R$ ($1 \le L \le R \le n$), and you must calculate the sum of the elements in the array from index $L$ to index $R$, inclusive.Specifically, 
for each query, calculate:$$\sum_{i=L}^{R} a_i = a_L + a_{L+1} + \dots + a_R$$
InputThe first line contains two integers $n$ and $q$ ($1 \le n, q \le 10^5$) — the number of elements in the array and the number of queries.The second line contains $n$ integers $a_1, a_2, \dots, a_n$ ($-10^9 \le a_i \le 10^9$).Each of the next $q$ lines contains two integers $L$ and $R$ ($1 \le L \le R \le n$).OutputFor each query, print the sum of the elements between indices $L$ and $R$ on a new line.Note: Because the sum can exceed the range of a 32-bit integer, use a 64-bit integer type (like long long in C++).
ExampleInput:
5 3
5 2 4 -1 3
1 5
1 2
2 4
Output:
13
7
5
Efficient Solution StrategyTo pass within 1.0 second, you cannot use a loop for each query ($O(n \cdot q)$ is too slow). You must use Prefix Sums:Precompute: Create an array $P$ of size $n+1$ where $P[i] = a_1 + a_2 + \dots + a_i$.$P[0] = 0$$P[i] = P[i-1] + a[i]$Query: The sum from $L$ to $R$ is simply:$$\text{Sum}(L, R) = P[R] - P[L-1]$$This allows you to answer each query in $O(1)$ time.
*/

#include <iostream>
using namespace std;

int arr[100001]; 
long long pre[100001];
int main(){
    int n, q; cin>>n>>q;
    pre[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        pre[i]= pre[i-1]+arr[i];
    }
    
    for (int i = 1; i <= q; i++)
    {
        int l,r ; cin>>l>>r;
        
        cout << pre[r]-pre[l-1] << "\n";
    }
}