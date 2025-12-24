// university_push_button.cpp
#include "universitypushbutton.h"
#include <QPainter>
#include <QApplication>
#include <QStyleOption>
#include <QCursor>

UniversityPushButton::UniversityPushButton(QWidget *parent)
    : QPushButton(parent),
    // 🎨 基于 #7287fa 的色系（按下变深，悬停变浅）
    m_normalColor(QColor("#7287fa")),          // 主色
    m_hoverColor(QColor("#8a9cfc")),           // 悬停：+10% 亮度
    m_pressedColor(QColor("#5a6df8")),         // 按下：-10% 亮度（变深）
    m_isHovered(false),
    m_isPressed(false)
{
    setStyleSheet("QPushButton {"
                  "   background-color: #7287fa;"
                  "   color: white;"               // 白色文字（高对比度）
                  "   border-radius: 8px;"
                  "   padding: 8px 24px;"
                  "   font-family: 'Segoe UI', 'Microsoft YaHei', sans-serif;"
                  "   font-size: 16px;"
                  "   font-weight: 500;"
                  "   border: none;"                // 无边框
                  "   cursor: default;"
                  "}"
                  "QPushButton:pressed {"
                  "   background-color: #8a9cfc;"  // 悬停更亮
                  "   border: none;"
                  "   cursor: pointer;"            // ✅ 手指光标
                  "}"
                  "QPushButton:hover {"
                  "   background-color: #5a6df8;"  // 按下更深
                  "   border: none;"
                  "}"
                  "QPushButton:focus {"
                  "   border: none;"
                  "   outline: none;"
                  "}");

    updateStyle();
}



UniversityPushButton::~UniversityPushButton()
{
}

void UniversityPushButton::setNormalColor(const QColor &color)
{
    if (m_normalColor != color) {
        m_normalColor = color;
        updateStyle();
    }
}

QColor UniversityPushButton::normalColor() const
{
    return m_normalColor;
}

void UniversityPushButton::setHoverColor(const QColor &color)
{
    if (m_hoverColor != color) {
        m_hoverColor = color;
        updateStyle();
    }
}

QColor UniversityPushButton::hoverColor() const
{
    return m_hoverColor;
}

void UniversityPushButton::setPressedColor(const QColor &color)
{
    if (m_pressedColor != color) {
        m_pressedColor = color;
        updateStyle();
    }
}

QColor UniversityPushButton::pressedColor() const
{
    return m_pressedColor;
}

void UniversityPushButton::updateStyle()
{
    setStyleSheet(QString("QPushButton {"
                          "   background-color: %1;"
                          "   color: white;"
                          "   border-radius: 8px;"
                          "   padding: 8px 24px;"
                          "   font-family: 'Segoe UI', 'Microsoft YaHei', sans-serif;"
                          "   font-size: 16px;"
                          "   font-weight: 500;"
                          "   border: none;"
                          "   cursor: default;"
                          "}"
                          "QPushButton:pressed {"
                          "   background-color: %2;"
                          "   border: none;"
                          "   cursor: pointer;"
                          "}"
                          "QPushButton:hover {"
                          "   background-color: %3;"
                          "   border: none;"
                          "}"
                          "QPushButton:focus {"
                          "   border: none;"
                          "   outline: none;"
                          "}")
                      .arg(m_normalColor.name())
                      .arg(m_hoverColor.name())
                      .arg(m_pressedColor.name()));
    // 聚焦边框已移除，无需第4参数
}

// paintEvent 中不再绘制任何边框（保持简洁）
void UniversityPushButton::paintEvent(QPaintEvent *event)
{
    QPushButton::paintEvent(event);
    // ❌ 无聚焦边框绘制 —— 完全无边框设计
}

void UniversityPushButton::enterEvent(QEnterEvent *event)
{
    m_isHovered = true;
    update();
    QPushButton::enterEvent(event);
}

void UniversityPushButton::leaveEvent(QEvent *event)
{
    m_isHovered = false;
    update();
    QPushButton::leaveEvent(event);
}

void UniversityPushButton::mousePressEvent(QMouseEvent *event)
{
    m_isPressed = true;
    update();
    QPushButton::mousePressEvent(event);
}

void UniversityPushButton::mouseReleaseEvent(QMouseEvent *event)
{
    m_isPressed = false;
    update();
    QPushButton::mouseReleaseEvent(event);
}
