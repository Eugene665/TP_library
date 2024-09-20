// bibliotekar.h
#ifndef BIBLIOTEKAR_H
#define BIBLIOTEKAR_H

#include <QDialog>
#include <QListView>
#include "data_structures.h"

namespace Ui {
class bibliotekar;
}

class bibliotekar : public QDialog
{
    Q_OBJECT

public:
    explicit bibliotekar(QWidget *parent = nullptr);
    ~bibliotekar();

    void show_lists(Book books[], Reader readers[], int numBooks, int numReaders);

private:
    Ui::bibliotekar *ui;
};

#endif // BIBLIOTEKAR_H
