
void FUN_10072bd90(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CSilentStartDialog","Parallels Desktop",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10072be00;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10072be00:
  puVar2 = PTR_shared_null_1021e1288;
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x30));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10072be48;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10072be48:
  local_40 = (QArrayData *)puVar2;
  CElidedLabel::setText(*(QString **)(param_1 + 0x38));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10072be89;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10072be89:
  local_48 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x48));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10072beca;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10072beca:
  pQVar1 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_50,"CSilentStartDialog","Show",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

