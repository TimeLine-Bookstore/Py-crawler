url=inputbox("请输入您的网站URL")
Set obj=createobject("wscript.shell")
obj.run "cmd.exe /c main.exe "+url
msgbox "完成爬取。                         "
