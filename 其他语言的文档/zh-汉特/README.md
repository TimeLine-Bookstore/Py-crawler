## WIKI HTML代碼存檔（Py-crawler）

這是用來創建一個爬蟲工程，用於爬取wiki上存在的所有頁面，用於在受災后的網站靜態只讀版本。 可能不適用於恢復工程，但是為恢復頁面提供了依據。
目前來說，這適用於所有Wikidot網站，但是為了防止惡意爬蟲，任何網站必須有pages頁面才可以爬取。

### **配置要求**
```
在你的網站URL/pages上建立一個頁面，添加 [[module Pages preview="true"]] 代碼
```

### **爬虫程序安装**
請點擊側欄`Releases`中顯示的最新版，選擇Installer.exe結尾的安裝檔。 它將會把檔案安裝到同一目錄。 你只需要在鍵盤上點擊對應按鈕即可觸發相應命令。

Linux使用者自行編譯。 生成的a.html可以刪除

### **爬蟲運行**
* 運行時啟用RunMe.vbs（GUI）或main.exe（CLI）。
* 在圖形輸入欄（GUI）或者命令行輸入區（CLI）輸入你的網址，點擊確認。
* 去查看你的網站URL/pages頁面下面顯示的page X of X的後面一個數（在本例子中就是後面一個x）
* 命令行輸入區輸入這個數【如果你填多了（設這個數為X，X≠0），它會輸出 1X 的HTML檔案（名稱為pages1~pagesX.html）但是（X-1）和X是同一個】，然後換行。
* 靜靜等待程式執行完畢吧。（若發現了一個頁面有多次爬取，那是正常的，程式會爬上面存在的所有連結）
* 完成了？ 記得打包到另一個資料夾，避免混淆。

### **反饋位址**
遇到了錯誤或BUG？ 來 [這裡](http://ld-private-website.wikidot.com/forum/c-7602918/pyc) 反饋，或者來 [這裡](https://github.com/TimeLine-Bookstore/Py-crawler/issues) 反饋。

有新功能的想法，但是不知道在那裡反饋？ 來[這裡](http://ld-private-website.wikidot.com/forum/t-15402049/pyc-1-1-0-1-9)反饋，或者來 [這裡](https://github.com/TimeLine-Bookstore/Py-crawler/issues) 反饋。

你可以給我們提供技術説明？ 來 [這裡](http://ld-private-website.wikidot.com/forum/c-7602920/) 反饋，或者來 [這裡](https://github.com/TimeLine-Bookstore/Py-crawler/fork) 拉取分支進行修改吧。

----------
```
Copyright (c) 2022 TimeLine-Bookstore
All Rights Reserved.
版權所有 （c） 2022 時間軸書店
保留所有權利。
```
