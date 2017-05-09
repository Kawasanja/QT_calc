#include "calcclass.h"


CalcClass::CalcClass(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Calc");
    setFixedSize(200,200);

    txt = new QLabel(this);
    txt->setFrameStyle(QFrame::Box);
    txt->setGeometry(5,5,190,15);
    txt->setFont(QFont("Arial", 20, QFont::Bold));
    txt->setAlignment(Qt::AlignRight);

    txt2 = new QLabel();
    txt2->setAlignment(Qt::AlignRight);

    str2 = new QString();
    str = new QString();

    total = new QString;

    first = new double();
    second = new double();

    status_Pl = false;
    status_Min = false;
    status_Mult = false;
    status_Div = false;



    btn1 = new QPushButton("1",this);
    btn2 = new QPushButton("2",this);
    btn3 = new QPushButton("3",this);
    btn4 = new QPushButton("4",this);
    btn5 = new QPushButton("5",this);
    btn6 = new QPushButton("6",this);
    btn7 = new QPushButton("7",this);
    btn8 = new QPushButton("8",this);
    btn9 = new QPushButton("9",this);
    btn0 = new QPushButton("0",this);
    btnDiv = new QPushButton("/",this);
    btnPl = new QPushButton("+",this);
    btnMult = new QPushButton("*",this);
    btnMin = new QPushButton("-",this);
    btnEq = new QPushButton("=",this);
    btnC = new QPushButton("C",this);

    shortcut1 = new QShortcut(QKeySequence("1"), this);
    shortcut2 = new QShortcut(QKeySequence("2"), this);
    shortcut3 = new QShortcut(QKeySequence("3"), this);
    shortcut4 = new QShortcut(QKeySequence("4"), this);
    shortcut5 = new QShortcut(QKeySequence("5"), this);
    shortcut6 = new QShortcut(QKeySequence("6"), this);
    shortcut7 = new QShortcut(QKeySequence("7"), this);
    shortcut8 = new QShortcut(QKeySequence("8"), this);
    shortcut9 = new QShortcut(QKeySequence("9"), this);
    shortcut0 = new QShortcut(QKeySequence("0"), this);
    shortcutDiv = new QShortcut(QKeySequence("/"), this);
    shortcutPl = new QShortcut(QKeySequence("+"), this);
    shortcutMult = new QShortcut(QKeySequence("*"), this);
    shortcutMin = new QShortcut(QKeySequence("-"), this);
    shortcutEq = new QShortcut(QKeySequence("="), this);
    shortcutEq2 = new QShortcut(QKeySequence("Enter"), this);
    shortcutC = new QShortcut(QKeySequence("Del"), this);


    connect(btn1,SIGNAL(clicked()),this,SLOT(MySlot1()));
    connect(shortcut1, SIGNAL(activated()), this, SLOT(MySlot1()));

    connect(btn2,SIGNAL(clicked()),this,SLOT(MySlot2()));
    connect(shortcut2, SIGNAL(activated()), this, SLOT(MySlot2()));

    connect(btn3,SIGNAL(clicked()),this,SLOT(MySlot3()));
    connect(shortcut3, SIGNAL(activated()), this, SLOT(MySlot3()));

    connect(btn4,SIGNAL(clicked()),this,SLOT(MySlot4()));
    connect(shortcut4, SIGNAL(activated()), this, SLOT(MySlot4()));

    connect(btn5,SIGNAL(clicked()),this,SLOT(MySlot5()));
    connect(shortcut5, SIGNAL(activated()), this, SLOT(MySlot5()));

    connect(btn6,SIGNAL(clicked()),this,SLOT(MySlot6()));
    connect(shortcut6, SIGNAL(activated()), this, SLOT(MySlot6()));

    connect(btn7,SIGNAL(clicked()),this,SLOT(MySlot7()));
    connect(shortcut7, SIGNAL(activated()), this, SLOT(MySlot7()));

    connect(btn8,SIGNAL(clicked()),this,SLOT(MySlot8()));
    connect(shortcut8, SIGNAL(activated()), this, SLOT(MySlot8()));

    connect(btn9,SIGNAL(clicked()),this,SLOT(MySlot9()));
    connect(shortcut9, SIGNAL(activated()), this, SLOT(MySlot9()));

    connect(btn0,SIGNAL(clicked()),this,SLOT(MySlot0()));
    connect(shortcut0, SIGNAL(activated()), this, SLOT(MySlot0()));

    connect(btnPl,SIGNAL(clicked()),this,SLOT(MySlotPl()));
    connect(shortcutPl, SIGNAL(activated()), this, SLOT(MySlotPl()));

    connect(btnEq,SIGNAL(clicked()),this,SLOT(MySlotEq()));
    connect(shortcutEq, SIGNAL(activated()), this, SLOT(MySlotEq()));
    connect(shortcutEq2, SIGNAL(activated()), this, SLOT(MySlotEq()));

    connect(btnC,SIGNAL(clicked()),this,SLOT(MySlotC()));
    connect(shortcutC, SIGNAL(activated()), this, SLOT(MySlotC()));

    connect(btnMin,SIGNAL(clicked()),this,SLOT(MySlotMin()));
    connect(shortcutMin, SIGNAL(activated()), this, SLOT(MySlotMin()));

    connect(btnMult,SIGNAL(clicked()),this,SLOT(MySlotMult()));
    connect(shortcutMult, SIGNAL(activated()), this, SLOT(MySlotMult()));

    connect(btnDiv,SIGNAL(clicked()),this,SLOT(MySlotDiv()));
    connect(shortcutDiv, SIGNAL(activated()), this, SLOT(MySlotDiv()));


    //Layout------------------------
    QVBoxLayout * vertical1 = new QVBoxLayout;
    vertical1->addWidget(btn7);
    vertical1->addWidget(btn4);
    vertical1->addWidget(btn1);
    vertical1->addWidget(btnC);

    QVBoxLayout * vertical2 = new QVBoxLayout;
    vertical2->addWidget(btn8);
    vertical2->addWidget(btn5);
    vertical2->addWidget(btn2);
    vertical2->addWidget(btn0);

    QVBoxLayout * vertical3 = new QVBoxLayout;
    vertical3->addWidget(btn9);
    vertical3->addWidget(btn6);
    vertical3->addWidget(btn3);
    vertical3->addWidget(btnEq);

    QVBoxLayout * vertical4 = new QVBoxLayout;
    vertical4->addWidget(btnPl);
    vertical4->addWidget(btnMin);
    vertical4->addWidget(btnMult);
    vertical4->addWidget(btnDiv);

    QHBoxLayout * horizontal1 = new QHBoxLayout;
    horizontal1->addLayout(vertical1);
    horizontal1->addLayout(vertical2);
    horizontal1->addLayout(vertical3);
    horizontal1->addLayout(vertical4);

    QVBoxLayout * vrt = new QVBoxLayout;
    vrt->addWidget(txt2);
    vrt->addWidget(txt);
    vrt->addLayout(horizontal1);

    setLayout(vrt);
    //------------------------------


}


CalcClass::~CalcClass()
{

}

void CalcClass::MySlot1()
{
    *str2 = *str2 + "1";
    txt2->setText(*str2);
    *str = *str + "1";
    txt->setText(*str);
}

void CalcClass::MySlot2()
{
    *str2 = *str2 + "2";
    txt2->setText(*str2);
    *str = *str + "2";
    txt->setText(*str);
}
void CalcClass::MySlot3()
{
    *str2 = *str2 + "3";
    txt2->setText(*str2);
    *str = *str + "3";
    txt->setText(*str);
}

void CalcClass::MySlot4()
{
    *str2 = *str2 + "4";
    txt2->setText(*str2);
    *str = *str + "4";
    txt->setText(*str);
}
void CalcClass::MySlot5()
{
    *str2 = *str2 + "5";
    txt2->setText(*str2);
    *str = *str + "5";
    txt->setText(*str);
}

void CalcClass::MySlot6()
{
    *str2 = *str2 + "6";
    txt2->setText(*str2);
    *str = *str + "6";
    txt->setText(*str);
}
void CalcClass::MySlot7()
{
    *str2 = *str2 + "7";
    txt2->setText(*str2);
    *str = *str + "7";
    txt->setText(*str);
}

void CalcClass::MySlot8()
{
    *str2 = *str2 + "8";
    txt2->setText(*str2);
    *str = *str + "8";
    txt->setText(*str);
}
void CalcClass::MySlot9()
{
    *str2 = *str2 + "9";
    txt2->setText(*str2);
    *str = *str + "9";
    txt->setText(*str);
}

void CalcClass::MySlot0()
{
    *str2 = *str2 + "0";
    txt2->setText(*str2);
    *str = *str + "0";
    txt->setText(*str);
}

void CalcClass::MySlotPl()
{
    if ((*str != QString() && status_Mult == true) || (*str != QString() && status_Min == true) || (*str != QString() && status_Div == true) || (*str != QString() && status_Pl == true))
    {
        MySlotEq();
    }

    if (*str != QString())
    {
        *first = *first + str->toDouble();
    }
    else
    {
        *first = total->toDouble();
        *str2 = *total;
    }
    *str2 = *str2 + "+";
    txt2->setText(*str2);
    //txt->setText(QString());
    *str = QString();
    status_Pl = true;
}

void CalcClass::MySlotMin()
{
    if ((*str != QString() && status_Mult == true) || (*str != QString() && status_Min == true) || (*str != QString() && status_Div == true) || (*str != QString() && status_Pl == true))
    {
        MySlotEq();
    }

    if (*str != QString())
    {
        if (status_Min != true) {*first = *first + str->toDouble();}
        if (status_Min == true) {*first = *first - str->toDouble();}
    }
    else
    {
        *first = total->toDouble();
        *str2 = *total;
    }
    *str2 = *str2 + "-";
    txt2->setText(*str2);
    //txt->setText(QString());
    *str = QString();
    status_Min = true;
}

void CalcClass::MySlotMult()
{
    if ((*str != QString() && status_Mult == true) || (*str != QString() && status_Min == true) || (*str != QString() && status_Div == true) || (*str != QString() && status_Pl == true))
    {
        MySlotEq();
    }

    if (*str != QString())
    {
        if (status_Mult != true) {*first = *first + str->toDouble();}
        if (status_Mult == true) {*first = *first * str->toDouble();}
    }
    else
    {
        *first = total->toDouble();
        *str2 = *total;
    }
    *str2 = *str2 + "*";
    txt2->setText(*str2);
    //txt->setText(QString());
    *str = QString();
    status_Mult = true;
}

void CalcClass::MySlotDiv()
{
    if ((*str != QString() && status_Mult == true) || (*str != QString() && status_Min == true) || (*str != QString() && status_Div == true) || (*str != QString() && status_Pl == true))
    {
        MySlotEq();
    }

    if (*str != QString())
    {
        if (status_Div != true) {*first = *first + str->toDouble();}
        if (status_Div == true) {*first = *first / str->toDouble();}
    }
    else
    {
        *first = total->toDouble();
        *str2 = *total;
    }
    *str2 = *str2 + "/";
    txt2->setText(*str2);
    //txt->setText(QString());
    *str = QString();
    status_Div = true;
}

void CalcClass::MySlotEq()
{
    *second = str->toDouble();
    if (status_Pl == true) {*total = QString::number((*first)+(*second));}
    if (status_Min == true) {*total = QString::number((*first)-(*second));}
    if (status_Mult == true) {*total = QString::number((*first)*(*second));}
    if (status_Div == true) {*total = QString::number((*first)/(*second));}
    txt->setText(*total);
    *str = QString();
    *first = 0;
    txt2->setText(QString());
    *str2 = QString();
    status_Min = false;
    status_Pl = false;
    status_Mult = false;
    status_Div = false;
}

void CalcClass::MySlotC()
{
    txt->setText(QString());
    *str = QString();
    txt2->setText(QString());
    *str2 = QString();
    *first = 0;
    *second = 0;

}

























