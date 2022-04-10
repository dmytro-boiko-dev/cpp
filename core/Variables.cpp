#include <iostream>
#include <string>

using namespace std;

int main() {

    int i = 5;
    short s = 127;
    long l = 32;

    char c = '@';

    float f = 3.14;
    double d = 9.5;

    bool isEnabled = true;

    const char NEW_LINE = '\n';

    string str = "Hello World!";
    
    cout << i << NEW_LINE;
    cout << s << NEW_LINE;
    cout << l << NEW_LINE;
    cout << c << NEW_LINE;
    cout << f << NEW_LINE;
    cout << d << NEW_LINE;
    cout << isEnabled << NEW_LINE;
    cout << str << NEW_LINE;

    return 0;
}
