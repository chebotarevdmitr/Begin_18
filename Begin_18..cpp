#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv){
   int height,widht;
    cout<<" Height : ";
    cin>> height;
    cout<<" Widht : ";
    cin>> widht;
   char symbol;
    cout<<"Symbol : ";
    cin >> symbol;
    
    for(int h=0;h<height;h++) {
      	for(int w=0;w<widht;w++) {
      		cout<< setw(3)<<symbol;
        }
        cout<<endl;
     }
	system("pause<0");	
}