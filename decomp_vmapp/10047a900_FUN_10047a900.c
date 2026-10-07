
void FUN_10047a900(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  QArrayData *local_50;
  QArrayData *local_48;
  uint local_3c;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
  QString::toUtf8();
  QByteArray::operator=((QByteArray *)&local_38,(QByteArray *)&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10047a969;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10047a969:
  param_1 = param_1 + 8;
  FUN_10047a190(param_1,local_38 + *(long *)(local_38 + 0x10),*(undefined4 *)(local_38 + 4),0x20d1);
  QString::toUtf8();
  QByteArray::operator=((QByteArray *)&local_38,(QByteArray *)&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10047a9d1;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10047a9d1:
  local_3c = *(uint *)(local_38 + 4);
  FUN_10047a190(param_1,&local_3c,4,0x2321);
  if (param_4 < local_3c) {
    local_3c = param_4;
  }
  FUN_10047a190(param_1,local_38 + *(long *)(local_38 + 0x10),local_3c,0x20d2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return;
}

