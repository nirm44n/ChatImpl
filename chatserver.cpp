#include "chatserver.h"
#include <QDebug>

ChatServer::ChatServer(QObject *parent) : QObject(parent) {
	this -> msg = "";

}

QString ChatServer:: nirmaanUpdate(QString msg){
	this -> msg.append("Nirmaan: ");
    this -> msg.append(msg);
    this -> msg.append("\n");
    qDebug() << "Tag1: " << this -> msg;
    emit messageTextChanged();
    return this -> msg;
}

QString ChatServer::codeChallengeUpdate(QString msg){
	this -> msg.append("CodeChallenge: ");
    this -> msg.append(msg);
    this -> msg.append("\n");
    qDebug() << "Tag2: " << this -> msg;
    emit messageTextChanged();
    return this -> msg;
}

QString ChatServer::messageText(){
    return this -> msg;
}
