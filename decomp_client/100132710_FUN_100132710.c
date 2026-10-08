
void FUN_100132710(long param_1)

{
  undefined4 uVar1;
  QArrayData *local_20;
  undefined1 local_11;
  
  QComboBox::currentText();
  if (*(int *)(local_20 + 4) != 0) {
    uVar1 = QString::toInt((bool *)&local_20,0);
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    QComboBox::setCurrentIndex((int)param_1);
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

