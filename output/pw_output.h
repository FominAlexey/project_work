#ifndef PW_OUTPUT_H
#define PW_OUTPUT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PW_output; }
QT_END_NAMESPACE

class PW_output : public QMainWindow
{
    Q_OBJECT

public:
    PW_output(QWidget *parent = nullptr);
    ~PW_output();

private:
    Ui::PW_output *ui;
};
#endif // PW_OUTPUT_H
