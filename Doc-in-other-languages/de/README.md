## Wiki HTML Code Archiv（Py-crawler）

Dies wird verwendet, um ein Crawler-Projekt zu erstellen, das alle im Wiki vorhandenen Seiten nach statischen schreibgeschützten Versionen der Website nach dem Notfall durchsucht. Es ist möglicherweise nicht für die Wiederherstellung des Projekts geeignet, bietet aber eine Grundlage für die Wiederherstellungsseite.
Aufgrund technischer Probleme ist es derzeit nicht möglich, Crawler in C ++ zu schreiben, und der Wikidot-Zugriff ist langsam, also etwas langsam, aber 60 Mal / Minute ist ungefähr gleich.
Derzeit gilt dies für alle Wikidot-Websites, aber um bösartige Crawler zu verhindern, muss jede Website eine Seitenseite zum Crawlen haben.

### **Konfigurationsanforderungen**
```
Sie müssen Python 3 auf Ihrem Computer haben (die neueste Version funktioniert möglicherweise besser)
Erstellen Sie eine Seite auf Ihrer Website-URL/-Seiten und fügen Sie den Code [[module Pages preview="true"]] hinzu
```

### **Installation von Abhängigkeiten**
Anmerkung! Wenn Sie python3 installieren, müssen Sie "Python zu PATH hinzufügen" auswählen, um den Befehl pip zu verwenden.
Installieren Sie die Bibliotheksdateien in cmd oder PowerShell mit dem folgenden Code:
```
pip install requests
pip install bs4
```

### **Bot-Installation**
Bitte klicken Sie auf die neueste Version, die in der Seitenleiste `Releases` angezeigt wird, und wählen Sie die Installationsdatei am Ende der Installer-.exe aus. Die Dateien werden im selben Verzeichnis installiert. Alles, was Sie tun müssen, ist auf die entsprechende Taste auf Ihrer Tastatur zu tippen, um den entsprechenden Befehl auszulösen.

Linux-Benutzer kompilieren ihre eigenen. Die generierte a.html kann gelöscht werden

### **Der Crawler läuft**
* Aktivieren Sie RunMe.vbs (GUI) oder main.exe (CLI) zur Laufzeit.
* Geben Sie Ihre URL in das grafische Eingabefeld (GUI) oder den Befehlszeileneingabebereich (CLI) ein und klicken Sie auf Bestätigen.
* Schauen Sie sich die Zahl nach Seite X von X an, die unter der URL / Seitenseite Ihrer Website angezeigt wird (in diesem Fall das nächste x)
* Geben Sie diese Nummer in das Eingabefeld der Befehlszeile ein {wenn Sie zu viel eingeben (lassen Sie diese Zahl X, X≠0 sein), wird eine 1~X HTML-Datei ausgegeben (der Name ist pages1~pagesX.html), aber (X-1) und X sind gleich} und dann umbrechen.
* Warten Sie, bis das Programm abgeschlossen ist. (Wenn Sie feststellen, dass eine Seite mehrere Crawls hat, ist dies normal, das Programm crawlt alle Links, die darauf vorhanden sind.)
*Fertig? Denken Sie daran, in einen anderen Ordner zu packen, um Verwirrung zu vermeiden.

### **Feedback-Adresse**
HABEN SIE EINEN FEHLER ODER BUG? Kommen Sie zu [hier](http://ld-private-website.wikidot.com/forum/c-7602918/pyc) Feedback oder kommen Sie [hier](https://github.com/TimeLine-Bookstore/Py-crawler/issues) Feedback.

Sie haben eine Idee für ein neues Feature, wissen aber nicht, wo Sie Feedback geben sollen? Kommen Sie zu [hier](http://ld-private-website.wikidot.com/forum/t-15402049/pyc-1-1-0-1-9) Feedback oder kommen Sie [hier](https://github.com/TimeLine-Bookstore/Py-crawler/issues) Feedback.

Können Sie uns technische Hilfe geben? Holen Sie sich [hier](http://ld-private-website.wikidot.com/forum/c-7602920/) Feedback oder ziehen Sie [hier](https://github.com/TimeLine-Bookstore/Py-crawler/fork) Zweige, um Änderungen vorzunehmen.

----------
```
Copyright (c) 2022 TimeLine-Bookstore
All Rights Reserved.
Copyright (c) 2022 Timeline Bookstore
Alle Rechte vorbehalten.
```
