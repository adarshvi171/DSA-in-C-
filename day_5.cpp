// #include<iostream>              // printing decimal to binary code
// using namespace std;
// int dectobinary(int decnum){
//     int ans=0, pow=1;
//     while (decnum>0){
//         int rem =decnum %2;
//         decnum/=2;
//         ans+= (rem*pow);
//         pow*=10;
//     }
//     return ans;
// }
// int main (){
//     int decnum=59;
//     for (int i=0; i<=10; i++)
//     cout<<dectobinary(i)<<endl;
//     return 0;
// }

// binary to decimal code

// #include<iostream>
// using namespace std;
// int bin_to_decimal(int bin_num){
//     int ans=0,pow=1;
//     while(bin_num>0){
//         int rem= bin_num% 10;
//         bin_num/= 10;
//         ans+=( rem*pow);
//         pow*=2;
//     }
//     return ans;
// }
// int main(){
// int bin_num =11000;
// cout<< bin_to_decimal(bin_num)<<endl;
//     return 0;
// }


//          bitwise 

#include<iostream>
using namespace std;
int main(){
    cout<< sizeof(int)<< endl;
   cout<< sizeof(long long int)<< endl;
    return 0;
}
