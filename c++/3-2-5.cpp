/*
Чемпионат мира по шахматам

Вы решили стать чемпионом мира по шахматам! К сожалению, на турниры 
пускают только игроков с высоким рейтингом, поэтому сначала надо 
получить разряд, хотя бы четвертый. Вы пришли на рейтинговый турнир, 
а там произошел невообразимый скандал! Организаторы не верят, что 
вы умеете играть в шахматы и попросили вас пройти квалификацию.

Квалификация - очень простой процесс для вас. На доске стоит конь, 
требуется отметить все клетки, в которые он может походить. 
К счастью, у вас с собой был компьютер, поэтому вы сразу 
сели писать программу, которая решает эту задачу.

Входные данные

Во входных данных записана шахматная доска. Она представляет из себя таблицу 8×8, 
в каждой клетке которой записан символ точки (номер 46 в ASCII таблице), 
кроме одной - в ней записан символ K (номер 75 в ASCII таблице). 
В этой выделенной точке стоит конь. 

Выходные данные

Выведите таблицу в аналогичном формате, заменив все символы точек на символ 
! (номер 33 в ASCII таблице) для всех ячеек, в которые может походить конь.

Примечание

Конь всегда ходит на две клетки в одном направлении (горизонтальном или 
вертикальном) и на одну в перпендикулярном изначальному. Смотрите первый тест 
для более точного понимания ходов коня.

Sample Input 1:

........
........
........
........
....K...
........
........
........
Sample Output 1:

........
........
...!.!..
..!...!.
....K...
..!...!.
...!.!..
........

*/


#include <iostream>

using namespace std;

int main() {
    char a[12][12];
    // инициализация табоицы
    for (int i = 2; i < 10; i++) {
        for (int j = 2; j < 10; j++) {
            cin >> a[i][j];
        }
    }
    // нахождение короля как центра построения
    int k_i, k_j;
    for (int i = 2; i < 10; i++) {
        for (int j = 2; j < 10; j++) {
            if (a[i][j] == 'K') {
                k_i = i;
                k_j = j;
            }
        }
    }
    // переписывание таблица с новыми значениями
    for (int i = 2; i < 10; i++) {
        for (int j = 2; j < 10; j++) {
            if ((i == k_i-1 && j == k_j-2) || (i == k_i-2 && j == k_j-1) || \
                (i == k_i+1 && j == k_j+2) || (i == k_i+2 && j == k_j+1) || \
                (i == k_i+1 && j == k_j-2) || (i == k_i+2 && j == k_j-1) || \
                (i == k_i-1 && j == k_j+2) || (i == k_i-2 && j == k_j+1)) {
                a[i][j] = '!';
            }
        }
    } 
    // вывод новой таблицы
    for (int i = 2; i < 10; i++) {
        for (int j = 2; j < 10; j++) {
            cout << a[i][j];
        }
        cout << '\n';
    }              
}