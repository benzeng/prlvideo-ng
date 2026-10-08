
undefined1 FUN_100a77760(long param_1,long param_2)

{
  undefined1 uVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  QMutex::lock();
  if (*(int *)(param_1 + 0xa0) != 1) {
    uVar1 = 0;
    goto LAB_100a777f4;
  }
  FUN_100aab4f0(&local_30,*(undefined8 *)(param_1 + 0x348),*(undefined8 *)(param_1 + 0x328));
  QByteArray::operator=((QByteArray *)(param_2 + 8),(QByteArray *)&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100a777e1;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100a777e1:
  uVar1 = FUN_100a74fc0(param_2);
LAB_100a777f4:
  QMutex::unlock();
  return uVar1;
}

