
long FUN_10043b3b0(undefined8 *param_1,uint *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 local_40;
  undefined *local_38;
  undefined1 local_29;
  
  puVar2 = (uint *)*param_1;
  if (1 < *puVar2) {
    FUN_10043bb00(param_1);
    puVar2 = (uint *)*param_1;
  }
  puVar1 = PTR_shared_null_100ba20d0;
  if (*(long *)(puVar2 + 4) != 0) {
    lVar3 = *(long *)(puVar2 + 4);
    lVar4 = 0;
    do {
      while (lVar5 = lVar3, uVar6 = *(uint *)(lVar5 + 0x18), uVar6 < *param_2) {
        lVar3 = *(long *)(lVar5 + 0x10);
        if (*(long *)(lVar5 + 0x10) == 0) {
          if (lVar4 == 0) goto LAB_10043b42d;
          uVar6 = *(uint *)(lVar4 + 0x18);
          lVar5 = lVar4;
          goto LAB_10043b429;
        }
      }
      lVar3 = *(long *)(lVar5 + 8);
      lVar4 = lVar5;
    } while (*(long *)(lVar5 + 8) != 0);
LAB_10043b429:
    if (uVar6 <= *param_2) {
      return lVar5 + 0x20;
    }
  }
LAB_10043b42d:
  local_40 = 0;
  local_38 = PTR_shared_null_100ba20d0;
  lVar3 = FUN_10043b970(param_1,param_2,&local_40);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return lVar3 + 0x20;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,8,8);
  }
  return lVar3 + 0x20;
}

