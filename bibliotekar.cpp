#include "bibliotekar.h"
#include "ui_bibliotekar.h"
#include <QStringListModel>

bibliotekar::bibliotekar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::bibliotekar)
{
    ui->setupUi(this);
}

bibliotekar::~bibliotekar()
{
    delete ui;
}

void bibliotekar::show_lists(Book books[], Reader readers[], int numBooks, int numReaders) {
    QStringList bookList;
    for (int i = 0; i < numBooks; i++) {
        QString bookItem = QString::fromStdString(books[i].title + " | " +
                                                  books[i].author + " | " +
                                                  std::to_string(books[i].year) + " | " +
                                                  std::to_string(books[i].availableCopies) + " (в наличии)");
        bookList << bookItem;
    }

    QStringList readerList;
    for (int i = 0; i < numReaders; i++) {
        QString readerItem = QString::fromStdString(readers[i].name + " | " +
                                                    readers[i].birthDate);
        readerList << readerItem;
    }

    QStringListModel* bookModel = new QStringListModel(bookList, this);
    ui->lst_books->setModel(bookModel);

    QStringListModel* readerModel = new QStringListModel(readerList, this);
    ui->lst_reader->setModel(readerModel);
}
