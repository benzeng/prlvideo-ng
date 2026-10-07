
void FUN_1005a4720(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  QArrayData *pQVar1;
  int iVar2;
  undefined8 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar1 = (QArrayData *)*param_2;
  iVar2 = *(int *)pQVar1;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
    iVar2 = *(int *)pQVar1;
  }
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
    iVar2 = *(int *)pQVar1;
  }
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_48 = param_4;
  local_40 = pQVar1;
  FUN_1005a4950(param_3,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a47b9;
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1005a47b9:
  if (*(int *)pQVar1 == -1) goto LAB_1005a480f;
  if (*(int *)pQVar1 == 0) {
LAB_1005a47d2:
    QArrayData::deallocate(pQVar1,1,8);
  }
  else {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + -1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
    if (!(bool)local_31) goto LAB_1005a47d2;
  }
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a480f;
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1005a480f:
  FUN_1005a4000(param_1,1,param_4,
                ((*(ulong *)(param_1 + 0x20) - 1) + (long)*(int *)(*param_2 + 4)) /
                *(ulong *)(param_1 + 0x20),param_5,1);
  return;
}

