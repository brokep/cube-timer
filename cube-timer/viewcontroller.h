#ifndef VIEWCONTROLLER_H
#define VIEWCONTROLLER_H

#include <QObject>

#define VC_LISTEN_PORT 8080

class DBHandle;
class MainPageView;
class TimesPageView;
class QSettings;

class ViewController : public QObject
{
    Q_OBJECT

    QObject* m_rootItem;

    DBHandle* m_database;

    MainPageView* m_mainPageView;
    TimesPageView* m_timesPageView;

public:
    explicit ViewController(QObject* rootItem, QObject *parent = nullptr);
    ~ViewController();

signals:
public slots:
    void updateTimesPage();

private:
    void setupServer();
    void findLANAddr();

};

#endif // VIEWCONTROLLER_H
