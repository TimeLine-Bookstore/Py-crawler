## Lưu mã Wiki HTML (Py-crawler)

Đây là công trình dùng để tạo ra một công trình leo sâu, dùng để trèo lên tất cả các trang tồn tại trên wiki, dùng để chỉ đọc phiên bản tại các trang web sau khi bị thiên tai. 
Có thể không áp dụng cho công trình khôi phục, nhưng căn cứ vào việc khôi phục trang. 
Hiện nay, điều này áp dụng cho tất cả các trang WikiLeaks, nhưng để ngăn chặn việc bò sâu độc hại, bất kỳ trang web nào phải có trang fanpage mới có thể bò được.

### **Yêu cầu hồ sơ**

```
Thiết lập một trang trên địa chỉ URL/pages của bạn, thêm vào [[module Pages preview="true"]] Mã
```

### **Cài đặt chương trình leo sâu**
Hãy nhấn vào thanh bên cạnh `Releases` cho phiên bản mới nhất để chọn tập tin cài đặt ở cuối Insttaller.exe. 
Nó sẽ được cài đặt vào cùng một danh mục. 

Bạn chỉ cần nhấn vào nút tương ứng trên bàn phím để kích hoạt các lệnh tương ứng. 
Chúng ta sẽ không còn ủng hộ Linux nữa.

### **Đang chạy.**
* Cho phép RunMe.vbs (GUI) hoặc Main.exe (CLI) khi chạy. 
* Nhập địa chỉ của bạn vào thanh nhập bản vẽ (GUI) hoặc vùng nhập dòng lệnh (CLI) để xác nhận. 
* Hãy xem một số phía sau của fanpage X được hiển thị dưới trang URL/pages của bạn (trong trường hợp này là một x sau trong trường hợp này)
* Nhập vùng lệnh này (nếu bạn điền số này là X, X 0), nó sẽ xuất tập tin HTML 1-X (tên là pages1-pagesX.html) nhưng (X-1) và X là cùng một dòng, sau đó chuyển sang dòng khác. 
* Bình tĩnh chờ chương trình thực hiện xong nhé. 
(Nếu tìm thấy một trang có nhiều lần leo lên, đó là bình thường, chương trình sẽ leo lên tất cả các liên kết tồn tại trên mặt). 
Xong chưa? 
Hãy nhớ di chuyển thư mục html để tránh nhầm lẫn.

### **Địa chỉ phản hồi**
Gặp lỗi hay BUG? 
Đến [Đây](http://ld-privite-website.wikot.com/forum/c760218/pyc), hoặc [Nơi này](https://github.com/TimeLine-Bookstore/Py-crawler/issues), hoặc đến [tại đây]

Có ý tưởng về tính năng mới, nhưng không biết phản hồi ở đâu? [Đây](http://ld-private-website.wikidot.com/forum/t-15402049/pyc-1-1-0-1-9) [Ở đây](https://github.com/TimeLine-Bookstore/Py-crawler/issues)Phản hồi。

Anh có thể giúp chúng tôi về kỹ thuật không? [Đây](http://ld-private-website.wikidot.com/forum/c-7602920/)[Ở đây](https://github.com/TimeLine-Bookstore/Py-crawler/fork) Kéo nhánh để chỉnh sửa đi.

----------

```
Copyright (c) 2022 TimeLine-Bookstore
All Rights Reserved.

Tất cả các bản quyền (c) 2022 của các nhà sách trục thời gian. 
giữ lại mọi quyền lợi.
```
