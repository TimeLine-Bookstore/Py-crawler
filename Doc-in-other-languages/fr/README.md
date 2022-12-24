## Archive de code HTML Wiki (Py-crawler)

Ceci est utilisé pour créer un projet de robot d’exploration qui explore toutes les pages présentes sur le wiki pour les versions statiques en lecture seule du site Web après le sinistre. Il peut ne pas convenir à la restauration du projet, mais fournit une base pour la page de restauration.
Actuellement, cela s’applique à tous les sites Wikidot, mais pour empêcher les robots malveillants, tout site doit avoir une page de pages à explorer.

### **Configuration requise**

```
Créez une page sur l’URL/les pages de votre site Web et ajoutez le code [[module Pages preview="true"]]
```

### **Installation du bot**
Veuillez cliquer sur la dernière version affichée dans la barre latérale 'Versions' et sélectionner le fichier d’installation à la fin de la .exe d’installation. Il installera les fichiers dans le même répertoire. Tout ce que vous avez à faire est d’appuyer sur le bouton correspondant de votre clavier pour déclencher la commande correspondante.

Nous ne prendrons plus en charge Linux à l’avenir.

### **Le robot s’exécute**
* Activez RunMe.vbs (GUI) ou main.exe (CLI) au moment de l’exécution.
* Entrez votre URL dans le champ de saisie graphique (GUI) ou la zone de saisie de ligne de commande (CLI) et cliquez sur Confirmer.
* Regardez le numéro après la page X de X affiché sous la page URL / pages de votre site Web (dans ce cas, le x suivant)
* Entrez ce nombre dans le champ de saisie de la ligne de commande [si vous remplissez trop (que ce nombre soit X, X≠0), il produira un fichier HTML 1 ~ X (le nom est pages1 ~ pagesX.html) mais (X-1) et X sont identiques], puis encapsuler.
* Attendez la fin du programme. (Si vous trouvez qu’une page a plusieurs crawls, c’est normal, le programme va crawler tous les liens qui existent dessus)
* Fait? N’oubliez pas de déplacer un peu le dossier html pour éviter toute confusion.

### **Adresse de rétroaction**
VOUS AVEZ UNE ERREUR OU UN BUG ? Venez à [ici](http://ld-private-website.wikidot.com/forum/c-7602918/pyc) commentaires, ou venez [ici](https://github.com/TimeLine-Bookstore/Py-crawler/issues) commentaires.

Vous avez une idée pour une nouvelle fonctionnalité, mais vous ne savez pas où donner votre avis ? Venez à [ici](http://ld-private-website.wikidot.com/forum/t-15402049/pyc-1-1-0-1-9) commentaires, ou venez [ici](https://github.com/TimeLine-Bookstore/Py-crawler/issues) commentaires.

Pouvez-vous nous donner de l’aide technique? Venez à [ici](http://ld-private-website.wikidot.com/forum/c-7602920/) commentaires, ou [ici](https://github.com/TimeLine-Bookstore/Py-crawler/fork) tirez des branches pour apporter des modifications.

----------

```
Copyright (c) 2022 TimeLine-Bookstore
All Rights Reserved.
Copyright (c) Librairie chronologique 2022
Tous droits réservés.
```
