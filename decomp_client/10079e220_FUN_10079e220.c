
void FUN_10079e220(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if ((((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0)) ||
     (lVar1 = FUN_1007b56d0(), lVar1 == 0)) goto LAB_10079e31c;
  lVar1 = 0;
  if ((param_1[3] != 0) && (lVar1 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar1 = param_1[4];
  }
  uVar2 = FUN_1007b56d0(lVar1);
  FUN_100190650(&local_28,uVar2);
  lVar1 = param_1[5];
  lVar3 = 0;
  if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar3 = param_1[4];
  }
  FUN_1007b5520(&local_30,lVar3);
  FUN_100d3e290(lVar1,&local_28,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10079e2ec;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10079e2ec:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10079e31c;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10079e31c:
  (**(code **)(*param_1 + 0x60))(param_1);
  FUN_100861990(param_1);
  return;
}

