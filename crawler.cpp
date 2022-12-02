#include<bits/stdc++.h>
#include<Urlmon.h>
#pragma comment(lib, "Urlmon.lib")
using namespace std;
int main(int argc,char** argv){
	URLDownloadToFile(0,argv[1],"a.html",0,NULL);
	return 0;
}
