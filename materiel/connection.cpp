#include "connection.h"

Connection::Connection()
{}

bool Connection::openconnection()
{
    db =QSqlDatabase::addDatabase("QODBC");
    bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_Projet2A");
db.setUserName("nour");//inserer nom de l'utilisateur
db.setPassword("esprit");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;


    return  test;
}

void Connection ::closeConnection()
{
    db.close();
}
