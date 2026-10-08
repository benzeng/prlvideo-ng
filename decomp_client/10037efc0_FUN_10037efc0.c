
void FUN_10037efc0(long param_1,int param_2,undefined8 *param_3,undefined1 param_4)

{
  QArrayData *pQVar1;
  undefined8 uVar2;
  char cVar3;
  QArrayData *local_50 [2];
  QArrayData *local_40;
  undefined1 local_38;
  int local_30;
  undefined1 local_29;
  
  local_30 = param_2;
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    if (param_2 != 1) {
      return;
    }
  }
  else {
    cVar3 = FUN_10018ffc0();
    if ((param_2 != 1) && (cVar3 == '\x01')) {
      return;
    }
  }
  pQVar1 = (QArrayData *)*param_3;
  if (*(int *)(pQVar1 + 4) == 0) {
    FUN_100380040(param_1 + 0x28,&local_30);
  }
  else {
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    local_40 = pQVar1;
    local_38 = param_4;
    FUN_100380130(param_1 + 0x28,&local_30,&local_40);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10037f083;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10037f083:
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  FUN_10037f160(local_50,uVar2);
  FUN_100834ef0(uVar2,local_50);
  if (*(int *)local_50[0] != -1) {
    if (*(int *)local_50[0] != 0) {
      LOCK();
      *(int *)local_50[0] = *(int *)local_50[0] + -1;
      UNLOCK();
      if (*(int *)local_50[0] != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_50[0],2,8);
  }
  return;
}

