## 维基HTML代码存档（Py-crawler）

这是用来创建一个爬虫工程，用于爬取wiki上存在的所有页面，用于在受灾后的网站静态只读版本。可能不适用于恢复工程，但是为恢复页面提供了依据。
由于技术问题，目前无法使用C++编写爬虫，加上wikidot访问速度较慢，因此稍微有点慢，但是60次/分钟是差不多的。
目前来说，这适用于所有Wikidot网站，但是为了防止恶意爬虫，任何网站必须有pages页面才可以爬。

### **配置要求**
```
在你的电脑上必须要有Python3（最新版的效果可能会比较好）
在你的网站URL/pages上建立一个页面，添加 [[module Pages preview="true"]] 代码
```

### **依赖项安装**
注意！python3安装时需要选择“添加Python到PATH”才能用pip命令。
请在cmd或PowerShell使用以下代码安装库文件：
```
pip install requests
pip install bs4
```

### **爬虫程序安装**
请点击侧栏`Releases`中显示的最新版，选择Installer.exe结尾的安装文件。它将会把文件安装到同一目录。你只需要在键盘上点击对应按钮即可触发相应命令。

Linux用户自行编译。生成的a.html可以删除

### **爬虫运行**
* 运行时启用ZH-Hans_RunMe.vbs(GUI)或main.exe(CLI)。
* 在图形输入栏（GUI）或者命令行输入区（CLI）输入你的网址，点击确认。
* 去查看你的网站URL/pages页面下面显示的page X of X的后面一个数（在本例子中就是后面一个x)
* 命令行输入区输入这个数【如果你填多了（设这个数为X，X≠0），它会输出1～X的HTML文件（名称为pages1~pagesX.html）但是(X-1)和X是同一个】，然后换行。
* 静静等待程序执行完毕吧。（若发现了一个页面有多次爬取，那是正常的，程序会爬上面存在的所有链接）
* 完成了？记得打包到另一个文件夹，避免混淆。

### **反馈地址**
遇到了错误或BUG？来 [这里](http://ld-private-website.wikidot.com/forum/c-7602918/pyc) 反馈，或者来 [这里](https://github.com/TimeLine-Bookstore/Py-crawler/issues) 反馈。

有新功能的想法，但是不知道在那里反馈？来[这里](http://ld-private-website.wikidot.com/forum/t-15402049/pyc-1-1-0-1-9)反馈，或者来 [这里](https://github.com/TimeLine-Bookstore/Py-crawler/issues) 反馈。

你可以给我们提供技术帮助？来 [这里](http://ld-private-website.wikidot.com/forum/c-7602920/) 反馈，或者来 [这里](https://github.com/TimeLine-Bookstore/Py-crawler/fork) 拉取分支进行修改吧。

----------
```
Copyright (c) 2022 TimeLine-Bookstore
All Rights Reserved.

版权所有 (c) 2022 时间轴书店
保留所有权利。
```
