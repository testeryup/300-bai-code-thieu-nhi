#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool isPangram(string str) {
    transform(str.begin(), str.end(), str.begin(), ::toupper); // Chuyển đổi chuỗi thành chữ hoa
    vector<bool> hash_table(26, false); // Tạo một vector để theo dõi các ký tự đã xuất hiện
    int index;

    for(auto c: str){
        if(isalpha(c)) // Kiểm tra xem ký tự có thuộc bảng chữ cái hay không
            index = c - 'A'; // Tính toán chỉ số tương ứng với ký tự
            hash_table[index] = true; // Đánh dấu ký tự đã xuất hiện
    }

    // Kiểm tra xem tất cả các ký tự đã xuất hiện hay chưa
    if(all_of(hash_table.begin(), hash_table.end(), [](bool v) { return v; })) {
        return true;
    }
    return false;
}

int main() {
    string str;
    getline(cin, str); // Đọc chuỗi đầu vào
    if (isPangram(str)){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
