#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include <fstream>
using namespace std;

void GetInput(int& x) {
    fstream out;
    string path = "logs.txt";
    auto now = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(now);
    out.open(path, fstream::in | fstream::out | fstream::app);
#pragma warning(suppress : 4996)
    out << std::ctime(&end_time) << "the user entered: " << x << endl;
}
void GetOutput(string& xx) {
    fstream out;
    string path = "logs.txt";
    auto now = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(now);
    out.open(path, fstream::in | fstream::out | fstream::app);
#pragma warning(suppress : 4996)
    out << std::ctime(&end_time) << xx << endl;
}

void deskk(string desk[9][9]) {
    cout << "   a  b  c  d  e  f  g  h" << endl;
    for (int i = 8; i > 0; i--) {
        cout << i;
        for (int j = 1; j < 9; j++) {
            cout << desk[i][j];
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "rus");
    string xx;
    int f1_t, f2_t;
    int f1_p, f2_p;
    string desk[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            desk[i][j] = "  *";
        }
    }
    deskk(desk);
    int f1_x, f1_y, f2_x, f2_y;
    XY1:
    xx = "enter the x coordinate for the first shape: ";
    cout << xx;
    cin >> f1_x;
    GetOutput(xx);
    GetInput(f1_x);
    xx = "enter the y coordinate for the first shape: ";
    cout << xx;
    cin >> f1_y;
    GetOutput(xx);
    GetInput(f1_y);
    if ((f1_x) > 8 || (f1_x) < 1 || (f1_y) > 8 || (f1_y) < 1) {
        xx = "enter a number from 1 to 8";
        cout << xx << endl;
        GetOutput(xx);
        goto XY1;
    }
    FT1:
    xx = "enter the type of shape to do this, select a number";
    cout << xx << endl;
    GetOutput(xx);
    xx = "1 - ferz'";
    cout << xx << endl;
    GetOutput(xx);
    xx = "2 - lad'ya";
    cout << xx << endl;
    GetOutput(xx);
    xx = "3 - slon";
    cout << xx << endl;
    GetOutput(xx);
    xx = "4 - kon'";
    cout << xx << endl;
    GetOutput(xx);
    cin >> f1_t;
    if ((f1_t) > 4 || (f1_t) < 1) {
        xx = "enter a number in the range from 1 to 4";
        cout << xx << endl;
        GetOutput(xx);
        goto FT1;
    }
    XY2:
    xx = "enter the x coordinate for the second shape: ";
    cout << xx;
    GetOutput(xx);
    cin >> f2_x;
    GetInput(f2_x);
    xx = "enter the y coordinate for the second shape: ";
    cout << xx;
    GetOutput(xx);
    cin >> f2_y;
    GetInput(f2_y);
    if ((f2_x) > 8 || (f2_x) < 1 || (f2_y) > 8 || (f2_y) < 1) {
        xx = "Vvedite cifru ot 1 do 8!";
        cout << xx << endl;
        GetOutput(xx);
        goto XY2;
    }
    FT2:
    xx = "enter the type of shape to do this, select a number";
    cout << xx << endl;
    GetOutput(xx);
    xx = "1 - ferz'";
    cout << xx << endl;
    GetOutput(xx);
    xx = "2 - lad'ya";
    cout << xx << endl;
    GetOutput(xx);
    xx = "3 - slon";
    cout << xx << endl;
    GetOutput(xx);
    xx = "4 - kon'";
    cout << xx << endl;
    GetOutput(xx);
    cin >> f2_t;
    GetInput(f2_t);
    if ((f2_t) > 4 || (f2_t) < 1) {
        xx = "enter a number in the range from 1 to 4";
        cout << xx << endl;
        GetOutput(xx);
        goto FT2;
    }

    if (f1_t == 1) {
        desk[f1_y][f1_x] = "  F";
    }
    else if (f1_t == 2) {
        desk[f1_y][f1_x] = "  L";
    }
    else if (f1_t == 3) {
        desk[f1_y][f1_x] = "  S";
    }
    else if (f1_t == 4) {
        desk[f1_y][f1_x] = "  K";
    }
    if (f2_t == 1) {
        desk[f2_y][f2_x] = "  F";
    }
    else if (f2_t == 2) {
        desk[f2_y][f2_x] = "  L";
    }
    else if (f2_t == 3) {
        desk[f2_y][f2_x] = "  S";
    }
    else if (f2_t == 4) {
        desk[f2_y][f2_x] = "  K";
    }
    deskk(desk);

    double df1_y = f1_y * 1.0, df1_x = f1_x * 1.0, df2_y = f2_y * 1.0, df2_x = f2_x * 1.0;
    cout << f1_y % 2 << endl;
    if (f1_y % 2 == 0 && f1_x % 2 == 0) {
        f1_p = 0;
        xx = "the first figure stands on a black square";
        cout << xx << endl;
        GetOutput(xx);
    }
    else if (f1_y % 2 == 0 && f1_x % 2 != 0) {
        f1_p = 1;
        xx = "the first figure stands on a white square";
        cout << xx << endl;
        GetOutput(xx);
    }
    else if (f1_y % 2 != 0 && f1_x % 2 == 0) {
        f1_p = 1;
        xx = "the first figure stands on a white square";
        cout << xx << endl;
        GetOutput(xx);
    }
    else if (f1_y % 2 != 0 && f1_x % 2 != 0) {
        f1_p = 0;
        xx = "the first figure stands on a black square";
        cout << xx << endl;
        GetOutput(xx);
    }

    if (f2_y % 2 == 0 && f2_x % 2 == 0) {
        f2_p = 0;
        xx = "the second figure stands on a black square";
        cout << xx << endl;
        GetOutput(xx);
    }
    else if (f2_y % 2 == 0 && f2_x % 2 != 0) {
        f2_p = 1;
        xx = "the second figure stands on a white square";
        cout << xx << endl;
        GetOutput(xx);
    }
    else if (f2_y % 2 != 0 && f2_x % 2 == 0) {
        f2_p = 1;
        xx = "the second figure stands on a white square";
        cout << xx << endl;
        GetOutput(xx);
    }
    else if (f2_y % 2 != 0 && f2_x % 2 != 0) {
        f2_p = 0;
        xx = "the second figure stands on a black square";
        cout << xx << endl;
        GetOutput(xx);
    }

    if (f1_p == f2_p) {
        xx = "both figures on the cells are the same color";
        cout << xx << endl;
        GetOutput(xx);
    }
    else {
        xx = "both figures on the cells are of different colors";
        cout << xx << endl;
        GetOutput(xx);
    }

    if (f1_t == 1) {
        for (int i = 0; i < 8; i++) {
            if ((f2_x == f1_x + i) && (f2_y == f1_y + i) || (f2_x == f1_x - i) && (f2_y == f1_y - i) || (f2_x == f1_x + i) && (f2_y == f1_y - i) || (f2_x == f1_x - i) && (f2_y == f1_y + i)) {
                xx = "the second piece is under the queen's blow";
                cout << xx;
                GetOutput(xx);
                goto IF1T;
            }
        }
        if ((f1_x == f2_x) || (f1_y == f2_y)) {
            xx = "the second piece is under the queen's blow";
            cout << xx;
            GetOutput(xx);
        }
        else {
            xx = "the second piece is not under the queen's blow";
            cout << xx;
            GetOutput(xx);
        }

    }
    IF1T:
    if (f1_t == 2) {
        if ((f1_x == f2_x) || (f1_y == f2_y)) {
            xx = "the second piece is under the attack of the rook";
            cout << xx;
            GetOutput(xx);
        }
        else {
            xx = "the second piece is not under the attack of the rook";
            cout << xx;
            GetOutput(xx);
        }
    }
    if (f1_t == 3) {
        for (int i = 0; i < 8; i++) {
            if ((f2_x == f1_x + i) && (f2_y == f1_y + i) || (f2_x == f1_x - i) && (f2_y == f1_y - i) || (f2_x == f1_x + i) && (f2_y == f1_y - i) || (f2_x == f1_x - i) && (f2_y == f1_y + i)) {
                xx = "the second piece is under the queen's blow";
                cout << xx;
                GetOutput(xx);
            }
        }
    }
    if (f1_t == 4) {
        if ((f1_x + 2 == f2_x) && (f1_y + 1) == f2_y || (f1_x + 2 == f2_x) && (f1_y - 1) == f2_y) {
            xx = "the second figure is under the blow of the knight";
            cout << xx;
            GetOutput(xx);
        }
        if ((f1_x - 2 == f2_x) && (f1_y + 1) == f2_y || (f1_x - 2 == f2_x) && (f1_y - 1) == f2_y) {
            xx = "the second figure is under the blow of the knight";
            cout << xx;
            GetOutput(xx);
        }
        if ((f1_y + 2 == f2_y) && (f1_x + 1) == f2_x || (f1_y + 2 == f2_y) && (f1_x - 1) == f2_x) {
            xx = "the second figure is under the blow of the knight";
            cout << xx;
            GetOutput(xx);
        }
        if ((f1_y - 2 == f2_y) && (f1_x + 1) == f2_x || (f1_y - 2 == f2_y) && (f1_x - 1) == f2_x) {
            xx = "the second figure is under the blow of the knight";
            cout << xx;
            GetOutput(xx);
        }
        else {
            xx = "the second figure is not under the knight's blow";
            cout << xx;
            GetOutput(xx);
        }
    }
}
