// Binary to Decimal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
int main()
{
    int binum;
    cout << "Enter any Binary Number: ";
    cin >> binum;
    int i = 1, decnum = 0, rem;
    while (i!= 0)
    {
        rem = binum % 10;
        decnum = decnum + (rem * i);
        i = i * 2;
        binum = binum / 10;
    }
    cout << "\n Decimal Value = " << decnum<< endl;
   
    return 0;
}

// ex:1110
// i rem decnum    binum
// 1  0   0<-0+0*1  111<-1110/10
// 2  1   2<-0+1*2  11<-111/10
// 4  1   6<-2+1*4  1<- 11/10
// 8  1   14<-6+1*8 0<- 1/10
//


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
