#include<iostream>
using namespace std;

int subtractProductAndSum(int n){

    int prod = 1;
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        prod = prod*digit;
        sum = sum + digit; 
        n = n/10;
    }
    int answer = prod - sum;
    cout<<answer<<endl;;
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>> n;
    subtractProductAndSum(n);
}