
void FUN_100757500(long param_1,QString *param_2)

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
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CVmConvertDialog","Dialog",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100757570;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100757570:
  puVar2 = PTR_shared_null_1021e1288;
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x18));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007575b8;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007575b8:
  local_40 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x20));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007575f9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007575f9:
  local_48 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x28));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10075763a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10075763a:
  pQVar1 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_50,"CVmConvertDialog",
             "This virtual machine needs to be converted before it can be used with Parallels Desktop."
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10075769b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10075769b:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate
            ((char *)&local_58,"CVmConvertDialog",
             "You should back it up before converting in case you want to use it later with an older version of this software. The virtual machine backup requires %1 of free disk space."
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007576fc;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007576fc:
  pQVar1 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate
            ((char *)&local_60,"CVmConvertDialog",
             "Mind that Boot Camp partitions are excluded from the virtual machine backup.",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10075775d;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10075775d:
  pQVar1 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_68,"CVmConvertDialog","Cancel",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007577be;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007577be:
  pQVar1 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate((char *)&local_70,"CVmConvertDialog","Back Up and Convert",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10075781f;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10075781f:
  pQVar1 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_78,"CVmConvertDialog","Convert",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
  return;
}

