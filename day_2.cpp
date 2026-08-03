// #include<iostream>
// using namespace std;
// int main (){
// int a= 45;
// if (a>=87){
//     cout <<"a is possitive number"<<endl;
// }
//     return 0;
// }


// #include <iostream>
// using namespace std ;
// int main (){
// int a =45;
// if (a>=90){
//     cout << "a is positive number"<<endl;
// }else{
//     cout << "invalid"<<endl;
// }
//     return 0;
// }

// vote system

// #include <iostream>
// using namespace std;
// int main (){
// int age;
// cout <<"enter the age : "<<endl;
// cin >> age ;
// if (age >=18){
//     cout << "person can vote"<< endl;
// }else{
//     cout <<"person can not vote"<< endl;
// }
//     return 0;
// }

//odd or even number 


// #include <iostream>
// using namespace std;
// int main (){
// int num ;
// cout <<"number is :"<< endl;
// cin >>num;
// if (num%2 ==0){
//     cout << "number is even"<<endl;
// }else{
//     cout <<"number is odd"<<endl;
// }
//     return 0;
// }

// while loop 

// #include<iostream>
// using namespace std;
// int main(){
// int n=20;    
// int count= 5;
// while (count <=n){
//     cout << count << " "<< endl;
//     count ++;
// }
// cout <<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int n=30;
// for(int i=3 ; i <=n; i= i+3){
//     cout <<i << endl;
// }
// cout <<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main (){
// int n=5;
// int sum=0;

// for (int i=1; i<=n; i++){
//     sum +=i;
// }
// cout << sum <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
// int i=1;
// int sum =0;
// while (i<=10){
//     sum +=i;
//     i+=2;
// }
// cout << sum <<endl;
//     return 0;
// }

// odd number printing


// # include <iostream>
// using namespace std;
// int main (){
// int n=10;
// for (int i=1; i<=n; i++){
//     if(i%2 !=0){
//         cout << i << endl;
//     }
// }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int n =10;
// int i =1;
// do {
//     cout << i << " ";
//     i ++;
// }while (i <=n);
// cout <<endl;
//     return 0;
// }

// number is prime is not checking

#include<iostream>
using namespace std;
int main (){
int n =5;
bool isprime =true;
for (int i=1; i<=n-1; i++){
    if (n%i==0){
        isprime=false;
        break;
    }
}
if (isprime =true){
    cout << "number is prime"<<endl;
}else{
    cout<< "non prime"<<endl;
}
    return 0;
}