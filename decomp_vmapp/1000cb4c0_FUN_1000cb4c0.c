
ulong FUN_1000cb4c0(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  FUN_1000c81f0(param_1,0x2000000);
  local_28 = (QArrayData *)QString::fromAscii_helper((char *)0x0,-1);
  cVar1 = FUN_1000c8c50(param_1,param_2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_1000cb52d;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1000cb52d:
  if (cVar1 == '\0') {
    uVar2 = (ulong)*(uint *)(param_1 + 500);
  }
  else {
    uVar2 = FUN_1000cb5b0(param_1);
    *(int *)(param_1 + 500) = (int)uVar2;
  }
  if ((int)uVar2 < 0) {
    FUN_1000cb6c0(param_1);
    FUN_1000c6990(param_1);
    uVar2 = (ulong)*(uint *)(param_1 + 500);
  }
  return uVar2;
}

