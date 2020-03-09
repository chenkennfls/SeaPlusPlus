#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QObject>
#include <QLayout>
#include <QPixmap>

#include <QMediaPlayer>

class StartMenuWindow : public QWidget
{
  Q_OBJECT

public:
  StartMenuWindow(QWidget *parent = nullptr);
  ~StartMenuWindow();

private:

  QPushButton* startButton = nullptr;
  QPushButton* quitButton = nullptr;
  QPushButton* tutorialButton = nullptr;
  QPushButton* soundPlayButton = nullptr;
  QPushButton* soundPauseButton = nullptr;
  QGridLayout* startMenuLayout=nullptr;

signals:
   void startButtonPressed();
   void tutorialButtonPressed();
   void quitButtonPressed();
   void soundPlayButtonPressed();
   void soundPauseButtonPressed();

public slots:
   void handleStartButtontPressed();
   void handleTutorialButtonPressed();
   void handleQuitButtonPressed();
   void handleSoundPlayButtonPressed();
   void handleSoundPauseButtonPressed();

};

#endif


