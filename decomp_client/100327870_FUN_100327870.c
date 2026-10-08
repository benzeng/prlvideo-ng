
void FUN_100327870(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != (int)param_2) {
    return;
  }
  DisplayGamma::setGamma(param_1 + 200,param_2,param_3,*param_4 + *(long *)(*param_4 + 0x10));
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar2 = FUN_100319390(*(long *)(param_1 + 0x18),0);
    }
  }
  FUN_10018c650(&local_38,uVar2);
  FUN_10082a850(param_1,&local_38,iVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100327910;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100327910:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

