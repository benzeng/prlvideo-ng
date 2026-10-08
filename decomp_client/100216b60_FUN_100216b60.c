
undefined8 FUN_100216b60(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_100794960();
  CAppliance::getApplianceId();
  FUN_1007964b0(&local_30,uVar1,&local_38);
  lVar2 = FUN_10015cb20(uVar3,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100216c06;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100216c06:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100216c36;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100216c36:
  uVar3 = 0x80000009;
  if (lVar2 != 0) {
    uVar3 = FUN_10018c2b0(lVar2);
    FUN_1005ce830(uVar3);
    uVar3 = 0;
  }
  return uVar3;
}

