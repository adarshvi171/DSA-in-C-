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

// #include<iostream>
// using namespace std;
// int main(){
//     cout<< sizeof(int)<< endl;
//    cout<< sizeof(long long int)<< endl;
//     return 0;
// }

 

//...........arrays

// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5]={45,87,78,90,58};
//     int size =5;
//     for(int i=0; i<size; i++){
//         cout<<marks[i]<<endl;
//     }
//     return 0;
// }


// finding smallest no. in array

// #include<iostream>
// using namespace std;
// int main(){
//  int num[]={1299,5546,2554,84658,5654,4325};
//  int size = 6;
//  int min= INT_MAX;
//  for(int i=0; i<size; i++){
//     if(num[i]<min){
//         min=num[i];
//     }
//  }
//  cout<<min<<endl;
// return 0;
// }


// linear search 

#include<iostream>
using namespace std;
int linearsearch(int arr[],int sz,int target){
    for(int i=0; i<sz; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
int arr[]={4,2,7,8,1,2,5};
int sz=7;
int target=54;
cout<<linearsearch(arr,sz,target)<<endl;
    return 0;
}

// reverse arry

#include<iostream>
using namespace std;
void reversearry(int arr[],int sz){
    int start=0,end=sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
int arr[]={4,2,7,8,1,2,5};
int sz=7;
reversearry(arr,sz);
for(int i=0; i<sz; i++){
    cout<<arr[i]<< " ";
}
cout<<endl;
    return 0;
}


                    // HOME WORK QUESTIIOIONS

//a function adding arrys number

#include<iostream>
using namespace std;
int sum(int arr[],int sz){
    int num=0;
    for(int i=0;i<sz;i++){
        num+=arr[i];  
    }
    return num;
}
int main (){
int arr[]={1,1,1,1,1,1,1};
int sz=7;
cout<< sum(arr,sz)<< endl;
    return 0;
}

