
QString * FUN_100def650(QString *param_1,ulong param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  QString *pQVar4;
  float fVar5;
  float local_6c;
  QLocale local_68 [8];
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  fVar5 = (float)param_2 * DAT_100e27648;
  local_6c = DAT_100e27648 * fVar5;
  bVar2 = DAT_101db39e4 < fVar5;
  bVar1 = local_6c <= DAT_101db39e4;
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,0x1f1efa2);
  if (fVar5 <= DAT_101db39e4) {
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1f1efa9);
    QString::operator=(&local_38,&local_40);
    local_6c = fVar5;
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100def8f8;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  else if (bVar2 && bVar1) {
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,0x1df9529);
    QString::operator=(&local_38,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_29 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100def8f8;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
  else {
    if (local_6c <= DAT_101db39e4) {
      QString::number((ulonglong)&local_58,(int)param_2);
      param_1->field0_0x0 = local_58.field0_0x0;
      if (1 < *(int *)local_58.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
        local_29 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(param_1);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_29 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100def9aa;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
      goto LAB_100def9aa;
    }
    QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,0x1df3c3e);
    QString::operator=(&local_38,&local_50);
    local_6c = local_6c * DAT_100e27648;
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_29 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100def8f8;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
  }
LAB_100def8f8:
  QString::number((double)local_6c,(char)&local_60,0x66);
  if (param_3 != '\0') {
    QString::append(&local_60);
  }
  QLocale::QLocale(local_68);
  uVar3 = QLocale::decimalPoint();
  pQVar4 = (QString *)QString::replace(&local_60,0x2e,uVar3,1);
  QString::operator=(&local_60,pQVar4);
  QLocale::~QLocale(local_68);
  param_1->field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_29 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100def9aa;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100def9aa:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return param_1;
}

