url=inputbox("请输入您的网站URL")
Set obj=createobject("wscript.shell")
obj.run "cmd.exe /c main.exe "+url
msgbox "如果程序没有问题，爬虫应该马上就会进行。 "
