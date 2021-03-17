#include <iostream>
using namespace std;

void f(int xval)
{
    int x;
    x = xval;
    cout << &x;
}
void g(int yval)
{
    int y;
    cout << &y;
}
int main()
{
    f(7);
    g(11);
    return 0;
}

// Khi chạy chương trình, địa chị cout của 2 biến sẽ giống nhau, ta có thể lí giải vì trong hàm main, ta đã gọi hàm f và g lần lượt, khi chương trình gán cho f 1 địa chỉ và chạy đã xong chuyển sang hàm g, khả năng cao chương trình sẽ vẫn dùng lại địa chỉ từ hàm f gán với g.
//truong
