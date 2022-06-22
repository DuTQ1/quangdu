#include <iostream>
bool check(int n){
    int x=n;
    int a=0;
    if(n<0)
    return false;
    else {
        while(x!=0)
        {
        a=a*10 + x%10;
        x/=10;
        }
        if(n==a) return true;
        else return false;

    }
}
int main(){
    int n;
    std::cin>>n;
    if(check(n))
    std:: cout<<"true";
    else
    std:: cout<<"false";
    return 0;
}