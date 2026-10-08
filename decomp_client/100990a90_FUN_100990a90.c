
byte FUN_100990a90(long param_1)

{
  int iVar1;
  byte bVar2;
  QArrayData *local_28;
  undefined1 local_19;
  
  qgetenv((char *)&local_28);
  iVar1 = *(int *)(local_28 + 4);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_100990ae1;
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100990ae1:
  bVar2 = 1;
  if (iVar1 == 0) {
    bVar2 = (*(byte *)(param_1 + 0x40) & 0x40) >> 6;
  }
  return bVar2;
}

