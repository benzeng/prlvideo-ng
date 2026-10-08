
void FUN_100344260(long *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_1[2] == 0) {
    return;
  }
  if (*(int *)(param_1[2] + 4) == 0) {
    return;
  }
  if (param_1[3] == 0) {
    return;
  }
  uVar3 = FUN_100370280();
  lVar4 = 0;
  if ((param_1[2] != 0) && (lVar4 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar4 = param_1[3];
  }
  FUN_100323d90(&local_38,lVar4);
  lVar4 = 0;
  if ((param_1[2] != 0) && (lVar4 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar4 = param_1[3];
  }
  uVar2 = FUN_100323e20(lVar4);
  lVar4 = FUN_1003704b0(uVar3,&local_38,uVar2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034431c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10034431c:
  if ((lVar4 != 0) && (cVar1 = (**(code **)(*param_1 + 0x60))(param_1,2), cVar1 != '\0')) {
    lVar5 = 0;
    if ((param_1[2] != 0) && (lVar5 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar5 = param_1[3];
    }
    uVar3 = FUN_100323e00(lVar5);
    uVar3 = FUN_100319cb0(uVar3);
    lVar5 = 0;
    if ((param_1[2] != 0) && (lVar5 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar5 = param_1[3];
    }
    uVar2 = FUN_100323e20(lVar5);
    cVar1 = FUN_1003380e0(uVar3,uVar2,param_2);
    if (cVar1 != '\0') {
      local_40 = CONCAT44((param_2[3] + 1) - param_2[1],(param_2[2] + 1) - *param_2);
      FUN_10036e810(lVar4,&local_40);
      FUN_10036d2b0(lVar4);
    }
  }
  return;
}

