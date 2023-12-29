#include <iostream>

using namespace std;
void print_str (string s){
    cout << s << endl;
}
int main() {
    // Bài 1
    cout << "Hello World! \n";

    // Bài 2
    string str = "Hello World!";
    cout << str << endl;
    // Bài 3
    string a = "Hello"; 
    string b = "World!";
    string c = a + " " + b;
    cout << c << endl;

    //Bài 4
    print_str(c);
    return 0;
}

