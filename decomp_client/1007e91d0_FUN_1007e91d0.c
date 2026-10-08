
void FUN_1007e91d0(long param_1,QString *param_2)

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
      if ((bool)local_29) goto LAB_1007e922c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007e922c:
  pQVar1 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_40,"CCreateVmDumpDialog","Show in Finder",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e928d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007e928d:
  pQVar1 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_48,"CCreateVmDumpDialog","Close",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e92ee;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007e92ee:
  local_50 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x68));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e932f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007e932f:
  pQVar1 = *(QString **)(param_1 + 0x80);
  QCoreApplication::translate
            ((char *)&local_58,"CCreateVmDumpDialog","Error generating the @VM_NAME core dump",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e9393;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007e9393:
  local_60 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0xa8));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e93d7;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007e93d7:
  pQVar1 = *(QString **)(param_1 + 200);
  QCoreApplication::translate
            ((char *)&local_68,"CCreateVmDumpDialog",
             "The @VM_NAME core dump has been successfully generated",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return;
}

