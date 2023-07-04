#include<iostream>
#include<string>

using namespace std;
int test(int x, int y = 39){
	cout<<x + y;
}
int main(){
   test(20);
}
