#ifndef PW_FINANCIAL_H
#define PW_FINANCIAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PW_financial; }
QT_END_NAMESPACE

class PW_financial : public QMainWindow
{
    Q_OBJECT

public:
    PW_financial(QWidget *parent = nullptr);
    ~PW_financial();

private:
    Ui::PW_financial *ui;
};
#endif // PW_FINANCIAL_H
