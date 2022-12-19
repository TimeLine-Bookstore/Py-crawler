## Wiki HTML代码存档（Py-crawler）

此所以创一爬虫之功,以尽wiki之页面,用于被灾之后网站静只读版本也。或不宜于复工,然为恢复页面资。

凡此诸Wikidot网站,所以防恶入虫,网站必有pages页面而后可也。

### **配置所需**
```
于子之电脑,必有Python3(最新版之效可校也)
立页面于网站URL/pages,添 [[module Pages preview="true"]] 代码
```

### **赖项安装**
注意! python3安须择"添Python至PATH"乃用pip令。
请于cmd或PowerShell用以下代码安装库文。
```
pip install requests
pip install bs4
```

### **虫程序安装**
请点击侧栏`Releases`以示最新版,择Installer.exe结尾之安装文件。 将置文同目录。 汝但于键盘上点击应按钮即触发相应。

Linux用户自编译。 生成a.html可删

### **爬虫行**
* 行用RunMe.vbs(GUI)若main.exe(CLI)。
* 于图形输入栏(GUI)或令行输入区(CLI)输入你的网址,点击确认。
* 往视网站URL/pages页面下page X of X后一数(即后一也x)
* 令行输入区输此数【若填多之(置此数为X,X≠0),当输1至X HTML文(名为pages1~pagesX.html)然(X-1)与X同】,然后换行。
* 静待程序执行毕。 (若得一页面数升取,则常也,序上所有链接)
* 成? 记得打包一文件夹,免教混淆。

### **反馈地址**
遇过与BUG? 来 [此](http://ld-private-website.wikidot.com/forum/c-7602918/pyc) 反馈,或来 [此](https://github.com/TimeLine-Bookstore/Py-crawler/issues) 反馈。

有新功之心,而不知其所反馈? 来[此](http://ld-private-website.wikidot.com/forum/t-15402049/pyc-1-1-0-1-9)反馈,或来 [此](https://github.com/TimeLine-Bookstore/Py-crawler/issues) 反馈。

你可以给我给技术助? 来 [此](http://ld-private-website.wikidot.com/forum/c-7602920/) 反馈,或来 [此](https://github.com/TimeLine-Bookstore/Py-crawler/fork) 拉取支修改也。

----------
```
Copyright (c) 2022 TimeLine-Bookstore
All Rights Reserved.
版权诸 (c) 2022 时间轴书店
诸有所权。
```
