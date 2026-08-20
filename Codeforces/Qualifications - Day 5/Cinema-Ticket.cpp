#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int age, stu, wend; cin>>age>>stu>>wend;
    int pri=0;
    if(age>=0 && age<=5){
        pri=0;
    }else if(age>=6 && age <=17){
        pri =50;
        
    }else if(age>=18 && age <=59){
        pri = 100;
    }else if(age>=60 && age <=120){
        pri = 60;
    }
    
    if(stu && pri>0){
        pri -=20;
    }
    if(wend && pri>0){
        pri += 10;
    }

    cout<<pri;
}