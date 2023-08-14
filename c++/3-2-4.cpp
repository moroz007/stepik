/*
Запросы к трехмерному массиву

Вы со своим напарником проникли в банк массивов, и нашли там самый большой 
и самый красивый массив. Пока вы любовались его совершенством, ваш напарник 
по быстрому его упаковывал. Прибежав домой вы обнаружили, что упакован 
массив был довольно плохо - часть элементов потерялась. Теперь вам необходимо 
их восстановить. Поскольку вы очень долго им любовались, то запомнили массив 
во всех деталях. Поскольку восстановлением массива занимается ваш напарник, 
то он иногда спрашивает у вас, что хранилось раньше в массиве в ячейке 
с индексами i, j, k. Вам необходимо ответить на все его запросы. 
Массив нумеруется с единицы.

Входные данные

В первой строке записано три целых числа k, n, m (1≤k,n,m≤50) - высота, 
ширина и длинна массива соответственно.

Далее следует k блоков, в i-м блоке описан i-й слой трехмерной таблицы. 
Каждый слой представляет из себя двумерный массив с n строками и m столбцами, 
в каждой ячейке которого записано по одному целому числу, по модулю 
не превосходит 10 в степени 9 по модулю. После каждого слоя следует пустая строка.

После описания массива записано число Q (1≤Q≤10 4) - количество запросов напарника.

В следующих Q строках записаны сами запросы. Каждый запрос описывается 
тремя целыми числами i, j, t (1≤i≤k; 1≤j≤n; 1≤t ≤m). В ответ на этот запрос 
требуется вывести число, которое находится в i-м по высоте слое, в j-й строке 
и t-м столбце.

Выходные данные

Выведите Q чисел по одному в строке - ответы на запросы вашего напарника.

Sample Input 1:

2 3 4
1 2 3 4
5 6 7 8
9 10 11 12

13 14 15 16
17 18 19 20
21 22 23 24

5
1 1 1
1 1 2
1 2 1
2 3 4
2 2 2

Sample Output 1:

1
2
5
24
18
*/

#include <iostream>

using namespace std;

int main() {
    int k, n, m;
    cin >> k >> n >> m;

    // матрица данных
    long a[k][n][m];

    for (int l = 0; l < k; l++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[l][i][j];
            }
        }
    }

    // матрица запроса чисел и вывод ответа
    int s;
    cin >> s;
    
    int x, y, z;

    for (int i = 0; i <s; i++) {
        cin >> x >> y >> z;
        cout << a[x-1][y-1][z-1] << '\n';
    }
}