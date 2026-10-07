
undefined4 FUN_100610ea0(long param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QByteArray::QByteArray((QByteArray *)&local_28,0x1000,'\0');
  if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    pvVar2 = (void *)(param_1 + 0x2c);
  }
  else {
    pvVar2 = (void *)(param_1 + 0x102c);
  }
  _memcpy(local_28 + *(long *)(local_28 + 0x10),pvVar2,0x1000);
  uVar1 = FUN_100614f10(&local_28);
  QByteArray::fill((char)&local_28,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar1;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return uVar1;
}

