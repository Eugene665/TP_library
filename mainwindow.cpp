// mainwindow.cpp
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "data_structures.h"  // Включаем файл со структурами
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    window = new bibliotekar(this);

    const int NUM_BOOKS = 5;
    const int NUM_READERS = 5;

    // Массив книг
    Book books[NUM_BOOKS] = {
        {"Война и мир", "Лев Толстой", 1960, 15},
        {"Преступление и наказание", "Федор Достоевский", 1956, 8},
        {"Мастер и Маргарита", "Михаил Булгаков", 1967, 12},
        {"Анна Каренина", "Лев Толстой", 1965, 10},
        {"Евгений Онегин", "Александр Пушкин", 1958, 7}
    };

    // Массив читателей
    Reader readers[NUM_READERS] = {
        {"Иван Иванов", "01.01.1980"},
        {"Петр Петров", "12.05.1975"},
        {"Мария Смирнова", "23.07.1990"},
        {"Анна Кузнецова", "04.11.1985"},
        {"Сергей Соколов", "15.03.1992"}
    };

    window->show_lists(books, readers, NUM_BOOKS, NUM_READERS);
    window->show();
}
