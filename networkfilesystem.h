#ifndef NETWORKFILESYSTEM_H
#define NETWORKFILESYSTEM_H

#include <QtGui/QWidget>
#include "ui_networkfilesystem.h"
#include <QtNetwork>
#include <QTextCodec>
#include <QTextBrowser>
#include <QNetworkReply>
#include <QGridLayout>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

class NetworkFileSystem : public QWidget
{
	Q_OBJECT

public:
	NetworkFileSystem(QWidget *parent = 0, Qt::WFlags flags = 0);
	~NetworkFileSystem();

private:
	Ui::NetworkFileSystemClass ui;
	QTextBrowser *fileBrowser;
	QNetworkAccessManager *manager;
	QGridLayout *mainLayout;
	void updateDB();

private slots:
	int replyFinished(QNetworkReply *);
};

#endif // NETWORKFILESYSTEM_H
