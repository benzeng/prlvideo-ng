
void FUN_100783880(long param_1)

{
  QUrl *pQVar1;
  QSize *pQVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  QArrayData *local_50;
  QUrl local_48 [8];
  QVariant local_40;
  undefined1 local_29;
  
  pcVar5 = (char *)QAbstractScrollArea::viewport();
  QVariant::QVariant(&local_40,true);
  QObject::setProperty(pcVar5,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_40);
  QDeclarativeView::setResizeMode(*(undefined8 *)(param_1 + 0x40),0);
  pQVar1 = *(QUrl **)(param_1 + 0x40);
  local_50 = (QArrayData *)QString::fromAscii_helper("qrc:/qml/FeedbackPage.qml",0x19);
  QUrl::QUrl(local_48,&local_50,0);
  QDeclarativeView::setSource(pQVar1);
  QUrl::~QUrl(local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100783942;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100783942:
  QDeclarativeView::rootObject();
  uVar6 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1390);
  QObject::connect(&local_58,uVar6,"2sendClicked()",param_1,"2sendRequested()",0);
  if (local_58 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    cVar4 = '\0';
    QObject::connect(&local_60,uVar6,"2helpClicked()",param_1,"1onHelpRequested()",0);
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    cVar4 = '\0';
    QObject::connect(&local_60,uVar6,"2helpClicked()",param_1,"1onHelpRequested()",0);
    if (cVar3 != '\0') {
      if (local_60 == 0) {
        cVar4 = '\0';
      }
      else {
        cVar4 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  QObject::connect(&local_68,*(undefined8 *)(param_1 + 0x48),"2sendProblemReportChanged(bool)",
                   param_1,"1onSendProblemReportChanged()",0);
  if ((cVar4 == '\0') || (local_68 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,*(undefined8 *)(param_1 + 0x48),"2userMailChanged(const QString&)",
                     param_1,"1onUserMailChanged(const QString&)",0);
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,*(undefined8 *)(param_1 + 0x48),"2userMailChanged(const QString&)",
                     param_1,"1onUserMailChanged(const QString&)",0);
    if ((cVar4 != '\0') && (local_70 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  pQVar2 = *(QSize **)(param_1 + 0x40);
  (**(code **)((long)*pQVar2 + 0x70))(pQVar2);
  QWidget::setFixedSize(pQVar2);
  return;
}

