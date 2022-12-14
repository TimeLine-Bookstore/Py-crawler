## ウィキHTMLコードアーカイブ(Py-crawler)

これは、Wiki 上に存在するすべてのページをクロールするクローラ プロジェクトを作成し、被災後の Web サイトの静的読み取り専用バージョンに使用されます。 回復プロジェクトには適用されない場合がありますが、回復ページの基礎となります。
現時点では、これはすべてのWikidotサイトで動作しますが、悪意のあるクローラを防ぐために、任意のウェブサイトは、クロールする前にpagesページを持っている必要があります。

### **構成要件**
```
Web サイトの URL/pages にページを作成し、" [[module Pages preview="true"]] " コードを追加します
```

### **クローラプログラムのインストール**
サイドバー`Releases`に表示される最新バージョンをクリックして、Installer .exeの最後にあるインストール ファイルを選択します。 同じディレクトリにファイルがインストールされます。 コマンドをトリガーするには、キーボードで対応するボタンをタップするだけです。

Linux ユーザーは自分でコンパイルします。 生成された a.htmlは削除できます

### **クローララン**
* ランタイムは、RunMe.vbs(GUI) または main .exe (CLI) を有効にします。
* グラフィック入力バー (GUI) またはコマンド ライン入力領域 (CLI) に URL を入力し、[確認] をクリックします。
* Web サイトの URL/pages ページの下に表示される page X of X の後の数 (この例では後者の x) を確認します。
* コマンド ライン入力領域にこの数を入力します {この数を X、X、≠0 に設定すると、1 ~ X の HTML ファイル (pages1~pagesX.html) を出力しますが、(X-1) と X は同じです}、 を折り返します。
*プログラムが実行されるのを静かに待ってください。 (ページが複数回クロールされていることが見つかった場合、それは正常であり、プログラムは上記のすべてのリンクをクロールします)
*それは完了ですか? 混乱を避けるために、別のフォルダにパッケージ化することを忘れないでください。

### **フィードバック アドレス**
エラーまたはバグが発生しましたか? [ここ](http://ld-private-website.wikidot.com/forum/c-7602918/pyc)フィードバック、または[ここ](https://github.com/TimeLine-Bookstore/Py-crawler/issues)フィードバックに来てください。

新機能のアイデアがありますが、フィードバックがわからない? フィードバックを[ここ](http://ld-private-website.wikidot.com/forum/t-15402049/pyc-1-1-0-1-9)するか、[ここ](https://github.com/TimeLine-Bookstore/Py-crawler/issues)フィードバックに来てください。

あなたは私たちに技術的な助けを与えることができますか? [ここ](http://ld-private-website.wikidot.com/forum/c-7602920/)フィードバック、または[ここ](https://github.com/TimeLine-Bookstore/Py-crawler/fork)に来て、ブランチを引っ張って修正してください。

----------
```
Copyright (c) 2022 TimeLine-Bookstore
All Rights Reserved.
著作権 (c) 2022 タイムライン書店
すべての権利予約。
```
