#include <iostream>
#include <string> 
using namespace std;

int main() 
{
    string input;
    cout << "請輸入想加密的文字：";
    getline(cin, input); 

    bool hasError = false; 

    for (int i = 0; i < input.length(); i++) 
    {
        if (input[i] >= 'A' && input[i] <= 'Z') 
        {
            input[i] = input[i] + 3; 
            if (input[i] > 'Z') 
            { 
                input[i] = input[i] - 26;
            }
        }
         else if (input[i] != ' ')
        {
            hasError = true; 
        }
    }

    if (hasError) 
    {
        cout << "只能輸入大寫英文字母" << endl;
    }
    else 
    {
        cout << "加密結果：" << input << endl;
    }

    return 0;
}
