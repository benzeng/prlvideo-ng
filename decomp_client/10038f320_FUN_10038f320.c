
void FUN_10038f320(long param_1,QString *param_2)

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
  
  QCoreApplication::translate
            ((char *)&local_38,"CPresentationModeDialog","Are you going to show a presentation?",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038f392;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10038f392:
  pQVar1 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_40,"CPresentationModeDialog",
             "Are you going to show a presentation\nin Parallels Desktop?",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038f3f3;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10038f3f3:
  puVar2 = PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x38));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038f43b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10038f43b:
  pQVar1 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate((char *)&local_50,"CPresentationModeDialog"," Use Mirroring",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038f49c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10038f49c:
  pQVar1 = *(QString **)(param_1 + 0x98);
  QCoreApplication::translate((char *)&local_58,"CPresentationModeDialog","No",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038f500;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10038f500:
  pQVar1 = *(QString **)(param_1 + 0xb0);
  QCoreApplication::translate((char *)&local_60,"CPresentationModeDialog","Yes",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038f564;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10038f564:
  pQVar1 = *(QString **)(param_1 + 0xd8);
  QCoreApplication::translate((char *)&local_68,"CPresentationModeDialog","Hold",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038f5c8;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10038f5c8:
  local_70 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0xe0));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10038f60c;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10038f60c:
  pQVar1 = *(QString **)(param_1 + 0xe8);
  QCoreApplication::translate
            ((char *)&local_78,"CPresentationModeDialog","to remember the choice for this display",0
            );
  QLabel::setText(pQVar1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
  return;
}

