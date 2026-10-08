
long FUN_100129b20(undefined8 *param_1,int *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined *local_38;
  undefined1 local_29;
  
  puVar2 = (uint *)*param_1;
  if (1 < *puVar2) {
    FUN_10012c1f0(param_1);
    puVar2 = (uint *)*param_1;
  }
  puVar1 = PTR_shared_null_1021e15e8;
  if (*(long *)(puVar2 + 4) != 0) {
    lVar3 = *(long *)(puVar2 + 4);
    lVar6 = 0;
    do {
      while (lVar4 = lVar3, iVar5 = *(int *)(lVar4 + 0x18), iVar5 < *param_2) {
        lVar3 = *(long *)(lVar4 + 0x10);
        if (*(long *)(lVar4 + 0x10) == 0) {
          if (lVar6 == 0) goto LAB_100129ba1;
          iVar5 = *(int *)(lVar6 + 0x18);
          lVar4 = lVar6;
          goto LAB_100129b99;
        }
      }
      lVar3 = *(long *)(lVar4 + 8);
      lVar6 = lVar4;
    } while (*(long *)(lVar4 + 8) != 0);
LAB_100129b99:
    if (iVar5 <= *param_2) {
      return lVar4 + 0x20;
    }
  }
LAB_100129ba1:
  local_38 = PTR_shared_null_1021e15e8;
  lVar3 = FUN_10012c0a0(param_1,param_2,&local_38);
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
    iVar5 = *(int *)(puVar1 + 0xc);
    if (iVar5 != *(int *)(puVar1 + 8)) {
      lVar6 = (long)*(int *)(puVar1 + 8) * 8 + (long)iVar5 * -8;
      plVar7 = (long *)(puVar1 + (long)iVar5 * 8 + 8);
      do {
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 0x88))();
        }
        plVar7 = plVar7 + -1;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)PTR_shared_null_1021e15e8);
  }
  return lVar3 + 0x20;
}

