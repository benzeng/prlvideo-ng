
void FUN_1005b5ca0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  QArrayData *pQVar1;
  undefined8 uVar2;
  QArrayData *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [104];
  QArrayData *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  pQVar1 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_38 = 2;
  local_40 = pQVar1;
  FUN_100260700(local_a8,param_3);
  FUN_1005bca00(uVar2,&local_40,local_a8);
  FUN_10005e410(local_a8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005b5d56;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005b5d56:
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_b0 = 2;
  local_b8 = pQVar1;
  FUN_100840070(param_1,&local_b8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005b5dbf;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1005b5dbf:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

