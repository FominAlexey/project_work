#include "pw_output.h"
#include "ui_pw_output.h"

PW_output::PW_output(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PW_output)
{
    ui->setupUi(this);
}

PW_output::~PW_output()
{
    delete ui;
}

