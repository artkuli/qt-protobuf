#include <QCoreApplication>

#include "message.pb.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    tutorial::Person person;
    person.set_name("foo");
    return a.exec();
}
