#include "greeter.h"
#include <QtDebug>

Greeter::Greeter(QObject *parent) : QObject(parent)
{

}

void Greeter::greetingLineTextEdited(const QString &text)
{

   qDebug() << text;
}
