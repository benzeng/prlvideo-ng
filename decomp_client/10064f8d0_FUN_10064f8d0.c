
void FUN_10064f8d0(long param_1)

{
  QString *pQVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x58);
  QLineEdit::text();
  QString::simplified();
  cVar2 = FUN_10064f5a0(param_1,uVar5,*(int *)(local_30 + 4) == 0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064f951;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10064f951:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064f981;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10064f981:
  if (cVar2 != '\0') {
    return;
  }
  QLineEdit::text();
  QString::simplified();
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064f9d9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10064f9d9:
  QLineEdit::setText(*(QString **)(*(long *)(param_1 + 0x48) + 0x70));
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70);
  bVar3 = WebUtils::isEMailValid(&local_40);
  cVar2 = FUN_10064f5a0(param_1,uVar5,bVar3 ^ 1);
  if (cVar2 != '\0') goto LAB_10064fe02;
  QLineEdit::text();
  QString::simplified();
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064fa61;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10064fa61:
  QLineEdit::text();
  QString::simplified();
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064fab2;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10064fab2:
  cVar2 = operator==(&local_50,&local_60);
  if ((cVar2 == '\0') || (*(int *)(local_50.field0_0x0 + 4) < 6)) {
    QLineEdit::clear();
    uVar6 = 1;
    QLineEdit::clear();
  }
  else {
    uVar6 = 0;
  }
  cVar2 = operator==(&local_50,&local_60);
  if (cVar2 == '\0') {
    pQVar1 = *(QString **)(*(long *)(param_1 + 0x48) + 0x90);
    QMetaObject::tr((char *)&local_70,(char *)&PTR_PTR_102223420,0x1e0b284);
    QLabel::setText(pQVar1);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_21 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10064fbf1;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
  else {
    pQVar1 = *(QString **)(*(long *)(param_1 + 0x48) + 0x90);
    if (*(int *)(local_50.field0_0x0 + 4) < 6) {
      QMetaObject::tr((char *)&local_78,(char *)&PTR_PTR_102223420,0x1e0b29b);
      QLabel::setText(pQVar1);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_21 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10064fbf1;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
    else {
      QLabel::clear();
    }
  }
LAB_10064fbf1:
  cVar2 = FUN_10064f5a0(param_1,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x60),uVar6);
  if (cVar2 == '\0') {
    bVar4 = (bool)CDeclarativeWizardProxyPage::sourcePage();
    QWidget::setDisabled(bVar4);
    uVar5 = FUN_10063f730(param_1);
    QLineEdit::text();
    QString::simplified();
    QLineEdit::text();
    QString::simplified();
    QLineEdit::text();
    FUN_100678dd0(uVar5,&local_80,&local_90,&local_a0);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_21 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10064fcd6;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_10064fcd6:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_21 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10064fd0c;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10064fd0c:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_21 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10064fd42;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_10064fd42:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10064fd72;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_10064fd72:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_21 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10064fda2;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_10064fda2:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064fdd2;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10064fdd2:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064fe02;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10064fe02:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

