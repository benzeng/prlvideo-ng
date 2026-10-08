
long FUN_100178d40(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *local_40;
  undefined2 local_38;
  undefined1 local_29;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_100179ad0(param_1);
    puVar3 = (uint *)*param_1;
  }
  puVar2 = PTR_shared_null_1021e15e8;
  if (*(long *)(puVar3 + 4) != 0) {
    lVar4 = *(long *)(puVar3 + 4);
    lVar5 = 0;
    do {
      while (lVar6 = lVar4, bVar1 = *(byte *)(lVar6 + 0x18), *param_2 <= bVar1) {
        lVar4 = *(long *)(lVar6 + 8);
        lVar5 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_100178dba;
      }
      lVar4 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    if (lVar5 != 0) {
      bVar1 = *(byte *)(lVar5 + 0x18);
      lVar6 = lVar5;
LAB_100178dba:
      if (bVar1 <= *param_2) {
        return lVar6 + 0x20;
      }
    }
  }
  local_40 = PTR_shared_null_1021e15e8;
  local_38 = 0;
  lVar4 = FUN_100179a10(param_1,param_2,&local_40);
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_29 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return lVar4 + 0x20;
      }
    }
    QListData::dispose((Data *)PTR_shared_null_1021e15e8);
  }
  return lVar4 + 0x20;
}

