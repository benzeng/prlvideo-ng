
void FUN_1004d4b20(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  local_40 = param_2;
  QMutex::lock();
  uVar3 = param_1 + 8U | 1;
  if (*(int *)(*(long *)(param_1 + 0x18) + 0xc) == *(int *)(*(long *)(param_1 + 0x18) + 8)) {
    FUN_100036f00(param_1 + 0x10,&local_40);
    uVar2 = uVar3;
    goto LAB_1004d4c1a;
  }
  FUN_1004d6300(&local_50,param_1 + 0x18);
  uVar2 = param_1 + 8U & 0xfffffffffffffffe;
  QMutex::unlock();
  cVar1 = FUN_1004d5df0(param_1,&local_50,param_2);
  if (cVar1 == '\0') {
    bVar4 = uVar2 != 0;
    uVar2 = 0;
    if (bVar4) {
      QMutex::lock();
      uVar2 = uVar3;
    }
    FUN_1004d6420(param_1 + 0x18,&local_50);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d4bee;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1004d4bee:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d4c1a;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1004d4c1a:
  if ((uVar2 & 1) != 0) {
    QMutex::unlock();
  }
  return;
}

