#include "networkfilesystem.h"

NetworkFileSystem::NetworkFileSystem(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
{
	//ui.setupUi(this);

	manager = new QNetworkAccessManager(this);
	fileBrowser = new QTextBrowser(this);
	mainLayout = new QGridLayout(this);
	mainLayout->addWidget(fileBrowser);

	setLayout(mainLayout);

	connect(manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(replyFinished(QNetworkReply*)));
	manager->get(QNetworkRequest(QUrl("http://localhost:8080/CH.php")));

	updateDB();
}

NetworkFileSystem::~NetworkFileSystem()
{

}

int NetworkFileSystem::replyFinished(QNetworkReply *reply)
{
	QTextCodec *codec = QTextCodec::codecForName("utf8");
	QString all = codec->toUnicode(reply->readAll());
	fileBrowser->setText(all);
	reply->deleteLater();
	return 0;
}

void NetworkFileSystem::updateDB()
{
	qDebug() << "update!";
	
	QString fileFolderPath("D://FileFolder");

	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	//QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
	db.setHostName("localhost");
    db.setDatabaseName("testdb");
    db.setUserName("root");
    db.setPassword("");

    //QSqlQuery query;
    //query.exec("set names 'utf8'");
    
    if (!db.open())
	{
		QSqlError e = db.lastError();
		qDebug()<<e.text()<<'\n';
		return ;
	}

	else
	{
		qDebug()<< "open success !"<<'\n';
	}

	QDir rootDir(fileFolderPath);
	QStringList tmpList;
	QFileInfoList list = rootDir.entryInfoList(tmpList);

	for(unsigned int dirLen = 0;dirLen < list.count();dirLen++)
	{
		QSqlQuery query;

		QFileInfo tmpFileInfo = list.at(dirLen);

		if(tmpFileInfo.fileName() == "." || tmpFileInfo.fileName() == "..")
				continue;


		//QTextCodec *codec = QTextCodec::codecForName("utf8");
		//QString all = codec->toUnicode(reply->readAll());
		
		//QString fileName = codec->toUnicode(tmpFileInfo.fileName().toAscii());
		QString fileName = tmpFileInfo.fileName();
		qDebug() << fileName;
		
		QString size = QString::number(tmpFileInfo.size());
		qDebug() << size;
		
		QString createdTime = tmpFileInfo.created().toString("MMM dd yyyy");
		QString lastModifiedTime = tmpFileInfo.lastModified().toString("MMM dd yyyy");
		qDebug() << createdTime;
		qDebug() << lastModifiedTime;
		//QSqlQuery query;
/***************************************insert new record*********************************************/
		//query.exec("INSERT INTO FileFolder VALUES ('"+fileName+"','"+size+"','"+createdTime+"','"+lastModifiedTime+"')");
		query.finish();
	}

	QString test("中文！！！！");
	qDebug() << test;
	
	QString command = QString("select * from FileFolder where fileName like '%2870-6%'");
	QSqlQuery query;
	query.exec(command);
	query.next();

	qDebug() << query.value(2);
}
