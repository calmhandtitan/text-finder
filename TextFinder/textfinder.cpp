#include "textfinder.h"
#include "ui_textfinder.h"

#include <QtCore/QFile> //add the necessary header files
#include <QtCore/QTextStream>

TextFinder::TextFinder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TextFinder)
{
    ui->setupUi(this);
    loadTextFile();     //load textFile as soon as app starts
}

TextFinder::~TextFinder()
{
    delete ui;
}

void TextFinder::on_findButton_clicked()
{
    QString searchString = ui->lineEdit->text();    //get the search string
    ui->textEdit->find(searchString, QTextDocument::FindWholeWords);

}

void TextFinder::loadTextFile()
{
    QFile inputFile(":/input.txt");               //load text file using QFile
    inputFile.open(QIODevice::ReadOnly);        //open file in read only mode

    QTextStream in(&inputFile);                 //read file using QTextStream
    QString line = in.readAll();
    inputFile.close();

    ui->textEdit->setPlainText(line);           //display the file contents on textEdit using setPlainText
    QTextCursor cursor = ui->textEdit->textCursor();    //get the cursor to the right position
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}
