
undefined8 FUN_1003bf970(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
  FUN_1003be560(&local_28,param_2,6,param_2 & 0xffffffff);
  lVar1 = FUN_1003b7b00(uVar2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_1003bf9d4;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1003bf9d4:
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100111ae0(lVar1);
  }
  return uVar2;
}

