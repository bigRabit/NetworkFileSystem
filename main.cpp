#include <QtGui/QApplication>
#include "networkfilesystem.h"

int main(int argc, char *argv[])
{
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
	
	QApplication a(argc, argv);
	NetworkFileSystem w;
	w.show();
	return a.exec();
}
