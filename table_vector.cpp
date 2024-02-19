// table_vector.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> table(10, vector<int>(10));
     
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            table[i][j] = i * j;
            cout << table[i][j] << " ";
        }
        cout << endl;
    }



    //#2

    vector<int> q(10);

    for (int i = 0; i < 10; i++)
    {
        q[i] = i * i;
        cout << q[i] << endl;
    }
}
