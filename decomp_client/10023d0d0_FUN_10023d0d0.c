
undefined8 FUN_10023d0d0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  QArrayData *local_40;
  char local_31;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar4 = FUN_100152280();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100323d90(&local_30,uVar6);
  lVar5 = FUN_1001547d0(uVar4,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10023d149;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10023d149:
  if (lVar5 == 0) {
    return 0x80000016;
  }
  local_31 = '\0';
  uVar6 = FUN_1001766b0(lVar5);
  cVar1 = FUN_100615ca0(uVar6,0x25,&local_31);
  if ((local_31 != '\0') && (cVar1 == '\x01')) {
    return 0x80011000;
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100323d90(&local_40,uVar6);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_100323e20(uVar6);
  uVar2 = FUN_100354f60(&local_40,uVar2,*(undefined1 *)(param_1 + 0x35));
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10023d202;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10023d202:
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = FUN_100325f80(uVar6);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x40) < 0) {
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      iVar3 = FUN_100325aa0(uVar6);
      if (iVar3 == 0) {
        uVar6 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar6 = *(undefined8 *)(param_1 + 0x20);
        }
        uVar6 = FUN_100323e00(uVar6);
        plVar7 = (long *)FUN_100319cb0(uVar6);
        (**(code **)(*plVar7 + 0x60))(plVar7,0);
      }
      return 0x80000016;
    }
    return 0;
  }
  return 0;
}

