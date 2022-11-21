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
	    cout<<"Example: http://helloos.wikidot.com/"<<endl;
	    cout<<"Input URL> ";
	    gets(url);
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
	fout.open("index.html");
	while(getline(fin,s)){
		if(s=="                    @import url(/admin:themes/code/1);"){
			fout<<"                    @import url("+char_to_str(url)+"admin:themes/code/1);"<<endl;
		}else{
			fout<<s<<endl;
		}
	}
	fout.close();
	char url2[1024];
	int n=1;
	cout<<"Your pages of /pages> ";
	int nu;
	cin>>nu;
	while(n<=nu){
		sprintf(url2,"get-all-page %spages/p/%d",url,n);
		system(url2);
		n++;
	}
	system("all");
	fin.close();
	fin.open("allurls.log");
	string things;
	while(getline(fin,things)){
		char thing[512]={'\0'};
		for(int i=0;i<things.size();i++){
			thing[i]=things[i];
		}
		sprintf(url2,"other-page %s%s",url,thing);
		system(url2);
		//cout<<url2<<endl;
	}
	return 0;
}
//@import url(http://kcdfg.wdfiles.com/local--theme/silent-silver-patch/style.css);
	
