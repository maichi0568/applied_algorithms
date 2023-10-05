//C++ 
#include <bits/stdc++.h> 
using namespace std;
int main() 
{ 
	
	queue<int> s;
	while(true){
		string cmd; cin >>cmd;
		if (cmd=="#") break;
		if(cmd=="PUSH"){
			int v; cin >> v; s.push(v);
		} else if(cmd=="POP"){
			if (!s.empty()){
			int e=s.front();
			s.pop();
			cout << e <<endl; 
			} else cout << "NULL" << endl;
		}
	}
	return 0;
}
