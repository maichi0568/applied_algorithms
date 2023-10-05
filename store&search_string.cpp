#include <bits/stdc++.h> 
using namespace std;
int main() 
{ 
	
	set<string> db;
	while(true){
		string k; cin >> k;
		if (k=="*") break;
		db.insert(k);
	}
	while (true){
		string cmd; cin >> cmd;
		if (cmd=="***") break;
		else if (cmd=="find"){
			string k; cin >> k;
			int res=0;
			if (db.find(k)!=db.end()) res =1;
			cout << res << endl;
		} else if (cmd=="insert"){
			string k;
			cin >> k;
			int res=1;
			if (db.find(k)!=db.end()) res=0;
			else db.insert(k);
			cout << res << endl;
		}
	}
    return 0;
}
