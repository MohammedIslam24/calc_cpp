#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int a, b;
    char op;
    cout << "أدخل رقمين: ";
    cin >> a >> b;
    cout << "اختر عملية (+ - * /): ";
    cin >> op;

    switch(op) {
        case '+': cout << "النتيجة: " << a + b; break;
        case '-': cout << "النتيجة: " << a - b; break;
        case '*': cout << "النتيجة: " << a * b; break;
        case '/': 
            if (b != 0)
                cout << "النتيجة: " << a / b;
            else
                cout << "لا يمكن القسمة على صفر";
            break;
        default: cout << "عملية غير صالحة!";
    }


ofstream file("result.txt");
file << "النتيجة: " << a << " " << op << " " << b << " = ";
switch(op) {
    case '+': file << a + b; break;
    case '-': file << a - b; break;
    case '*': file << a * b; break;
    case '/': file << ((b != 0) ? a / b : 0); break;
}
file.close();

    cout << endl;
    return 0;
}
