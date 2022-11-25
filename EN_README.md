## Wiki HTML code archive（Py-crawler）

This ie used to create a crawler project,Used to crawl all pages that exist on the wiki,Used for static, read-only versions of websites after a disaster.It may not be suitable for restoring the project, but provides a basis for the restore page.
Due to technical issues, it is currently not possible to write crawlers in C++, plus wikidot access is slow, so it is slightly slow, but 60 times/min is about the same.
Currently, this applies to all Wikidot sites, but to prevent malicious crawlers, any site must have a "pages" page to crawl.

### **Configuration requirements**
```
You must have Python 3 on your computer (the latest version may work better)
Create a page on your website URL/pages and add the " [[module Pages preview="true"]] " code
```

### **Dependency installation**
Note! When installing python3, you need to select "Add Python to PATH" to use the pip command.
Install the library files in cmd or PowerShell with the following code:
```
pip install requests
pip install bs4
```

### **Main program installation**
Please click on the latest version displayed in the sidebar `Releases` and select the installation file at the end of the Installer .exe. It will install the files to the same directory. All you have to do is tap the corresponding button on your keyboard to trigger the corresponding command.

Linux users compile their own. The generated a.html can be deleted

### **The crawler runs**
* The runtime enables EN_RunMe.vbs (GUI) or GenMain.exe (CLI).
* Enter your URL in the graphical input field (GUI) or command line input area (CLI) and click Confirm.
* Look at the number after page X of X displayed below your website's URL/pages page (in this case, the next x)
* Enter this number in the command line input field {if you fill in too much (let this number be X, X≠0), it will output a 1~X HTML file (the name is pages1~pagesX.html) but (X-1) and X are the same}, and then wrap.
* Wait for the program to finish. (If you find that a page has multiple crawls, this is normal, the program will crawl all the links that exist on it)
* Done? Remember to package to another folder to avoid confusion.

### **Feedback address**
GOT AN ERROR OR BUG? Come to [here] (http://ld-private-website.wikidot.com/forum/c-7602918/pyc) feedback, or come [here] (https://github.com/TimeLine-Bookstore/Py-crawler/issues) feedback.

Have an idea for a new feature, but don't know where to give feedback? Come to [here] (http://ld-private-website.wikidot.com/forum/t-15402049/pyc-1-1-0-1-9) feedback, or come [here] (https://github.com/TimeLine-Bookstore/Py-crawler/issues) feedback.

Can you give us technical help? Come to [here] (http://ld-private-website.wikidot.com/forum/c-7602920/) feedback, or [here] (https://github.com/TimeLine-Bookstore/Py-crawler/fork) pull branches to make changes.

----------
```
Copyright (c) 2022 TimeLine-Bookstore
All Rights Reserved.
版权所有 (c) 2022 时间轴书店
保留所有权利。
```
