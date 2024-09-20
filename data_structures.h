// data_structures.h
#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

#include <string>

struct Book {
    std::string title;
    std::string author;
    int year;
    int availableCopies;
};

struct Reader {
    std::string name;
    std::string birthDate;
};

#endif // DATA_STRUCTURES_H
