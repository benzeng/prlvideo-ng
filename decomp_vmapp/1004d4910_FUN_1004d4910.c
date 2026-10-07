
void FUN_1004d4910(long param_1,undefined8 *param_2,long *param_3)

{
  QArrayData *pQVar1;
  char cVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  uVar5 = param_1 + 8U | 1;
  pQVar1 = (QArrayData *)*param_2;
  uVar6 = uVar5;
  if (((10000 < *(int *)(pQVar1 + 4)) ||
      (pQVar4 = (QArrayData *)*param_3, 10000 < *(int *)(pQVar4 + 4))) ||
     (100 < *(int *)(*(long *)(param_1 + 0x18) + 0xc) - *(int *)(*(long *)(param_1 + 0x18) + 8)))
  goto LAB_1004d4a80;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
    pQVar4 = (QArrayData *)*param_3;
  }
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  local_48 = pQVar1;
  local_40 = pQVar4;
  if (*(int *)(*(long *)(param_1 + 0x10) + 0xc) == *(int *)(*(long *)(param_1 + 0x10) + 8)) {
    FUN_1004d5b60(param_1 + 0x18,&local_48);
  }
  else {
    uVar3 = FUN_1004d5c70(param_1 + 0x10);
    uVar6 = param_1 + 8U & 0xfffffffffffffffe;
    QMutex::unlock();
    cVar2 = FUN_1004d5df0(param_1,&local_48,uVar3);
    if (cVar2 == '\0') {
      bVar7 = uVar6 != 0;
      uVar6 = 0;
      if (bVar7) {
        QMutex::lock();
        uVar6 = uVar5;
      }
      FUN_1004d5b60(param_1 + 0x18,&local_48);
    }
  }
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d4a55;
    }
    QArrayData::deallocate(pQVar4,1,8);
  }
LAB_1004d4a55:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d4a80;
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1004d4a80:
  if ((uVar6 & 1) != 0) {
    QMutex::unlock();
  }
  return;
}

