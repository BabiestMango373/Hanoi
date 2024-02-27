//
//  main.cpp
//  ханое
//
//  Created by Andrey Scherbakov on 08.02.2024.
//

#include <iostream>
using namespace std;
void hanoy(int, int, int, int);
int main()
{
    hanoy(3, 1, 2, 3);
    cout << endl;
    return 0;
}
// d - количество дисков.
// start - 1 стержень (стартовый).
// tmp - 2 стержень (переходный).
// end - 3 стержень (куда надо переместить).
void hanoy(int d, int start, int tmp, int end)
{
    if (d == 0)
        return;
    hanoy(d - 1, start, end, tmp);
    cout << start << " - > " << end << endl;
    hanoy(d - 1, tmp, start, end);
    return;
}
