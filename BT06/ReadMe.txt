A2: Khong in ra ket qua vi tu dau chua gan gia tri cho N.

A3: Khong co gia tri khoi tao neu N >= 2.

A4: Do voi so N qua lon, tong phan so se qua dai va khi tinh se gay ton bo nho va khong in duoc ra ket qua.

A5: Su dung vong lap:
    int x1 = 0, x2 = 1;
    int x;
    if (n == 0) {
        return 0;
        }
    if (n == 1) {
        return 1;
        }
    for (int i = 2; i <= n; i++ ) {
        x = x1 + x2;
        x1 = x2;
        x2 = x;
        }
        
    => Ta thay su dung vong lap chuong trinh chay nhanh hon.

