#include<iostream>
using namespace std;

int show(int *m){
    cout<<m;
}
int main(){
int x = 10;
int a = show(&x);
cout<<a<<endl;
return 0;
}