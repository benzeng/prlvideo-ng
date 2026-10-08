
void FUN_1001a4710(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CImportBootCampDialog","Dialog",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a4780;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001a4780:
  puVar2 = PTR_shared_null_1021e1288;
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x18));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a47c8;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001a47c8:
  local_40 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x20));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a4809;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001a4809:
  local_48 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x28));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a484a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001a484a:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate
            ((char *)&local_50,"CImportBootCampDialog",
             "This virtual machine needs to be converted before it can be used with Parallels Desktop."
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a48ab;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001a48ab:
  pQVar1 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate
            ((char *)&local_58,"CImportBootCampDialog",
             "You should back it up before converting in case you want to use it later with an older version of this software. The virtual machine backup requires %1 of free disk space."
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a490c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001a490c:
  pQVar1 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_60,"CImportBootCampDialog","Cancel",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a496d;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001a496d:
  pQVar1 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate((char *)&local_68,"CImportBootCampDialog","Import",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return;
}

