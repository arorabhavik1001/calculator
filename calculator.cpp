#include <iostream>
using namespace std;
int main()
{
    int e;
    for (int e = 1; true; e++)
    {
        float num1, num2;
        int operation;
        cout << "enter num1 (press 0 to quit)" << endl;
        cin >> num1;
        if (num1 == 0)
        {
            cout << "see you again...";
            break;
        }
        cout << "enter num2" << endl;
        cin >> num2;
        cout << "press 1 to add" << endl
             << "press 2 to subract" << endl
             << "press 3 to multiply" << endl
             << "press 4 to divide" << endl;
        cin >> operation;
        if (operation > 4)
        {
            cout << "pls choose a correct option."<< endl;
            cout << "press 1 to add" << endl
                 << "press 2 to subract" << endl
                 << "press 3 to multiply" << endl
                 << "press 4 to divide" << endl;
            cin >> operation;
        }
        switch (operation)
        {
        case 1:
            cout << "The result is, " << num1 + num2 << endl;
            break;
        case 2:
            cout << "The result is, " << num2 - num1 << endl;
            break;
        case 3:
            cout << "The result is, " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 == 0)
            {
                cout << "division not allowed if second num is 0" << endl;
                cout << "enter num2 again" << endl;
                cin >> num2;
                cout << "press 1 to add" << endl
                     << "press 2 to subract" << endl
                     << "press 3 to multiply" << endl
                     << "press 4 to divide" << endl;
                cin >> operation;
                switch (operation)
                {
                case 1:
                    cout << "The result is, " << num1 + num2 << endl;
                    break;
                case 2:
                    cout << "The result is, " << num2 - num1 << endl;
                    break;
                case 3:
                    cout << "The result is, " << num1 * num2 << endl;
                    break;
                    break;
                }
                cout << "The result is, " << num1 / num2 << endl;
                break;
            }
        default:
            break;
        }
    }
return 0;
}