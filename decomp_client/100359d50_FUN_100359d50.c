
undefined1 FUN_100359d50(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    if (*(int *)(param_1 + 0x34) == 2) {
      return 0;
    }
    return 1;
  }
  uVar2 = FUN_100370280();
  FUN_100188480(&local_38,*(undefined8 *)(param_1 + 0x38));
  iVar1 = FUN_100375450(uVar2,&local_38,0);
  if (iVar1 != 3) {
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_100359e7c;
        local_29 = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
    goto LAB_100359e7c;
  }
  iVar1 = FUN_10018d460(*(undefined8 *)(param_1 + 0x38));
  if (iVar1 == 0x30000003) {
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_100359e73;
        local_2b = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
    goto LAB_100359e73;
  }
  iVar1 = FUN_10018d460(*(undefined8 *)(param_1 + 0x38));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100359e6a;
      local_2c = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100359e6a:
  if (iVar1 == 0x30000010) {
LAB_100359e73:
    *(undefined4 *)(param_1 + 0x34) = 1;
    return 1;
  }
LAB_100359e7c:
  *(undefined4 *)(param_1 + 0x34) = 2;
  return 0;
}

