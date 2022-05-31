#include <iostream>
using namespace std;
int main() {
int number[5];
// In this code I have updated it to input an array and print its members.
cout << "Enter 5 integers: "<<endl;
for (int i =0;i<5;i++){
    cin>>number[i];
}
cout << "You entered : ";
for (int i =0;i<5;i++){
    cout<<number[i]<<" ";
}

return 0;
}