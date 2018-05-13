/*
Grammer:
 E -> +EE
 E -> -EE
 E -> 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 
*/
//Left recursion has not been handled
//Right recursion has beed handled

#include<iostream>
#include<stdlib.h>

using namespace std;

void s();
void match(char);
char next();

char str[30];
char lookahead;

void s(){
	if(lookahead == '+'){
		match('+');
		s();
		s();
	}
	else if(lookahead == '-'){
		match('-');
		s();
		s();
	}
	else if(lookahead = '0')
		match('0');
	else if(lookahead = '1')
		match('1');
	else if(lookahead = '2')
		match('2');
	else if(lookahead = '3')
		match('3');
	else if(lookahead = '4')
		match('4');
	else if(lookahead = '5')
		match('5');
	else if(lookahead = '6')
		match('6');
	else if(lookahead = '7')
		match('7');
	else if(lookahead = '8')
		match('8');
	else if(lookahead = '9')
		match('9');
	//else if(isdigit(lookahead))
		//match(lookahead);
	else{
		cout << "Syntax Error!" << endl << endl;
		exit(3);
	}
}
void match(char top){
	if(top == lookahead)
		lookahead = next();
	else
		cout << "Syntax Error!!" << endl << endl;
}

char next(){
	static int i = 0;
	lookahead = str[i++];
	return lookahead;
}

int main(){
	cout << "Enter String...: " << endl;
	cin >> str;
	next();
	s();
	if(lookahead == '\0')
		cout << "Syntax Correct!!" << endl << endl;
	else
		cout << "Syntax Error!!" << endl << endl;
	return 0;
}
