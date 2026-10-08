
void FUN_100652100(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
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
  
  QCoreApplication::translate((char *)&local_38,"CCreateAccountPage","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100652172;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100652172:
  pQVar1 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_40,"CCreateAccountPage","Email:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006521d3;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006521d3:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_48,"CCreateAccountPage","Confirm password:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100652234;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100652234:
  pQVar1 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate((char *)&local_50,"CCreateAccountPage","Create Account",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100652295;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100652295:
  puVar2 = PTR_shared_null_1021e1288;
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x68));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006522dd;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006522dd:
  pQVar1 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate((char *)&local_60,"CCreateAccountPage","Password:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10065233e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10065233e:
  pQVar1 = *(QString **)(param_1 + 0x80);
  QCoreApplication::translate((char *)&local_68,"CCreateAccountPage","Name:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006523a2;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006523a2:
  local_70 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x88));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006523e6;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1006523e6:
  pQVar1 = *(QString **)(param_1 + 0x90);
  QCoreApplication::translate((char *)&local_78,"CCreateAccountPage","Pass warning",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10065244a;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10065244a:
  QLabel::setText(*(QString **)(param_1 + 0xa0));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_29 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10065248e;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_10065248e:
  QLabel::setText(*(QString **)(param_1 + 0xb0));
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

