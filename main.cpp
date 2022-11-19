#include<bits/stdc++.h>
using namespace std;
string char_to_str(char ch[]){
	string s;
	for(int i=0;i<strlen(ch);i++){
		s.push_back(ch[i]);
	}
	return s;
}
int main(){
	ofstream fout ("a.html");
	fout.close();
	cout<<"Example: http://helloos.wikidot.com/"<<endl;
	cout<<"Input URL> ";
	char url[1024];
	gets(url);
	char cmd[1536];
	sprintf(cmd,"crawler.py %s",url);
	int a=system(cmd);
	ifstream fin ("a.html");
	if(!fin.is_open()){
		cout<<"Failed!No file named a.html!"<<endl;
		cout<<"Press ENTER to continue.";
		string s;
		getline(cin,s);
		exit(0);
	}else if(a==-1){
		cout<<"Failed!No file named crawler.py!"<<endl;
		cout<<"Press ENTER to continue.";
		string s;
		getline(cin,s);
		exit(0);
	}
	string s;
	fout.open("index.html");
	while(getline(fin,s)){
		if(s=="                    @import url(/admin:themes/code/1);"){
			fout<<"                    @import url("+char_to_str(url)+"admin:themes/code/1);"<<endl;
		}else{
			fout<<s<<endl;
		}
	}
	return 0;
}
//@import url(http://kcdfg.wdfiles.com/local--theme/silent-silver-patch/style.css);

