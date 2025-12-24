// SidebarWidget.cpp
#include "sidebarwidget.h"
#include <QGraphicsDropShadowEffect>
#include <QIcon>

SidebarWidget::SidebarWidget(QWidget *parent): QWidget(parent)
{
    initUI();
    applyAcademicStyle();
}

void SidebarWidget::initUI()
{
    // 设置主布局
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->setSpacing(0);

    // 创建工具箱（抽屉）
    m_toolBox = new QToolBox();
    m_toolBox->setObjectName("sidebarToolBox");
    m_toolBox->setFrameShape(QFrame::NoFrame);

    // 创建三个主页面签
    createArchiveManagementSection();
    createStudentAnalysisSection();
    createSystemManagementSection();

    // 添加抽屉项
    m_toolBox->addItem(m_archiveSection, "档案管理");
    m_toolBox->addItem(m_analysisSection, "学生成长分析");
    m_toolBox->addItem(m_systemSection, "系统管理");

    // 设置默认展开第一个
    m_toolBox->setCurrentIndex(0);

    mainLayout->addWidget(m_toolBox);
    mainLayout->addStretch();

    // 连接按钮信号
    connect(m_btnQuery, &QPushButton::clicked, this, &SidebarWidget::onArchiveQueryClicked);
    connect(m_btnDelete, &QPushButton::clicked, this, &SidebarWidget::onArchiveDeleteClicked);
    connect(m_btnModify, &QPushButton::clicked, this, &SidebarWidget::onArchiveModifyClicked);
    connect(m_btnAdd, &QPushButton::clicked, this, &SidebarWidget::onArchiveAddClicked);
}

QPushButton* SidebarWidget::createStyledButton(const QString &text, const QString &color)
{
    QPushButton *button = new QPushButton(text);
    button->setCursor(Qt::PointingHandCursor);
    button->setProperty("buttonStyle", color);

    // 基础样式
    QString baseStyle = QString(R"(
        QPushButton {
            text-align: left;
            padding: 14px 20px;
            border: none;
            background-color: white;
            color: #455A64;
            font-size: 14px;
            border-radius: 8px;
            margin: 4px 8px;
            border-left: 4px solid transparent;
        }
        QPushButton:hover {
            background-color: %1;
            color: %2;
            border-left: 4px solid %3;
        }
        QPushButton:pressed {
            background-color: %4;
        }
    )");

    // 根据颜色设置不同样式
    QString hoverColor, textColor, pressedColor;

    if (color == "#1565C0") { // 学术蓝
        hoverColor = "#E3F2FD";
        textColor = "#1565C0";
        pressedColor = "#BBDEFB";
    } else if (color == "#2E7D32") { // 绿色
        hoverColor = "#E8F5E9";
        textColor = "#2E7D32";
        pressedColor = "#C8E6C9";
    } else { // 默认灰色
        hoverColor = "#F5F5F5";
        textColor = "#37474F";
        pressedColor = "#E0E0E0";
    }

    button->setStyleSheet(baseStyle
                              .arg(hoverColor)
                              .arg(textColor)
                              .arg(color)
                              .arg(pressedColor));

    return button;
}

void SidebarWidget::createArchiveManagementSection()
{
    m_archiveSection = new QWidget();
    QVBoxLayout *layout = new QVBoxLayout(m_archiveSection);
    layout->setContentsMargins(0, 12, 0, 12);
    layout->setSpacing(4);

    // 创建四个按钮
    m_btnQuery = createStyledButton("查询档案", "#1565C0");
    m_btnDelete = createStyledButton("删除档案", "#1565C0");
    m_btnModify = createStyledButton("修改档案", "#1565C0");
    m_btnAdd = createStyledButton("增加档案", "#1565C0");

    // 设置图标（可选）
    // m_btnQuery->setIcon(QIcon(":/icons/search.png"));
    // m_btnQuery->setIconSize(QSize(16, 16));

    layout->addWidget(m_btnQuery);
    layout->addWidget(m_btnDelete);
    layout->addWidget(m_btnModify);
    layout->addWidget(m_btnAdd);
    layout->addStretch();
}

void SidebarWidget::createStudentAnalysisSection()
{
    m_analysisSection = new QWidget();
    QVBoxLayout *layout = new QVBoxLayout(m_analysisSection);
    layout->setContentsMargins(0, 12, 0, 12);
    layout->setSpacing(4);

    // 创建示例按钮
    QPushButton *btn1 = createStyledButton("学业成绩分析", "#2E7D32");
    QPushButton *btn2 = createStyledButton("综合素质评估", "#2E7D32");
    QPushButton *btn3 = createStyledButton("成长轨迹分析", "#2E7D32");
    QPushButton *btn4 = createStyledButton("数据报表导出", "#2E7D32");

    layout->addWidget(btn1);
    layout->addWidget(btn2);
    layout->addWidget(btn3);
    layout->addWidget(btn4);
    layout->addStretch();
}

void SidebarWidget::createSystemManagementSection()
{
    m_systemSection = new QWidget();
    QVBoxLayout *layout = new QVBoxLayout(m_systemSection);
    layout->setContentsMargins(0, 12, 0, 12);
    layout->setSpacing(4);

    // 创建示例按钮
    QPushButton *btn1 = createStyledButton("用户管理", "#546E7A");
    QPushButton *btn2 = createStyledButton("权限设置", "#546E7A");
    QPushButton *btn3 = createStyledButton("系统配置", "#546E7A");
    QPushButton *btn4 = createStyledButton("数据备份", "#546E7A");

    layout->addWidget(btn1);
    layout->addWidget(btn2);
    layout->addWidget(btn3);
    layout->addWidget(btn4);
    layout->addStretch();
}

void SidebarWidget::applyAcademicStyle()
{
    // 设置侧边栏整体样式
    this->setStyleSheet(R"(
        /* 工具箱样式 */
        QToolBox#sidebarToolBox {
            background-color: #FFFFFF;
            border: 1px solid #E0E0E0;
            border-radius: 10px;
            padding: 7px;
        }

        /* 抽屉标题样式 - 增加宽度和字体设置 */
        QToolBox::tab {
            background-color: #F5F7FA;
            color: #37474F;
            border: none;
            border-radius: 6px;
            padding: 30px 35px;            /* 增加内边距 */
            font-size: 18px;               /* 增加字体大小 */
            font-weight: bold;
            text-align: left;
            margin: 1px 0;
            min-height: 38px;
            min-width: 200px;              /* 设置最小宽度 */
        }

        QToolBox::tab:selected {
            background-color: #E3F2FD;
            color: #1565C0;
            border-left: 4px solid #1565C0;
        }

        QToolBox::tab:hover:!selected {
            background-color: #ECEFF1;
        }

        QToolBox::tab:!selected {
            margin-top: 2px;
        }

        /* 抽屉内容区域 */
        QToolBox QWidget {
            background-color: white;
        }

        /* 按钮样式 - 增加字体大小和宽度 */
        QPushButton {
            text-align: left;
            padding: 14px 20px;
            border: none;
            background-color: white;
            color: #455A64;
            font-size: 14px;               /* 按钮字体大小 */
            border-radius: 8px;
            margin: 4px 8px;
            border-left: 4px solid transparent;
            min-width: 180px;              /* 按钮最小宽度 */
        }

        QPushButton:hover {
            background-color: #E3F2FD;
            color: #1565C0;
            border-left: 4px solid #1565C0;
        }

        QPushButton:pressed {
            background-color: #BBDEFB;
        }

        /* 按钮选中状态 */
        QPushButton:checked {
            background-color: #BBDEFB !important;
            color: #1565C0 !important;
            font-weight: bold !important;
            border-left: 4px solid #1565C0 !important;
        }
    )");

    // 设置固定宽度 - 增加宽度让标签有更多空间
    this->setFixedWidth(280);  // 从260增加到280
    // 添加阴影效果
    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect(this);
    shadowEffect->setBlurRadius(20);
    shadowEffect->setOffset(0, 4);
    shadowEffect->setColor(QColor(0, 0, 0, 15));
    this->setGraphicsEffect(shadowEffect);
}

void SidebarWidget::onArchiveQueryClicked()
{
    emit archiveQueryClicked();
}

void SidebarWidget::onArchiveDeleteClicked()
{
    emit archiveDeleteClicked();
}

void SidebarWidget::onArchiveModifyClicked()
{
    emit archiveModifyClicked();
}

void SidebarWidget::onArchiveAddClicked()
{
    emit archiveAddClicked();
}

QToolBox* SidebarWidget::toolbox() const
{
    return m_toolBox;
}

QPushButton* SidebarWidget::archiveQueryButton() const
{
    return m_btnQuery;
}

QPushButton* SidebarWidget::archiveDeleteButton() const
{
    return m_btnDelete;
}

QPushButton* SidebarWidget::archiveModifyButton() const
{
    return m_btnModify;
}

QPushButton* SidebarWidget::archiveAddButton() const
{
    return m_btnAdd;
}
