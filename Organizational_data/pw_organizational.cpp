#include "pw_organizational.h"
#include "ui_pw_organizational.h"

PW_organizational::PW_organizational(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PW_organizational)
{
    ui->setupUi(this);
}

PW_organizational::~PW_organizational()
{
    delete ui;
}

