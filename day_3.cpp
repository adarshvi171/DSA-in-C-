// #include<iostream>
// using namespace std;
// int main(){
// int n=8;
// for(int i=1; i<=n; i++){      // outer loop
//     for (int j=1; j<=n; j++){   // inner loop
//         cout<< j<< "  ";
//     }
//     cout<< endl;
// }
//     return 0;
// }


//star printing by nested loop


// #include<iostream>
// using namespace std;
// int main(){
// int n=4;
// for (int i=0; i<=n; i++){
//     for (int j=0; j<n; j++){
// cout <<"*"<< " ";
//     }
//     cout << endl;
// }
//     return 0;
// }


// trangle printing ABC....


// #include <iostream>
// using namespace std;
// int main(){
// int n=4;
// for (int i=0;i<n; i++){
//     char ch= 'A';
//     for(int j=0; j<n; j++ ){
//         if (i>j){
//             cout << " ";      
//         }else{
//             cout << ch;
//             ch = ch +1;
//         }   
//    }
//    cout << endl;
// }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int n=3;
// int num=1;
// for (int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//      cout << num<< " " ;
//      num++;
//     }
//     cout<<endl;
// }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int n=3;
// char ch='A';
// for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//         cout << ch<<" ";
//         ch=ch+1;
//     }
//     cout << endl;
// }
//     return 0;
// }


// trangle pattern printing

// #include<iostream>
// using namespace std;
// int main (){
// int n=5;
// for (int i=0; i<n; i++){
//     for (int j=0; j<i+1; j++){
//         cout<< "* ";
//     }
//     cout<< endl;
// }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int n=4;
// for(int i=0; i<n; i++){
//     for(int j=0; j<i+1; j++){
//         cout<<i+1;
//     }
//     cout<<endl;
// }
//     return 0;
// }


// char ABCD printing in trangle 


// #include<iostream>
// using namespace std;
// int main(){
// int n=4;
// for (int i=0; i<n; i++){
//     char ch= 'A'+i;
//     for(int j=0; j<i+1; j++){
//         cout<< ch;
//     }
//     cout<<endl;
// }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int n=4;
// for(int i=0; i<n; i++){
//     int num=1;
//     for(int j=0; j<i+1; j++){
//         cout << num;
//         num++;
//     }
//     cout<< endl;
// }
//     return 0;
//}


// #include<iostream>
// using namespace std;
// int main(){
// int n=4;
// for (int i=0; i<n; i++){
//     for (int j=i+1; j>0; j--){
//         cout<< j;
//     }
//     cout<<endl;
// }
//     return 0;
// }


//floyd's trange pattern

//  #include<iostream>
//  using namespace std;
//  int main(){
// int n=4;
// int num=1;
// for(int i=0; i<n; i++){
//     for(int j=0;j<i+1; j++){
//         cout<<num;
//         num++;
//     }
//     cout<< endl;
// }
//     return 0;
//  }

// #include<iostream>
//  using namespace std;
//  int main(){
// int n=4;
// for(int i=0; i<n; i++){
//     for(int j=i+1; j>0; j--){
//         cout<<j <<" ";
//     }
//     cout<< endl;
// }
//     return 0;
//  }


// #include <iostream>
// using namespace std;
// int main() {
//     int n = 4;
//     for (int i = 0; i < n; i++) {
//         char ch = 'A' + i;
//         for (int j = 0; j <= i; j++) {
//             cout << char(ch - j) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main (){
// int n=4;
// for (int i=0; i<n; i++){
//     for(int j=0; j<i; j++){
//         cout<< " ";
//     }
//     for(int j=0; j<n-i; j++){
//         cout<<i+1;
//     }
//     cout<< endl;
// }
//     return 0;
// }

// pyramid tringle

// #include<iostream>
// using namespace std;
// int main(){
// int n=4;
// for(int i=0;i<n; i++){
//     for (int j=0; j<n-i-1; j++){
//         cout<< " ";
//     }
//     for(int j=1; j<=i+1; j++){
//         cout<< j;   
//     }
//     for (int j=i; j>0; j--){
//         cout<< j;
//     }
//     cout <<endl;
// }
//     return 0;
// }


// butterfly pattern

// #include<iostream>
// using namespace std;
// int main(){
// int n=4;
// for (int i=0; i<n; i++){

//     for(int j=0;j<i+1; j++){
//         cout<< "*";
//     }
//     for(int j=0; j<(2+n)-(i+i); j++){
//         cout<< " ";
//     }
//     for(int j=0; j<i+1; j++){
//         cout<< "*";
//     }
//     cout<<endl;
// }
// for(int i=0; i<n; i++){
//     for (int j=0; j<n-i; j++){
//         cout<<"*";
//     }
//     for (int j=0; j<(n-4)+(i+i); j++){
//         cout<< " ";
//     }
//     for( int j=0; j<n-i;j++){
//         cout<< "*";
//     }
//     cout<<endl;
// }

//     return 0;
// }

