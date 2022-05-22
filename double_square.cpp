#include "double_square.h"


void transformation(string &str) //Преобразуем буквы текста в верхний регистр и заменяем пробелы на "_"
{
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    for (int i = str.find(' '); i != std::string::npos; i = str.find(' '))
        str.replace(i, 1, "_");
}

void fill_massive(string &key, string **mass) //Заполняем матрицу
{
    string abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ,-.!?_"; //Символы для алфавита

    bool chars[32] = { false }; //Булевый массив для определения уникальности символа

    int index = 0, previous_i = 0, previous_j; //индексные переменные

    for (int i = 0, j = 0, k = 0; (i < 4) && (k < key.size()); i++) //Вводим символы из ключевого слова в матрицу
    {
        for (j, k; (j < 8) && (k < key.size()); k++)
        {
            index = abc.find(key[k]); //находим индекс символа в алфавите
            if (!chars[index]) //Проверяем, уникален ли символ в матрице
            {
                mass[i][j] = key[k];
                chars[index] = true; //обозначаем, что символ уже используется в матрице
                j++;
            }
            previous_j = j;
        }
        j = 0;
        previous_i = i;
    }

    for (int i = previous_i, j = previous_j, k = 0; (i < 4) && (k < abc.size()); i++) //заполняем матрицу символами из алфавита
    {
        for (j; (j < 8) && (k < abc.size()); k++)
        {
            index = abc.find(abc[k]);
            if (!chars[index])
            {
                mass[i][j] = abc[k];
                chars[index] = true;
                j++;
            }
        }
        j = 0;
    }

}

string coder_decoder(string *bigram, string **mass1, string **mass2, int size)//зашифровываем или расшифровываем текст
{
    string s1 = ""; //первый символ биграмы
    string s2 = ""; //второй символ биграмы
    string codeDecodeStr = ""; //зашифрованая или расшифрованная строка

    int i_first = 0, j_first = 0, i_second = 0, j_second = 0; //координаты найденного символа из каждой пары

    for (int i = 0; i < size; i++)
    {
        s1 = bigram[i];
        s1 = s1[0];
        s2 = bigram[i];
        s2 = s2[1];

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 8; j++)
            {

                if (s1 == mass1[i][j]) //определеяем координаты первого символа биграммы
                {
                    i_first = i;
                    j_first = j;
                }

                if (s2 == mass2[i][j]) //определеяем координаты второго символа биграммы
                {
                    i_second = i;
                    j_second = j;
                }

            }

        }

        if (i_first == i_second) //если буквы биграммы сообщения находятся в одной строке, то
        {						 //первую букву биграммы берем из левой матрицы в том столбце, в каком находится вторая буква биграммы, аналогично делаем со второй буквой
            swap(j_first, j_second);
            s1 = mass2[i_first][j_second];
            s2 = mass1[i_second][j_first];
        }
        if (i_first != i_second) //если буквы биграммы находятся в разных строках, первый символ находим в левой матрице, второй — в правой
        {
            s1 = mass2[i_first][j_second];
            s2 = mass1[i_second][j_first];
        }

        codeDecodeStr = codeDecodeStr + s1 + s2;
    }

    return codeDecodeStr;
}

void fill_bigram(string *bigram, string &str)
{
    string str1 = ""; //Первый символ биграммы
    string str2 = ""; //Второй символ биграммы

    for (int i = 0, n = 0; i < str.size(); i += 2) //Заполняем массив биграммами
    {
        str1 = str[i];
        str2 = str[i + 1];
        bigram[n] = str1 + str2;
        n++;
    }
}
