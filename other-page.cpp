#include<bits/stdc++.h>
using namespace std;
string char_to_str(char ch[]){
	string s;
	for(int i=0;i<strlen(ch);i++){
		s.push_back(ch[i]);
	}
	return s;
}
int main(int argc,char** argv){
	ofstream fout ("a.html");
	fout.close();
	char url[1024];
	if(argc==1){
		cout<<"Failed! Please run main.exe!"<<endl;
		cout<<"Press ENTER to continue.";
		string s;
		getline(cin,s);
		exit(0);
	}else{
		sprintf(url,"%s",argv[1]);
	}
	//cout<<1;
	char cmd[1536];
	sprintf(cmd,"crawler.py %s",url);
	int a=system(cmd);
	ifstream fin ("a.html");
	if(a==1){
		cout<<"Failed!No file named crawler.py!"<<endl;
		cout<<"Press ENTER to continue.";
		string s;
		getline(cin,s);
		exit(0);
	}else if(!fin.is_open()){
		cout<<"Failed!No file named a.html!"<<endl;
		cout<<"Press ENTER to continue.";
		string s;
		getline(cin,s);
		exit(0);
	}
	string s;
	char of[1024]={'\0'};
	for(int i=strlen(url)-1;url[i]!='/';i--){
		s.push_back(url[i]);
	}
	s="lmth."+s;
	for(int i=s.size()-1;i>=0;i--){
		of[s.size()-1-i]=s[i];
	}
	cout<<of<<endl;
	fout.open(of);
	while(getline(fin,s)){
		if(s=="                    @import url(/admin:themes/code/1);"){
			fout<<"                    @import url("+char_to_str(url)+"admin:themes/code/1);"<<endl;
		}else{
			fout<<s<<endl;
		}
		//cout<<1;
	}
	return 0;
}
//@import url(http://kcdfg.wdfiles.com/local--theme/silent-silver-patch/style.css);
