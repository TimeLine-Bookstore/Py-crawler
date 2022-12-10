#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
string char_to_str(char ch[]){
	string s;
	for(int i=0;i<strlen(ch);i++){
		s.push_back(ch[i]);
	}
	return s;
}
bool have_file(const char* name){
	ifstream fins (name);
	return fins.is_open();
}
bool have_floder(const char* name){
	bool b=chdir(name)==0;
	if(b) chdir("../");
	return b;
}
bool compare_2_html(const char* file1,const char* file2){
	ifstream fin1 (file1);
	ifstream fin2 (file2);
	string s1,s2;
	while(getline(fin1,s1)||getline(fin2,s2)){
		if(s1!=s2){
			return false;
		}
	}
	return true;
}
int main(int argc,char** argv){
	if(!have_floder("html"))
		system("mkdir html");// ./html/
	ofstream fout;
	if(have_file("a.html"))
		system("del /f /q a.html");
	char url[1024];
	if(argc==1){
	    cout<<"Example: https://timeline-bookstore.wikidot.com/"<<endl;
	    cout<<"Input URL> ";
	    gets(url);
	}else{
	    sprintf(url,"%s",argv[1]);
	}
	//cout<<1;
	char cmd[1536];
	sprintf(cmd,"crawler %s",url);
	int a=system(cmd);
	ifstream fin ("a.html");
	if(a==1){
		cout<<"Failed!No file named crawler.exe!"<<endl;
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
	fout.open("./html/index.html");
	while(getline(fin,s)){
		if(s=="                    @import url(/admin:themes/code/1);"){
			fout<<"                    @import url("+char_to_str(url)+"admin:themes/code/1);"<<endl;
		}else{
			fout<<s<<endl;
		}
	}
	fout.close();
	fin.close();
	char url2[2048];
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
	
