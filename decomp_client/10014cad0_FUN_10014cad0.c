
void FUN_10014cad0(long param_1)

{
  QString *pQVar1;
  char cVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  QFileInfo local_28 [8];
  QString local_20;
  undefined1 local_11;
  
  CPrlFileDevSelectorWidget::getCurrentSystemName();
  if (*(int *)(local_20.field0_0x0 + 4) == 0) goto LAB_10014cc10;
  cVar2 = QString::endsWith(&local_20,0x2f,1);
  if ((cVar2 != '\0') || (cVar2 = QString::endsWith(&local_20,0x5c,1), cVar2 != '\0')) {
    QString::chop((int)&local_20);
  }
  QFileInfo::QFileInfo(local_28,&local_20);
  QFileInfo::fileName();
  pQVar1 = *(QString **)(param_1 + 0xc0);
  if (*(int *)(local_30 + 4) == 0) {
    QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,0x1dc1b98);
  }
  else {
    local_38 = local_30;
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
    }
  }
  QLineEdit::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10014cbd3;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10014cbd3:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10014cc03;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10014cc03:
  QFileInfo::~QFileInfo(local_28);
LAB_10014cc10:
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return;
}

