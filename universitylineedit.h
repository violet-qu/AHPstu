// university_line_edit.h
#ifndef UNIVERSITY_LINE_EDIT_H
#define UNIVERSITY_LINE_EDIT_H

#include <QLineEdit>
#include <QPainter>
#include <QPropertyAnimation>
#include <QColor>
#include <QMouseEvent>

class UniversityLineEdit : public QLineEdit
{
    Q_OBJECT
    Q_PROPERTY(QColor borderColor READ borderColor WRITE setBorderColor)
    Q_PROPERTY(int borderThickness READ borderThickness WRITE setBorderThickness)
    Q_PROPERTY(QColor focusColor READ focusColor WRITE setFocusColor)
    Q_PROPERTY(QColor hoverColor READ hoverColor WRITE setHoverColor)

public:
    explicit UniversityLineEdit(QWidget *parent = nullptr);
    ~UniversityLineEdit() override;

    // 设置边框颜色（默认浅灰色）
    void setBorderColor(const QColor &color);
    QColor borderColor() const;

    // 设置边框厚度（默认1px）
    void setBorderThickness(int thickness);
    int borderThickness() const;

    // 设置聚焦时的颜色（默认深蓝色）
    void setFocusColor(const QColor &color);
    QColor focusColor() const;

    // 设置悬停时的颜色（默认中蓝色）
    void setHoverColor(const QColor &color);
    QColor hoverColor() const;

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void enterEvent(QEnterEvent *event) override;
    void leaveEvent(QEvent *event) override;

private:
    void updateBorder();

    QColor m_borderColor;
    QColor m_focusColor;
    QColor m_hoverColor;
    int m_borderThickness;
    bool m_isHovered;
    bool m_isFocused;
    QPropertyAnimation *m_borderAnimation;
};

#endif // UNIVERSITY_LINE_EDIT_H
