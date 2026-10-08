
undefined8 FUN_10075bd70(void)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_20;
  undefined1 local_12;
  
  uVar1 = CDeclarativeWizardPage::pageContentItem();
  local_20 = (QArrayData *)QString::fromAscii_helper("webView",7);
  lVar2 = qt_qFindChild_helper(uVar1,&local_20,PTR_staticMetaObject_1021e1488,1);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_12 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_12) goto LAB_10075bde1;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_10075bde1:
  uVar1 = 0;
  if (lVar2 != 0) {
    CDeclarativeWidgetPlaceholder::widget();
    uVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1378);
  }
  return uVar1;
}

