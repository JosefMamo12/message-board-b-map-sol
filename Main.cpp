#include <cmath>
#include <array>
#include "Board.hpp"
using namespace ariel;

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

const string POST_ROW_MESSAGE = "Please choose row which you would like to post: ";
const string POST_COLU_MESSAGE = "Please choose column  which you would like to post: ";
const string READ_ROW_MESSAGE = "Please choose row which you would like to read: ";
const string READ_COLU_MESSAGE = "Please choose column which you would like to read: ";
const string READ_STRING_LENGTH = "Please enter the length of the string you would like to see: ";
const string ERROR_MESSAGE = "Pressed worng key returning to the menu";

const Direction h = Direction::Horizontal;
const Direction v = Direction::Vertical;

// // a func to get a random positive int
// u_int getrandom(u_int min, u_int max)
// {
//     // just to be sure
//     if (min > max)
//     {
//         u_int temp = min;
//         min = max;
//         max = temp;
//     }

//     u_int i = rand() % 10;
//     i %= 5;
//     u_int k = pow(10, i);
//     u_int r = (u_int)rand() % k;
//     return r;
// }

// // a func to get a random string
// string randString()
// {
//     u_int len = (u_int)(rand() % 20);
//     string s = "";
//     for (size_t i = 0; i < len; i++)
//     {
//         s += (char)(65 + (rand() % 57));
//     }
//     return s;
// }
// int main(int argc, char const *argv[])
// {

//     // first of all we check a specific test

//     ariel::Board b;
//     b.show();
//     b.post(0, 0, HORI, "abc");
//     string sRead = b.read(0, 0, HORI, 4);

//     string sComp = "abc_";
//     cout << "Test1: " << endl;
//     for (size_t i = 0; i < 4; i++)
//     {
//         if (sRead.at(i) == sComp.at(i))
//         {
//             cout << "true" << endl;
//         }
//         else
//         {
//             cout << sRead.at(i) << " != " << sComp.at(i) << endl;
//         }
//     }
//     cout << endl;
//     b.post(0, 5, HORI, "fghi ");
//     sRead = b.read(0, 0, HORI, 10);
//     sComp = "abc__fghi ";
//     cout << "Tes2: " << endl;
//     for (size_t i = 0; i < 10; i++)
//     {
//         if (sRead.at(i) == sComp.at(i))
//         {
//             cout << "true" << endl;
//         }
//         else
//         {
//             cout << sRead.at(i) << " != " << sComp.at(i) << endl;
//         }
//     }
//     cout << endl;
//     b.post(2, 1, VER, "shani");
//     sRead = b.read(0, 1, VER, 8);
//     sComp = "b_shani_";
//     cout << "Test3: " << endl;
//     for (size_t i = 0; i < 8; i++)
//     {
//         if (sRead.at(i) == sComp.at(i))
//         {
//             cout << "true" << endl;
//         }
//         else
//         {
//             cout << sRead.at(i) << " != " << sComp.at(i) << endl;
//         }
//     }
//     cout << endl;
//     // to check drissa
//     b.post(4, 0, HORI, " u");
//     b.post(5, 0, HORI, "+v");
//     sRead = b.read(2, 1, VER, 4);
//     sComp = "shuv";
//     cout << "Test4: " << endl;
//     for (size_t i = 0; i < 4; i++)
//     {
//         if (sRead.at(i) == sComp.at(i))
//         {
//             cout << "true" << endl;
//         }
//         else
//         {
//             cout << sRead.at(i) << " != " << sComp.at(i) << endl;
//         }
//     }
//     cout << endl;

//     b.show();
int main(int argc, char const *argv[])
{
    u_int row, column, string_length = 0;
    bool flag = true;
    char op;
    string toPost;
    Board board;

    cout << "===============================================================================" << endl;
    cout << "===============================================================================" << endl;
    cout << "Hello this is menu for the Message Board please choose one of the options below" << endl;
    cout << "===============================================================================" << endl;
    cout << "===============================================================================" << endl;
    cout << endl;

    do
    {
        cout << "1. To post horizontal message please press: A"
             << endl;
        cout << "2. To post vertical message please press: B"
             << endl;
        cout << "3. To read horizontal message please press: C"
             << endl;
        cout << "4. To read vertical message please press: D"
             << endl;
        cout << "5. Would you like to see the message board please press: S"
             << endl;
        cout << "6. To Exit press: E" << endl;

        op = cin.get();
        switch (op)
        {
        case 'A':
            cout << POST_ROW_MESSAGE << endl;
            if (!(cin >> row))
            {
                cout << ERROR_MESSAGE << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                break;
            }
            cout << POST_COLU_MESSAGE << endl;
            if (!(cin >> column))
            {
                cout << ERROR_MESSAGE << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                break;
            }
            cin.ignore();
            cout << "Type your post here: " << endl;
            getline(cin, toPost);
            board.post(row, column, h, toPost);
            break;
        case 'B':
            cout << POST_ROW_MESSAGE << endl;
            if (!(cin >> row))
            {
                cout << ERROR_MESSAGE << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                break;
            }
            cout << POST_COLU_MESSAGE << endl;
            if (!(cin >> column))
            {
                cout << ERROR_MESSAGE << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                break;
            }
            cin.ignore();
            cout << "Type your post here: " << endl;
            getline(cin, toPost);
            board.post(row, column, v, toPost);
            break;
        case 'C':
            cout << READ_ROW_MESSAGE << endl;
            if (!(cin >> row))
            {
                cout << ERROR_MESSAGE << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                break;
            }
            cout << READ_COLU_MESSAGE << endl;
            if (!(cin >> column))
            {
                cout << ERROR_MESSAGE << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                break;
            }
            cout << READ_STRING_LENGTH << endl;
            cin >> string_length;
            cout << board.read(row, column, h, string_length) << endl;
            break;
        case 'D':
            cout << READ_ROW_MESSAGE << endl;
            if (!(cin >> row))
            {
                cout << ERROR_MESSAGE << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                break;
            }
            cout << READ_COLU_MESSAGE << endl;
            if (!(cin >> column))
            {
                cout << ERROR_MESSAGE << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                break;
            }
            cout << READ_STRING_LENGTH << endl;
            cin >> string_length;
            cout << board.read(row, column, v, string_length) << endl;
            break;
        case 'S':
            cin.clear();
            cin.ignore(10000, '\n');
            board.show();
            break;
        case 'E':
            flag = false;
            break;
        default:
            cout << ERROR_MESSAGE << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            break;
        }
    } while (flag);
    cout << "==============================================================================" << endl;
    cout << "==============================================================================" << endl;
    cout << "==================================GOODBYE=====================================" << endl;
    cout << "==============================================================================" << endl;
    cout << "==============================================================================" << endl;
}
