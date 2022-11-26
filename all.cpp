#include<bits/stdc++.h>
using namespace std;
bool is_pages(string s){
	if(s[0]=='p'&&s[1]=='a'&&s[2]=='g'&&s[3]=='e'&&s[4]=='s'){
		return 1;
	}
	return 0;
}
int main(){
	ifstream fin ("./html/pages1.html");
	ofstream fout ("allurls.log");
	int n=1;
	while(fin.is_open()){
		//cout<<n;
		string s;
		while(getline(fin,s)){
			for(int i=0;i<s.size();i++){
				if(s[i]=='<'&&s[i+1]=='a'&&s[i+2]==' '){
					i+=10;
					if(s[i-1]!='/'){
						continue;
					}
					string url;
					while(s[i]!='"'){
						url.push_back(s[i]);
						i++;
					}
					if(url[0]!='\0'&&(!is_pages(url)))
						fout<<url<<endl;
				}
			}
			
		}
		n++;
		fin.close();
		char fn[1248];
		sprintf(fn,"./html/pages%d.html",n);
		fin.open(fn);
	}
	return 0;
}
