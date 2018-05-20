#include "chatserver.h"
#include <QDebug>

//Initializes empty message
ChatServer::ChatServer(QObject *parent) : QObject(parent) {
	this -> msg = "";

}

//Adds messages to Nirmaan
QString ChatServer:: nirmaanUpdate(QString msg){
	this -> msg.append("Nirmaan: ");
    this -> msg.append(msg);
    this -> msg.append("\n");
    qDebug() << "Tag1: " << this -> msg;
    emit messageTextChanged();
    return this -> msg;
}


//Adds messages to Code Challenge
QString ChatServer::codeChallengeUpdate(QString msg){
	this -> msg.append("CodeChallenge: ");
    this -> msg.append(msg);
    this -> msg.append("\n");
    qDebug() << "Tag2: " << this -> msg;
    emit messageTextChanged();
    return this -> msg;
}

//Returns message string
QString ChatServer::messageText(){
    return this -> msg;
}
