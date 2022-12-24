## Arquivo de código Wiki HTML (Py-crawler)

Isto é usado para criar um projeto crawler que rasteja todas as páginas que existem no wiki para leitura estática - apenas versão do site após o desastre. 
Pode não se aplicar ao projecto de recuperação, mas fornece uma base para restaurar a página. 

Por agora, isto aplica-se a todos os sites da Wikidot, mas para prevenir rastejadores maliciosos, qualquer site deve ter uma página para escalar.

### **Requisitos de configuração**

```
Crie uma página no URL/páginas do seu site e adicione [[module Pages preview="true"]] código
```

### **Instalação bot**
Clique na versão mais recente exibida na barra lateral 'Desbloqueios' e selecione o ficheiro de instalação no final do instalador .exe. Vai instalar os ficheiros no mesmo diretório. Basta tocar no botão correspondente no teclado para acionar o comando correspondente.

Não apoiaremos mais o Linux no futuro.

### **O rastejador corre**
* Ativar RunMe.vbs (GUI) ou principal.exe (CLI) no tempo de funcionação.
* Introduza o url no campo de entrada gráfica (GUI) ou na área de entrada da linha de comando (CLI) e clique em Confirmar.
* Veja o número após a página X de X exibido abaixo da página URL/páginas do seu site (neste caso, o próximo x)
* Introduza este número no campo de entrada da linha de comando [se preencher demasiado (deixe este número ser X, X≠0), irá desausar um ficheiro HTML de 1~X (o nome é pages1~pagesX.html) mas (X-1) e X são os mesmos], e depois embrulha.
* Aguarde que o programa termine. (Se descobrir que uma página tem vários rastreios, isto é normal, o programa irá rastejar todos os links que existem nela)
* Feito? Lembre-se de mover um pouco a pasta html para evitar confusões.

### **反馈地址**
TEM UM ERRO OU ESCUTA? Venha para o feedback [aqui](http://ld-private-website.wikidot.com/forum/c-7602918/pyc) ou venha [aqui](https://github.com/TimeLine-Bookstore/Py-crawler/issues) feedback.

Tem uma ideia para uma nova funcionalidade, mas não sabe onde dar feedback? Venha para o feedback [aqui](http://ld-private-website.wikidot.com/forum/t-15402049/pyc-1-1-0-1-9) ou venha [aqui](https://github.com/TimeLine-Bookstore/Py-crawler/issues) feedback.

Pode dar-nos ajuda técnica? Venha para o feedback [aqui](http://ld-private-website.wikidot.com/forum/c-7602920/), ou [aqui](https://github.com/TimeLine-Bookstore/Py-crawler/fork) puxe ramos para fazer alterações.

----------

```
Copyright (c) 2022 TimeLine-Bookstore
All Rights Reserved.
Livraria Timeline-Bookstore (c) 2022
Todos os direitos reservados.
```
