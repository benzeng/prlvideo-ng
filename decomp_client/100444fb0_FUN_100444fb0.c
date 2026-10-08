
void FUN_100444fb0(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10044500a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10044500a:
  pQVar1 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_38,"CVmEdExpirationDialog","Time Server:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10044506b;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10044506b:
  pQVar1 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_40,"CVmEdExpirationDialog","Date Check Frequency:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004450cc;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004450cc:
  pQVar1 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate
            ((char *)&local_48,"CVmEdExpirationDialog","If unable to check date, use VM for:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10044512d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10044512d:
  pQVar1 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_50,"CVmEdExpirationDialog","days",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10044518e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10044518e:
  pQVar1 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate((char *)&local_58,"CVmEdExpirationDialog","Contact Info:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004451ef;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004451ef:
  pQVar1 = *(QString **)(param_1 + 0x88);
  QCoreApplication::translate
            ((char *)&local_60,"CVmEdExpirationDialog","Do not allow this VM to start after:",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return;
}

