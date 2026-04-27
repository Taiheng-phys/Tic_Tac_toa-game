#include<iostream>
#include<numeric>
#include<list>

using namespace std;

int main(){

    char b;
    cout << "Play game(y): ";
    cin >> b;
    while (b == 'y')
    {
    
        cout << "-------------------------------" << '\n';
        cout << "|         |         |         |" << '\n';
        cout << "|    1    |    2    |    3    |" << '\n';
        cout << "|         |         |         |" << '\n';
        cout << "-------------------------------" << '\n';
        cout << "|         |         |         |" << '\n';
        cout << "|    4    |    5    |    6    |" << '\n';
        cout << "|         |         |         |" << '\n';
        cout << "-------------------------------" << '\n';
        cout << "|         |         |         |" << '\n';
        cout << "|    7    |    8    |    9    |" << '\n';
        cout << "|         |         |         |" << '\n';
        cout << "-------------------------------" << '\n';


        char x1, x2, x3, x4, x5, x6, x7, x8, x9;

        for (int i = 1; i < 20; i++) { // we may want to change
            int select;
            cout << "Make a selection (The box's number): ";
            cin >> select;
            switch (select){
                case 1:
                    cout << "enter (X/O): ";
                    cin >> x1;
                    break;
                case 2:
                    cout << "enter (X/O): ";
                    cin >> x2;
                   break;
                case 3:
                    cout << "enter (X/O): ";
                    cin >> x3;
                    break;      
                case 4:
                    cout << "enter (X/O): ";
                    cin >> x4;
                    break;
                case 5:
                    cout << "enter (X/O): ";
                    cin >> x5;
                    break;
                case 6:
                    cout << "enter (X/O): ";
                    cin >> x6;
                    break;
                case 7:
                    cout << "enter (X/O): ";
                    cin >> x7;
                    break;
                case 8:
                    cout << "enter (X/O): ";
                    cin >> x8;
                    break;
                case 9:
                    cout << "enter (X/O): ";
                    cin >> x9;
                    break;

            }
        
            ////////////////////////////// 
            if (x1 != 'X' && x1 != 'O' ) {
                x1 = '-';
            }

            if (x2 != 'X' && x2 != 'O' ) {
                x2 = '-';
            }

            if (x3 != 'X' && x3 != 'O' ) {
                x3 = '-';
            }

            if (x4 != 'X' && x4 != 'O' ) {
                x4 = '-';
            }

            if (x5 != 'X' && x5 != 'O' ) {
                x5 = '-';
            }

            if (x6 != 'X' && x6 != 'O' ) {
                x6 = '-';
            }

            if (x7 != 'X' && x7 != 'O' ) {
                x7 = '-';
            }

            if (x8 != 'X' && x8 != 'O' ) {
                x8 = '-';
            }

            if (x9 != 'X' && x9 != 'O' ) {
                x9 = '-';
            }

            ///////////////////////////////////

            cout << "-------------------------------" << '\n';
            cout << "|         |         |         |" << '\n';
            cout << "|    " << x1 <<"    |    " << x2 <<"    |    " << x3 <<"    |" << '\n';
            cout << "|         |         |         |" << '\n';
            cout << "--------------------------------" << '\n';
            cout << "|         |         |         |" << '\n';
            cout << "|    " << x4 <<"    |    " << x5 <<"    |    " << x6 <<"    |" << '\n';
            cout << "|         |         |         |" << '\n';
            cout << "--------------------------------" << '\n';
            cout << "|         |         |         |" << '\n';
            cout << "|    " << x7 <<"    |    " << x8 <<"    |    " << x9 <<"    |" << '\n';
            cout << "|         |         |         |" << '\n';
            cout << "-------------------------------" << '\n';    

            list<int> both = {};

            if (x1 == 'X' && x2 == 'X' && x3 == 'X' ||
                x4 == 'X' && x5 == 'X' && x6 == 'X' ||
                x7 == 'X' && x8 == 'X' && x9 == 'X' || // for the horizontal

                x3 == 'X' && x6 == 'X' && x9 == 'X' ||
                x2 == 'X' && x5 == 'X' && x8 == 'X' || // for the vertical
                x1 == 'X' && x4 == 'X' && x7 == 'X' ||

                x1 == 'X' && x5 == 'X' && x9 == 'X' || // for the diagonal
                x3 == 'X' && x5 == 'X' && x7 == 'X'
                )
            {
                both.push_front(1);
            }
            else {
                both.push_front(-1);
            }

            if (x1 == 'O' && x2 == 'O' && x3 == 'O' ||
                x4 == 'O' && x5 == 'O' && x6 == 'O' ||
                x7 == 'O' && x8 == 'O' && x9 == 'O' || // for the horizontal

                x3 == 'O' && x6 == 'O' && x9 == 'O' ||
                x2 == 'O' && x5 == 'O' && x8 == 'O' || // for the vertical
                x1 == 'O' && x4 == 'O' && x7 == 'O' ||

                x1 == 'O' && x5 == 'O' && x9 == 'O' || // for the diagonal
                x3 == 'O' && x5 == 'O' && x7 == 'O'
                ) {
                both.push_front(-1);
            }
            else {
                both.push_front(1);
            }

            int a = accumulate(both.begin(), both.end(), 0);
            if (a == 2) {
                cout << "X is the winner!" << '\n';
                break;
            }
            if (a == -2) {
                cout << "O is the winner!" << '\n';
                break;
            }
        }
        cout << "again(y/n): ";
        cin >> b;
    }
    return 0;
}