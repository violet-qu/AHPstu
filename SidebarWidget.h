// SidebarWidget.h
#ifndef SIDEBARWIDGET_H
#define SIDEBARWIDGET_H

#include <QWidget>
#include <QToolBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMap>

class SidebarWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SidebarWidget(QWidget *parent = nullptr);

    // 获取抽屉部件
    QToolBox* toolbox() const;

    // 获取按钮引用
    QPushButton* archiveQueryButton() const;
    QPushButton* archiveDeleteButton() const;
    QPushButton* archiveModifyButton() const;
    QPushButton* archiveAddButton() const;

    QToolBox *m_toolBox;

    // 三个主页面签
    QWidget *m_archiveSection;
    QWidget *m_analysisSection;
    QWidget *m_systemSection;

    // 档案管理按钮
    QPushButton *m_btnQuery;
    QPushButton *m_btnDelete;
    QPushButton *m_btnModify;
    QPushButton *m_btnAdd;

signals:
    // 档案管理按钮点击信号
    void archiveQueryClicked();
    void archiveDeleteClicked();
    void archiveModifyClicked();
    void archiveAddClicked();

private slots:
    void onArchiveQueryClicked();
    void onArchiveDeleteClicked();
    void onArchiveModifyClicked();
    void onArchiveAddClicked();

private:
    void initUI();
    void createArchiveManagementSection();
    void createStudentAnalysisSection();
    void createSystemManagementSection();
    QPushButton* createStyledButton(const QString &text, const QString &color = "#1565C0");

    // 应用学术风格
    void applyAcademicStyle();

private:

};

#endif // SIDEBARWIDGET_H
