// AcademicPushButton.cpp
#include "AcademicPushButton.h"
#include "qevent.h"
#include <QPainter>
#include <QPainterPath>
#include <QStyleOption>
#include <QLinearGradient>
#include <QGraphicsDropShadowEffect>
#include <QTimer>
#include <QtMath>

AcademicPushButton::AcademicPushButton(QWidget *parent)
    : QPushButton(parent)
    , m_style(Primary)
    , m_size(Medium)
    , m_hovered(false)
    , m_pressed(false)
    , m_loading(false)
    , m_shadowEnabled(true)
    , m_animationEnabled(true)
    , m_borderRadius(8.0f)
    , m_borderWidth(2)
    , m_paddingHorizontal(24)
    , m_paddingVertical(12)
    , m_fontSize(12)
    , m_animationDuration(150)
    , m_loadingAngle(0)
    , m_academicStyle(false)
{
    initUI();
    initConnections();
    applyAcademicStyle();
}

AcademicPushButton::AcademicPushButton(const QString &text, QWidget *parent)
    : QPushButton(text, parent)
    , m_style(Primary)
    , m_size(Medium)
    , m_hovered(false)
    , m_pressed(false)
    , m_loading(false)
    , m_shadowEnabled(true)
    , m_animationEnabled(true)
    , m_borderRadius(8.0f)
    , m_borderWidth(2)
    , m_paddingHorizontal(24)
    , m_paddingVertical(12)
    , m_fontSize(12)
    , m_animationDuration(150)
    , m_loadingAngle(0)
    , m_academicStyle(false)
{
    initUI();
    initConnections();
    applyAcademicStyle();
}

AcademicPushButton::AcademicPushButton(const QString &text, ButtonStyle style, QWidget *parent)
    : QPushButton(text, parent)
    , m_style(style)
    , m_size(Medium)
    , m_hovered(false)
    , m_pressed(false)
    , m_loading(false)
    , m_shadowEnabled(true)
    , m_animationEnabled(true)
    , m_borderRadius(8.0f)
    , m_borderWidth(2)
    , m_paddingHorizontal(24)
    , m_paddingVertical(12)
    , m_fontSize(12)
    , m_animationDuration(150)
    , m_loadingAngle(0)
    , m_academicStyle(false)
{
    initUI();
    initConnections();
    applyAcademicStyle();
}

void AcademicPushButton::initUI()
{
    // 设置基本属性
    setCursor(Qt::PointingHandCursor);  // 鼠标手形
    setFocusPolicy(Qt::NoFocus);

    // 创建动画
    m_colorAnimation = new QPropertyAnimation(this, "backgroundColor");
    m_colorAnimation->setDuration(m_animationDuration);
    m_colorAnimation->setEasingCurve(QEasingCurve::OutCubic);

    m_scaleAnimation = new QPropertyAnimation(this, "geometry");
    m_scaleAnimation->setDuration(100);
    m_scaleAnimation->setEasingCurve(QEasingCurve::OutQuad);

    // 创建阴影效果
    m_shadowEffect = new QGraphicsDropShadowEffect(this);
    m_shadowEffect->setBlurRadius(10);
    m_shadowEffect->setOffset(0, 3);
    m_shadowEffect->setColor(QColor(0, 0, 0, 30));
    setGraphicsEffect(m_shadowEffect);

    // 加载动画定时器
    m_loadingTimer = new QTimer(this);
    m_loadingTimer->setInterval(30);

    // 初始化尺寸
    updateSize();

    // 更新颜色
    updateColors();
}

void AcademicPushButton::initConnections()
{
    connect(m_loadingTimer, &QTimer::timeout,
            this, &AcademicPushButton::updateLoadingAnimation);
}

void AcademicPushButton::applyAcademicStyle()
{
    m_academicStyle = true;

    // 学术风格配色方案（深蓝主题）
    switch (m_style) {
    case Primary:
        m_normalBackgroundColor = QColor("#1565C0");   // 深蓝（初始深色）
        m_normalTextColor = QColor("#FFFFFF");
        m_normalBorderColor = QColor("#0D47A1");
        m_hoverBackgroundColor = QColor("#1976D2");    // 悬停稍浅
        m_hoverTextColor = QColor("#FFFFFF");
        m_hoverBorderColor = QColor("#1565C0");
        m_pressedBackgroundColor = QColor("#2196F3");  // 按下更浅
        m_pressedTextColor = QColor("#FFFFFF");
        m_pressedBorderColor = QColor("#1976D2");
        break;

    case Secondary:
        m_normalBackgroundColor = QColor("#455A64");
        m_normalTextColor = QColor("#FFFFFF");
        m_normalBorderColor = QColor("#37474F");
        m_hoverBackgroundColor = QColor("#546E7A");
        m_hoverTextColor = QColor("#FFFFFF");
        m_hoverBorderColor = QColor("#455A64");
        m_pressedBackgroundColor = QColor("#607D8B");
        m_pressedTextColor = QColor("#FFFFFF");
        m_pressedBorderColor = QColor("#546E7A");
        break;

    case Success:
        m_normalBackgroundColor = QColor("#2E7D32");
        m_normalTextColor = QColor("#FFFFFF");
        m_normalBorderColor = QColor("#1B5E20");
        m_hoverBackgroundColor = QColor("#388E3C");
        m_hoverTextColor = QColor("#FFFFFF");
        m_hoverBorderColor = QColor("#2E7D32");
        m_pressedBackgroundColor = QColor("#43A047");
        m_pressedTextColor = QColor("#FFFFFF");
        m_pressedBorderColor = QColor("#388E3C");
        break;

    case Warning:
        m_normalBackgroundColor = QColor("#F57C00");
        m_normalTextColor = QColor("#FFFFFF");
        m_normalBorderColor = QColor("#E65100");
        m_hoverBackgroundColor = QColor("#FF9800");
        m_hoverTextColor = QColor("#FFFFFF");
        m_hoverBorderColor = QColor("#F57C00");
        m_pressedBackgroundColor = QColor("#FFB74D");
        m_pressedTextColor = QColor("#FFFFFF");
        m_pressedBorderColor = QColor("#FF9800");
        break;

    case Danger:
        m_normalBackgroundColor = QColor("#D32F2F");
        m_normalTextColor = QColor("#FFFFFF");
        m_normalBorderColor = QColor("#B71C1C");
        m_hoverBackgroundColor = QColor("#E53935");
        m_hoverTextColor = QColor("#FFFFFF");
        m_hoverBorderColor = QColor("#D32F2F");
        m_pressedBackgroundColor = QColor("#EF5350");
        m_pressedTextColor = QColor("#FFFFFF");
        m_pressedBorderColor = QColor("#E53935");
        break;

    case Outline:
        m_normalBackgroundColor = Qt::transparent;
        m_normalTextColor = QColor("#1565C0");
        m_normalBorderColor = QColor("#1565C0");
        m_hoverBackgroundColor = QColor("#1565C0");
        m_hoverTextColor = QColor("#FFFFFF");
        m_hoverBorderColor = QColor("#1565C0");
        m_pressedBackgroundColor = QColor("#0D47A1");
        m_pressedTextColor = QColor("#FFFFFF");
        m_pressedBorderColor = QColor("#0D47A1");
        break;

    case TextOnly:
        m_normalBackgroundColor = Qt::transparent;
        m_normalTextColor = QColor("#1565C0");
        m_normalBorderColor = Qt::transparent;
        m_hoverBackgroundColor = QColor("#E3F2FD");
        m_hoverTextColor = QColor("#0D47A1");
        m_hoverBorderColor = Qt::transparent;
        m_pressedBackgroundColor = QColor("#BBDEFB");
        m_pressedTextColor = QColor("#0D47A1");
        m_pressedBorderColor = Qt::transparent;
        break;
    }

    // 禁用状态颜色
    m_disabledBackgroundColor = QColor("#E0E0E0");
    m_disabledTextColor = QColor("#9E9E9E");
    m_disabledBorderColor = QColor("#BDBDBD");

    // 设置当前颜色
    m_currentBackgroundColor = m_normalBackgroundColor;
    m_currentTextColor = m_normalTextColor;
    m_currentBorderColor = m_normalBorderColor;

    // 设置圆角
    m_borderRadius = 8.0f;
    m_borderWidth = m_style == Outline || m_style == TextOnly ? 2 : 0;

    // 设置字体
    QFont font = this->font();
    font.setFamily("Segoe UI");
    font.setPointSize(m_fontSize);
    font.setWeight(QFont::Medium);
    setFont(font);

    update();
}

void AcademicPushButton::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // 绘制按钮背景
    drawButtonBackground(painter);

    // 绘制加载指示器（如果正在加载）
    if (m_loading) {
        drawLoadingIndicator(painter);
    } else {
        // 绘制图标
        drawButtonIcon(painter);

        // 绘制文本
        drawButtonText(painter);
    }
}

void AcademicPushButton::drawButtonBackground(QPainter &painter)
{
    QPainterPath path;
    QRectF rect = this->rect().adjusted(1, 1, -1, -1);

    // 创建圆角矩形路径
    path.addRoundedRect(rect, m_borderRadius, m_borderRadius);

    // 绘制背景
    painter.save();
    painter.setPen(Qt::NoPen);
    painter.setBrush(m_currentBackgroundColor);
    painter.drawPath(path);
    painter.restore();

    // 绘制边框（如果有）
    if (m_borderWidth > 0 && m_currentBorderColor.alpha() > 0) {
        painter.save();
        QPen pen(m_currentBorderColor, m_borderWidth);
        painter.setPen(pen);
        painter.setBrush(Qt::NoBrush);

        QRectF borderRect = rect.adjusted(m_borderWidth/2.0, m_borderWidth/2.0,
                                          -m_borderWidth/2.0, -m_borderWidth/2.0);
        QPainterPath borderPath;
        borderPath.addRoundedRect(borderRect, m_borderRadius, m_borderRadius);
        painter.drawPath(borderPath);
        painter.restore();
    }
}

void AcademicPushButton::drawButtonText(QPainter &painter)
{
    if (text().isEmpty()) return;

    painter.save();

    // 设置文本颜色
    painter.setPen(m_currentTextColor);

    // 设置字体
    QFont font = this->font();
    font.setPointSize(m_fontSize);
    painter.setFont(font);

    // 计算文本位置
    QRect textRect = this->rect();

    // 如果有图标，调整文本位置
    if (!m_icon.isNull()) {
        textRect.adjust(m_iconSize.width() + 8, 0, 0, 0);
    }

    // 绘制文本
    painter.drawText(textRect, Qt::AlignCenter, text());

    painter.restore();
}

void AcademicPushButton::drawButtonIcon(QPainter &painter)
{
    if (m_icon.isNull()) return;

    painter.save();

    // 计算图标位置（居左）
    int x = 16;
    int y = (height() - m_iconSize.height()) / 2;

    // 绘制图标
    QPixmap pixmap = m_icon.pixmap(m_iconSize);
    painter.drawPixmap(x, y, pixmap);

    painter.restore();
}

void AcademicPushButton::drawLoadingIndicator(QPainter &painter)
{
    painter.save();
    painter.setRenderHint(QPainter::Antialiasing);

    // 设置画笔
    QPen pen;
    pen.setWidth(3);
    pen.setColor(m_currentTextColor);
    pen.setCapStyle(Qt::RoundCap);
    painter.setPen(pen);
    painter.setBrush(Qt::NoBrush);

    // 计算圆形位置和大小
    int size = qMin(width(), height()) / 3;
    int x = (width() - size) / 2;
    int y = (height() - size) / 2;

    // 绘制旋转的加载指示器
    int startAngle = m_loadingAngle * 16;
    int spanAngle = 270 * 16;  // 3/4 圆

    painter.translate(width() / 2, height() / 2);
    painter.rotate(m_loadingAngle);
    painter.translate(-width() / 2, -height() / 2);

    painter.drawArc(x, y, size, size, startAngle, spanAngle);

    painter.restore();
}

void AcademicPushButton::enterEvent(QEnterEvent *event)
{
    Q_UNUSED(event);

    if (!isEnabled()) return;

    m_hovered = true;
    updateCursor();

    if (m_animationEnabled) {
        animatePress(false);  // 悬停时不是按下状态
    } else {
        m_currentBackgroundColor = m_hoverBackgroundColor;
        m_currentTextColor = m_hoverTextColor;
        m_currentBorderColor = m_hoverBorderColor;
        update();
    }

    emit mouseEntered();
}

void AcademicPushButton::leaveEvent(QEvent *event)
{
    Q_UNUSED(event);

    m_hovered = false;
    m_pressed = false;
    updateCursor();

    if (m_animationEnabled) {
        animatePress(false);
    } else {
        m_currentBackgroundColor = m_normalBackgroundColor;
        m_currentTextColor = m_normalTextColor;
        m_currentBorderColor = m_normalBorderColor;
        update();
    }

    emit mouseLeft();
}

void AcademicPushButton::mousePressEvent(QMouseEvent *event)
{
    if (!isEnabled()) return;

    if (event->button() == Qt::LeftButton) {
        m_pressed = true;

        if (m_animationEnabled) {
            animatePress(true);
        } else {
            m_currentBackgroundColor = m_pressedBackgroundColor;
            m_currentTextColor = m_pressedTextColor;
            m_currentBorderColor = m_pressedBorderColor;
            update();
        }

        // 轻微的缩放动画
        if (m_animationEnabled) {
            m_scaleAnimation->stop();
            QRect currentRect = geometry();
            QRect targetRect = currentRect.adjusted(1, 1, -1, -1);
            m_scaleAnimation->setStartValue(currentRect);
            m_scaleAnimation->setEndValue(targetRect);
            m_scaleAnimation->start();
        }

        emit buttonPressed();
    }

    QPushButton::mousePressEvent(event);
}

void AcademicPushButton::mouseReleaseEvent(QMouseEvent *event)
{
    if (!isEnabled()) return;

    if (event->button() == Qt::LeftButton) {
        m_pressed = false;

        if (m_animationEnabled) {
            animatePress(false);
        } else {
            if (m_hovered) {
                m_currentBackgroundColor = m_hoverBackgroundColor;
                m_currentTextColor = m_hoverTextColor;
                m_currentBorderColor = m_hoverBorderColor;
            } else {
                m_currentBackgroundColor = m_normalBackgroundColor;
                m_currentTextColor = m_normalTextColor;
                m_currentBorderColor = m_normalBorderColor;
            }
            update();
        }

        // 恢复缩放
        if (m_animationEnabled) {
            m_scaleAnimation->stop();
            QRect currentRect = geometry();
            QRect targetRect = currentRect.adjusted(-1, -1, 1, 1);
            m_scaleAnimation->setStartValue(currentRect);
            m_scaleAnimation->setEndValue(targetRect);
            m_scaleAnimation->start();
        }

        emit buttonReleased();
    }

    QPushButton::mouseReleaseEvent(event);
}

void AcademicPushButton::resizeEvent(QResizeEvent *event)
{
    QPushButton::resizeEvent(event);
    update();
}

void AcademicPushButton::updateLoadingAnimation()
{
    m_loadingAngle = (m_loadingAngle + 10) % 360;
    update();
}

void AcademicPushButton::updateCursor()
{
    if (isEnabled()) {
        setCursor(Qt::PointingHandCursor);  // 始终显示手指光标
    } else {
        setCursor(Qt::ArrowCursor);
    }
}

void AcademicPushButton::animatePress(bool pressed)
{
    if (m_colorAnimation->state() == QPropertyAnimation::Running) {
        m_colorAnimation->stop();
    }

    QColor targetBg, targetText, targetBorder;

    if (!isEnabled()) {
        targetBg = m_disabledBackgroundColor;
        targetText = m_disabledTextColor;
        targetBorder = m_disabledBorderColor;
    } else if (pressed) {
        targetBg = m_pressedBackgroundColor;
        targetText = m_pressedTextColor;
        targetBorder = m_pressedBorderColor;
    } else if (m_hovered) {
        targetBg = m_hoverBackgroundColor;
        targetText = m_hoverTextColor;
        targetBorder = m_hoverBorderColor;
    } else {
        targetBg = m_normalBackgroundColor;
        targetText = m_normalTextColor;
        targetBorder = m_normalBorderColor;
    }

    m_colorAnimation->setStartValue(m_currentBackgroundColor);
    m_colorAnimation->setEndValue(targetBg);
    m_colorAnimation->start();

    m_currentBackgroundColor = targetBg;
    m_currentTextColor = targetText;
    m_currentBorderColor = targetBorder;

    update();
}

// ==================== 公有接口实现 ====================

void AcademicPushButton::setStyle(ButtonStyle style)
{
    if (m_style != style) {
        m_style = style;
        applyAcademicStyle();
        update();
    }
}

AcademicPushButton::ButtonStyle AcademicPushButton::style() const
{
    return m_style;
}

void AcademicPushButton::setSize(ButtonSize size)
{
    if (m_size != size) {
        m_size = size;
        updateSize();
        update();
    }
}

AcademicPushButton::ButtonSize AcademicPushButton::size() const
{
    return m_size;
}

void AcademicPushButton::setBackgroundColor(const QColor &color)
{
    if (m_currentBackgroundColor != color) {
        m_currentBackgroundColor = color;
        update();
    }
}

QColor AcademicPushButton::backgroundColor() const
{
    return m_currentBackgroundColor;
}

void AcademicPushButton::setTextColor(const QColor &color)
{
    if (m_currentTextColor != color) {
        m_currentTextColor = color;
        update();
    }
}

QColor AcademicPushButton::textColor() const
{
    return m_currentTextColor;
}

void AcademicPushButton::setBorderColor(const QColor &color)
{
    if (m_currentBorderColor != color) {
        m_currentBorderColor = color;
        update();
    }
}

QColor AcademicPushButton::borderColor() const
{
    return m_currentBorderColor;
}

void AcademicPushButton::setHoverColor(const QColor &color)
{
    m_hoverBackgroundColor = color;
}

QColor AcademicPushButton::hoverColor() const
{
    return m_hoverBackgroundColor;
}

void AcademicPushButton::setPressedColor(const QColor &color)
{
    m_pressedBackgroundColor = color;
}

QColor AcademicPushButton::pressedColor() const
{
    return m_pressedBackgroundColor;
}

void AcademicPushButton::setBorderRadius(float radius)
{
    if (qAbs(m_borderRadius - radius) > 0.1f) {
        m_borderRadius = radius;
        update();
    }
}

float AcademicPushButton::borderRadius() const
{
    return m_borderRadius;
}

void AcademicPushButton::setBorderWidth(int width)
{
    if (m_borderWidth != width) {
        m_borderWidth = width;
        update();
    }
}

int AcademicPushButton::borderWidth() const
{
    return m_borderWidth;
}

void AcademicPushButton::setShadowEnabled(bool enabled)
{
    if (m_shadowEnabled != enabled) {
        m_shadowEnabled = enabled;
        m_shadowEffect->setEnabled(enabled);
        update();
    }
}

bool AcademicPushButton::shadowEnabled() const
{
    return m_shadowEnabled;
}

void AcademicPushButton::setIcon(const QIcon &icon)
{
    m_icon = icon;
    update();
}

void AcademicPushButton::setIconSize(const QSize &size)
{
    m_iconSize = size;
    update();
}

void AcademicPushButton::setAnimationEnabled(bool enabled)
{
    m_animationEnabled = enabled;
}

bool AcademicPushButton::animationEnabled() const
{
    return m_animationEnabled;
}

void AcademicPushButton::setAnimationDuration(int duration)
{
    m_animationDuration = duration;
    m_colorAnimation->setDuration(duration);
}

int AcademicPushButton::animationDuration() const
{
    return m_animationDuration;
}

void AcademicPushButton::setAcademicTheme()
{
    applyAcademicStyle();
}

void AcademicPushButton::setModernTheme()
{
    // 现代主题 - 更简约
    m_normalBackgroundColor = QColor("#6200EE");
    m_hoverBackgroundColor = QColor("#3700B3");
    m_pressedBackgroundColor = QColor("#03DAC6");
    m_normalTextColor = QColor("#FFFFFF");

    m_borderRadius = 4.0f;
    m_borderWidth = 0;

    updateColors();
    update();
}

void AcademicPushButton::setClassicTheme()
{
    // 经典主题
    m_normalBackgroundColor = QColor("#007ACC");
    m_hoverBackgroundColor = QColor("#005A9E");
    m_pressedBackgroundColor = QColor("#1C97EA");
    m_normalTextColor = QColor("#FFFFFF");

    m_borderRadius = 0;
    m_borderWidth = 1;

    updateColors();
    update();
}

void AcademicPushButton::setLoading(bool loading)
{
    if (m_loading != loading) {
        m_loading = loading;

        if (loading) {
            m_loadingAngle = 0;
            m_loadingTimer->start();
            setEnabled(false);
        } else {
            m_loadingTimer->stop();
            setEnabled(true);
        }

        update();
    }
}

bool AcademicPushButton::isLoading() const
{
    return m_loading;
}

void AcademicPushButton::setEnabled(bool enabled)
{
    QPushButton::setEnabled(enabled);

    if (enabled) {
        m_currentBackgroundColor = m_normalBackgroundColor;
        m_currentTextColor = m_normalTextColor;
        m_currentBorderColor = m_normalBorderColor;
    } else {
        m_currentBackgroundColor = m_disabledBackgroundColor;
        m_currentTextColor = m_disabledTextColor;
        m_currentBorderColor = m_disabledBorderColor;
    }

    updateCursor();
    update();
}

void AcademicPushButton::updateColors()
{
    if (!isEnabled()) {
        m_currentBackgroundColor = m_disabledBackgroundColor;
        m_currentTextColor = m_disabledTextColor;
        m_currentBorderColor = m_disabledBorderColor;
    } else if (m_pressed) {
        m_currentBackgroundColor = m_pressedBackgroundColor;
        m_currentTextColor = m_pressedTextColor;
        m_currentBorderColor = m_pressedBorderColor;
    } else if (m_hovered) {
        m_currentBackgroundColor = m_hoverBackgroundColor;
        m_currentTextColor = m_hoverTextColor;
        m_currentBorderColor = m_hoverBorderColor;
    } else {
        m_currentBackgroundColor = m_normalBackgroundColor;
        m_currentTextColor = m_normalTextColor;
        m_currentBorderColor = m_normalBorderColor;
    }
}

void AcademicPushButton::updateSize()
{
    switch (m_size) {
    case Small:
        m_paddingHorizontal = 16;
        m_paddingVertical = 8;
        m_fontSize = 11;
        m_iconSize = QSize(16, 16);
        break;
    case Medium:
        m_paddingHorizontal = 24;
        m_paddingVertical = 12;
        m_fontSize = 12;
        m_iconSize = QSize(20, 20);
        break;
    case Large:
        m_paddingHorizontal = 32;
        m_paddingVertical = 16;
        m_fontSize = 14;
        m_iconSize = QSize(24, 24);
        break;
    }

    // 更新字体
    QFont font = this->font();
    font.setPointSize(m_fontSize);
    setFont(font);

    // 更新按钮大小
    QFontMetrics fm(font);
    int textWidth = fm.horizontalAdvance(text());
    int iconWidth = m_icon.isNull() ? 0 : (m_iconSize.width() + 8);
    int width = textWidth + iconWidth + m_paddingHorizontal * 2;
    int height = fm.height() + m_paddingVertical * 2;

    setFixedSize(width, height);
}
