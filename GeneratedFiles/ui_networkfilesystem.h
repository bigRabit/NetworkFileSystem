/********************************************************************************
** Form generated from reading ui file 'networkfilesystem.ui'
**
** Created: Fri Aug 28 10:57:05 2015
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_NETWORKFILESYSTEM_H
#define UI_NETWORKFILESYSTEM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkFileSystemClass
{
public:

    void setupUi(QWidget *NetworkFileSystemClass)
    {
    if (NetworkFileSystemClass->objectName().isEmpty())
        NetworkFileSystemClass->setObjectName(QString::fromUtf8("NetworkFileSystemClass"));
    NetworkFileSystemClass->resize(600, 400);

    retranslateUi(NetworkFileSystemClass);

    QMetaObject::connectSlotsByName(NetworkFileSystemClass);
    } // setupUi

    void retranslateUi(QWidget *NetworkFileSystemClass)
    {
    NetworkFileSystemClass->setWindowTitle(QApplication::translate("NetworkFileSystemClass", "NetworkFileSystem", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(NetworkFileSystemClass);
    } // retranslateUi

};

namespace Ui {
    class NetworkFileSystemClass: public Ui_NetworkFileSystemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKFILESYSTEM_H
