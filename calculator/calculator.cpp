/*
Courtney Ng
Period 4
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


//prototyping
int Addison(int, int);	//add integers return sum
int Madison(int, int);	//multiply integers return product
int Samson (int x, int y);	//subtract y from x return diff
double Davidson(double x, double y); //divide x by y return quotient 
int Modson (int, int);	//return the remainder 

void add(){
	
}

int main(){
//	srand(time(0));
//	int player, num = rand() % 100 + 1;
	doubles ans;
	// (1+(2-3)*4)/5

	ans = Davidson(Addison(1, Madison(Samson(2,3),4)),5);
		
	cout << ans;
}

//Function Def
int Addison(int x, int y){
	int sum;
	sum = x + y;
	return sum;
}

int Madison(int x, int y){
	return x * y;
}

int Samson (int x, int y){
	return x - y;
}

double Davidson(double x, double y){
	//double tempx = x;
	//return tempx / y;
	//could just change type above
	return x / y;
}

int Modson (int x, int y){
	return x % y;
}
