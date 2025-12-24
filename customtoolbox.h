#ifndef CUSTOMTOOLBOX_H
#define CUSTOMTOOLBOX_H

#include <QToolBox>
#include <QIcon>

class CustomToolBox : public QToolBox
{
    Q_OBJECT
public:
    explicit CustomToolBox(QWidget *parent = nullptr);

private:
    void setupStylesheet();
};

#endif // CUSTOMTOOLBOX_H
