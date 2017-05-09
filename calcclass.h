#ifndef CALCCLASS_H
#define CALCCLASS_H

#include <QtWidgets>

class CalcClass : public QWidget
{
    Q_OBJECT
    QLabel * txt;
    QString * str;
    QString * total;
    double * first;
    double * second;
    bool status_Pl;
    bool status_Min;
    bool status_Mult;
    bool status_Div;

    QLabel * txt2;
    QString * str2;

    QPushButton * btn1;
    QPushButton * btn2;
    QPushButton * btn3;
    QPushButton * btn4;
    QPushButton * btn5;
    QPushButton * btn6;
    QPushButton * btn7;
    QPushButton * btn8;
    QPushButton * btn9;
    QPushButton * btn0;
    QPushButton * btnDiv;
    QPushButton * btnPl;
    QPushButton * btnMult;
    QPushButton * btnMin;
    QPushButton * btnEq;
    QPushButton * btnC;

    QShortcut *shortcut1;
    QShortcut *shortcut2;
    QShortcut *shortcut3;
    QShortcut *shortcut4;
    QShortcut *shortcut5;
    QShortcut *shortcut6;
    QShortcut *shortcut7;
    QShortcut *shortcut8;
    QShortcut *shortcut9;
    QShortcut *shortcut0;
    QShortcut *shortcutDiv;
    QShortcut *shortcutPl;
    QShortcut *shortcutMin;
    QShortcut *shortcutMult;
    QShortcut *shortcutEq;
    QShortcut *shortcutC;
    QShortcut *shortcutEq2;



public:
    CalcClass(QWidget *parent = 0);
    ~CalcClass();

public slots:
    void MySlot1();
    void MySlot2();
    void MySlot3();
    void MySlot4();
    void MySlot5();
    void MySlot6();
    void MySlot7();
    void MySlot8();
    void MySlot9();
    void MySlot0();
    void MySlotPl();
    void MySlotEq();
    void MySlotC();
    void MySlotMin();
    void MySlotMult();
    void MySlotDiv();
};

#endif // CALCCLASS_H
