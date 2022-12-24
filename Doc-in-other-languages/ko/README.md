## 위키HTML 코드 아카이브(Py-crawler)

이것은 영향을받는 웹 사이트의 정적 읽기 전용 버전에 대한 위키에 존재하는 모든 페이지를 크롤링하는 크롤링 프로젝트를 만드는 데 사용됩니다. 복구 작업에는 적용되지 않을 수 있지만 페이지를 복원할 수 있는 기반을 제공합니다.
현재 모든 위키닷 웹 사이트에 적용되지만 악의적인 크롤러를 방지하기 위해 모든 웹 사이트에는 크롤링할 수 있는 페이지 페이지가 있어야 합니다.

### **요구 사항을 구성합니다**

```
웹 사이트 URL/pages에 페이지를 만들고 [[module Pages preview="true"]] 코드를 추가합니다
```

### **봇 설치**
사이드바 'Releases'에 표시된 최신 버전을 클릭하고 Installer .exe 끝에 있는 설치 파일을 선택하십시오. 동일한 디렉터리에 파일을 설치합니다. 명령을 트리거하려면 키보드에서 해당 버튼을 클릭하기만 하면 됩니다.

우리는 더 이상 Linux를 지원하지 않습니다.

### **파충류가 실행됩니다**
* 런타임에서 RunMe.vbs(GUI) 또는 main.exe(CLI)을 활성화합니다.
* 그래픽 입력 막대(GUI) 또는 명령줄 입력 영역(CLI)에 URL을 입력하고 확인을 클릭합니다.
* 웹 사이트 URL / 페이지 아래에 표시된 page X of X의 다음 숫자를 확인하십시오 (이 경우 다음 x).
* 명령줄 입력 영역에 이 숫자를 입력합니다[이 수를 더 채우면(X, X≠0), 1~X의 HTML 파일(이름 pages1~pagesX.html)을 출력하지만(X-1) X와 X는 동일합니다.] 줄 바꿈합니다.
* 프로그램이 완료될 때까지 기다립니다. (페이지가 여러 번 크롤링되는 것을 발견하면 정상이며 프로그램이 위에 있는 모든 링크를 크롤링합니다.)
* 완료? 혼동을 피하기 위해 html 폴더를 이동하는 것을 잊지 마십시오.

### **피드백 주소입니다**
오류 또는 BUG가 발생 되었거나? [여기](http://ld-private-website.wikidot.com/forum/c-7602918/pyc) 피드백 또는 [여기](https://github.com/TimeLine-Bookstore/Py-crawler/issues) 피드백에 오십시오.

새로운 기능에 대한 아이디어가 있지만 피드백이 어디에 있는지 모르습니까? [여기](http://ld-private-website.wikidot.com/forum/t-15402049/pyc-1-1-0-1-9), [여기](https://github.com/TimeLine-Bookstore/Py-crawler/issues) 피드백에 오십시오.

당신은 우리에게 기술 지원을 제공 할 수 있습니까? [여기](http://ld-private-website.wikidot.com/forum/c-7602920/) 피드백으로 오거나 [여기](https://github.com/TimeLine-Bookstore/Py-crawler/fork)로 가서 분기를 당겨 수정합니다.

----------

```
Copyright (c) 2022 TimeLine-Bookstore
All Rights Reserved.
저작권 (c) 2022 타임 라인 서점
판권 소유.
```
