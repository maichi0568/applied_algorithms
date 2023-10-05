//CPP 
#include <bits/stdc++.h> 

using namespace std;
int main() 
{ 
	map<string, int> M;
	char word[100]; int n=0;
	bool startWord=false;
	while(!feof(stdin)){
		char c=fgetc(stdin);
		if (c<='z' && c>='a'||'0'<=c && c<='9'){
			if (!startWord) startWord=true;
			n++;
			word[n-1]=c;
		} else {
			if(startWord) {
				word[n] ='\0';	
				M[word] ++;
			} n=0; startWord=false;
		}
	}
	for (const auto& pair : M) {
    cout << pair.first <<" " << pair.second << endl;
}
	return 0;
}
