#include <iostream>
#include <string>
using namespace std;

// 获取二进制每一位
string get_every_bit(int num) {
    // 如果num是负数的话，算术右移会在首位补符号位1，因此会死循环。先把num看为无符号数。
    unsigned u = num;

    string ans;
    while (u != 0) {
        ans += (u & 1) + '0';
        u >>= 1;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

// 获取最后一个1的位置
int get_last_one(int num) {
    return num & (-num);  // 相当于，num & (~num + 1)
}

// 统计二进制表示中1的个数
int count_one(int num) {
    int ans = 0;
    while (num != 0) num -= get_last_one(num), ++ans;
    return ans;
}

// 获取十进制每一位的数字
string get_every_digit(int num) {
    if (num < 0) num = abs(num);

    string ans;
    while (num != 0) {
        ans += (num % 10) + '0';
        num /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int num;
    cin >> num;
    cout << "二进制表示：" << get_every_bit(num) << endl;
    cout << "每一位数字：" << get_every_digit(num) << endl;
    cout << "每一位数字：" << get_last_one(num) << endl;
    cout << "二进制1的次数：" << count_one(num) << endl;
    return 0;
}
