#ifndef GREETER_H
#define GREETER_H

#include <QObject>
#include <QString>

class Greeter : public QObject
{
    Q_OBJECT
public:
    explicit Greeter(QObject *parent = nullptr);

signals:

    //void textChanged(const QString &text);
    void textEdited(const QString &text);

public slots:
    void greetingLineTextEdited(const QString&);
};

#endif // GREETER_H
