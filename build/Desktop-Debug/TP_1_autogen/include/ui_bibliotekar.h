/********************************************************************************
** Form generated from reading UI file 'bibliotekar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIBLIOTEKAR_H
#define UI_BIBLIOTEKAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>

QT_BEGIN_NAMESPACE

class Ui_bibliotekar
{
public:
    QLabel *label;
    QLabel *label_2;
    QListView *lst_books;
    QListView *lst_reader;

    void setupUi(QDialog *bibliotekar)
    {
        if (bibliotekar->objectName().isEmpty())
            bibliotekar->setObjectName(QString::fromUtf8("bibliotekar"));
        bibliotekar->resize(996, 406);
        label = new QLabel(bibliotekar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 60, 161, 31));
        QFont font;
        font.setPointSize(17);
        label->setFont(font);
        label_2 = new QLabel(bibliotekar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(650, 50, 211, 31));
        label_2->setFont(font);
        lst_books = new QListView(bibliotekar);
        lst_books->setObjectName(QString::fromUtf8("lst_books"));
        lst_books->setGeometry(QRect(60, 120, 481, 192));
        lst_reader = new QListView(bibliotekar);
        lst_reader->setObjectName(QString::fromUtf8("lst_reader"));
        lst_reader->setGeometry(QRect(630, 120, 256, 192));

        retranslateUi(bibliotekar);

        QMetaObject::connectSlotsByName(bibliotekar);
    } // setupUi

    void retranslateUi(QDialog *bibliotekar)
    {
        bibliotekar->setWindowTitle(QCoreApplication::translate("bibliotekar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("bibliotekar", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\272\320\275\320\270\320\263", nullptr));
        label_2->setText(QCoreApplication::translate("bibliotekar", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\207\320\270\321\202\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bibliotekar: public Ui_bibliotekar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIBLIOTEKAR_H
