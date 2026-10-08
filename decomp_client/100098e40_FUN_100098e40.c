
void FUN_100098e40(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  puVar2 = PTR_shared_null_1021e1288;
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100098e9f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100098e9f:
  pQVar1 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate((char *)&local_40,"CDragDropDialog","Stop",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100098f00;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100098f00:
  local_48 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x18));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100098f41;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100098f41:
  local_50 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x28));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100098f82;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100098f82:
  pQVar1 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_58,"CDragDropDialog","Stop",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100098fe3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100098fe3:
  pQVar1 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate((char *)&local_60,"CDragDropDialog","Replace",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100099044;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100099044:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_68,"CDragDropDialog","Skip",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000990a5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000990a5:
  local_70 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x50));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000990e6;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000990e6:
  local_78 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x58));
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100099127;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100099127:
  pQVar1 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_80,"CDragDropDialog","Stop",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100099188;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100099188:
  local_88 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x70));
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000991c9;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1000991c9:
  pQVar1 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate((char *)&local_90,"CDragDropDialog","Skip",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100099233;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100099233:
  local_98 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x80));
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100099283;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100099283:
  pQVar1 = *(QString **)(param_1 + 0x90);
  QCoreApplication::translate((char *)&local_a0,"CDragDropDialog","Close",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000992f0;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1000992f0:
  QLabel::setText(*(QString **)(param_1 + 0x98));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_29 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100099340;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_100099340:
  QLabel::setText(*(QString **)(param_1 + 0xa0));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
  return;
}

