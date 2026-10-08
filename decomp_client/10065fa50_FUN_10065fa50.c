
void FUN_10065fa50(undefined8 param_1)

{
  undefined8 uVar1;
  QWidget *pQVar2;
  QWidget *pQVar3;
  Connection local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  CAbstractWizardPage::wizardModel();
  uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  pQVar2 = (QWidget *)FUN_100680e70(uVar1);
  if (pQVar2 == (QWidget *)0x0) {
    return;
  }
  CAbstractWizardPage::wizardCtrl();
  CWizardController::parentWidget();
  QWidget::setParent(pQVar2);
  uVar1 = CDeclarativeWizardPage::pageContentItem();
  local_30 = (QArrayData *)QString::fromAscii_helper("webViewPlaceholder",0x12);
  pQVar3 = (QWidget *)qt_qFindChild_helper(uVar1,&local_30,PTR_staticMetaObject_1021e1488,1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10065fb0e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10065fb0e:
  CDeclarativeWidgetPlaceholder::setWidget(pQVar3);
  QObject::connect(local_38,pQVar2,"2linkClicked(const QUrl&)",param_1,"1onLinkClicked(const QUrl&)"
                   ,0x80);
  QMetaObject::Connection::~Connection(local_38);
  return;
}

