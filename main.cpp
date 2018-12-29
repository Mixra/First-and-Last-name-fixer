#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
int main()
{
    string first_name;
    string last_name;
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    string first = first_name;
    string last = last_name;
    transform(
        begin(first),
        end(first),
        begin(first),
        ::tolower
    );
    first[0] = toupper(first[0]);
    transform(
        begin(last),
        end(last),
        begin(last),
        ::tolower
    );
    last[0] = toupper(last[0]);
    if((first_name == first) && (last_name == last)){
        cout << "Your name is " + first_name + " " + last_name + ".\n";
    }else {
        cout << "Your name is capitalized wrong. It is " + first + " " + last + ".\n";
    }
}
