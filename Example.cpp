#include <iostream>
#include "viscii_ascii.h"

using namespace std;

int main() {
    // Khai báo chuỗi "Đà Nẵng" bằng mã số VISCII 1-byte (giống hệt ASCII)
    vchar s[] = { 208, 224, 32, 78, 229, 110, 103, 0 };

    // Đổi chữ 'đ' (240) thành 'Đ' (208) bằng phép trừ 32 như ASCII
    vchar c = 240;
    c = c - 32; 

    // In ra màn hình Console
    cout << "Chuoi in ra: " << to_utf8(s) << endl;
    cout << "Ky tu c sau khi tru 32: " << (int)c << endl;

    return 0;
}
