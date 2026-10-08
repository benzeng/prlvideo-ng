
undefined8 FUN_10023e6d0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_100323e30(uVar5,1);
  uVar3 = FUN_100370280();
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100323d90(&local_30,uVar5);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_100323e20(uVar5);
  lVar4 = FUN_1003704b0(uVar3,&local_30,uVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10023e789;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10023e789:
  if (lVar4 == 0) {
    uVar3 = FUN_100370280();
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100323d90(&local_38,uVar5);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar1 = FUN_100323e20(uVar5);
    lVar4 = FUN_1003739f0(uVar3,&local_38,uVar1,3,0);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10023e81f;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_10023e81f:
    if (lVar4 == 0) goto LAB_10023e82f;
  }
  FUN_10036d220(lVar4,uVar2);
LAB_10023e82f:
  FUN_10023ae00(param_1,0);
  return 0;
}

