
long FUN_100d2bde0(undefined8 *param_1,QString *param_2)

{
  char cVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 local_48 [31];
  undefined1 local_29;
  
  puVar2 = (uint *)*param_1;
  if (1 < *puVar2) {
    FUN_100d2c570(param_1);
    puVar2 = (uint *)*param_1;
  }
  lVar3 = *(long *)(puVar2 + 4);
  lVar5 = 0;
  if (*(long *)(puVar2 + 4) != 0) {
    do {
      while (lVar4 = lVar3, cVar1 = operator<((QString *)(lVar4 + 0x18),param_2), cVar1 == '\0') {
        lVar3 = *(long *)(lVar4 + 8);
        lVar5 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_100d2be56;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    lVar4 = lVar5;
    if (lVar5 != 0) {
LAB_100d2be56:
      cVar1 = operator<(param_2,(QString *)(lVar4 + 0x18));
      if (cVar1 == '\0') {
        return lVar4 + 0x20;
      }
    }
  }
  local_48._8_4_ = (int)PTR_shared_null_1021e1288;
  local_48._0_8_ = PTR_shared_null_1021e1288;
  local_48._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  lVar3 = FUN_100d2c440(param_1,param_2,local_48);
  if (*(int *)local_48._8_8_ != -1) {
    if (*(int *)local_48._8_8_ != 0) {
      LOCK();
      *(int *)local_48._8_8_ = *(int *)local_48._8_8_ + -1;
      local_29 = *(int *)local_48._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d2bebe;
    }
    QArrayData::deallocate((QArrayData *)local_48._8_8_,2,8);
  }
LAB_100d2bebe:
  if (*(int *)local_48._0_8_ != -1) {
    if (*(int *)local_48._0_8_ != 0) {
      LOCK();
      *(int *)local_48._0_8_ = *(int *)local_48._0_8_ + -1;
      UNLOCK();
      if (*(int *)local_48._0_8_ != 0) {
        return lVar3 + 0x20;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48._0_8_,2,8);
  }
  return lVar3 + 0x20;
}

