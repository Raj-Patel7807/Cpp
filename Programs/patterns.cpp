#include <iostream>
using namespace std;

void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);
void pattern5(int n);
void pattern6(int n);
void pattern7(int n);
void pattern8(int n);
void pattern9(int n);
void pattern10(int n);
void pattern11(int n);
void pattern12(int n);
void pattern13(int n);
void pattern14(int n);
void pattern15(int n);
void pattern16(int n);
void pattern17(int n);
void pattern18(int n);
void pattern19(int n);
void pattern20(int n);
void pattern21(int n);
void pattern22(int n);

int main() {

    int n = 5;

    pattern22(n);

    return 0;
}

void pattern1(int n) {
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    *****
    *****
    *****
    *****
    *****
    */
}

void pattern2(int n) {
    for(int i=0; i<n; ++i) {
        for(int j=0; j<=i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    *
    **
    ***
    ****
    *****
    */
}

void pattern3(int n) {
    for(int i=0; i<n; ++i) {
        for(int j=0; j<=i; ++j) {
            cout << j+1;
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    1
    12
    123
    1234
    12345
    */
}

void pattern4(int n) {
    for(int i=0; i<n; ++i) {
        for(int j=0; j<=i; ++j) {
            cout << i+1;
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    1
    22
    333
    4444
    55555
    */
}

void pattern5(int n) {
    for(int i=0; i<n; ++i) {
        for(int j=n-i; j>0; --j) {
            cout << "*";
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    *****
    ****
    ***
    **
    *
    */
}

void pattern6(int n) {
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n-i; ++j) {
            cout << j+1;
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    12345
    1234
    123
    12
    1
    */
}

void pattern7(int n) {
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n-i; ++j) {
            cout << " ";
        }
        for(int j=0; j<=i; ++j) {
            cout << "*";
        }
        for(int j=0; j<i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    /*
    OUTPUT :
        *
       ***
      *****
     *******
    *********
    */
}

void pattern8(int n) {
    for(int i=n; i>0; --i) {
        for(int j=0; j<n-i+1; ++j) {
            cout << " ";
        }
        for(int j=0; j<i; ++j) {
            cout << "*";
        }
        for(int j=0; j<i-1; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    *********
     *******
      *****
       ***
        *
    */
}

void pattern9(int n) {
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n-i; ++j) {
            cout << " ";
        }
        for(int j=0; j<=i; ++j) {
            cout << "*";
        }
        for(int j=0; j<i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=n; i>0; --i) {
        for(int j=0; j<n-i+1; ++j) {
            cout << " ";
        }
        for(int j=0; j<i; ++j) {
            cout << "*";
        }
        for(int j=0; j<i-1; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    /*
    OUTPUT :
        *
       ***
      *****
     *******
    *********
    *********
     *******
      *****
       ***
        *
    */
}

void pattern10(int n) {
    for(int i=0; i<n; ++i) {
        for(int j=0; j<=i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=n-1; i>0; --i) {
        for(int j=0; j<i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
    */
}

void pattern11(int n) {
    int a = 1;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<=i; ++j) { 
            if((i+j) % 2 == 0) {cout << "1";}
            else {cout << "0";}
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    1
    01
    101
    0101
    10101
    */
}

void pattern12(int n) {
    for(int i=0; i<n; ++i) {
        for(int j=0; j<=i; ++j) {
            cout << j+1;
        }
        for(int j=0; j<2*(n-i-1); ++j) {
            cout << " ";
        }
        for(int j=i+1; j>0; --j) {
            cout << j;
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    1        1
    12      21
    123    321
    1234  4321
    1234554321
    */
}

void pattern13(int n) {
    int num = 1;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<=i; ++j) {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    */
}

void pattern14(int n) {
    for(int i=0; i<n; ++i) {
        char ch = 'A';
        for(int j=0; j<=i; ++j) {
            cout << ch;
            ch++;
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    A
    AB
    ABC
    ABCD
    ABCDE
    */
}

void pattern15(int n) {
    for(int i=0; i<n; ++i) {
        char ch = 'A';
        for(int j=n-i; j>0; --j) {
            cout << ch;
            ch++;
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    ABCDE
    ABCD
    ABC
    AB
    A
    */
}

void pattern16(int n) {
    char ch = 'A';
    for(int i=0; i<n; ++i) {
        for(int j=0; j<=i; ++j) {
            cout << ch;
        }
        ch++;
        cout << "\n";
    }
    /*
    OUTPUT :
    A
    BB
    CCC
    DDDD
    EEEEE
    */
}

void pattern17(int n) {
    for(int i=0; i<n; ++i) {
        char ch = 'A';
        for(int j=0; j<n-i-1; ++j) {
            cout << " ";
        }
        for(int j=0; j<=i; ++j) {
            cout << ch;
            ch++;
        }
        ch -= 2;
        for(int j=0; j<i; ++j) {
            cout << ch;
            ch--;
        }
        cout << "\n";
    }
    /*
    OUTPUT :
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
    */
}

void pattern18(int n) {
    for(int i=0; i<n; ++i) {
        char ch = 'A' + (n-i-1);
        for(int j=0; j<=i; ++j) {
            cout << ch;
            ch++;
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    E
    DE
    CDE
    BCDE
    ABCDE
    */
}

void pattern19(int n) {
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n-i; ++j) {
            cout << "*";
        }
        for(int j=0; j<2*i; ++j) {
            cout << " ";
        }
        for(int j=0; j<n-i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=n-1; i>=0; --i) {
        for(int j=0; j<n-i; ++j) {
            cout << "*";
        }
        for(int j=0; j<2*i; ++j) {
            cout << " ";
        }
        for(int j=0; j<n-i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    */
}

void pattern20(int n) {
    for(int i=0; i<n; ++i) {
        for(int j=0; j<=i; ++j) {
            cout << "*";
        }
        for(int j=0; j<2*(n-i-1); ++j) {
            cout << " ";
        }
        for(int j=0; j<=i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=n-2; i>=0; --i) {
        for(int j=0; j<=i; ++j) {
            cout << "*";
        }
        for(int j=0; j<2*(n-i-1); ++j) {
            cout << " ";
        }
        for(int j=0; j<=i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    */
}

void pattern21(int n) {
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            if(i == 0 || i == n-1 || j == 0 || j == n-1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    *****
    *   *
    *   *
    *   *
    *****
    */
}

void pattern22(int n) {
    for(int i=0; i<2*n-1; ++i) {
        for(int j=0; j<2*n-1; ++j) {
            int top = i;
            int left = j;
            int right = 2*(n-1) - j;
            int bottom = 2*(n-1) - i;
            cout << (n - min(min(top, bottom), min(left, right))) << " ";
        }
        cout << "\n";
    }
    /*
    OUTPUT :
    5 5 5 5 5 5 5 5 5 
    5 4 4 4 4 4 4 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 2 1 2 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 3 3 3 3 4 5
    5 4 4 4 4 4 4 4 5
    5 5 5 5 5 5 5 5 5
    */
}
