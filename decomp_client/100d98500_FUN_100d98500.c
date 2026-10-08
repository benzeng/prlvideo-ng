
uint FUN_100d98500(undefined8 *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  QArrayData *local_30;
  undefined1 local_23;
  undefined1 local_22;
  
  if (param_2 == 0) {
    return 0;
  }
  local_30 = (QArrayData *)*param_1;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_23 = *(int *)local_30 != 0;
    UNLOCK();
  }
  if (*(int *)(local_30 + 4) == 0) {
    bVar3 = false;
  }
  else {
    uVar2 = FUN_100d970c0(param_2,&local_30);
    if ((uVar2 & 0x60) == 0) {
      bVar3 = (uVar2 & 0x10000) == 0;
    }
    else {
      bVar3 = false;
    }
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100d98591;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d98591:
  if (bVar3) {
    uVar1 = FUN_100d970c0(param_2,param_1);
    uVar1 = (uVar1 & 0x10) >> 4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

