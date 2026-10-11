#include <iostream>
#include <string>
using namespace std;

class palindrome
{
    int p; // by default,class members are private

public:
    void enter_number(void);
    void chk_palindrome(void);
    void display(void);
};

void palindrome::enter_number(void)
{
    cout << "enter the number " << endl;
    cin >> p; // p is the value of the number
}

void palindrome::chk_palindrome(void)
{
    int original, remainder, reverse = 0;
    original = p;
    while (p != 0)
    {
        remainder = p % 10;
        reverse = reverse * 10 + remainder;
        p /= 10;
    }

    if (reverse == original)
    {
        cout << "the number is palindrome" << endl;
    }
    else
    {
        cout << "the number is not a palindrome" << endl;
    }
}

void palindrome::display(void)
{
    cout << "the number is " << p << endl;
}

int main()
{
    palindrome p1;
    p1.enter_number();
    p1.display();
    p1.chk_palindrome();

    return 0;
}