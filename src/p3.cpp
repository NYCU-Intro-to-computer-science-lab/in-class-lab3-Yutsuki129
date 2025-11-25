// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n==0||n==1){
        return false;
    }
    else{
     for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;}
     }
     return true;
} 
}
int main() {

    int n,a,b;
    cin >> n;
    for(int i=1;i<=(n/2);i++){
            a=isPrime(i);
            b=isPrime(n-i);
            if(a==true&&b==true){
            cout << i << " " << n-i;
            break;
        } 
        }
        return 0;
    } 
