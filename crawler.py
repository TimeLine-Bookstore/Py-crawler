import requests
from bs4 import *
import time
import sys
#import lxml
head = {
    "User-Agent": "Mozilla/5.0 (Windows; U; Windows NT 10.0; it; rv:1.8.1.11) Gecko/20071127 Firefox/2.0.0.11"
    #Normal
    #"User-Agent": "Mozilla/5.0 (iPad; CPU OS 16_1 like Mac OS X) AppleWebKit/605.1.15 (KHTML, like Gecko) EdgiOS/107.0.1418.36 Version/16.0 Mobile/15E148 Safari/604.1"
    #iPad
}
#url="https://helloos.wikidot.com/" 
#输入您的URL
url=sys.argv[1]
res=requests.get(url, headers=head)
res.encoding=res.apparent_encoding
print(res)
file=open("a.html", "a", encoding="UTF-8")
file.write(res.text)

#目前还很简单
