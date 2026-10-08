
void FUN_1005d1de0(long param_1)

{
  QPixmap *pQVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  QString *pQVar5;
  size_t sVar6;
  long lVar7;
  int iVar8;
  byte bVar9;
  QVariant local_a8;
  QPixmap local_98 [32];
  QString local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QString::trimmed();
  QString::toUpper();
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d1e3f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005d1e3f:
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68),0));
  local_50 = (QArrayData *)QString::fromAscii_helper("-",1);
  local_58 = (QArrayData *)QString::fromAscii_helper("",0);
  pQVar5 = (QString *)QString::replace(&local_40,&local_50,&local_58,1);
  QString::operator=(&local_40,pQVar5);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d1ecd;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005d1ecd:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d1efd;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005d1efd:
  if ((((5 < *(int *)(local_40.field0_0x0 + 4)) &&
       (QString::insert(&local_40,5,0x2d), 0xb < *(int *)(local_40.field0_0x0 + 4))) &&
      (QString::insert(&local_40,0xb,0x2d), 0x11 < *(int *)(local_40.field0_0x0 + 4))) &&
     ((QString::insert(&local_40,0x11,0x2d), 0x17 < *(int *)(local_40.field0_0x0 + 4) &&
      (QString::insert(&local_40,0x17,0x2d), 0x1d < *(int *)(local_40.field0_0x0 + 4))))) {
    QString::left((int)&local_60);
    QString::operator=(&local_40,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005d1fd6;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_1005d1fd6:
  puVar3 = PTR_s__a_z___A_Z___0_9__1__102274808;
  iVar8 = -1;
  if (PTR_s__a_z___A_Z___0_9__1__102274808 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s__a_z___A_Z___0_9__1__102274808);
    iVar8 = (int)sVar6;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar8);
  QRegExp::QRegExp((QRegExp *)&local_68,&local_70,1,0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d2042;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005d2042:
  if (*(int *)(local_40.field0_0x0 + 4) < 1) {
    bVar2 = false;
  }
  else {
    lVar7 = 0;
    do {
      QString::QString(&local_78,
                       *(undefined2 *)
                        (local_40.field0_0x0 + lVar7 * 2 + *(long *)(local_40.field0_0x0 + 0x10)));
      cVar4 = QRegExp::exactMatch(&local_68);
      if (cVar4 == '\0') {
        bVar9 = 1;
        if ((int)lVar7 - 5U < 0x13) {
          bVar9 = (byte)(0x3efbe >> ((char)lVar7 - 5U & 0x1f)) & 1;
        }
      }
      else {
        bVar9 = 0;
      }
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005d20f1;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_1005d20f1:
      bVar2 = true;
      if (bVar9 != 0) goto LAB_1005d2115;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(local_40.field0_0x0 + 4));
    bVar2 = false;
  }
LAB_1005d2115:
  QLineEdit::setText(*(QString **)(*(long *)(param_1 + 0x18) + 0x68));
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68),0));
  pQVar1 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x70);
  if (!bVar2) {
    QPixmap::QPixmap(local_98);
  }
  else {
    QObject::property((char *)&local_a8);
    FUN_10014c490(local_98,&local_a8);
  }
  QLabel::setPixmap(pQVar1);
  QPixmap::~QPixmap(local_98);
  if (bVar2) {
    QVariant::~QVariant(&local_a8);
  }
  CAbstractWizardPage::completeChanged();
  QRegExp::~QRegExp((QRegExp *)&local_68);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

