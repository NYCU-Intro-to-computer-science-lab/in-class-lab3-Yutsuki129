// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;

 long long factorial(int x){
    if(x>1){
        return x*factorial(x-1);
    }
    else{
        return 1;
    }
 }
int sum(int x){
    if(x>0){
        return x+sum(x-1);
    }
    else{
        return 0;
    }
}

int main() {
    long long x,y;
    cin>>x;
    cout << factorial(x) << endl << sum(x);  
    return 0;
}
