#include <QFile>
#include <QTextStream>
#include "findcrap.h"
#include "ui_findcrap.h"

findCrap::findCrap(QWidget *parent) : QWidget(parent),ui(new Ui::findCrap){
    ui->setupUi(this);
    getTextFile();
}

findCrap::~findCrap(){
    delete ui;
}

void findCrap::on_goButton_clicked(){
    QString word = ui->lineEdit->text();
    ui->textEdit->find(word, QTextDocument::FindWholeWords);
}

void findCrap::getTextFile(){
    QFile myFile(":/FireEmblem.txt");
    myFile.open(QIODevice::ReadOnly);
    QTextStream textStream(&myFile);
    QString line = textStream.readAll();
    myFile.close();
    ui->textEdit->setPlainText(line);
    QTextCursor textCursor = ui->textEdit->textCursor();
    textCursor.movePosition
            (QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}
