
long FUN_100d2bcb0(undefined8 *param_1,QString *param_2)

{
  char cVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  QArrayData *local_40 [2];
  undefined1 local_29;
  
  puVar2 = (uint *)*param_1;
  if (1 < *puVar2) {
    FUN_100d2c2c0(param_1);
    puVar2 = (uint *)*param_1;
  }
  lVar3 = *(long *)(puVar2 + 4);
  lVar5 = 0;
  if (*(long *)(puVar2 + 4) != 0) {
    do {
      while (lVar4 = lVar3, cVar1 = operator<((QString *)(lVar4 + 0x18),param_2), cVar1 == '\0') {
        lVar3 = *(long *)(lVar4 + 8);
        lVar5 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_100d2bd26;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    lVar4 = lVar5;
    if (lVar5 != 0) {
LAB_100d2bd26:
      cVar1 = operator<(param_2,(QString *)(lVar4 + 0x18));
      if (cVar1 == '\0') {
        return lVar4 + 0x20;
      }
    }
  }
  local_40[0] = (QArrayData *)PTR_shared_null_1021e1288;
  lVar3 = FUN_100d2c1a0(param_1,param_2,local_40);
  if (*(int *)local_40[0] != -1) {
    if (*(int *)local_40[0] != 0) {
      LOCK();
      *(int *)local_40[0] = *(int *)local_40[0] + -1;
      UNLOCK();
      if (*(int *)local_40[0] != 0) {
        return lVar3 + 0x20;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40[0],2,8);
  }
  return lVar3 + 0x20;
}

