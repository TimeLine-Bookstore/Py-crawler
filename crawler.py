import requests
from bs4 import *
import time
#import lxml
head = {
    "User-Agent": "Mozilla/5.0 (Windows; U; Windows NT 10.0; it; rv:1.8.1.11) Gecko/20071127 Firefox/2.0.0.11"
}
#url="https://helloos.wikidot.com/" 
#输入您的URL
url=input()
res=requests.get(url, headers=head)
res.encoding=res.apparent_encoding
print(res)
file=open("a.html", "a", encoding="UTF-8")
file.write(res.text)

#目前还很简单
