/*
 * FileName: T7_22.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 30th, 2022
*/

#include<iostream>

int boa[8][8] = {0};
int i = 0;
using namespace std;
bool isOut(int x, int y)
{
    if (x >= 0 && x <= 7 && y >= 0 && y <= 7)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool isVisited(int x, int y)
{
    if (boa[x][y] != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void move(int x, int y)
{
    if (64==i)
        return;
    if (!(isOut(x, y)) && !(isVisited(x, y)))
    {
        i++;
        boa[x][y] = i;
        move(x + 2, y + 1);
        move(x + 1, y + 2);
        move(x - 1, y + 2);
        move(x - 2, y + 1);
        move(x - 2, y - 1);
        move(x - 1, y - 2);
        move(x + 1, y - 2);
        move(x + 2, y - 1);
        return;
    }
    else
    {
        return;
    }
}
int main()
{
    int x, y;
    cout << "请输入起始位置（行 列从0开始，中间空格隔开）: " << endl;
    cin >> x >> y;
    move(x, y);
    for (int j = 0; j < 8; ++j)
    {
        for (int k = 0; k < 8; ++k)
        {
            cout << boa[j][k]<<"\t";
        }
        cout << endl;
    }
    return 0;
}
