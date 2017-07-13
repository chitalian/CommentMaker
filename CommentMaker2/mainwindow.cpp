#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <designs.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    mainFunc();
}
void MainWindow::on_pushButton_2_clicked()
{
    preview();
}
void MainWindow::on_comboBox_2_currentIndexChanged(const QString &arg1)
{
    preview();
}
void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    preview();
}
void MainWindow::mainFunc()
{
    QString text;
    loadText(&text);
    editText(&text);
    ui->textBrowser_2->setText(text);
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::preview()
{
    QString text;
    text = "This is a demo that\n";
    text += "showing how text looks\n";
    text += "with the current\n";
    text += "configurations";
    ui->lineEdit->setText("30");
    ui->lineEdit_2->setText("3");
    editText(&text);
    ui->textBrowser->setText(text);
    ui->lineEdit->setText("75");
    ui->lineEdit_2->setText("5");

}



void MainWindow::loadText(QString * text)
{
    *text = ui->textEdit->toPlainText();
}

int MainWindow::getIndent()
{
    QString sindent = ui->lineEdit_2->text();
    int index = sindent.indexOf(".");
    if (index == -1)
        return sindent.toInt();
    else{
        return -1;
    }
}

int MainWindow::getSizex()
{
    QString size = ui->lineEdit->text();
    int index = size.indexOf(".");
    if (index == -1)
        return size.toInt();
    else{
        return -1;
    }
}

void MainWindow::printADesign(QString * text, int * sizex, int * indent, bool * overLoad)
{
    designs d;
    char fill = getFillerChar();
    int design = ui->comboBox_2->currentIndex();
    switch(design)
    {
    case 0:
        d.printDesign_0(text,*sizex, *indent,overLoad, fill);
        break;
    case 1:
        d.printDesign_1(text,*sizex, *indent,overLoad, fill);
        break;
    case 2:
        d.printDesign_2(text,*sizex, *indent,overLoad,fill);
        break;
    case 3:
        d.printDesign_3(text,*sizex, *indent,overLoad,fill);
        break;
    case 4:
        d.printDesign_4(text,*sizex, *indent,overLoad,fill);
        break;
    case 5:
        d.printDesign_5(text,*sizex, *indent,overLoad,fill);
        break;
    case 6:
        d.printDesign_6(text,*sizex, *indent,overLoad,fill);
        break;
    }
}


void MainWindow::editText(QString * text)
{
    int sizex = getSizex();
    int indent= getIndent();
    bool overLoad = false;
    int error = 0;

    if (indent<0)
        error =4;
    else if (sizex<5)
        error = 2;
    else if(indent+1>=(sizex))
        error = 3;
    else{
        error = 0;
        printADesign(text,&sizex, &indent,&overLoad);
    }
    if (overLoad)
            error = 1;
     printErrorMessage(text, error);


}


char MainWindow::getFillerChar()
{
    switch(ui->comboBox->currentIndex())
    {
    case 0:
        return '*';
        break;
    case 1:
        return '=';
        break;
    case 2:
        return '#';
        break;
    case 3:
        return '.';
        break;
    case 4:
        return '_';
        break;
    case 5:
        return '-';
        break;
    case 6:
        return '/';
        break;
    default:
        return '*';
        break;
    }
}

void MainWindow::printErrorMessage(QString *text, int x)
{
    switch (x)
    {
    case 0://no Error
        *text += "\n\n\nPLEASE NOTE: The formatting may look skewed, this is normal.\n";
        *text += "Simply copy and paste the text above into your code editor! :)";
        break;
    case 1://OverLoad
        *text = "The formatting is incorrect\n";
        *text += "Either there is too much text per line,\n ";
        *text += "or the settings is not set high enough.\n";
        *text += "You can change these in the Edit tab";
        break;
    case 2://Size Error 5 or lower/decimals
        *text = "The size must be 5 or higher,\n";
        *text += "and cannot contain decimals.\n";
        *text += "Please go to the Edit tab and change\n";
        *text += "the size number in the bottom right corner.";
        break;
    case 3://Indent exceeding Error
        *text = "The size must be greater than the indent\n";
        *text += "by atleast 2.\n";
        *text += "Please go to the Edit tab and change\n";
        *text += "the size number in the bottom right corner.";
        break;
    case 4://Indent negative/decimal Error
        *text = "There was an Issue with your indent.\n";
        *text += "Indent cannot be negative, or contain decimals.\n";
        *text += "Please go to the Edit tab and change\n";
        *text += "the indent number in the bottom left corner.";
        break;
    }
}












































