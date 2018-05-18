#ifndef CHATSERVER_H
#define CHATSERVER_H

#include <QObject>

class ChatServer: public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString messageText READ messageText NOTIFY messageTextChanged)
public:
    ChatServer(QObject *parent = nullptr);
    QString messageText();

signals:
    void messageTextChanged();

public slots:
    QString nirmaanUpdate(QString msg);
    QString codeChallengeUpdate(QString msg);


private:
    QString msg;
};

#endif // CHATSERVER_H
