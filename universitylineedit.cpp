// university_line_edit.cpp
#include "universitylineedit.h"
#include <QPainter>
#include <QApplication>
#include <QStyleOption>

UniversityLineEdit::UniversityLineEdit(QWidget *parent)
    : QLineEdit(parent),
    m_borderColor(QColor(200, 200, 200)),  // 浅灰色
    m_focusColor(QColor(50, 120, 200)),     // 深蓝色
    m_hoverColor(QColor(70, 150, 230)),     // 中蓝色
    m_borderThickness(1),
    m_isHovered(false),
    m_isFocused(false)
{
    setStyleSheet("QLineEdit {"
                  "   background-color: white;"
                  "   border-radius: 4px;"
                  "   padding: 8px 12px;"
                  "   font-family: 'Segoe UI', 'Microsoft YaHei', sans-serif;"
                  "   font-size: 16px;"
                  "   color: #333333;"
                   "   height: 10px;  /* 设置高度为36像素 */"
                  "}"
                  "QLineEdit::placeholder-text {"
                  "   color: #999999;"
                  "}");

    // 设置默认边框
    updateBorder();

    // 创建边框动画
    m_borderAnimation = new QPropertyAnimation(this, "borderThickness", this);
    m_borderAnimation->setDuration(200);
}

UniversityLineEdit::~UniversityLineEdit()
{
    delete m_borderAnimation;
}

void UniversityLineEdit::setBorderColor(const QColor &color)
{
    if (m_borderColor != color) {
        m_borderColor = color;
        updateBorder();
    }
}

QColor UniversityLineEdit::borderColor() const
{
    return m_borderColor;
}

void UniversityLineEdit::setBorderThickness(int thickness)
{
    if (m_borderThickness != thickness) {
        m_borderThickness = thickness;
        updateBorder();
    }
}

int UniversityLineEdit::borderThickness() const
{
    return m_borderThickness;
}

void UniversityLineEdit::setFocusColor(const QColor &color)
{
    if (m_focusColor != color) {
        m_focusColor = color;
        updateBorder();
    }
}

QColor UniversityLineEdit::focusColor() const
{
    return m_focusColor;
}

void UniversityLineEdit::setHoverColor(const QColor &color)
{
    if (m_hoverColor != color) {
        m_hoverColor = color;
        updateBorder();
    }
}

QColor UniversityLineEdit::hoverColor() const
{
    return m_hoverColor;
}

void UniversityLineEdit::updateBorder()
{
    // 重置样式表
    setStyleSheet(QString("QLineEdit {"
                          "   background-color: white;"
                          "   border-radius: 4px;"
                          "   padding: 8px 12px;"
                          "   font-family: 'Segoe UI', 'Microsoft YaHei', sans-serif;"
                          "   font-size: 16px;"
                          "   color: #333333;"
                          "   border: %1px solid %2;"
                          "   height: 30px;  /* 设置高度为36像素 */"
                          "}"
                          "QLineEdit::placeholder-text {"
                          "   color: %3;"
                          "}")
                      .arg(QString::number(m_borderThickness))
                      .arg(m_borderColor.name())
                      .arg(QColor(150, 150, 150).name()));
}

void UniversityLineEdit::paintEvent(QPaintEvent *event)
{
    QLineEdit::paintEvent(event);

    // 绘制边框（使用QPainter，避免样式表限制）
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // 获取当前边框颜色
    QColor currentColor = m_isFocused ? m_focusColor : m_isHovered ? m_hoverColor : m_borderColor;

    // 绘制边框
    painter.setPen(QPen(currentColor, m_borderThickness));
    painter.drawRect(rect().adjusted(0, 0, -1, -1));
}

void UniversityLineEdit::mousePressEvent(QMouseEvent *event)
{
    QLineEdit::mousePressEvent(event);
    setFocus();
}

void UniversityLineEdit::enterEvent(QEnterEvent *event)
{
    if (!m_isFocused) {
        m_isHovered = true;
        update();
    }
    QLineEdit::enterEvent(event);
}

void UniversityLineEdit::leaveEvent(QEvent *event)
{
    m_isHovered = false;
    update();
    QLineEdit::leaveEvent(event);
}
