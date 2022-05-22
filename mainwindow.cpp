#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "double_square.h"
#include "Qstring"
#include "QMessageBox"
#include "QValidator"
#include "QRegularExpression"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QRegularExpression RegExp("([A-Za-z,-.!?_ ]*)");
    QValidator *Validator = new QRegularExpressionValidator(RegExp, this);
    ui->input_text->setValidator(Validator);
    ui->keyword_1->setValidator(Validator);
    ui->keyword_2->setValidator(Validator);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_encrypt_clicked()
{
    QString text = ui->input_text->text();
    QString word_1 = ui->keyword_1->text();
    QString word_2 = ui->keyword_2->text();

    string str = text.toStdString(); //исходный текст
    string key1 = word_1.toStdString(); //Ключевые слово 1
    string key2 = word_2.toStdString(); //Ключевые слово 2

    if (str.empty() || key1.empty() || key2.empty())
        QMessageBox::information(this, "Ошибка!", "Необходимо заполнить все поля!");
    else
    {
        ui->output_text->clear();

        string str1; //Первый символ биграммы
        string str2; //Второй символ биграммы

        int size = str.size();

        if ((str.size() % 2) != 0) //Если в исходном тексте нечётное количество символов, то мы добавляем пробел
            str += ' ';

        size = str.size() / 2;

        transformation(str); transformation(key1); transformation(key2);

        string **mass1 = new string*[4]; //Создаем двумерный массив строк первой матрицы алфавита
        string **mass2 = new string*[4]; //Создаем двумерный массив строк второй матрицы алфавита

        for (int i = 0; i < 5; i++)  //Создаем строки для массива
        {
           mass1[i] = new string[8];
           mass2[i] = new string[8];
        }

        fill_massive(key1, mass1); fill_massive(key2, mass2);

        string *bigram = new string[size]; //Создаём массив биграмм

        fill_bigram(bigram, str);

        string word = coder_decoder(bigram, mass1, mass2, size);

        QString code = QString::fromStdString(word);
        ui->output_text->insertPlainText(code);

        for (int i = 0; i < 4; i++)
        {
            delete[] mass1[i];
        }

        for (int i = 0; i < 4; i++)
        {
            delete[] mass2[i];
        }

        delete[] bigram;

        mass1 = NULL;
        mass2 = NULL;
        bigram = NULL;
    }

}


void MainWindow::on_decipher_clicked()
{
    QString text = ui->input_text->text();
    QString word_1 = ui->keyword_1->text();
    QString word_2 = ui->keyword_2->text();
    string str = text.toStdString(); //исходный текст

    string key1 = word_1.toStdString(); //Ключевые слово 1
    string key2 = word_2.toStdString(); //Ключевые слово 2

    if (str.empty() || key1.empty() || key2.empty())
        QMessageBox::information(this, "Ошибка!", "Необходимо заполнить все поля!");
    else
    {
        ui->output_text->clear();
        string str1; //Первый символ биграммы
        string str2; //Второй символ биграммы

        transformation(str);
        transformation(key1); transformation(key2);

        string **mass1 = new string*[4]; //Создаем двумерный массив строк первой матрицы алфавита
        string **mass2 = new string*[4]; //Создаем двумерный массив строк второй матрицы алфавита

        for (int i = 0; i < 5; i++)  //Создаем строки для массива
        {
           mass1[i] = new string[8];
           mass2[i] = new string[8];
        }

        fill_massive(key1, mass1); fill_massive(key2, mass2);

        int size = str.size();

        if ((str.size() % 2) != 0) //Если в исходном тексте нечётное количество символов, то мы добавляем пробел
            str += ' ';

        size = str.size() / 2;

        string *bigram = new string[size]; //Создаём массив биграмм

        fill_bigram(bigram, str);

        string word = coder_decoder(bigram, mass2, mass1, size);

        QString code = QString::fromStdString(word);
        ui->output_text->insertPlainText(code);

        for (int i = 0; i < 4; i++)
        {
            delete[] mass1[i];
        }

        mass1 = 0;

        for (int i = 0; i < 4; i++)
        {
            delete[] mass2[i];
        }

        delete[] bigram;
        bigram = NULL;
    }
}

