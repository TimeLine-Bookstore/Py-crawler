url=inputbox("Input the URL:")
Set obj=createobject("wscript.shell")
obj.run "cmd.exe /c main.exe "+url
msgbox "Done."
