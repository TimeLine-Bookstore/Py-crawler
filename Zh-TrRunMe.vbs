url=inputbox("請輸入您的網站URL鏈接")
Set obj=createobject("wscript.shell")
obj.run "cmd.exe /c main.exe "+url
msgbox "如果本程序沒有出現BUG錯誤，那麽爬蟲應該馬上就會開始。 "
