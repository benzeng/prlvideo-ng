
void FUN_1004a9650(long param_1,QString *param_2)

{
  char *pcVar1;
  QString *pQVar2;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QVariant local_90;
  QString local_80;
  QVariant local_78;
  QArrayData *local_68;
  QString local_60;
  QVariant local_58;
  QString local_48;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CVmEdSoundDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004a96c3;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004a96c3:
  pcVar1 = *(char **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_48,"CVmEdSoundDialog","getSoundComboValue",0);
  QVariant::QVariant(&local_40,&local_48);
  QObject::setProperty(pcVar1,(QVariant *)"getter");
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004a9741;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1004a9741:
  pcVar1 = *(char **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_60,"CVmEdSoundDialog","setSoundComboValue",0);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty(pcVar1,(QVariant *)"setter");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004a97bf;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004a97bf:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_68,"CVmEdSoundDialog","Output:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004a9820;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004a9820:
  pcVar1 = *(char **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_80,"CVmEdSoundDialog","getSoundComboValue",0);
  QVariant::QVariant(&local_78,&local_80);
  QObject::setProperty(pcVar1,(QVariant *)"getter");
  QVariant::~QVariant(&local_78);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_21 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004a989e;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1004a989e:
  pcVar1 = *(char **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_98,"CVmEdSoundDialog","setSoundComboValue",0);
  QVariant::QVariant(&local_90,&local_98);
  QObject::setProperty(pcVar1,(QVariant *)"setter");
  QVariant::~QVariant(&local_90);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_21 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004a992e;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1004a992e:
  pQVar2 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_a0,"CVmEdSoundDialog","Input:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004a9998;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1004a9998:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_a8,"CVmEdSoundDialog","Sync volume with Mac",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004a9a02;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1004a9a02:
  pQVar2 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_b0,"CVmEdSoundDialog","Use Echo Cancellation",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      UNLOCK();
      if (*(int *)local_b0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
  return;
}

