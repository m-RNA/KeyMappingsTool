#ifndef ASSISTFUNCWINDOW_H
#define ASSISTFUNCWINDOW_H

#include <QMainWindow>

#define ASSIST_FUNC_SETTINGS "assist_func_settings.json"
#define ETS2_PATH "\\steamapps\\common\\Euro Truck Simulator 2\\"
#define ETS2_PLUGINS_DIR "plugins"

namespace Ui {
class AssistFuncWindow;
}

class AssistFuncWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AssistFuncWindow(QWidget *parent = nullptr);
    ~AssistFuncWindow();

signals:
    void stopWork();

private slots:
    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_checkBox_clicked();

private:
    Ui::AssistFuncWindow *ui;

    QString appDataDirPath;// 软件数据存放路径

    QString ETS2InstallPath;// 欧卡2安装目录

    bool ETS2_enableAutoCancelHandbrake = false;// 开启自动解除手刹

    void scanETS2InstallPath();// 扫描欧卡2安装路径

    bool checkETS2Plugin();// 检查欧卡2的遥测数据插件

    void startAssistFuncWork();// 开启辅助功能任务

    void saveSettings();// 保存设置到文件
    void loadSettings();// 加载设置

    void unsave();// 改动未保存
    void save();// 改动已保存
};

#endif // ASSISTFUNCWINDOW_H
