// 題目 2：完美鋪磚計畫 (The Perfect Tiling Project) - 20分

#include <iostream>
using namespace std;

int gcd(int x,int y){
    if(y==0){
        return x;
    }
    else{
        return gcd(y,x%y);
    }

}


int main() {
    int x,y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0;
}
