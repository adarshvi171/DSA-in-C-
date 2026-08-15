// #include<iostream>
// using namespace std;
// int print_hello(){
//     cout<< "hello\n";
//     return 8;
// }
// int main(){
//     cout << print_hello()<< endl;
//     return 0;
// }


// sum in function:
 

// #include<iostream>
// using namespace std;
// int num(int i, int j){
//     if(i<j){
//         return i;
//     }
//     else{
//         return j;
//     }
//  }   
// int main(){
// cout<<"min="<<num(6,8);
//     return 0;
// }


// sum of number from 1 to n

// #include<iostream>
// using namespace std;
// int sumn(int n){
//     int sum= 0;
//     for (int i=1; i<=n; i++){
//          sum+=i;
//     }
//     return sum;
// }
// int main(){
// cout<< sumn(9)<<endl;
//     return 0;
// }


// calculating n factorial


// #include <iostream>
// using namespace std;
// int factN(int n){
//     int fact= 1;
//     for (int i=1; i<=n; i++){
//         fact *= i;
//     }
//     return fact;
// }
// int main(){
// cout<< factN(5)<<endl;
//     return 0;
// }



// #include<iostream>
//  using namespace std;
//  int sum (int a,int b){
//   a= a+10;
//   b= b+ 10;
//  return a+b;
// }
//  int main(){
//  int a=5, b=4;
//  cout << sum(a,b)<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int sum_dig(int num){
//     int digsum =0;
//     while(num>0){
//         int lastdigt= num %10;
//         num /=10;
//         digsum +=lastdigt;
//     }
//     return digsum;
// }
// int main(){
//     cout<< sum_dig(2345)<< endl;
//     return 0;
// }


//making a function to prime no. or not

// #include<iostream>
// using namespace std;
// bool isprime(int n){
//     for(int i=2; i<=n-1; i++){
//         if(n%i==0)
//         return false;
//     }
//     return true;
// }
// int main(){
// int n;
// cout<<"enter a number:";
// cin>>n;
// if(isprime(n)){
//     cout<<"number prime";
// }else{
//     cout<< "number isnot prime"<<endl;
// }
//     return 0;
// }

// writing a function to print prime no. 2 to n

#include<iostream>
using namespace std;
int dectobinary(int decnum){
    int ans=0 , pow =1;
    while (decnum>0){
        int rem =decnum%2;
        decnum/=2;
        ans+= (rem*pow);
        pow *=10;
    }        
    return ans;                   
}
int main(){
    int decnum=50;
    cout<<dectobinary(decnum)<<endl;
    return 0;
}