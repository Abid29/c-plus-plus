#include <iostream>

using namespace std;

int GOSAGU(int x, int y){
    int c;
    if(x<y){
        c=x;
        x=y;
        y=c;
    }
    while(x!=y){
        if(y==0){
            break;
        }
        if(x>y){
            x=x-y;
        }
        if(y>x){
            y=y-x;
        }
    }
    return x;
}

int main(){
    int a,b,LOCAGU;
    cin >> a >>b;
    LOCAGU=(a*b)/GOSAGU(a,b);
    cout << LOCAGU;
    return 0;

}
