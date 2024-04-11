#include<iostream>
using namespace std;
bool ispalindrome(int n){
    int res = 0;
    int temp = n;
    while(temp != 0){
        int digit = temp%10;
        res = (res*10) + digit;
        temp = temp/10;
    }
    return (res == n);
}
int main(){
    cout<<"enter a number"<<endl;
    int n;
    cin>>n;
    bool k = ispalindrome(n);
      if(k == 1){
          cout<<"the entered number is a palindrome"<<endl;
      }else{
          cout<<"the given number is not a palindrome"<<endl;
      }
    return 0;
}
