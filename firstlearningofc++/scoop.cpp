//unary scoop operator
#include <iostream>

using namespace std;

 int tuna=20;//a variable outside the funtion every function has access to this variable"global"
int main(){

int tuna=69; //takes the most inner value "local variable"
cout <<:: tuna<<endl;//:: means it uses the global variable

}
