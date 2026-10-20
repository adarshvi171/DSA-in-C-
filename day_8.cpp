//  #include<iostream>          // pointer
// using namespace std;
// int main(){

// int a=10;
// cout<<&a<<endl;

//     return 0;
// }   

// creating pointer

#include<iostream>
using namespace std;
int main(){
float price = 100.23;
 float *ptr = &price;
 cout<< ptr <<endl;
cout<< &price<<endl;
cout<< price;
return 0;
}

//pointer to pointer 

#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr = &a;
    int ** ptr2 =& ptr;
    cout<<&a <<endl;
    cout<<ptr<<endl;        // output = &a and ptr will same but ptr2 will diffrent
    cout<<ptr2;
    return 0;
}

//Array poiner

#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6};
cout<<arr<<endl;
    return 0;               //it will show the address of index 0
}

#include<iostream>
using namespace std;
int main(){
int arr[]={10,20,30,40,};
int *ptr=arr;
cout<<*(ptr+1)<<endl;
cout<<*(ptr+3)<<endl;
ptr++;
cout<<*ptr;
    return 0;         //output 20,40,20
}