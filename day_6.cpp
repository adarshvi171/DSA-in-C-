// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>vec(5,9);
// cout << vec[0] << endl ;
// cout << vec[1] << endl ;
// cout << vec[2] << endl ;
// cout<< vec[3]<< endl;
// cout << vec[4] << endl ;
//     return 0;
// }


// for each loop

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<char> vec={'a','b','c','d','e'};
// for(char val:vec){
//     cout<< val<< " ";
// }
//     return 0;
// }

//vector functions size, push_back, pop_back, front , back, at

// #include <iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int >vec;
// cout<<"size="<<vec.size()<<endl;
// vec.push_back(8);
// cout<<"after push="<<vec.size()<<endl;
// for(int val:vec){
//     cout<<val<<endl;
// }
//     return 0;
// }

// checking capacity and size

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>vec;
// vec.push_back(0);
// vec.push_back(1);
// vec.push_back(2);
// vec.push_back(3);
// vec.push_back(4);
// cout<<vec.size()<<endl;
// cout<<vec.capacity()<<endl;
//     return 0;
// }

// printing subarrays

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     for(int st=0; st<n; st++){
//         for (int end=st; end<n; end++){
//             for(int i=st; i<=end; i++){
//                 cout<< arr[i]; 
//             }
//             cout<<" ";
//         }
//         cout<< endl;
//     }
//     return 0;
// }

// Brute force Approach

#include<iostream>
#include<vector>
using namespace std;
int main(){
int n=5;
int arr[5]={1,2,3,4,5};
int maxsum=INT_MIN;
for(int st=0; st<n; st++){
    int currsum=0;
    for(int end=st; end<n; end++){
        currsum += arr[end];
        maxsum=max(currsum,maxsum);
    }
}
cout<<"max subbarray ="<< maxsum<<endl;
    return 0;
}