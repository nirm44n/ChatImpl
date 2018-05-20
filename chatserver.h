#ifndef CHATSERVER_H
#define CHATSERVER_H
#include <QObject>


class ChatServer: public QObject
{
    Q_OBJECT

    //Property definition for message
    Q_PROPERTY(QString messageText READ messageText NOTIFY messageTextChanged)
public:
    ChatServer(QObject *parent = nullptr);
    QString messageText();

signals:
    void messageTextChanged();

    //Creates two slots for accepting messages
public slots:
    QString nirmaanUpdate(QString msg);
    QString codeChallengeUpdate(QString msg);

private:
    QString msg;
};

#endif // CHATSERVER_H
