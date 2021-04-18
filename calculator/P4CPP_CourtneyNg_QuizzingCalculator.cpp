/*
Courtney Ng
Period 4
Program Desc: Quizzing Calculator
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


//prototypes	
int difficulty(int d); 																			//difficulty
int modes(int m);																				//modes
int numQuestions(int q);																		//number of q's
void addition(int d, int q);																	//addition
void subtraction(int d, int q);																	//subtraction
void multiplication(int d, int q);																//multiplication
void division(int d, int q);																	//division
void mod(int d, int q);																			//modulus
//void mixed(int d, int q);


int getDiff(){	// asks for difficulty
	int diff;
	cout << "Choose a difficulty\n";
	cout << "1. easy\n2. medium\n3. hard\n";
	cin >> diff;
	return diff;
	
}

int getMode(){ //asks for mode type
	int mode;
	cout << "Choose a mode\n";
	cout << "1. addition\n2. subtraction\n3. multiplication\n4. division\n5. mod\n6. mixed\n";
	cin >> mode;
	return mode;
}

int getQs(){
	int question;
	cout << "Choose a question amount\n";
	cout << "1. 10 questions\n2. 25 questions\n3. 50 questions\n";
	cin >> question;
	return question;
}
int main(){ 																				//MAIN MAIN MAIN
	int mode;
	mode = getMode();
	
	switch (mode){
		case 1: addition(getDiff(), getQs()); 			break;
		case 2: subtraction(getDiff(),getQs());			break;
		case 3: multiplication(getDiff(),getQs());		break;
		case 4: division(getDiff(),getQs());			break;
		case 5: mod(getDiff(),getQs());					break;
	}
}
int difficulty(int d){	 //set difficulty levels
	switch(d){
		case 1: cout << "easy"; 
			return 1;
			break;
		case 2: cout << "medium"; 
			return 2;
			break;
		case 3: cout << "hard"; 
			return 3;
			break;
	}
}

//define :p
int modes(int m){	//set mode type
	switch(m){
		case 1: cout << "addition";
			return 1;
			break;
		case 2: cout << "subtraction";
			return 2;
			break;
		case 3: cout << "multiplication";
			return 3;
			break;
		case 4: cout << "division";
			return 4;
			break;
		case 5: cout << "mod";
			return 5;
			break;
		/*
		case 6: cout << "mixed";
			return 6;
			break;
		*/
	}
}

int numQuestions(int q){ 																			//asks for amount of questions
	switch(q){
		case 1: cout << "10 questions";
			return 1;
			break;
		case 2: cout << "25 questions";
			return 2;
			break;
		case 3: cout << "50 questions";
			return 3;
			break;
	}
}

void addition(int d, int q){ 																//addition function
	int i, xx, yy, ans, player, correct = 0, incorrect = 0;
	
	if (d == 1){
		if (q == 1){
			for (i = 0; i < 10; i++){
				xx = rand() % 20 + 1; yy = rand() % 20 + 1;
				cout << xx << "+" << yy << "= ";
				cin >> player;
				ans = xx + yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		if (q == 2){
			for (i = 0; i < 25; i++){
				xx = rand() % 20 + 1; yy = rand() % 20 + 1;
				cout << xx << "+" << yy << "= ";
				cin >> player;
				ans = xx + yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		
		if (q == 3){
			for (i = 0; i < 50; i++){
				xx = rand() % 20 + 1; yy = rand() % 20 + 1;
				cout << xx << "+" << yy << "= ";
				cin >> player;
				ans = xx + yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
	}
	
	else if (d == 2){
		if (q == 1){
			for (i = 0; i < 10; i++){
				xx = rand() % 50 + 1; yy = rand() % 50 + 1;
				cout << xx << "+" << yy << "= ";
				cin >> player;
				ans = xx + yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
				if (q == 2){
			for (i = 0; i < 25; i++){
				xx = rand() % 50 + 1; yy = rand() % 50 + 1;
				cout << xx << "+" << yy << "= ";
				cin >> player;
				ans = xx + yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		
		if (q == 3){
			for (i = 0; i < 50; i++){
				xx = rand() % 50 + 1; yy = rand() % 50 + 1;
				cout << xx << "+" << yy << "= ";
				cin >> player;
				ans = xx + yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
	}
	
	else if (d == 3){
		if (q == 1){
			for (i = 0; i < 10; i++){
				xx = rand() % 100 + 1; yy = rand() % 100 + 1;
				cout << xx << "+" << yy << "= ";
				cin >> player;
				ans = xx + yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
				if (q == 2){
			for (i = 0; i < 25; i++){
				xx = rand() % 100 + 1; yy = rand() % 100 + 1;
				cout << xx << "+" << yy << "= ";
				cin >> player;
				ans = xx + yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		
		if (q == 3){
			for (i = 0; i < 50; i++){
				xx = rand() % 100 + 1; yy = rand() % 100 + 1;
				cout << xx << "+" << yy << "= ";
				cin >> player;
				ans = xx + yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
	}
	cout << "you got " << correct << " question(s) correct\n";
	cout << "you got " << incorrect << " question(s) incorrect";
	
	return;
}

void subtraction(int d, int q){ 														//subtraction function
	int i, xx, yy, ans, player, correct = 0, incorrect = 0;
	
	if (d == 1){
		if (q == 1){
			for (i = 0; i < 10; i++){
				xx = rand() % 20 + 1; yy = rand() % 20 + 1;
				cout << xx << "-" << yy << "= ";
				cin >> player;
				ans = xx - yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		if (q == 2){
			for (i = 0; i < 25; i++){
				xx = rand() % 20 + 1; yy = rand() % 20 + 1;
				cout << xx << "-" << yy << "= ";
				cin >> player;
				ans = xx - yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		
		if (q == 3){
			for (i = 0; i < 50; i++){
				xx = rand() % 20 + 1; yy = rand() % 20 + 1;
				cout << xx << "-" << yy << "= ";
				cin >> player;
				ans = xx - yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
	}
	
	else if (d == 2){
		if (q == 1){
			for (i = 0; i < 10; i++){
				xx = rand() % 50 + 1; yy = rand() % 50 + 1;
				cout << xx << "-" << yy << "= ";
				cin >> player;
				ans = xx - yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
				if (q == 2){
			for (i = 0; i < 25; i++){
				xx = rand() % 50 + 1; yy = rand() % 50 + 1;
				cout << xx << "-" << yy << "= ";
				cin >> player;
				ans = xx + yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		
		if (q == 3){
			for (i = 0; i < 50; i++){
				xx = rand() % 50 + 1; yy = rand() % 50 + 1;
				cout << xx << "-" << yy << "= ";
				cin >> player;
				ans = xx - yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
	}
	
	else if (d == 3){
		if (q == 1){
			for (i = 0; i < 10; i++){
				xx = rand() % 100 + 1; yy = rand() % 100 + 1;
				cout << xx << "-" << yy << "= ";
				cin >> player;
				ans = xx - yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
				if (q == 2){
			for (i = 0; i < 25; i++){
				xx = rand() % 100 + 1; yy = rand() % 100 + 1;
				cout << xx << "-" << yy << "= ";
				cin >> player;
				ans = xx - yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		
		if (q == 3){
			for (i = 0; i < 50; i++){
				xx = rand() % 100 + 1; yy = rand() % 100 + 1;
				cout << xx << "-" << yy << "= ";
				cin >> player;
				ans = xx - yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
	}
	cout << "you got " << correct << " question(s) correct\n";
	cout << "you got " << incorrect << " question(s) incorrect";
	
	return;
}

void multiplication(int d, int q){																 //multiplication function
	int i, xx, yy, ans, player, correct = 0, incorrect = 0;
	
	if (d == 1){
		if (q == 1){
			for (i = 0; i < 10; i++){
				xx = rand() % 20 + 1; yy = rand() % 20 + 1;
				cout << xx << "*" << yy << "= ";
				cin >> player;
				ans = xx * yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		if (q == 2){
			for (i = 0; i < 25; i++){
				xx = rand() % 20 + 1; yy = rand() % 20 + 1;
				cout << xx << "*" << yy << "= ";
				cin >> player;
				ans = xx * yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		
		if (q == 3){
			for (i = 0; i < 50; i++){
				xx = rand() % 20 + 1; yy = rand() % 20 + 1;
				cout << xx << "*" << yy << "= ";
				cin >> player;
				ans = xx * yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
	}
	
	else if (d == 2){
		if (q == 1){
			for (i = 0; i < 10; i++){
				xx = rand() % 50 + 1; yy = rand() % 50 + 1;
				cout << xx << "*" << yy << "= ";
				cin >> player;
				ans = xx * yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
				if (q == 2){
			for (i = 0; i < 25; i++){
				xx = rand() % 50 + 1; yy = rand() % 50 + 1;
				cout << xx << "*" << yy << "= ";
				cin >> player;
				ans = xx + yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		
		if (q == 3){
			for (i = 0; i < 50; i++){
				xx = rand() % 50 + 1; yy = rand() % 50 + 1;
				cout << xx << "*" << yy << "= ";
				cin >> player;
				ans = xx * yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
	}
	
	else if (d == 3){
		if (q == 1){
			for (i = 0; i < 10; i++){
				xx = rand() % 100 + 1; yy = rand() % 100 + 1;
				cout << xx << "*" << yy << "= ";
				cin >> player;
				ans = xx * yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
				if (q == 2){
			for (i = 0; i < 25; i++){
				xx = rand() % 100 + 1; yy = rand() % 100 + 1;
				cout << xx << "*" << yy << "= ";
				cin >> player;
				ans = xx * yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		
		if (q == 3){
			for (i = 0; i < 50; i++){
				xx = rand() % 100 + 1; yy = rand() % 100 + 1;
				cout << xx << "*" << yy << "= ";
				cin >> player;
				ans = xx * yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
	}
	cout << "you got " << correct << " question(s) correct\n";
	cout << "you got " << incorrect << " question(s) incorrect";
	
	return;
}

void division(int d, int q){ 																	//division function
	int i, xx, yy, ans, player, correct = 0, incorrect = 0;
	
	if (d == 1){
		if (q == 1){
			for (i = 0; i < 10; i++){
				xx = rand() % 20 + 1; yy = rand() % 20 + 1;
				cout << xx << "/" << yy << "= ";
				cin >> player;
				ans = xx / yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		if (q == 2){
			for (i = 0; i < 25; i++){
				xx = rand() % 20 + 1; yy = rand() % 20 + 1;
				cout << xx << "/" << yy << "= ";
				cin >> player;
				ans = xx / yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		
		if (q == 3){
			for (i = 0; i < 50; i++){
				xx = rand() % 20 + 1; yy = rand() % 20 + 1;
				cout << xx << "/" << yy << "= ";
				cin >> player;
				ans = xx / yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
	}
	
	else if (d == 2){
		if (q == 1){
			for (i = 0; i < 10; i++){
				xx = rand() % 50 + 1; yy = rand() % 50 + 1;
				cout << xx << "/" << yy << "= ";
				cin >> player;
				ans = xx / yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
				if (q == 2){
			for (i = 0; i < 25; i++){
				xx = rand() % 50 + 1; yy = rand() % 50 + 1;
				cout << xx << "/" << yy << "= ";
				cin >> player;
				ans = xx + yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		
		if (q == 3){
			for (i = 0; i < 50; i++){
				xx = rand() % 50 + 1; yy = rand() % 50 + 1;
				cout << xx << "/" << yy << "= ";
				cin >> player;
				ans = xx / yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
	}
	
	else if (d == 3){
		if (q == 1){
			for (i = 0; i < 10; i++){
				xx = rand() % 100 + 1; yy = rand() % 100 + 1;
				cout << xx << "/" << yy << "= ";
				cin >> player;
				ans = xx / yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
				if (q == 2){
			for (i = 0; i < 25; i++){
				xx = rand() % 100 + 1; yy = rand() % 100 + 1;
				cout << xx << "/" << yy << "= ";
				cin >> player;
				ans = xx / yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		
		if (q == 3){
			for (i = 0; i < 50; i++){
				xx = rand() % 100 + 1; yy = rand() % 100 + 1;
				cout << xx << "/" << yy << "= ";
				cin >> player;
				ans = xx / yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
	}
	cout << "you got " << correct << " question(s) correct\n";
	cout << "you got " << incorrect << " question(s) incorrect";
	
	return;
}

void mod(int d, int q){																			//modulus function
	int i, xx, yy, ans, player, correct = 0, incorrect = 0;
	
	if (d == 1){
		if (q == 1){
			for (i = 0; i < 10; i++){
				xx = rand() % 20 + 1; yy = rand() % 20 + 1;
				cout << xx << "%" << yy << "= ";
				cin >> player;
				ans = xx % yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		if (q == 2){
			for (i = 0; i < 25; i++){
				xx = rand() % 20 + 1; yy = rand() % 20 + 1;
				cout << xx << "%" << yy << "= ";
				cin >> player;
				ans = xx % yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		
		if (q == 3){
			for (i = 0; i < 50; i++){
				xx = rand() % 20 + 1; yy = rand() % 20 + 1;
				cout << xx << "%" << yy << "= ";
				cin >> player;
				ans = xx % yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
	}
	
	else if (d == 2){
		if (q == 1){
			for (i = 0; i < 10; i++){
				xx = rand() % 50 + 1; yy = rand() % 50 + 1;
				cout << xx << "%" << yy << "= ";
				cin >> player;
				ans = xx % yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
				if (q == 2){
			for (i = 0; i < 25; i++){
				xx = rand() % 50 + 1; yy = rand() % 50 + 1;
				cout << xx << "%" << yy << "= ";
				cin >> player;
				ans = xx + yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		
		if (q == 3){
			for (i = 0; i < 50; i++){
				xx = rand() % 50 + 1; yy = rand() % 50 + 1;
				cout << xx << "%" << yy << "= ";
				cin >> player;
				ans = xx % yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
	}
	
	else if (d == 3){
		if (q == 1){
			for (i = 0; i < 10; i++){
				xx = rand() % 100 + 1; yy = rand() % 100 + 1;
				cout << xx << "%" << yy << "= ";
				cin >> player;
				ans = xx % yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
				if (q == 2){
			for (i = 0; i < 25; i++){
				xx = rand() % 100 + 1; yy = rand() % 100 + 1;
				cout << xx << "%" << yy << "= ";
				cin >> player;
				ans = xx % yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
		
		if (q == 3){
			for (i = 0; i < 50; i++){
				xx = rand() % 100 + 1; yy = rand() % 100 + 1;
				cout << xx << "%" << yy << "= ";
				cin >> player;
				ans = xx % yy;
				
				if (ans == player){
					correct++;
				}
				
				else{
					incorrect++;
				}
			}		
		}
	}
	cout << "you got " << correct << " question(s) correct\n";
	cout << "you got " << incorrect << " question(s) incorrect";
	
	return;
}
