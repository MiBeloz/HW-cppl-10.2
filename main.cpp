#include "node.h"


int main() {
    setlocale(LC_ALL, "ru");
    std::cout << "\tУстранение пересечения\n" << std::endl;

    {
        auto node1 = std::make_shared<node>(1);
        auto node2 = std::make_shared<node>(2);

        //Строка, приводящая к пересечению
        //node1->parent = node2;

        node2->parent = node1;
    }

    system("pause > nul");
    return 0;
}