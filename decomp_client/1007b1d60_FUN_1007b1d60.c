
void FUN_1007b1d60(long param_1,QString *param_2)

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
  
  QCoreApplication::translate((char *)&local_30,"CSnapshotDialog","Snapshot Manager",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007b1dd0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007b1dd0:
  pQVar1 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_38,"CSnapshotDialog","New...",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007b1e31;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007b1e31:
  pQVar1 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_40,"CSnapshotDialog","Edit...",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007b1e92;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007b1e92:
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  QAbstractButton::setText(*(QString **)(param_1 + 0x60));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007b1eda;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007b1eda:
  pQVar1 = *(QString **)(param_1 + 0x80);
  QCoreApplication::translate((char *)&local_50,"CSnapshotDialog","Go To",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007b1f3e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007b1f3e:
  pQVar1 = *(QString **)(param_1 + 0x88);
  QCoreApplication::translate((char *)&local_58,"CSnapshotDialog","Delete",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007b1fa2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007b1fa2:
  pQVar1 = *(QString **)(param_1 + 0x90);
  QCoreApplication::translate((char *)&local_60,"CSnapshotDialog","New Linked Clone...",0);
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

