//============================================================================
// Name        : dprint.cpp
// Author      : Gibran Iqbal
// Version     :
// Copyright   : Yarp copyright notice
// Description : Diamond Printer in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int n,i,s{1},sp{0},pad{0};
	cin>>n;
	i = n;

	while (i > 0) {
		sp = 0;
		pad = 0;
		while (pad < i-1) {
			cout<<" ";
			++pad;
		}
		while (sp < s) {
			cout<<"*";
			++sp;
		}
		cout<<"\n";
		s+=2;
		--i;
	}
	s-=2;

	while (i < n) {
		sp = 0;
		pad = 0;
		while (pad < i) {
			cout<<" ";
			++pad;
		}
		while (sp < s) {
			cout<<"*";
			++sp;
		}
		cout<<"\n";
		s-=2;
		++i;
	}

	return 0;
}
