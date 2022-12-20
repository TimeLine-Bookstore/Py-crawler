## 维基HTML代码存档（Py-crawler）

这玩意用来在你电脑塞一大堆爬虫获得的HTML备份文件，用来爬wiki上有的所有页面（没有的不爬），用于在完力后的网站看看就好的版本。可能不适用于恢复网站，但是为恢复这些页面提供了依据。
目前来说，这适用于所有Wikidot网站，但是为了防止恶意爬虫，任何网站必须有pages页面才可以爬。

### **能用要求**

```
y1s1，如果不在你网站URL/pages上建立一个页面添加 [[module Pages preview="true"]] 代码就用不了。
```

### **怎么装？**
请点击侧栏`Releases`中显示的最新版，选择Installer.exe结尾的安装文件。它将会把一大堆文件扔同一目录。你只需要在键盘上点击对应按钮即可触发相应命令。

不支持Linux啦。

### **爬虫运行**
* 运行时启用RunMe.vbs(GUI)或main.exe(CLI)。
* 在图形输入栏（GUI）或者命令行输入区（CLI）输入你的网址，点击确认。
* 去查看你的网站URL/pages页面下面显示的page X of X的后面一个数（在本例子中就是后面一个x)
* 命令行输入区输入这个数【如果你填多了（设这个数为X，X≠0），它会输出1～X的HTML文件（名称为pages1~pagesX.html）但是(X-1)和X是同一个】，然后换行。
* 静静等待程序执行完毕吧。（若发现了一个页面有多次爬取，那是正常的，程序会爬上面存在的所有链接）
* 完成了？记得把html文件夹移动一下，避免混淆。

### **反馈地址**
你这爬虫有问题啊？az，来 [这里](http://ld-private-website.wikidot.com/forum/c-7602918/pyc) 劈瓜，或者来 [这里](https://github.com/TimeLine-Bookstore/Py-crawler/issues) 找物管啊。（不解决好我自己吃了它，满意了吧）

有新功能的想法，但是不知道在那里反馈？来[这里](http://ld-private-website.wikidot.com/forum/t-15402049/pyc-1-1-0-1-9)反馈，或者来 [这里](https://github.com/TimeLine-Bookstore/Py-crawler/issues) 反馈。

可以给我们提供技术帮助？佬！来 [这里](http://ld-private-website.wikidot.com/forum/c-7602920/) ，或者来 [这里](https://github.com/TimeLine-Bookstore/Py-crawler/fork) 拉分支进行修改吧。

----------

```
Copyright (c) 2022 TimeLine-Bookstore
All Rights Reserved.
版权所有 (c) 2022 时间轴书店
权力都留下来。
```
