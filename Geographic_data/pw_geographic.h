#ifndef PW_GEOGRAPHIC_H
#define PW_GEOGRAPHIC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PW_geographic; }
QT_END_NAMESPACE

class PW_geographic : public QMainWindow
{
    Q_OBJECT

public:
    PW_geographic(QWidget *parent = nullptr);
    ~PW_geographic();

private:
    Ui::PW_geographic *ui;
};
#endif // PW_GEOGRAPHIC_H
