// university_push_button.h
#ifndef UNIVERSITY_PUSH_BUTTON_H
#define UNIVERSITY_PUSH_BUTTON_H

#include <QPushButton>
#include <QColor>
#include <QPainter>

class UniversityPushButton : public QPushButton
{
    Q_OBJECT
    Q_PROPERTY(QColor normalColor READ normalColor WRITE setNormalColor)
    Q_PROPERTY(QColor hoverColor READ hoverColor WRITE setHoverColor)
    Q_PROPERTY(QColor pressedColor READ pressedColor WRITE setPressedColor)

public:
    explicit UniversityPushButton(QWidget *parent = nullptr);
    ~UniversityPushButton() override;

    void setNormalColor(const QColor &color);
    QColor normalColor() const;

    void setHoverColor(const QColor &color);
    QColor hoverColor() const;

    void setPressedColor(const QColor &color);
    QColor pressedColor() const;

protected:
    void paintEvent(QPaintEvent *event) override;
    void enterEvent(QEnterEvent *event) override;
    void leaveEvent(QEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    void updateStyle();

    QColor m_normalColor;
    QColor m_hoverColor;
    QColor m_pressedColor;
    bool m_isHovered;
    bool m_isPressed;
};

#endif // UNIVERSITY_PUSH_BUTTON_H
