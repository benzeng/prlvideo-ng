
void FUN_10075b460(undefined8 param_1,long param_2)

{
  char cVar1;
  CAbstractWebView *pCVar2;
  undefined8 uVar3;
  QWidget *pQVar4;
  long local_40;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (param_2 == 0) {
    return;
  }
  pCVar2 = operator_new(0x38);
  CAbstractWizardPage::wizardCtrl();
  uVar3 = CWizardController::parentWidget();
  CAbstractWebView::CAbstractWebView(pCVar2,uVar3,0,0);
  local_30 = (QArrayData *)QString::fromAscii_helper("webView",7);
  pQVar4 = (QWidget *)qt_qFindChild_helper(param_2,&local_30,PTR_staticMetaObject_1021e1488,1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10075b509;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10075b509:
  CDeclarativeWidgetPlaceholder::setWidget(pQVar4);
  QObject::connect(&local_38,pCVar2,"2loadStarted()",param_1,"1onLoadStarted()",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,pCVar2,"2loadFinished(bool)",param_1,"1onLoadFinished(bool)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,pCVar2,"2loadFinished(bool)",param_1,"1onLoadFinished(bool)",0);
    if ((cVar1 != '\0') && (local_40 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

