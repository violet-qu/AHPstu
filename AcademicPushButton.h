// AcademicPushButton.h
#ifndef ACADEMICPUSHBUTTON_H
#define ACADEMICPUSHBUTTON_H

#include <QPushButton>
#include <QWidget>
#include <QPainter>
#include <QPainterPath>
#include <QPropertyAnimation>
#include <QEasingCurve>
#include <QGraphicsDropShadowEffect>
#include <QTimer>
#include <QEvent>
#include <QCursor>

class AcademicPushButton : public QPushButton
{
    Q_OBJECT
    Q_PROPERTY(QColor backgroundColor READ backgroundColor WRITE setBackgroundColor)
    Q_PROPERTY(QColor textColor READ textColor WRITE setTextColor)
    Q_PROPERTY(QColor borderColor READ borderColor WRITE setBorderColor)
    Q_PROPERTY(float borderRadius READ borderRadius WRITE setBorderRadius)

public:
    enum ButtonStyle {
        Primary,      // 主要按钮（深色）
        Secondary,    // 次要按钮
        Success,      // 成功按钮
        Warning,      // 警告按钮
        Danger,       // 危险按钮
        Outline,      // 轮廓按钮
        TextOnly      // 纯文本按钮
    };

    enum ButtonSize {
        Small,        // 小尺寸
        Medium,       // 中等尺寸
        Large         // 大尺寸
    };

    explicit AcademicPushButton(QWidget *parent = nullptr);
    explicit AcademicPushButton(const QString &text, QWidget *parent = nullptr);
    explicit AcademicPushButton(const QString &text, ButtonStyle style, QWidget *parent = nullptr);

    // 样式设置
    void setStyle(ButtonStyle style);
    ButtonStyle style() const;

    void setSize(ButtonSize size);
    ButtonSize size() const;

    // 颜色设置
    void setBackgroundColor(const QColor &color);
    QColor backgroundColor() const;

    void setTextColor(const QColor &color);
    QColor textColor() const;

    void setBorderColor(const QColor &color);
    QColor borderColor() const;

    void setHoverColor(const QColor &color);
    QColor hoverColor() const;

    void setPressedColor(const QColor &color);
    QColor pressedColor() const;

    // 外观设置
    void setBorderRadius(float radius);
    float borderRadius() const;

    void setBorderWidth(int width);
    int borderWidth() const;

    void setShadowEnabled(bool enabled);
    bool shadowEnabled() const;

    void setIcon(const QIcon &icon);
    void setIconSize(const QSize &size);

    // 动画设置
    void setAnimationEnabled(bool enabled);
    bool animationEnabled() const;

    void setAnimationDuration(int duration);
    int animationDuration() const;

    // 学术风格主题
    void setAcademicTheme();
    void setModernTheme();
    void setClassicTheme();

    // 状态控制
    void setLoading(bool loading);
    bool isLoading() const;

    void setEnabled(bool enabled);

signals:
    void mouseEntered();
    void mouseLeft();
    void buttonPressed();
    void buttonReleased();

protected:
    void paintEvent(QPaintEvent *event) override;
    void enterEvent(QEnterEvent *event) override;
    void leaveEvent(QEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

private slots:
    void updateLoadingAnimation();

private:
    void initUI();
    void initConnections();
    void updateColors();
    void updateSize();
    void animatePress(bool pressed);
    void updateCursor();
    void drawButtonBackground(QPainter &painter);
    void drawButtonText(QPainter &painter);
    void drawButtonIcon(QPainter &painter);
    void drawLoadingIndicator(QPainter &painter);
    void applyAcademicStyle();

private:
    // 样式状态
    ButtonStyle m_style;
    ButtonSize m_size;
    bool m_hovered;
    bool m_pressed;
    bool m_loading;
    bool m_shadowEnabled;
    bool m_animationEnabled;

    // 颜色
    QColor m_normalBackgroundColor;
    QColor m_normalTextColor;
    QColor m_normalBorderColor;
    QColor m_hoverBackgroundColor;
    QColor m_hoverTextColor;
    QColor m_hoverBorderColor;
    QColor m_pressedBackgroundColor;
    QColor m_pressedTextColor;
    QColor m_pressedBorderColor;
    QColor m_disabledBackgroundColor;
    QColor m_disabledTextColor;
    QColor m_disabledBorderColor;

    // 当前颜色
    QColor m_currentBackgroundColor;
    QColor m_currentTextColor;
    QColor m_currentBorderColor;

    // 外观
    float m_borderRadius;
    int m_borderWidth;
    int m_paddingHorizontal;
    int m_paddingVertical;
    int m_fontSize;

    // 图标
    QIcon m_icon;
    QSize m_iconSize;

    // 动画
    QPropertyAnimation *m_colorAnimation;
    QPropertyAnimation *m_scaleAnimation;
    QGraphicsDropShadowEffect *m_shadowEffect;
    int m_animationDuration;

    // 加载动画
    QTimer *m_loadingTimer;
    int m_loadingAngle;

    // 学术风格特定
    bool m_academicStyle;
};

#endif // ACADEMICPUSHBUTTON_H
